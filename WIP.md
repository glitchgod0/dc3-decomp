Everything here is from single file compiles

##### notes for merging with upstream
- git fetch upstream
- git merge upstream/main
- git rm config/373307D9/objects.json
- git rm config/373307D9/symbols.txt
- git checkout --ours -- src/xdk/
- git add src/xdk/
- git pull

## root/
- keygen_xbox.cpp
- ChecksumData_xbox.cpp

## system/

### char/
- Char.cpp (X)
- Character.cpp(X)
- CharacterTest.cpp(X)
- CharBlendBone.cpp
- CharBone.cpp
- CharBoneDir.cpp
- CharBoneOffset.cpp
- CharBones.cpp
- CharBonesBlender.cpp
- CharBonesMeshes.cpp (X)
- CharBonesSamples.cpp
- CharBoneTwist.cpp
- CharClip.cpp
- CharClipDisplay.cpp
- CharClipDriver.cpp
- CharClipGroup.cpp (X)
- CharClipSet.cpp
- CharCollide.cpp (X)
- CharCuff.cpp
- CharDriver.cpp
- CharDriverMidi.cpp
- CharEyeDartRuleset.cpp
- CharEyes.cpp (X)
- CharFaceServo.cpp
- CharForeTwist.cpp
- CharGuitarString.cpp
- CharHair.cpp (X)
- CharIKFingers.cpp (X)
- CharIKFoot.cpp
- CharIKHand.cpp (X)
- CharIKHead.cpp (X)
- CharIKMidi.cpp (X)
- CharIKRod.cpp
- CharIKScale.cpp
- CharIKSliderMidi.cpp (X)
- CharInterest.cpp
- CharLipSync.cpp (X)
- CharLipSyncDriver.cpp (X)
- CharLookAt.cpp
- CharMeshHide.cpp
- CharMirror.cpp
- CharNeckTwist.cpp
- CharPollGroup.cpp
- CharPosConstraint.cpp
- CharServoBone.cpp
- CharSignalApplier.cpp
- CharSleeve.cpp (X)
- CharTaskMgr.cpp (X)
- CharTransDraw.cpp
- CharUpperTwist.cpp
- CharUtl.cpp
- CharWeightable.cpp
- CharWeightSetter.cpp
- ClipCollide.cpp
- ClipDistMap.cpp
- ClipGraphGen.cpp (X)
- FileMerger.cpp (X)
- FileMergerOrganizer.cpp
- Waypoint.cpp

### dsp/
- BitCrushEffect.cpp (X)
- Common_Xbox.cpp (X)
- CompressionEffect.cpp (X)
- DelayEffect.cpp (X)
- DistortionEffect.cpp (X)
- EQEffect.cpp (X)
- FlangerEffect.cpp (X)
- WahEffect.cpp (X)

#### mkfilter/
- complex.cpp
- filterdesign.cpp

### flow/
- DrivenPropertyEntry.cpp
- DrivenPropertyMathOps.cpp
- Flow.cpp (X)
- FlowAnimate.cpp
- FlowCommand.cpp
- FlowDistance.cpp
- FlowEventListener.cpp
- FlowIf.cpp
- FlowLabel.cpp
- FlowManager.cpp (X)
- FlowMultiSetProperty.cpp (X)
- FlowNode.cpp (X)
- FlowOnStop.cpp
- FlowOutPort.cpp
- FlowPickOne.cpp (X)
- FlowPtr.cpp
- FlowQueueable.cpp
- FlowRun.cpp
- FlowSequence.cpp
- FlowSetProperty.cpp
- FlowSlider.cpp
- FlowSound.cpp
- FlowSwitch.cpp
- FlowSwitchCase.cpp (X)
- FlowTimer.cpp
- FlowTrigger.cpp
- FlowValueCase.cpp
- FlowWhile.cpp
- PropertyEventListener.cpp
- PropertyEventProvider.cpp


### gesture/

### hamobj/

### jpeg

### math/
- Color.cpp
- Decibels.cpp
- DoubleExponentialSmoother.cpp
- Easing.cpp
- FileChecksum.cpp
- Geo.cpp (X)
- Interp.cpp
- Key.cpp (X)
- mtx.cpp
- Primes.cpp
- Rand.cpp
- Rand2.cpp
- Rot.cpp
- SHA1.cpp
- Sort.cpp
- StreamChecksum.cpp
- Trig.cpp
- vec.cpp

### meta/
- Achievements.cpp
- Achievements_Xbox.cpp (X)
- ButtonHolder.cpp
- ConnectionStatusPanel.cpp
- CreditsPanel.cpp
- DataArraySongInfo.cpp
- DeJitterPanel.cpp
- FixedSizeSaveable.cpp
- FixedSizeSaveableStream.cpp
- HAQManager.cpp
- HeldButtonPanel.cpp
- Jukebox.cpp
- MemcardAction.cpp
- MemcardMgr.cpp
- MemcardMgr_Xbox.cpp
- Meta.cpp
- MetaMusicManager.cpp
- MetaMusicScene.cpp
- MoviePanel.cpp
- PreloadPanel.cpp
- Profile.cpp
- SongMetadata.cpp
- SongMgr.cpp
- SongPreview.cpp
- Sorting.cpp
- StoreEnumeration.cpp (X)
- StoreOffer.cpp
- StorePanel.cpp (X)
- StorePreviewMgr.cpp
- StorePurchaser.cpp
- StreamPlayer.cpp


### midi/
- DataEventList.cpp (X)
- DisplayEvents.cpp
- MidiParser.cpp
- MidiParserMgr.cpp
- MidiReader.cpp
- MidiReceiver.cpp
- MidiVarLen.cpp

### movie/
- Movie.cpp
- MovieImpl.cpp
- MovieSys.cpp
- Splash.cpp (X)
- TexMovie.cpp (X)

### moviebink/
- BinkMovieImpl.cpp (X)
- BinkMovieImpl_Xbox.cpp (X)
- BinkMovieSys.cpp
- BinkMovieSys_Xbox.cpp (X)



### net/

### obj/

### oggvorbis

### os/
- AppChild.cpp
- Archive.cpp
- ArkFile.cpp
- AsyncFile.cpp
- AsyncFile_Win.cpp
- AsyncFileHolmes.cpp
- AsyncTask.cpp
- BlockMgr.cpp
- CDReader.cpp
- ContentMgr.cpp
- ContentMgr_Xbox.cpp
- CritSec.cpp
- DateTime.cpp
- Debug.cpp
- File.cpp
- File_Win.cpp
- FileCache.cpp (X)
- HDCache.cpp
- HolmesClient.cpp
- HolmesClient_NetSocket.cpp
- HolmesKeyboard.cpp
- HolmesUtl.cpp
- Joypad.cpp
- Joypad_Xbox.cpp
- Joypad_Xinput.cpp
- JoypadClient.cpp
- JoyPadMsgs.cpp
- Keyboard.cpp
- Keyboard_Xbox.cpp
- KeyboardJoypadAdapter.cpp
- MapFile_Xbox.cpp
- Memcard.cpp
- Memcard_Xbox.cpp
- Memory_Xbox.cpp
- NetStream.cpp
- NetworkSocket.cpp
- NetworkSocket_Win.cpp (X)
- OnlineID.cpp
- PlatformMgr_Xbox.cpp (X)
- SynchronizationEvent.cpp
- System.cpp
- System_Xbox.cpp (X)
- ThreadCall_Win.cpp
- Timer.cpp
- UsbMidiGuitar.cpp
- UsbMidiGuitarMsgs.cpp
- UsbMidiKeyboard.cpp
- UsbMidiKeyboardMsgs.cpp
- User.cpp
- UserMgr.cpp
- VirtualKeyboard.cpp
- VirtualKeyboard_Xbox.cpp


### rnddx9/
- Cam.cpp
- CubeTex.cpp
- Env.cpp
- Lit.cpp
- Mat.cpp
- Mesh.cpp (X)
- Movie.cpp (X)
- MultiMesh.cpp (X)
- Part.cpp
- RenderState.cpp
- Rnd.cpp (X)
- Rnd_Xbox.cpp (X)
- ShaderMgr.cpp (X)
- Tex.cpp
- TexMgr.cpp (X)
- Utl.cpp

### rndobj/
- AmbientOcclusion.cpp (X)
- Anim.cpp
- AnimFilter.cpp (X)
- BaseMaterial.cpp (X)
- Bitmap.cpp
- BoxMap.cpp (X)
- Cam.cpp (X)
- CamAnim.cpp (X)
- ColorXfm.cpp
- Console.cpp
- CubeTex.cpp
- Dir.cpp  (X)
- DOFProc.cpp
- DOFProc_NG.cpp (X)
- Draw.cpp (X)
- Enter.cpp
- Env.cpp
- Env_NG.cpp
- EventTrigger.cpp
- Flare.cpp (X)
- Font.cpp (X)
- Font3d.cpp
- FontBase.cpp
- Fur.cpp
- Fur_NG.cpp
- Gen.cpp (X)
- Graph.cpp
- Group.cpp (X)
- HiResScreen.cpp
- Line.cpp
- Lit.cpp
- LitAnim.cpp (X)
- Lit_NG.cpp
- Mat.cpp (X)
- MatAnim.cpp (X)
- Mat_NG.cpp (X)
- Mesh.cpp (X)
- MeshAnim.cpp
- MeshDeform.cpp
- MetaMaterial.cpp
- Morph.cpp (X)
- MotionBlur.cpp
- Movie.cpp
- MultiMesh.cpp (X) !!!!
- MultiMeshProxy.cpp (X)
- Overlay.cpp
- Part.cpp (X)
- PartAnim.cpp (X)
- PartLauncher.cpp (X)
- Poll.cpp
- PollAnim.cpp
- PostProc.cpp (X)
- PostProcMgr.cpp
- PostProc_NG.cpp (X)
- PropAnim.cpp (X)
- PropKeys.cpp (X)
- Ribbon.cpp
- Rnd.cpp (X)
- Rnd_NG.cpp
- ScreenMask.cpp
- Set.cpp
- Shader.cpp
- ShaderMgr.cpp (X)
- ShaderOptions.cpp
- ShaderProgram.cpp
- ShadowMap.cpp
- Shockwave.cpp
- SIVideo.cpp
- SoftParticleBuffer.cpp
- SoftParticles.cpp
- Spline.cpp
- Tex.cpp (X)
- TexBlendController.cpp
- TexBlender.cpp (X)
- TexProc.cpp
- TexRenderer.cpp (X)
- Text.cpp (X)
- Trans.cpp (X)
- TransAnim.cpp (X)
- TransProxy.cpp
- Utl.cpp (X)
- VelocityBuffer.cpp (X)
- Watcher.cpp
- Wind.cpp
- wordwrap.cpp

### stlport/
### synth/
### synth360/
### ui/
- CheatProvider.cpp (X)
- InlineHelp.cpp
- LabelNumberTicker.cpp
- LabelShrinkWrapper.cpp
- LocalePanel.cpp
- PanelDir.cpp
- ResourceDirPtr.cpp
- Screenshot.cpp (X)
- ScrollSelect.cpp
- UI.cpp (X)
- UIButton.cpp
- UIColor.cpp
- UIComponent.cpp
- UIFontImporter.cpp
- UIGuide.cpp
- UILabel.cpp (X)
- UILabelDir.cpp
- UIList.cpp
- UIListArrow.cpp
- UIListCustom.cpp
- UIListDir.cpp
- UIListHighlight.cpp
- UIListLabel.cpp (X)
- UIListMesh.cpp (X)
- UIListProvider.cpp (X)
- UIListSlot.cpp
- UIListState.cpp
- UIListSubList.cpp
- UIListWidget.cpp (X)
- UIPanel.cpp
- UIPicture.cpp
- UIScreen.cpp (X)
- UISlider.cpp
- UITransitionHandler.cpp
- UITrigger.cpp
- Utl.cpp


### utl/
- AllocInfo.cpp (X)
- BeatMap.cpp (X)
- BinkIntegration.cpp
- BinStream.cpp
- BufStream.cpp
- Cache.cpp
- Cache_Xbox.cpp
- CacheMgr.cpp
- CacheMgr_Xbox.cpp
- Cheats.cpp (X)
- ChunkIDs.cpp
- Chunks.cpp
- ChunkStream.cpp
- Compress.cpp
- Crc.cpp
- Data.cpp
- DebugGraph.cpp
- DebugMeter.cpp
- DeJitter.cpp
- EncryptXTEA.cpp
- FakeSongMgr.cpp
- FilePath.cpp
- FileStream.cpp
- GlitchFinder.cpp
- HxGuid.cpp (X)
- JobMgr.cpp
- JsonEncode.cpp
- KnownIssues.cpp
- Licenses.cpp
- Loader.cpp
- Locale.cpp
- LocaleOrdinal.cpp
- Magnu.cpp
- MakeString.cpp
- MBT.cpp
- MeasureMap.cpp (X)
- MemHeap.cpp
- MemMgr.cpp
- MemPoint.cpp
- MemStats.cpp
- MemStream.cpp
- MemTrack.cpp
- MemTracker.cpp
- MultiTempoTempoMap.cpp (X)
- NetCacheLoader.cpp
- NetCacheMgr.cpp
- NetCacheMgr_Xbox.cpp
- NetLoader.cpp
- NetLoader_Xbox.cpp
- Option.cpp (X)
- OSCMessenger.cpp
- Pool.cpp
- PoolAlloc.cpp
- Profiler.cpp
- Song.cpp (X)
- SongInfoAudioType.cpp
- SongInfoCopy.cpp (X)
- Spew.cpp
- Str.cpp (X)
- StringTable.cpp
- SuperFormatString.cpp
- Symbol.cpp
- TempoMap.cpp
- TextFileStream.cpp
- TextStream.cpp
- TimeConversion.cpp
- trie.cpp
- UrlEncode.cpp
- UTF8.cpp
- VarTimer.cpp
- WaveFile.cpp



