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
    │   ├── BitCrushEffect.cpp  (Fails (IXAudioBatchAllocator))
    │   ├── Common_Xbox.cpp  (Fails (IXAudioBatchAllocator))
    │   ├── CompressionEffect.cpp  (Fails (IXAudioBatchAllocator))
    │   ├── DelayEffect.cpp  (Fails (IXAudioBatchAllocator))
    │   ├── DistortionEffect.cpp  (Fails (IXAudioBatchAllocator))
    │   ├── EQEffect.cpp  (Fails (IXAudioBatchAllocator))
    │   ├── FlangerEffect.cpp  (Fails (IXAudioBatchAllocator))
    │   ├── WahEffect.cpp  (Fails (IXAudioBatchAllocator))
    │   └── mkfilter/
    │       ├── complex.cpp
    │       └── filterdesign.cpp
    ├── flow/
    │   ├── DrivenPropertyEntry.cpp
    │   ├── DrivenPropertyMathOps.cpp
    │   ├── Flow.cpp
    │   ├── FlowAnimate.cpp
    │   ├── FlowCommand.cpp
    │   ├── FlowDistance.cpp
    │   ├── FlowEventListener.cpp
    │   ├── FlowIf.cpp
    │   ├── FlowLabel.cpp
    │   ├── FlowManager.cpp
    │   ├── FlowMultiSetProperty.cpp
    │   ├── FlowNode.cpp
    │   ├── FlowOnStop.cpp
    │   ├── FlowOutPort.cpp
    │   ├── FlowPickOne.cpp
    │   ├── FlowPtr.cpp
    │   ├── FlowQueueable.cpp
    │   ├── FlowRun.cpp
    │   ├── FlowSequence.cpp
    │   ├── FlowSetProperty.cpp
    │   ├── FlowSlider.cpp
    │   ├── FlowSound.cpp
    │   ├── FlowSwitch.cpp
    │   ├── FlowSwitchCase.cpp
    │   ├── FlowTimer.cpp
    │   ├── FlowTrigger.cpp
    │   ├── FlowValueCase.cpp
    │   ├── FlowWhile.cpp
    │   ├── PropertyEventListener.cpp
    │   └── PropertyEventProvider.cpp
    ├── gesture/
    │   ├── ArcDetector.cpp  (Fails (in xdk libs))
    │   ├── ArchiveSkeleton.cpp  (Fails (in xdk libs))
    │   ├── BaseSkeleton.cpp
    │   ├── CameraInput.cpp
    │   ├── CameraTilt.cpp (Fails)
    │   ├── DepthBuffer3D.cpp
    │   ├── DirectionGestureFilter.cpp  (Fails (in xdk libs))
    │   ├── DrawUtl.cpp
    │   ├── FitnessFilter.cpp
    │   ├── FreestyleMotionFilter.cpp  (Fails (in xdk libs))
    │   ├── Gesture.cpp  (Fails (in xdk libs))
    │   ├── GestureMgr.cpp
    │   ├── HandHeightGestureFilter.cpp  (Fails (in xdk libs))
    │   ├── HandInvokeGestureFilter.cpp  (Fails (in xdk libs))
    │   ├── HandRaisedGestureFilter.cpp  (Fails (in xdk libs))
    │   ├── HandsUpGestureFilter.cpp  (Fails (in xdk libs))
    │   ├── HighFiveGestureFilter.cpp  (Fails (in xdk libs))
    │   ├── IdentityInfo.cpp
    │   ├── JointUtl.cpp  (Fails (in xdk libs))
    │   ├── LiveCameraInput.cpp (Fails)
    │   ├── NavigationSkeletonDir.cpp  (Fails (in xdk libs))
    │   ├── Skeleton.cpp  (Fails (in xdk libs))
    │   ├── SkeletonClip.cpp
    │   ├── SkeletonDir.cpp  (Fails (in xdk libs))
    │   ├── SkeletonExtentTracker.cpp
    │   ├── SkeletonHistory.cpp  (Fails (in xdk libs))
    │   ├── SkeletonQualityFilter.cpp  (Fails (in xdk libs))
    │   ├── SkeletonRecoverer.cpp
    │   ├── SkeletonUpdate.cpp
    │   ├── SkeletonViz.cpp
    │   ├── SpeechMgr.cpp (Fails ('E_SPEECH_UNINITIALIZED'))
    │   ├── StandingStillGestureFilter.cpp  (Fails (in xdk libs))
    │   ├── StreamRecorder.cpp
    │   ├── StreamRenderer.cpp
    │   ├── StubCameraInput.cpp
    │   └── WaveToTurnOnLight.cpp
    ├── hamobj/
    ├── jpeg/
    ├── math/
    │   ├── Color.cpp
    │   ├── Decibels.cpp
    │   ├── DoubleExoponentialSmoother.cpp
    │   ├── Easing.cpp
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
    │   ├── Achievements.cpp
    │   ├── Achievements_Xbox.cpp
    │   ├── ButtonHolder.cpp
    │   ├── ConnectionStatusPanel.cpp
    │   ├── CreditsPanel.cpp  (Fails (in xdk libs))
    │   ├── DataArraySongInfo.cpp
    │   ├── DeJitterPanel.cpp
    │   ├── FixedSizeSaveable.cpp
    │   ├── FixedSizeSaveableStream.cpp
    │   ├── HAQManager.cpp
    │   ├── HeldButtonPanel.cpp
    │   ├── Jukebox.cpp
    │   ├── MemcardAction.cpp
    │   ├── MemcardMgr.cpp
    │   ├── MemcardMgr_Xbox.cpp
    │   ├── Meta.cpp
    │   ├── MetaMusicManager.cpp
    │   ├── MetaMusicScene.cpp
    │   ├── MoviePanel.cpp
    │   ├── PreloadPanel.cpp
    │   ├── Profile.cpp
    │   ├── SongMetadata.cpp
    │   ├── SongMgr.cpp
    │   ├── SongPreview.cpp
    │   ├── Sorting.cpp
    │   ├── StoreEnumeration.cpp  (Fails (in xdk libs))
    │   ├── StoreOffer.cpp
    │   ├── StorePanel.cpp  (Fails)
    │   ├── StorePreviewMgr.cpp
    │   ├── StorePurchaser.cpp  (Fails)
    │   └── StreamPlayer.cpp
    ├── midi/
    │   ├── DataEventList.cpp
    │   ├── DisplayEvents.cpp
    │   ├── MidiParser.cpp
    │   ├── MidiParserMgr.cpp
    │   ├── MidiReader.cpp
    │   ├── MidiReceiver.cpp
    │   └── MidiVarLen.cpp
    ├── movie/
    │   ├── Movie.cpp
    │   ├── MovieImpl.cpp
    │   ├── MovieSys.cpp
    │   ├── Splash.cpp
    │   └── TexMovie.cpp
    ├── moviebink/
    ├── net/
    ├── obj/
    │   ├── DataArray.cpp  (Fails (in xdk libs))
    │   ├── DataFile.cpp  (Fails (in xdk libs))
    │   ├── DataFlex.c  (Fails)
    │   ├── DataFunc.cpp
    │   ├── DataNode.cpp
    │   ├── DataUtl.cpp  (Fails (in xdk libs))
    │   ├── Dir.cpp
    │   ├── DirLoader.cpp
    │   ├── DirUnloader.cpp
    │   ├── MessageTimer.cpp
    │   ├── Msg.cpp
    │   ├── Object.cpp
    │   ├── PropSync.cpp  (Fails)
    │   ├── Task.cpp
    │   ├── TextFile.cpp
    │   ├── TypeProps.cpp
    │   └── Utl.cpp
    ├── oggvorbis/
    ├── os/
    │   ├── AppChild.cpp
    │   ├── Archive.cpp
    │   ├── ArkFile.cpp
    │   ├── AsyncFile.cpp
    │   ├── AsyncFileHolmes.cpp
    │   ├── AsyncFile_Win.cpp
    │   ├── AsyncTask.cpp
    │   ├── BlockMgr.cpp
    │   ├── CDReader.cpp
    │   ├── ContentMgr.cpp
    │   ├── ContentMgr_Xbox.cpp
    │   ├── CritSec.cpp
    │   ├── DateTime.cpp
    │   ├── Debug.cpp  (Fails (xbdm include))
    │   ├── File.cpp (Fails)
    │   ├── FileCache.cpp
    │   ├── File_Win.cpp
    │   ├── HDCache.cpp
    │   ├── HolmesClient.cpp
    │   ├── HolmesClient_NetSocket.cpp
    │   ├── HolmesKeyboard.cpp
    │   ├── HolmesUtl.cpp  (Fails (xbdm include))
    │   ├── Joypad.cpp
    │   ├── JoypadClient.cpp
    │   ├── JoypadMsgs.cpp
    │   ├── Joypad_Xbox.cpp
    │   ├── Joypad_Xinput.cpp
    │   ├── Keyboard.cpp
    │   ├── KeyboardJoypadAdapter.cpp
    │   ├── Keyboard_Xbox.cpp
    │   ├── MapFile_Xbox.cpp (Fails)
    │   ├── Memcard.cpp
    │   ├── Memcard_Xbox.cpp
    │   ├── Memory_Xbox.cpp
    │   ├── NetStream.cpp
    │   ├── NetworkSocket.cpp
    │   ├── NetworkSocket_Win.cpp  (Fails (xbdm include))
    │   ├── OnlineID.cpp
    │   ├── PlatformMgr.cpp
    │   ├── PlatformMgr_Xbox.cpp (Fails (afaik Smartglass))
    │   ├── SynchronizationEvent.cpp
    │   ├── System.cpp
    │   ├── System_Xbox.cpp  (Fails (xbdm include))
    │   ├── ThreadCall_Win.cpp  (Fails (in xdk libs))
    │   ├── Timer.cpp
    │   ├── UsbMidiGuitar.cpp
    │   ├── UsbMidiGuitarMsgs.cpp
    │   ├── UsbMidiKeyboard.cpp
    │   ├── UsbMidiKeyboardMsgs.cpp
    │   ├── User.cpp
    │   ├── UserMgr.cpp
    │   ├── VirtualKeyboard.cpp
    │   └── VirtualKeyboard_Xbox.cpp
    ├── rnddx9/
    │   ├── Cam.cpp 
    │   ├── CubeTex.cpp
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
    │   ├── ShaderMgr.cpp 
    │   ├── Tex.cpp
    │   ├── TexMgr.cpp
    │   └── Utl.cpp
    ├── rndobj/
    ├── stlport/
    ├── synth/
    ├── synth360/
    ├── ui/
    │   ├── CheatProvider.cpp
    │   ├── InlineHelp.cpp
    │   ├── LabelNumberTicker.cpp
    │   ├── LabelShrinkWrapper.cpp
    │   ├── LocalePanel.cpp
    │   ├── PanelDir.cpp
    │   ├── ResourceDirPtr.cpp
    │   ├── Screenshot.cpp
    │   ├── ScrollSelect.cpp
    │   ├── UI.cpp
    │   ├── UIButton.cpp
    │   ├── UIColor.cpp
    │   ├── UIComponent.cpp
    │   ├── UIFontImporter.cpp
    │   ├── UIGuide.cpp
    │   ├── UILabel.cpp
    │   ├── UILabelDir.cpp
    │   ├── UIList.cpp
    │   ├── UIListArrow.cpp
    │   ├── UIListCustom.cpp
    │   ├── UIListDir.cpp
    │   ├── UIListHighlight.cpp
    │   ├── UIListLabel.cpp
    │   ├── UIListMesh.cpp
    │   ├── UIListProvider.cpp
    │   ├── UIListSlot.cpp
    │   ├── UIListState.cpp
    │   ├── UIListSubList.cpp
    │   ├── UIListWidget.cpp
    │   ├── UIPanel.cpp
    │   ├── UIPicture.cpp
    │   ├── UIScreen.cpp
    │   ├── UISlider.cpp
    │   ├── UITransitionHandler.cpp
    │   ├── UITrigger.cpp
    │   └── Utl.cpp
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
    │   ├── Song.cpp 
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
    │   ├── BeatClock.cpp
    │   ├── CameraManager.cpp
    │   ├── CameraShot.cpp
    │   ├── ColorPalette.cpp
    │   ├── Crowd.cpp
    │   ├── Crowd3DCharHandle.cpp
    │   ├── DefaultPhysicsManager.cpp
    │   ├── Dir.cpp
    │   ├── FreeCamera.cpp
    │   ├── Instance.cpp
    │   ├── LightHue.cpp
    │   ├── LightPreset.cpp  (Fails)
    │   ├── LightPresetManager.cpp
    │   ├── PhysicsManager.cpp
    │   ├── PhysicsVolume.cpp
    │   ├── PostProcer.cpp
    │   ├── Reflection.cpp
    │   ├── Spotlight.cpp
    │   ├── SpotlightDrawer.cpp
    │   ├── SpotlightDrawer_NG.cpp
    │   ├── SpotlightEnder.cpp
    │   ├── ThreeDSoundManager.cpp
    │   └── World.cpp
    └── zlib/

```