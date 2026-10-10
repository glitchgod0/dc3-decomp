#include "hamobj/DanceRemixer.h"
#include "MoveMgr.h"
#include "hamobj/HamDirector.h"
#include "hamobj/HamGameData.h"
#include "hamobj/HamMaster.h"
#include "hamobj/HamMove.h"
#include "hamobj/MoveDetector.h"
#include "hamobj/MoveDir.h"
#include "hamobj/MoveGraph.h"
#include "obj/Data.h"
#include "obj/Msg.h"
#include "obj/Object.h"
#include "obj/Task.h"
#include "os/Debug.h"
#include "utl/TimeConversion.h"

void BuildSetOfPrevAdjacentMoveParents(
    std::set<const MoveParent *> &aFromSet, const std::set<const MoveParent *> &aToSet
) {
    FOREACH (it, aToSet) {
        const MoveParent *parent = *it;
        for (int i = 0; i < (int)parent->mPrev.size(); i++) {
            const MoveParent *cur = parent->mPrev[i];
            if (!cur->HasRestMoveVariant() && !cur->HasFinalMoveVariant()) {
                aFromSet.insert(cur);
            }
        }
    }
}

Symbol OnMoveVariantFromHamMove(const DataArray *array) {
    MILO_ASSERT(array->Size() == 3, 0x21C);
    DanceRemixer *remixer = array->Obj<DanceRemixer>(0);
    HamMove *move = array->Obj<HamMove>(2);
    MILO_ASSERT(move, 0x21F);
    const MoveVariant *mv = remixer->MoveVariantFromHamMove(move);
    MILO_ASSERT(mv, 0x221);
    return mv ? mv->GetName() : "";
}

DanceRemixer::DanceRemixer() {}
DanceRemixer::~DanceRemixer() { HandleType(Message("deinit")); }

BEGIN_HANDLERS(DanceRemixer)
    HANDLE_ACTION(reset, Reset())
    HANDLE_ACTION(post_move_finished, PostMoveFinished())
    HANDLE_ACTION(set_jump, SetJump(_msg->Int(2), _msg->Int(3)))
    HANDLE_ACTION(clear_jump, ClearJump())
    HANDLE_EXPR(jump_from_beat, mJumpFromIdx * 4)
    HANDLE_EXPR(jump_to_beat, mJumpToIdx * 4)
    HANDLE_EXPR(jump_from_measure, mJumpFromIdx + 1)
    HANDLE_EXPR(jump_to_measure, mJumpToIdx + 1)
    HANDLE_EXPR(jumped_beat, JumpedBeat(_msg->Float(2)))
    HANDLE_EXPR(jumped_measure, JumpedMoveIdx(_msg->Int(2) - 1) + 1)
    HANDLE_EXPR(jumped_measure_add, JumpedMeasureAdd(_msg->Int(2), _msg->Int(3)))
    HANDLE_EXPR(
        jumped_measure_steps_between,
        JumpedMeasureStepsBetween(_msg->Int(2), _msg->Int(3), _msg->Int(4))
    )
    HANDLE_EXPR(scored_measure, ScoredDanceMeasure(_msg->Int(2), _msg->Int(3)))
    HANDLE_ACTION(set_unscored_measure, SetUnscoredMeasure(_msg->Int(2), _msg->Int(3)))
    HANDLE_ACTION(
        set_unscored_measure_range,
        SetUnscoredMeasureRange(_msg->Int(2), _msg->Int(3), _msg->Int(4))
    )
    HANDLE_ACTION(clear_unscored_measure, ClearUnscoredMeasure(_msg->Int(2), _msg->Int(3)))
    HANDLE_ACTION(
        clear_unscored_measure_range,
        ClearUnscoredMeasureRange(_msg->Int(2), _msg->Int(3), _msg->Int(4))
    )
    HANDLE_ACTION(clear_unscored_measures, mUnscoredMeasures[_msg->Int(2)].clear())
    HANDLE_EXPR(move_variant_from_ham_move, OnMoveVariantFromHamMove(_msg))
    HANDLE_EXPR(measures_total, mSongMeasures)
    HANDLE_SUPERCLASS(Hmx::Object)
END_HANDLERS

void DanceRemixer::SetUnscoredMeasure(int x, int y) { mUnscoredMeasures[x].insert(y); }
void DanceRemixer::ClearUnscoredMeasure(int x, int y) { mUnscoredMeasures[x].erase(y); }

BEGIN_PROPSYNCS(DanceRemixer)
    SYNC_SUPERCLASS(Hmx::Object)
END_PROPSYNCS

BEGIN_SAVES(DanceRemixer)
    SAVE_SUPERCLASS(Hmx::Object)
END_SAVES

BEGIN_COPYS(DanceRemixer)
    COPY_SUPERCLASS(Hmx::Object)
    CREATE_COPY(DanceRemixer)
    BEGIN_COPYING_MEMBERS
        COPY_MEMBER(mSongMeasures)
        for (int i = 0; i < 2; i++) {
            COPY_MEMBER(mUnscoredMeasures[i])
        }
        COPY_MEMBER(mVariantsNeededInMemory)
        COPY_MEMBER(mReloadVariantsNeededInMemory)
        COPY_MEMBER(mJumpFromIdx)
        COPY_MEMBER(mJumpToIdx)
        COPY_MEMBER(mJumpMap)
    END_COPYING_MEMBERS
END_COPYS

BEGIN_LOADS(DanceRemixer)
    Hmx::Object::Load(bs);
END_LOADS

void DanceRemixer::Init(int aNumMeasures) {
    if (TheMoveMgr->mWholeMoveGraph.mNodes.size() == 0) {
        MILO_FAIL("Failed to load move graph for: %s\n", TheGameData->GetSong());
    }
    mSongMeasures = aNumMeasures;
    for (int i = 0; i < 2; i++) {
        TheMoveMgr->mRoutineParents[i].resize(mSongMeasures);
        TheMoveMgr->mRoutinePreferredVariants[i].resize(mSongMeasures);
        TheMoveMgr->mRoutine[i].resize(mSongMeasures);
    }
    ClearJump();
    HandleType(Message("post_init"));
}

void DanceRemixer::Reset() {
    mVariantsNeededInMemory.clear();
    mReloadVariantsNeededInMemory = false;
    ClearJump();
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < mSongMeasures; j++) {
            TheMoveMgr->mRoutineParents[i][j] = nullptr;
            TheMoveMgr->mRoutinePreferredVariants[i][j] = nullptr;
            TheMoveMgr->mRoutine[i][j] = std::make_pair(nullptr, nullptr);
        }
        mUnscoredMeasures[i].clear();
    }
    TheMoveMgr->mHasRoutine = true;
    HandleType(Message("post_reset"));
}

DataNode DanceRemixer::OnMovePassed(DataArray *a) {
    int player = a->Int(2);
    HamMove *move = a->Obj<HamMove>(3);
    Symbol rating = a->ForceSym(4);
    MovePassed(player, move, rating);
    return 0;
}

void DanceRemixer::PostMoveFinished() {
    int moveIdx = (int)TheTaskMgr.Beat() / 4 + 1;
    UpdateHamDirector();
    MoveDir *moveDir = TheHamDirector->GetMoveDir();
    MoveAsyncDetector *detector = moveDir->GetAsyncDetector();
    for (int i = 0; i < 2; i++) {
        int idx = JumpedMoveIdx(moveIdx - 1) + 1;
        if (ScoredDanceMeasure(i, idx)) {
            detector->DisableAllDetectors();
            break;
        }
    }
    for (int i = 0; i < 2; i++) {
        if (ScoredDanceMeasure(i, moveIdx)) {
            const MoveVariant *mv = TheMoveMgr->mRoutine[i][moveIdx].first;
            if (mv) {
                const char *hamMoveName = mv->GetHamMoveName().Str();
                HamMove *move = moveDir->Find<HamMove>(hamMoveName, false);
                if (move) {
                    detector->EnableDetector(move);
                    moveDir->SetCurrentMove(i, move);
                } else {
                    MILO_NOTIFY(
                        "Ham move %s missing, possibly not loaded yet. From move variant %s",
                        hamMoveName,
                        mv->GetName()
                    );
                }
            }
        }
    }
}

bool DanceRemixer::ScoredDanceMeasure(int player, int measure) const {
    return mUnscoredMeasures[player].find(measure) == mUnscoredMeasures[player].end();
}

void DanceRemixer::UpdateHamDirector() {
    for (int i = 0; i < 2; i++) {
        auto &routine = TheMoveMgr->mRoutine[i];
        for (int j = 0; j < routine.size(); j++) {
            if (j <= mJumpFromIdx || j >= mJumpToIdx) {
                std::pair<const MoveVariant *, const MoveVariant *> mvs = routine[j];
                if (mvs.first) {
                    mReloadVariantsNeededInMemory |=
                        mVariantsNeededInMemory.insert(mvs.first).second;
                }
                if (mvs.second && mvs.second != mvs.first) {
                    mReloadVariantsNeededInMemory |=
                        mVariantsNeededInMemory.insert(mvs.second).second;
                }
            }
        }
    }
    if (mReloadVariantsNeededInMemory && TheHamDirector->IsMoveMergerFinished()) {
        TheHamDirector->LoadRoutineBuilderData(mVariantsNeededInMemory, true);
        mReloadVariantsNeededInMemory = false;
    }
}

void DanceRemixer::SelectMove(int, int) {}

int DanceRemixer::JumpedMoveIdx(int idx) const { return Round(JumpedBeat(idx * 4)) / 4; }

const MoveParent *DanceRemixer::GetMoveParent(int aPlayer, int aIdx) {
    return TheMoveMgr->mRoutineParents[aPlayer][aIdx];
}

void DanceRemixer::SetUnscoredMeasureRange(
    int player, int first_measure, int last_measure
) {
    for (int i = first_measure; i <= last_measure; i++) {
        mUnscoredMeasures[player].insert(i);
    }
}

void DanceRemixer::ClearUnscoredMeasureRange(
    int player, int first_measure, int last_measure
) {
    for (int i = first_measure; i < last_measure; i++) {
        mUnscoredMeasures[player].erase(i);
    }
}

void DanceRemixer::AddRoutineMove(
    int aPlayer,
    int aMoveIdx,
    const MoveParent *aMove,
    const MoveVariant *aPreferredVariant
) {
    TheMoveMgr->mRoutineParents[aPlayer][aMoveIdx] = aMove;
    TheMoveMgr->mRoutinePreferredVariants[aPlayer][aMoveIdx] = aPreferredVariant;
    TheMoveMgr->FillInRoutineAt(aPlayer, aMoveIdx);
    TheMoveMgr->InsertMoveInSong(
        TheMoveMgr->mRoutine[aPlayer][aMoveIdx].first, aMoveIdx, aPlayer
    );

    while (mJumpMap.find(aMoveIdx) != mJumpMap.end()) {
        int val = mJumpMap.find(aMoveIdx)->second;
        if (val < mSongMeasures) {
            aMoveIdx = val;
            TheMoveMgr->mRoutineParents[aPlayer][val] = aMove;
            TheMoveMgr->mRoutinePreferredVariants[aPlayer][val] = aPreferredVariant;
            TheMoveMgr->FillInRoutineAt(aPlayer, val);
            TheMoveMgr->InsertMoveInSong(
                TheMoveMgr->mRoutine[aPlayer][val].first, val, aPlayer
            );
        } else {
            MILO_NOTIFY(
                "Jump target to index %d is out of bounds of the song (0 to %d)!",
                val,
                mSongMeasures - 1
            );
            return;
        }
    }
}

void DanceRemixer::ClearJump() {
    mJumpFromIdx = -1;
    mJumpToIdx = -1;
    mJumpMap.clear();
    if (TheMaster && TheMaster->GetAudio()) {
        TheMaster->GetAudio()->ClearLoop();
    }
}

float DanceRemixer::JumpedBeat(float b) const {
    int iB = b;
    int i3 = mJumpFromIdx * 4;
    int i2 = mJumpToIdx * 4;
    if (iB < i3) {
        return b;
    } else if (iB < i2) {
        i3 = i2 + mJumpFromIdx * -4;
        if (iB < i2 - (i3 >> 1)) {
            return (float)i3 + b;
        }
        return b - (float)i3;
    } else if (i2 >= i3) {
        return b;
    } else {
        return (b - (float)i3) + (float)i2;
    }
}

int DanceRemixer::JumpedMeasureAdd(int measure, int n) const {
    int l3 = n > 0 ? 1 : -1;
    n = abs(n);
    for (int i = 0; i < n; i++) {
        measure = JumpedMoveIdx((l3 - 1) + measure) + 1;
    }
    return measure;
}

int DanceRemixer::JumpedMeasureStepsBetween(int i1, int i2, int direction) const {
    MILO_ASSERT(direction == 1 || direction == -1, 0x1BD);
    int ret = 0;
    for (int i = i1; i != i2; i = JumpedMeasureAdd(i, direction)) {
        ret += direction;
        if (abs(ret) > mSongMeasures * 2) {
            MILO_FAIL(
                "JumpedMeasureDifference: can't get from measure %d to measure %d\n",
                i1,
                i2
            );
        }
    }
    return ret;
}

int DanceRemixer::JumpedMoveIdxAdd(int moveIdx, int n) const {
    return JumpedMeasureAdd(moveIdx + 1, n) - 1;
}

const MoveVariant *DanceRemixer::MoveVariantFromHamMove(const HamMove *aHamMove) const {
    MILO_ASSERT(aHamMove, 0x1F7);
    Symbol moveName = aHamMove->Name();
    for (int i = 0; i < 2; i++) {
        auto &routine = TheMoveMgr->mRoutine[i];
        for (int j = 0; j < routine.size(); j++) {
            if (JumpedMoveIdx(j) == j) {
                const MoveVariant *first = routine[j].first;
                if (first && first->m_HamMoveName == moveName) {
                    return first;
                }
                const MoveVariant *second = routine[j].second;
                if (second && second->m_HamMoveName == moveName) {
                    return second;
                }
            }
        }
    }
    FOREACH (it, TheMoveMgr->mWholeMoveGraph.mVariantsByName) {
        if (it->second->m_HamMoveName == moveName) {
            return it->second;
        }
    }
    return nullptr;
}

void DanceRemixer::SetJump(int aFromMeasure, int aToMeasure) {
    ClearJump();
    mJumpFromIdx = aFromMeasure - 1;
    mJumpToIdx = aToMeasure - 1;
    if (mJumpFromIdx == mJumpToIdx) {
        TheMaster->GetAudio()->SetLoop(mJumpToIdx * 4, mJumpFromIdx * 4);
    } else {
        float fromBeat = BeatToMs(mJumpFromIdx * 4);
        float toBeat = BeatToMs(mJumpToIdx * 4);
        DataArray *cfg = SystemConfig("synth", "crossfade_beats");
        float f13 = BeatToMs((mJumpFromIdx * 4) + cfg->Float(1));
        TheMaster->GetAudio()->SetCrossfadeJump(fromBeat, toBeat, f13 - fromBeat);
        mJumpMap[mJumpToIdx] = mJumpFromIdx;
        if (mJumpFromIdx > 0 && mJumpToIdx > 0) {
            mJumpMap[mJumpFromIdx - 1] = mJumpToIdx - 1;
        }
        int beat = ((int)TheTaskMgr.Beat() / 4) + 4;
        int moveIdx = mJumpFromIdx - 1;
        int i7 = beat - moveIdx + 1;
        if (i7 > 0) {
            for (int i = 0; i < i7; i++) {
                MILO_ASSERT(ValidMoveIdx(moveIdx), 0x16D);
                for (int j = 0; j < 2; j++) {
                    SelectMove(j, moveIdx);
                }
                moveIdx = JumpedMeasureAdd(moveIdx + 1, 1) - 1;
            }
        }
    }
}
