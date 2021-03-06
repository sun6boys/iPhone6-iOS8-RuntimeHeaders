/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class NSString, NSError, AVSampleBufferDisplayLayerInternal;

@interface AVSampleBufferDisplayLayer : CALayer <AVMediaDataRequesterConsumer, AVQueuedSampleBufferRenderingInternal, AVQueuedSampleBufferRendering> {
    AVSampleBufferDisplayLayerInternal *_sampleBufferDisplayLayerInternal;
}

@property(readonly) bool outputObscuredDueToInsufficientExternalProtection;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;
@property(readonly) long long status;
@property(readonly) NSError * error;
@property(retain,readonly) struct OpaqueCMTimebase { }* timebase;
@property(getter=isReadyForMoreMediaData,readonly) bool readyForMoreMediaData;
@property(getter=isReadyForMoreMediaData,readonly) bool readyForMoreMediaData;
@property(retain) struct OpaqueCMTimebase { }* controlTimebase;
@property(copy) NSString * videoGravity;
@property(readonly) long long status;
@property(readonly) NSError * error;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;

+ (bool)automaticallyNotifiesObserversOfError;
+ (bool)automaticallyNotifiesObserversOfStatus;

- (void)setVideoGravity:(id)arg1;
- (void)finalize;
- (id)error;
- (long long)status;
- (void)addAnimation:(id)arg1 forKey:(id)arg2;
- (void)setBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)init;
- (void)dealloc;
- (id)videoGravity;
- (struct OpaqueCMTimebase { }*)controlTimebase;
- (void)setControlTimebase:(struct OpaqueCMTimebase { }*)arg1;
- (bool)setRenderSynchronizer:(id)arg1;
- (void)copyFigSampleBufferAudioRenderer:(struct OpaqueFigSampleBufferAudioRenderer {}**)arg1;
- (void)_addAnimationsForContentLayer:(id)arg1 size:(struct CGSize { double x1; double x2; })arg2 gravity:(id)arg3;
- (bool)isReadyForMoreMediaData;
- (void)_forBoundsAnimations:(id)arg1 applyBlock:(id)arg2;
- (id)_transformToAbsoluteAnimationOfBounds:(id)arg1;
- (void)_removeFigVideoQueueListeners;
- (void)_addFigVideoQueueListeners;
- (void)_setOutputObscuredDueToInsufficientExternalProtection:(bool)arg1;
- (void)_resetStatusWithOSStatus:(int)arg1;
- (void)_updatePresentationSize:(struct CGSize { double x1; double x2; })arg1;
- (int)_createVideoQueue;
- (int)_initializeTimebases;
- (void)_setSynchronizerTimebase:(struct OpaqueCMTimebase { }*)arg1;
- (void)_setControlTimebase:(struct OpaqueCMTimebase { }*)arg1;
- (void)_setStatus:(long long)arg1 error:(id)arg2;
- (void)_updateLayerTreeGeometryWithVideoGravity:(id)arg1 bounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 presentationSize:(struct CGSize { double x1; double x2; })arg3;
- (void)_refreshAboveHighWaterLevel;
- (id)_weakReference;
- (void)flush;
- (void)flushAndRemoveImage;
- (void)enqueueSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1;
- (void)stopRequestingMediaData;
- (void)requestMediaDataWhenReadyOnQueue:(id)arg1 usingBlock:(id)arg2;
- (struct OpaqueCMTimebase { }*)timebase;
- (void)_didFinishSuspension:(id)arg1;
- (id)videoPerformanceMetrics;
- (bool)outputObscuredDueToInsufficientExternalProtection;

@end
