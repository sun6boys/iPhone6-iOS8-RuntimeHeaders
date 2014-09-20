/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class AVAssetWriterInput, AVAssetWriterInputMetadataAdaptorInternal;

@interface AVAssetWriterInputMetadataAdaptor : NSObject  {
    AVAssetWriterInputMetadataAdaptorInternal *_internal;
}

@property(readonly) AVAssetWriterInput * assetWriterInput;

+ (void)initialize;
+ (id)assetWriterInputMetadataAdaptorWithAssetWriterInput:(id)arg1;

- (void)finalize;
- (id)description;
- (id)init;
- (void)dealloc;
- (bool)appendTimedMetadataGroup:(id)arg1;
- (id)assetWriterInput;
- (id)initWithAssetWriterInput:(id)arg1;

@end