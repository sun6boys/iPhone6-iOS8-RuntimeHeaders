/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/Metal.framework/Metal
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class <MTLDevice>, NSObject<OS_dispatch_semaphore>, MTLIOAccelDevice<MTLDevice>;

@interface MTLIOAccelCommandBuffer : _MTLCommandBuffer  {
    MTLIOAccelDevice<MTLDevice> *_device;
    struct MTLIOAccelCommandBufferStorage { id x1; struct MTLIOAccelCommandBufferStoragePool {} *x2; struct { struct MTLIOAccelCommandBufferStorage {} *x_3_1_1; struct MTLIOAccelCommandBufferStorage {} **x_3_1_2; } x3; id x4; char *x5; char *x6; char *x7; id x8; char *x9; char *x10; struct IOAccelSegmentListHeader {} *x11; struct IOAccelSegmentResourceListHeader {} *x12; struct IOAccelSegmentResourceDescriptorGroup {} *x13; struct IOAccelResourceList { unsigned short x_14_1_1[256]; struct IOAccelSegmentResourceDescriptorGroup {} *x_14_1_2; unsigned long long x_14_1_3; unsigned long long x_14_1_4; unsigned int x_14_1_5; unsigned int x_14_1_6; unsigned int x_14_1_7; unsigned int x_14_1_8; unsigned int x_14_1_9; unsigned int x_14_1_10; unsigned int x_14_1_11; int (*x_14_1_12)(); void *x_14_1_13; } x14; id x15; id x16; unsigned long long x17; unsigned long long x18; id *x19; struct MTLIOAccelCommandBufferResourceInfo {} *x20; } *_storage;
    unsigned long long *_submitToHardwareTimeStampPointer;
    void *_scheduledCallbackBlockPtr;
    void *_completedCallbackBlockPtr;
    NSObject<OS_dispatch_semaphore> *_commitAndResetSem;
}

@property(readonly) struct MTLIOAccelCommandBufferResourceInfo { unsigned long long x1; unsigned int *x2; unsigned int *x3; unsigned int *x4; id x5; }* commandBufferResourceInfo;
@property(readonly) struct IOAccelResourceList { unsigned short x1[256]; struct IOAccelSegmentResourceDescriptorGroup {} *x2; unsigned long long x3; unsigned long long x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; unsigned int x10; unsigned int x11; int (*x12)(); void *x13; }* ioAccelResourceList;
@property(readonly) <MTLDevice> * device;
@property(readonly) struct MTLIOAccelCommandBufferStorage { id x1; struct MTLIOAccelCommandBufferStoragePool {} *x2; struct { struct MTLIOAccelCommandBufferStorage {} *x_3_1_1; struct MTLIOAccelCommandBufferStorage {} **x_3_1_2; } x3; id x4; char *x5; char *x6; char *x7; id x8; char *x9; char *x10; struct IOAccelSegmentListHeader {} *x11; struct IOAccelSegmentResourceListHeader {} *x12; struct IOAccelSegmentResourceDescriptorGroup {} *x13; struct IOAccelResourceList { unsigned short x_14_1_1[256]; struct IOAccelSegmentResourceDescriptorGroup {} *x_14_1_2; unsigned long long x_14_1_3; unsigned long long x_14_1_4; unsigned int x_14_1_5; unsigned int x_14_1_6; unsigned int x_14_1_7; unsigned int x_14_1_8; unsigned int x_14_1_9; unsigned int x_14_1_10; unsigned int x_14_1_11; int (*x_14_1_12)(); void *x_14_1_13; } x14; id x15; id x16; unsigned long long x17; unsigned long long x18; id *x19; struct MTLIOAccelCommandBufferResourceInfo {} *x20; }* commandBufferStorage;


- (id)device;
- (void)commit;
- (void)dealloc;
- (struct MTLIOAccelCommandBufferStorage { id x1; struct MTLIOAccelCommandBufferStoragePool {} *x2; struct { struct MTLIOAccelCommandBufferStorage {} *x_3_1_1; struct MTLIOAccelCommandBufferStorage {} **x_3_1_2; } x3; id x4; char *x5; char *x6; char *x7; id x8; char *x9; char *x10; struct IOAccelSegmentListHeader {} *x11; struct IOAccelSegmentResourceListHeader {} *x12; struct IOAccelSegmentResourceDescriptorGroup {} *x13; struct IOAccelResourceList { unsigned short x_14_1_1[256]; struct IOAccelSegmentResourceDescriptorGroup {} *x_14_1_2; unsigned long long x_14_1_3; unsigned long long x_14_1_4; unsigned int x_14_1_5; unsigned int x_14_1_6; unsigned int x_14_1_7; unsigned int x_14_1_8; unsigned int x_14_1_9; unsigned int x_14_1_10; unsigned int x_14_1_11; int (*x_14_1_12)(); void *x_14_1_13; } x14; id x15; id x16; unsigned long long x17; unsigned long long x18; id *x19; struct MTLIOAccelCommandBufferResourceInfo {} *x20; }*)commandBufferStorage;
- (id)akPrivateResourceList;
- (id)akResourceList;
- (void)endCurrentSegment;
- (void)beginSegment:(void*)arg1;
- (void)growSegmentList;
- (void)setCurrentSegmentListPointer:(void*)arg1;
- (struct MTLIOAccelCommandBufferResourceInfo { unsigned long long x1; unsigned int *x2; unsigned int *x3; unsigned int *x4; id x5; }*)commandBufferResourceInfo;
- (void)getSegmentListPointerStart:(void**)arg1 current:(void**)arg2 end:(void**)arg3;
- (struct IOAccelSegmentListHeader { unsigned int x1; unsigned int x2; struct IOAccelSegmentResourceListHeader { unsigned int x_3_1_1; unsigned int x_3_1_2; unsigned int x_3_1_3; unsigned int x_3_1_4; struct IOAccelSegmentResourceDescriptorGroup { unsigned int x_5_2_1[6]; unsigned int x_5_2_2[6]; unsigned short x_5_2_3[6]; unsigned short x_5_2_4; unsigned short x_5_2_5; } x_3_1_5[0]; } x3[0]; }*)getSegmentListHeader;
- (struct IOAccelResourceList { unsigned short x1[256]; struct IOAccelSegmentResourceDescriptorGroup {} *x2; unsigned long long x3; unsigned long long x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; unsigned int x10; unsigned int x11; int (*x12)(); void *x13; }*)ioAccelResourceList;
- (void)allocCommandBufferResourceAtIndex:(unsigned int)arg1;
- (void)growKernelCommandBuffer:(unsigned long long)arg1;
- (void)setCurrentKernelCommandBufferPointer:(void*)arg1;
- (void)getCurrentKernelCommandBufferPointer:(void**)arg1 end:(void**)arg2;
- (void)getCurrentKernelCommandBufferStart:(void**)arg1 current:(void**)arg2 end:(void**)arg3;
- (id)initWithQueue:(id)arg1 retainedReferences:(bool)arg2;
- (void)commitAndReset;
- (void)kernelCommandCollectTimeStamp;
- (void)didComplete:(unsigned long long)arg1 error:(unsigned int)arg2;
- (id)initWithQueue:(id)arg1 retainedReferences:(bool)arg2 synchronousDebugMode:(bool)arg3;

@end
