/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class AVAssetProxyInternal;

@interface AVAssetProxy : AVAsset  {
    AVAssetProxyInternal *_assetProxy;
}

+ (id)makePropertyListForMovieProxyHeader:(id)arg1 name:(id)arg2;
+ (id)assetProxyWithPropertyList:(id)arg1;

- (id)tracks;
- (void)finalize;
- (bool)isProxy;
- (void)dealloc;
- (id)initWithPropertyList:(id)arg1;
- (Class)_classForTrackInspectors;
- (struct OpaqueFigFormatReader { }*)_formatReader;
- (struct OpaqueFigPlaybackItem { }*)_playbackItem;
- (id)_assetInspector;
- (id)_assetInspectorLoader;
- (struct OpaqueFigAsset { }*)_figAsset;

@end
