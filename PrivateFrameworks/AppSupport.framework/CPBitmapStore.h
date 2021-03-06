/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/AppSupport.framework/AppSupport
 */

@class NSString, NSCache, NSObject<OS_dispatch_queue>;

@interface CPBitmapStore : NSObject  {
    NSString *_path;
    NSString *_imagePath;
    NSCache *_cache;
    int _version;
    NSString *_versionPath;
    NSObject<OS_dispatch_queue> *_serialQueueRemoveImagesBackground;
    NSObject<OS_dispatch_queue> *_serialQueueRemoveImagesDefault;
    bool_lockOnRead;
}

@property(readonly) int version;
@property bool lockOnRead;
@property unsigned long long cacheItemLimit;


- (id)imagePath;
- (void)removeImagesInGroups:(id)arg1;
- (void)commitTxn;
- (struct CGImage { }*)copyImageForKey:(id)arg1;
- (unsigned long long)cacheItemLimit;
- (id)_versionPath;
- (struct CGImage { }*)_copyAndStoreImageForKey:(id)arg1 inGroup:(id)arg2 withSize:(struct CGSize { double x1; double x2; })arg3 format:(int)arg4 scale:(double)arg5 fillMem:(id)arg6 alternateCompletion:(id)arg7;
- (bool)saveImageWithKey:(id)arg1 inGroup:(id)arg2 andInfo:(struct _img { id x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned char x6; }*)arg3;
- (unsigned int)memContentOffset;
- (bool)lockOnRead;
- (void*)openAndMmap:(id)arg1 withInfo:(struct _img { id x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned char x6; }*)arg2;
- (bool)findImageWithKey:(id)arg1 inGroup:(id)arg2 andInfo:(struct _img { id x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned char x6; }*)arg3;
- (id)cacheNumberForKey:(id)arg1;
- (id)imageNameForKey:(id)arg1 inGroup:(id)arg2;
- (unsigned long long)imageCount;
- (void)storeGrayscaleImageDataForKey:(id)arg1 inGroup:(id)arg2 withSize:(struct CGSize { double x1; double x2; })arg3 opaque:(bool)arg4 scale:(double)arg5 data:(id)arg6;
- (struct CGImage { }*)copyAndStoreImageForKey:(id)arg1 inGroup:(id)arg2 withSize:(struct CGSize { double x1; double x2; })arg3 opaque:(bool)arg4 scale:(double)arg5 draw:(id)arg6;
- (void)storeImageDataForKey:(id)arg1 inGroup:(id)arg2 withSize:(struct CGSize { double x1; double x2; })arg3 opaque:(bool)arg4 scale:(double)arg5 data:(id)arg6;
- (void)setCacheItemLimit:(unsigned long long)arg1;
- (void)setLockOnRead:(bool)arg1;
- (void)removeImagesInGroups:(id)arg1 completion:(id)arg2;
- (void)storeImageForKey:(id)arg1 inGroup:(id)arg2 opaque:(bool)arg3 image:(struct CGImage { }*)arg4;
- (struct CGImage { }*)copyImageForKey:(id)arg1 inGroup:(id)arg2;
- (void)purge;
- (id)initWithPath:(id)arg1 version:(int)arg2;
- (int)version;
- (int)setVersion:(int)arg1;
- (void)commitTransaction;
- (void)dealloc;
- (id)allGroups;

@end
