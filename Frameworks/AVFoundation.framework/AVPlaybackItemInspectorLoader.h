/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class NSArray;

@interface AVPlaybackItemInspectorLoader : AVAssetMakeReadyForInspectionLoader  {
    struct OpaqueFigPlaybackItem { } *_playbackItem;
    NSArray *_trackIDs;
    bool_shouldCacheDuration;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    } _cachedDuration;
}

@property(getter=_playbackItem,readonly) struct OpaqueFigPlaybackItem { }* playbackItem;


- (void)cancelLoading;
- (void)finalize;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })duration;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)dealloc;
- (id)_playbackItemPropertiesForKeys:(id)arg1;
- (void)_removeFigObjectNotifications;
- (void)_addFigObjectNotifications;
- (id)_loadValuesUsingDefaultLoadingMethodWhileMutexLockedForKeys:(id)arg1;
- (bool)_inspectionRequiresAFormatReader;
- (id)_dictionaryOfSpecialGettersForKeyValueStatus;
- (struct OpaqueFigFormatReader { }*)_copyFormatReaderFromFigObjectWithFigErrorCode:(int*)arg1;
- (id)assetInspector;
- (Class)_classForTrackInspectors;
- (struct OpaqueFigPlaybackItem { }*)_playbackItem;
- (id)initWithURL:(id)arg1 playbackItem:(struct OpaqueFigPlaybackItem { }*)arg2 trackIDs:(id)arg3 dynamicBehavior:(bool)arg4;

@end
