# Status
```text
src/
├── App.cpp
├── ChecksumData_xbox.cpp
├── keygen_xbox.cpp
├── Main.cpp
├── binkxenon/
├── lazer/
│   ├── game/
│   ├── meta_ham/
│   └── net_ham/
└── system/
    ├── beatmatch/
    ├── char/
    │   ├── Char.cpp
    │   ├── Character.cpp
    │   ├── CharacterTest.cpp
    │   ├── CharBlendBone.cpp
    │   ├── CharBone.cpp
    │   ├── CharBoneDir.cpp
    │   ├── CharBoneOffset.cpp
    │   ├── CharBones.cpp
    │   ├── CharBonesBlender.cpp
    │   ├── CharBonesMeshes.cpp
    │   ├── CharBonesSamples.cpp
    │   ├── CharBoneTwist.cpp
    │   ├── CharClip.cpp
    │   ├── CharClipDisplay.cpp
    │   ├── CharClipDriver.cpp
    │   ├── CharClipGroup.cpp
    │   ├── CharClipSet.cpp
    │   ├── CharCollide.cpp
    │   ├── CharCuff.cpp
    │   ├── CharDriver.cpp
    │   ├── CharDriverMidi.cpp
    │   ├── CharEyeDartRuleset.cpp
    │   ├── CharEyes.cpp
    │   ├── CharFaceServo.cpp
    │   ├── CharForeTwist.cpp
    │   ├── CharGuitarString.cpp
    │   ├── CharHair.cpp
    │   ├── CharIKFingers.cpp
    │   ├── CharIKFoot.cpp
    │   ├── CharIKHand.cpp
    │   ├── CharIKHead.cpp
    │   ├── CharIKMidi.cpp
    │   ├── CharIKRod.cpp
    │   ├── CharIKScale.cpp
    │   ├── CharIKSliderMidi.cpp
    │   ├── CharInterest.cpp
    │   ├── CharLipSync.cpp
    │   ├── CharLipSyncDriver.cpp
    │   ├── CharLookAt.cpp
    │   ├── CharMeshHide.cpp
    │   ├── CharMirror.cpp
    │   ├── CharNeckTwist.cpp
    │   ├── CharPollGroup.cpp
    │   ├── CharPosConstraint.cpp
    │   ├── CharServoBone.cpp
    │   ├── CharSignalApplier.cpp
    │   ├── CharSleeve.cpp
    │   ├── CharTaskMgr.cpp
    │   ├── CharTransDraw.cpp
    │   ├── CharUpperTwist.cpp
    │   ├── CharUtl.cpp
    │   ├── CharWeightable.cpp
    │   ├── CharWeightSetter.cpp
    │   ├── ClipCollide.cpp
    │   ├── ClipDistMap.cpp
    │   ├── ClipGraphGen.cpp
    │   ├── FileMerger.cpp
    │   ├── FileMergerOrganizer.cpp
    │   └── Waypoint.cpp
    ├── dsp/
    ├── flow/
    ├── gesture/
    ├── hamobj/
    ├── jpeg/
    ├── math/
    │   ├── Color.cpp
    │   ├── Decibels.cpp
    │   ├── DoubleExoponentialSmoother.cpp
    │   ├── Easing.cpp  (Fails)
    │   ├── FileChecksum.cpp
    │   ├── Geo.cpp
    │   ├── Interp.cpp
    │   ├── Key.cpp
    │   ├── mtx.cpp
    │   ├── Primes.cpp
    │   ├── Rand.cpp
    │   ├── Rand2.cpp
    │   ├── Rot.cpp
    │   ├── SHA1.cpp
    │   ├── Sort.cpp
    │   ├── StreamChecksum.cpp
    │   ├── Trig.cpp
    │   └── vec.cpp
    ├── meta/
    ├── midi/
    │   ├── DataEventList.cpp    
    │   ├── DisplayEvents.cpp    
    │   ├── MidiParser.cpp    
    │   ├── MidiParserMgr.cpp    
    │   ├── MidiReader.cpp    
    │   ├── MidiReceiver.cpp    
    │   └── MidiVarLen.cpp    
    ├── movie/
    ├── moviebink/
    ├── net/
    ├── obj/
    ├── oggvorbis/
    ├── os/
    ├── rnddx9/
    │   ├── Cam.cpp    
    │   ├── CubeText.cpp    
    │   ├── Env.cpp    
    │   ├── Lit.cpp    
    │   ├── Mat.cpp    
    │   ├── Mesh.cpp    
    │   ├── Movie.cpp    
    │   ├── MultiMesh.cpp    
    │   ├── Part.cpp    
    │   ├── RenderState.cpp    
    │   ├── Rnd.cpp    
    │   ├── Rnd_Xbox.cpp    
    │   ├── Shader.cpp    
    │   ├── ShaderMgr.cpp    
    │   ├── Tex.cpp    
    │   ├── TexMgr.cpp    
    │   └── Utl.cpp    
    ├── rndobj/
    ├── stlport/
    ├── synth/
    ├── synth360/
    ├── ui/
    ├── utl/
    │   ├── AllocInfo.cpp  (Fails)
    │   ├── BeatMap.cpp
    │   ├── BinkIntegration.cpp  (Fails)
    │   ├── BinStream.cpp
    │   ├── BufStream.cpp
    │   ├── Cache.cpp
    │   ├── Cache_Xbox.cpp
    │   ├── CacheMgr.cpp
    │   ├── CacheMgr_Xbox.cpp
    │   ├── Cheats.cpp
    │   ├── ChunkIDs.cpp
    │   ├── Chunks.cpp
    │   ├── ChunkStream.cpp
    │   ├── Compress.cpp
    │   ├── Crc.cpp
    │   ├── DataPointMgr.cpp
    │   ├── DebugGraph.cpp
    │   ├── DebugMeter.cpp
    │   ├── DeJitter.cpp
    │   ├── EncryptXTEA.cpp
    │   ├── FakeSongMgr.cpp
    │   ├── FilePath.cpp
    │   ├── FileStream.cpp
    │   ├── GlitchFinder.cpp
    │   ├── HxGuid.cpp
    │   ├── JobMgr.cpp
    │   ├── JsonEncode.cpp
    │   ├── KnownIssues.cpp
    │   ├── Licenses.cpp
    │   ├── Loader.cpp
    │   ├── Locale.cpp  (Fails)
    │   ├── LocaleOrdinal.cpp
    │   ├── Magnu.cpp  (Fails)
    │   ├── MakeString.cpp
    │   ├── MBT.cpp
    │   ├── MemHeap.cpp
    │   ├── MemMgr.cpp  (Fails)
    │   ├── MemPoint.cpp
    │   ├── MemStats.cpp
    │   ├── MemStream.cpp
    │   ├── MemTrack.cpp
    │   ├── MemTracker.cpp
    │   ├── MultiTempoTempoMap.cpp
    │   ├── NetCacheLoader.cpp
    │   ├── NetCacheMgr.cpp
    │   ├── NetLoader.cpp
    │   ├── NetLoader_Xbox.cpp
    │   ├── Option.cpp
    │   ├── OSCMessenger.cpp
    │   ├── Pool.cpp
    │   ├── PoolAlloc.cpp
    │   ├── Profiler.cpp
    │   ├── Song.cpp  (Fails (Easing.h))
    │   ├── SongInfoAudioType.cpp
    │   ├── SongInfoCopy.cpp
    │   ├── Spew.cpp
    │   ├── Str.cpp  (Fails)
    │   ├── StringTable.cpp
    │   ├── Symbol.cpp
    │   ├── TempoMap.cpp
    │   ├── TextFileStream.cpp
    │   ├── TextStream.cpp
    │   ├── TimeConversion.cpp
    │   ├── trie.cpp
    │   ├── UrlEncode.cpp
    │   ├── UTF8.cpp
    │   ├── VarTimer.cpp
    │   └── WaveFile.cpp
    ├── world/
    └── zlib/

```