/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class AVPlayerItemOutputInternal;

@interface AVPlayerItemOutput : NSObject  {
    AVPlayerItemOutputInternal *_outputInternal;
}

@property bool suppressesPlayerRendering;


- (void)setSuppressesPlayerRendering:(bool)arg1;
- (void)finalize;
- (id)init;
- (void)dealloc;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })itemTimeForMachAbsoluteTime:(long long)arg1;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })itemTimeForHostTime:(double)arg1;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })_itemTimeForHostTimeAsCMTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)_detachFromPlayerItem;
- (void)_setTimebase:(struct OpaqueCMTimebase { }*)arg1;
- (bool)_attachToPlayerItem:(id)arg1;
- (bool)suppressesPlayerRendering;
- (struct OpaqueCMTimebase { }*)_copyTimebase;
- (id)_weakReference;

@end