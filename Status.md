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
    │   ├── ArcDetector.cpp
    │   ├── ArchiveSkeleton.cpp
    │   ├── BaseSkeleton.cpp
    │   ├── CameraInput.cpp
    │   ├── CameraTilt.cpp (Fails (nuidetroit))
    │   ├── DepthBuffer3D.cpp
    │   ├── DirectionGestureFilter.cpp
    │   ├── DrawUtl.cpp
    │   ├── FitnessFilter.cpp
    │   ├── FreestyleMotionFilter.cpp
    │   ├── Gesture.cpp
    │   ├── GestureMgr.cpp
    │   ├── HandHeightGestureFilter.cpp 
    │   ├── HandInvokeGestureFilter.cpp 
    │   ├── HandRaisedGestureFilter.cpp 
    │   ├── HandsUpGestureFilter.cpp 
    │   ├── HighFiveGestureFilter.cpp 
    │   ├── IdentityInfo.cpp
    │   ├── JointUtl.cpp 
    │   ├── LiveCameraInput.cpp (Fails (nuidetroit))
    │   ├── NavigationSkeletonDir.cpp 
    │   ├── Skeleton.cpp 
    │   ├── SkeletonClip.cpp
    │   ├── SkeletonDir.cpp 
    │   ├── SkeletonExtentTracker.cpp
    │   ├── SkeletonHistory.cpp 
    │   ├── SkeletonQualityFilter.cpp 
    │   ├── SkeletonRecoverer.cpp
    │   ├── SkeletonUpdate.cpp
    │   ├── SkeletonViz.cpp
    │   ├── SpeechMgr.cpp
    │   ├── StandingStillGestureFilter.cpp 
    │   ├── StreamRecorder.cpp
    │   ├── StreamRenderer.cpp
    │   ├── StubCameraInput.cpp
    │   └── WaveToTurnOnLight.cpp
    ├── hamobj/
    │   ├── BustAMoveData.cpp
    │   ├── CamShotCatVO.cpp
    │   ├── CharCameraInput.cpp
    │   ├── CharFeedback.cpp
    │   ├── ClipPlayer.cpp
    │   ├── CrazeHollaback.cpp
    │   ├── DanceRemixer.cpp
    │   ├── DancerSequence.cpp
    │   ├── DancerSkeleton.cpp
    │   ├── DetectFrame.cpp
    │   ├── Difficulty.cpp
    │   ├── ErrorNode.cpp
    │   ├── FilterQueue.cpp
    │   ├── FilterVersion.cpp
    │   ├── FreestyleMove.cpp
    │   ├── FreestyleMoveRecorder.cpp
    │   ├── Ham.cpp
    │   ├── HamAudio.cpp
    │   ├── HamBattleData.cpp
    │   ├── HamCamShot.cpp
    │   ├── HamCamTransform.cpp
    │   ├── HamCharacter.cpp
    │   ├── HamDirector.cpp
    │   ├── HamDriver.cpp
    │   ├── HamGameData.cpp
    │   ├── HamIconMan.cpp
    │   ├── HamIKEffector.cpp
    │   ├── HamIKSkeleton.cpp
    │   ├── HamLabel.cpp
    │   ├── HamList.cpp
    │   ├── HamListRibbon.cpp
    │   ├── HamMaster.cpp
    │   ├── HamMove.cpp
    │   ├── HamNavList.cpp
    │   ├── HamNavProvider.cpp
    │   ├── HamPartyJumpData.cpp
    │   ├── HamPhotoDisplay.cpp
    │   ├── HamPhraseMeter.cpp
    │   ├── HamPlayerData.cpp
    │   ├── HamProviderPrinter.cpp
    │   ├── HamRegulate.cpp
    │   ├── HamRibbon.cpp
    │   ├── HamScrollBehavior.cpp
    │   ├── HamScrollSpeedIndicator.cpp
    │   ├── HamSkeletonConverter.cpp
    │   ├── HamSong.cpp
    │   ├── HamSongData.cpp
    │   ├── HamSupereasyData.cpp
    │   ├── HamVisDir.cpp
    │   ├── HamWardrobe.cpp
    │   ├── HollaBackMinigame.cpp
    │   ├── MeterDisplay.cpp
    │   ├── MiniGameMgr.cpp
    │   ├── MiniLeaderboardDisplay.cpp
    │   ├── MocapSkeletonIterator.cpp
    │   ├── MoveAsyncDetector.cpp
    │   ├── MoveDir.cpp
    │   ├── MoveGraph.cpp
    │   ├── MoveMgr.cpp
    │   ├── MoveParent.cpp
    │   ├── MoveVariant.cpp
    │   ├── OriginalChoreoRemixer.cpp
    │   ├── PhotoSpotlightPositioner.cpp
    │   ├── Pose.cpp
    │   ├── PoseFatalities.cpp
    │   ├── PracticeOptionsProvider.cpp
    │   ├── PracticeSection.cpp
    │   ├── RhythmBattle.cpp
    │   ├── RhythmBattlePlayer.cpp
    │   ├── RhythmDetector.cpp
    │   ├── RhythmDetectorGroup.cpp
    │   ├── ScoreUtl.cpp
    │   ├── SongCollision.cpp
    │   ├── SongDifficultyDisplay.cpp
    │   ├── SongLayout.cpp
    │   ├── SongUtl.cpp
    │   ├── StarsDisplay.cpp
    │   ├── SuperEasyRemixer.cpp
    │   └── TransConstraint.cpp
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
    │   ├── CreditsPanel.cpp
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
    │   ├── StoreEnumeration.cpp
    │   ├── StoreOffer.cpp
    │   ├── StorePanel.cpp
    │   ├── StorePreviewMgr.cpp
    │   ├── StorePurchaser.cpp
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
    │   ├── BinkMovieImpl.cpp  (Fails)
    │   ├── BinkMovieSys.cpp
    │   └── BinkMovieSys_Xbox.cpp  (Fails)
    ├── net/
    │   ├── DingoAuthJob.cpp
    │   ├── DingoJob.cpp
    │   ├── DingoSvr.cpp
    │   ├── DingoSvr_Xbox.cpp
    │   ├── HttpGet.cpp
    │   ├── HttpReq.cpp
    │   ├── HttpReqCurl.cpp
    │   ├── JsonMemory.cpp
    │   ├── JsonUtils.cpp
    │   ├── SessionJobs_Xbox.cpp
    │   ├── WebSvcMgr.cpp
    │   ├── WebSvcMgrCurl.cpp
    │   ├── WebSvcReq.cpp
    │   ├── XLSPConnection.cpp
    │   ├── curl/
    │   └── json-c/
    ├── obj/
    │   ├── DataArray.cpp
    │   ├── DataFile.cpp
    │   ├── DataFlex.c
    │   ├── DataFunc.cpp
    │   ├── DataNode.cpp
    │   ├── DataUtl.cpp
    │   ├── Dir.cpp
    │   ├── DirLoader.cpp
    │   ├── DirUnloader.cpp
    │   ├── MessageTimer.cpp
    │   ├── Msg.cpp
    │   ├── Object.cpp
    │   ├── PropSync.cpp
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
    │   ├── File.cpp
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
    │   ├── MapFile_Xbox.cpp
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
    │   ├── ThreadCall_Win.cpp
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
    │   ├── AmbientOcclusion.cpp
    │   ├── Anim.cpp
    │   ├── AnimFilter.cpp
    │   ├── BaseMaterial.cpp
    │   ├── Bitmap.cpp
    │   ├── BoxMap.cpp
    │   ├── Cam.cpp
    │   ├── CamAnim.cpp
    │   ├── ColorXfm.cpp
    │   ├── Console.cpp
    │   ├── CubeTex.cpp
    │   ├── Dir.cpp
    │   ├── DOFProc.cpp
    │   ├── DOFProc_NG.cpp
    │   ├── Draw.cpp
    │   ├── Enter.cpp
    │   ├── Env.cpp
    │   ├── Env_NG.cpp
    │   ├── EventTrigger.cpp
    │   ├── Flare.cpp
    │   ├── Font.cpp
    │   ├── Font3d.cpp
    │   ├── Fur.cpp
    │   ├── Fur_NG.cpp
    │   ├── Gen.cpp
    │   ├── Graph.cpp
    │   ├── Group.cpp
    │   ├── HiResScreen.cpp
    │   ├── Line.cpp
    │   ├── Lit.cpp
    │   ├── LitAnim.cpp
    │   ├── Lit_NG.cpp
    │   ├── Mat.cpp
    │   ├── MatAnim.cpp
    │   ├── Mat_NG.cpp
    │   ├── Mesh.cpp
    │   ├── MeshAnim.cpp
    │   ├── MeshDeform.cpp
    │   ├── MetaMaterial.cpp
    │   ├── Morph.cpp
    │   ├── MotionBlur.cpp
    │   ├── Movie.cpp
    │   ├── MultiMesh.cpp
    │   ├── MultiMeshProxy.cpp
    │   ├── Overlay.cpp
    │   ├── Part.cpp
    │   ├── PartAnim.cpp
    │   ├── PartLauncher.cpp
    │   ├── Poll.cpp
    │   ├── PollAnim.cpp
    │   ├── PostProc.cpp
    │   ├── PostProcMgr.cpp
    │   ├── PostProc_NG.cpp
    │   ├── PropAnim.cpp
    │   ├── PropKeys.cpp
    │   ├── Ribbon.cpp
    │   ├── Rnd.cpp
    │   ├── Rnd_NG.cpp
    │   ├── ScreenMask.cpp
    │   ├── Set.cpp
    │   ├── Shader.cpp
    │   ├── ShaderMgr.cpp
    │   ├── ShaderOptions.cpp
    │   ├── ShaderProgram.cpp
    │   ├── ShadowMap.cpp
    │   ├── Shockwave.cpp
    │   ├── SIVideo.cpp
    │   ├── SoftParticleBuffer.cpp
    │   ├── SoftParticles.cpp
    │   ├── Spline.cpp
    │   ├── Tex.cpp
    │   ├── TexBlendController.cpp
    │   ├── TexBlender.cpp
    │   ├── TexProc.cpp
    │   ├── TexRenderer.cpp
    │   ├── Text.cpp
    │   ├── Trans.cpp
    │   ├── TransAnim.cpp
    │   ├── TransProxy.cpp
    │   ├── Utl.cpp
    │   ├── VelocityBuffer.cpp
    │   ├── Watcher.cpp
    │   ├── Wind.cpp
    │   └── wordwrap.cpp
    ├── stlport/
    ├── synth/
    │   ├── ADSR.cpp
    │   ├── AudioDucker.cpp
    │   ├── BinkReader.cpp
    │   ├── ByteGrinder.cpp
    │   ├── Emitter.cpp
    │   ├── Faders.cpp
    │   ├── FxSend.cpp
    │   ├── FxSendBitCrush.cpp
    │   ├── FxSendChorus.cpp
    │   ├── FxSendCompress.cpp
    │   ├── FxSendDelay.cpp
    │   ├── FxSendDistortion.cpp
    │   ├── FxSendEQ.cpp
    │   ├── FxSendFlanger.cpp
    │   ├── FxSendMeterEffect.cpp
    │   ├── FxSendPitchShift.cpp
    │   ├── FxSendReverb.cpp
    │   ├── FxSendSynapse.cpp
    │   ├── FxSendWah.cpp
    │   ├── MetaMusic.cpp
    │   ├── MeterEffectMonitor.cpp
    │   ├── Mic.cpp
    │   ├── MicClientMapper.cpp
    │   ├── MicNull.cpp
    │   ├── MidiChannel.cpp
    │   ├── MidiInstrument.cpp
    │   ├── MidiSynth.cpp
    │   ├── MoggClip.cpp
    │   ├── MoggClipMap.cpp
    │   ├── OggMap.cpp
    │   ├── Pollable.cpp
    │   ├── SampleData.cpp
    │   ├── SampleInst.cpp
    │   ├── SampleZone.cpp
    │   ├── Sequence.cpp
    │   ├── Sfx.cpp
    │   ├── SfxMap.cpp
    │   ├── Sound.cpp
    │   ├── StandardStream.cpp
    │   ├── Stream.cpp
    │   ├── StreamNull.cpp
    │   ├── StreamReceiver.cpp
    │   ├── StreamReceiverFile.cpp
    │   ├── Synth.cpp
    │   ├── SynthSample.cpp
    │   ├── ThreeDSound.cpp
    │   ├── Utl.cpp
    │   ├── VorbisReader.cpp
    │   ├── WavMgr.cpp
    │   ├── WavReader.cpp
    │   └── tomcrypt/
    ├── synth360/
    │   ├── EnvelopeGenerator.cpp (Fails (ATG))
    │   ├── ExternalMic.cpp (Fails (ATG))
    │   ├── FxSend.cpp
    │   ├── FxSendBitCrush.cpp (Fails (ATG))
    │   ├── FxSendChorus.cpp (Fails (ATG))
    │   ├── FxSendCompress.cpp (Fails (ATG))
    │   ├── FxSendDelay.cpp (Fails (ATG))
    │   ├── FxSendDistortion.cpp (Fails (ATG))
    │   ├── FxSendEQ.cpp (Fails (ATG))
    │   ├── FxSendFlanger.cpp (Fails (ATG))
    │   ├── FxSendMeterEffect.cpp (Fails (ATG))
    │   ├── FxSendPitchShift.cpp (Fails (ATG))
    │   ├── FxSendReverb.cpp (Fails (ATG))
    │   ├── FxSendSynapse.cpp (Fails (ATG))
    │   ├── FxSendWah.cpp (Fails (ATG))
    │   ├── GainEffect.cpp (Fails (ATG))
    │   ├── HeadsetPlaybackEffect.cpp (Fails (ATG))
    │   ├── HeadsetXferEffect.cpp (Fails (ATG))
    │   ├── MeterEffect.cpp (Fails (ATG))
    │   ├── Mic.cpp (Fails (ATG))
    │   ├── PitchShiftEffect.cpp (Fails (ATG))
    │   ├── SampleInst.cpp (Fails (ATG))
    │   ├── StreamReceiver.cpp (Fails (ATG))
    │   ├── Synth.cpp (Fails (ATG))
    │   ├── SynthSample.cpp (Fails (ATG))
    │   ├── Voice.cpp (Fails (ATG))
    │   │
    │   ├── soundtouch/
    │   │   ├── 3dnow_win.cpp
    │   │   ├── AAFilter.cpp
    │   │   ├── BPMDetect.cpp
    │   │   ├── cpu_detect_x86_gcc.cpp
    │   │   ├── cpu_detect_x86_win.cpp
    │   │   ├── FIFOSampleBuffer.cpp
    │   │   ├── FIRFilter.cpp
    │   │   ├── mmx_optimized.cpp
    │   │   ├── PeakFinder.cpp
    │   │   ├── RateTransposer.cpp
    │   │   ├── SoundTouch.cpp
    │   │   ├── sse_optimized.cpp
    │   │   └── TDStretch.cpp
    │   │
    │   └── synapse_apo/
    │       ├── Biquad.cpp
    │       ├── FFT.cpp
    │       ├── FftIpp.cpp
    │       ├── GranularSynth.cpp
    │       ├── IPP_basicmath_xbox.cpp
    │       ├── PeakDetector.cpp
    │       ├── PitchCorrectedVoice.cpp
    │       ├── PitchDetector.cpp
    │       ├── SpectralAnalysis.cpp
    │       ├── SynapseAPO.cpp
    │       └── Synapse_dsp.cpp
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
    │   ├── AllocInfo.cpp  (Fails (xbdm))
    │   ├── BeatMap.cpp
    │   ├── BinkIntegration.cpp
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
    │   ├── Locale.cpp  (Fails (xbdm))
    │   ├── LocaleOrdinal.cpp
    │   ├── Magnu.cpp
    │   ├── MakeString.cpp
    │   ├── MBT.cpp
    │   ├── MemHeap.cpp
    │   ├── MemMgr.cpp
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
    │   ├── Str.cpp
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
    │   ├── LightPreset.cpp
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