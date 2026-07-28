#pragma once

struct IXAudioRefCount { /* Size=0x4 */
    virtual ULONG AddRef();
    virtual ULONG Release();
    IXAudioRefCount(const IXAudioRefCount &);
    IXAudioRefCount();
    IXAudioRefCount &operator=(const IXAudioRefCount &);
};

struct IXAudioBatchAllocator : public IXAudioRefCount { /* Size=0x4 */
    /* 0x0000: fields for IXAudioRefCount */
    virtual ULONG AddRef() = 0;
    virtual ULONG Release() = 0;
    virtual void GrowHeap(UINT32);
    virtual DWORD CreateHeap(UINT32);
    virtual UINT32 GetFreeHeapSize();
    virtual void *Alloc(UINT32);
    IXAudioBatchAllocator(const IXAudioBatchAllocator &);
    IXAudioBatchAllocator();
    IXAudioBatchAllocator &operator=(const IXAudioBatchAllocator &);
};

