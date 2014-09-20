/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@interface CIContext : NSObject  {
    struct CIContextInternal { struct Context {} *x1; struct _opaque_pthread_mutex_t { long long x_2_1_1; BOOL x_2_1_2[56]; } x2; boolx3; id x4; } *_priv;
}

+ (id)contextWithEAGLContext:(id)arg1 options:(id)arg2;
+ (id)contextWithEAGLContext:(id)arg1;
+ (id)context;
+ (id)contextWithOptions:(id)arg1;
+ (id)_singletonContext;
+ (int)_crashed_because_nonaddressable_memory_was_passed_to_render:(id)arg1 toBitmap:(void*)arg2 rowBytes:(long long)arg3 bounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg4 format:(int)arg5 colorSpace:(struct CGColorSpace { }*)arg6;
+ (struct Context { int (**x1)(); struct Atomic { struct { int x_1_2_1; } x_2_1_1; } x2; struct CGColorSpace {} *x3; struct CGColorSpace {} *x4; int x5; boolx6; }*)glesInternalContextWithOptions:(id)arg1;
+ (struct Context { int (**x1)(); struct Atomic { struct { int x_1_2_1; } x_2_1_1; } x2; struct CGColorSpace {} *x3; struct CGColorSpace {} *x4; int x5; boolx6; }*)glesInternalContextWithEAGLContext:(id)arg1 options:(id)arg2;
+ (id)glesContextOptions:(id)arg1;
+ (id)clContextOptions:(id)arg1;

- (void)drawImage:(id)arg1 inRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 fromRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
- (struct __IOSurface { }*)createIOSurface:(id)arg1 fromRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (struct CGImage { }*)createCGImage:(id)arg1 fromRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)unlock;
- (void)lock;
- (id)init;
- (void)dealloc;
- (id)createColorCubeDataForFilters:(id)arg1 dimension:(int)arg2;
- (struct CGSize { double x1; double x2; })outputImageMaximumSize;
- (struct CGSize { double x1; double x2; })inputImageMaximumSize;
- (unsigned long long)maximumOutputImageSize;
- (unsigned long long)maximumInputImageSize;
- (struct CGImage { }*)createCGImage:(id)arg1 fromRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 format:(int)arg3;
- (struct __IOSurface { }*)createIOSurface:(id)arg1;
- (void)render:(id)arg1 toTexture:(unsigned int)arg2 bounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 colorSpace:(struct CGColorSpace { }*)arg4;
- (void)drawImage:(id)arg1 atPoint:(struct CGPoint { double x1; double x2; })arg2 fromRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
- (void)_insertEventMarker:(const char *)arg1;
- (void)render:(id)arg1 toCVPixelBuffer:(struct __CVBuffer { }*)arg2;
- (struct CGImage { }*)createCGImage:(id)arg1 fromRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 format:(int)arg3 colorSpace:(struct CGColorSpace { }*)arg4;
- (bool)_isEAGLBackedContext;
- (void)render:(id)arg1 toIOSurface:(struct __IOSurface { }*)arg2 bounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 colorSpace:(struct CGColorSpace { }*)arg4;
- (void)render:(id)arg1 toCVPixelBuffer:(struct __CVBuffer { }*)arg2 bounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 colorSpace:(struct CGColorSpace { }*)arg4;
- (id)initWithEAGLContext:(id)arg1 options:(id)arg2;
- (id)initWithEAGLContext:(id)arg1;
- (void)render:(id)arg1 toBitmap:(void*)arg2 rowBytes:(long long)arg3 bounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg4 format:(int)arg5 colorSpace:(struct CGColorSpace { }*)arg6;
- (struct CGColorSpace { }*)_colorspace;
- (void)_gpuContextCheck;
- (id)_initWithInternalRepresentation:(void*)arg1;

@end