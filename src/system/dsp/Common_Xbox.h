#pragma once
#include <xaudio2.h>
#include "XAudioBatchAlloc_stub.h"

void DspClearBuffer(float *&, int);
void DspFree(float *&);
void DspAllocate(float *&, int, IXAudioBatchAllocator *);
