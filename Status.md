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
    ├── dsp/
    ├── flow/
    ├── gesture/
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
    ├── oggvorbis/
    ├── os/
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
    └── zlib/

```