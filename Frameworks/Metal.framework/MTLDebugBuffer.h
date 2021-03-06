/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/Metal.framework/Metal
 */

@interface MTLDebugBuffer : MTLToolsBuffer  {
    bool_purgeableStateHasBeenSet;
    unsigned long long _options;
    const void *_pointer;
    unsigned long long _purgeableState;
}

@property unsigned long long options;
@property(readonly) const void* pointer;
@property(readonly) unsigned long long purgeableState;
@property(readonly) bool purgeableStateHasBeenSet;


- (unsigned long long)options;
- (void)setOptions:(unsigned long long)arg1;
- (id)description;
- (bool)purgeableStateHasBeenSet;
- (unsigned long long)purgeableState;
- (id)initWithBuffer:(id)arg1 device:(id)arg2 bytes:(const void*)arg3 options:(unsigned long long)arg4;
- (id)initWithBuffer:(id)arg1 device:(id)arg2 options:(unsigned long long)arg3;
- (unsigned long long)setPurgeableState:(unsigned long long)arg1;
- (id)newTextureWithDescriptor:(id)arg1 offset:(unsigned long long)arg2 bytesPerRow:(unsigned long long)arg3;
- (const void*)pointer;

@end
