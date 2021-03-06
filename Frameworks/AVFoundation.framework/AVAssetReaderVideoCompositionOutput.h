/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class AVVideoComposition, NSArray, NSDictionary, <AVVideoCompositing>, AVAssetReaderVideoCompositionOutputInternal;

@interface AVAssetReaderVideoCompositionOutput : AVAssetReaderOutput  {
    AVAssetReaderVideoCompositionOutputInternal *_videoCompositionOutputInternal;
}

@property(readonly) NSArray * videoTracks;
@property(readonly) NSDictionary * videoSettings;
@property(copy) AVVideoComposition * videoComposition;
@property(readonly) <AVVideoCompositing> * customVideoCompositor;

+ (id)assetReaderVideoCompositionOutputWithVideoTracks:(id)arg1 videoSettings:(id)arg2;

- (void)finalize;
- (id)mediaType;
- (id)description;
- (id)init;
- (void)dealloc;
- (id)videoSettings;
- (void)_setVideoComposition:(id)arg1;
- (id)initWithVideoTracks:(id)arg1 videoSettings:(id)arg2;
- (id)videoTracks;
- (bool)_enableTrackExtractionReturningError:(id*)arg1;
- (bool)alwaysCopiesSampleData;
- (bool)_prepareForReadingReturningError:(id*)arg1;
- (id)_errorForOSStatus:(int)arg1;
- (id)customVideoCompositor;
- (void)setVideoComposition:(id)arg1;
- (void)_setVideoComposition:(id)arg1 customVideoCompositorSession:(id)arg2;
- (id)videoComposition;
- (id)_asset;

@end
