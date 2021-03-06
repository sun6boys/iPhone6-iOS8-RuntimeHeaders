/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@class NSDictionary;

@interface BWAudioConverterNode : BWNode  {
    NSDictionary *_settings;
    struct OpaqueFigSampleBufferProcessor { } *_audioCompressionSBP;
}

@property(readonly) NSDictionary * gaplessPlaybackInfo;

+ (void)initialize;

- (id)gaplessPlaybackInfo;
- (void)relinquishHardware;
- (void)acquireHardware;
- (void)_handleUpdatedRecordingSettings:(id)arg1;
- (int)_setupAudioCompressionSBPForInputFormat:(id)arg1;
- (void)_teardownAudioCompressionSBP;
- (void)didSelectFormat:(id)arg1 forInput:(id)arg2;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1 forInput:(id)arg2;
- (id)nodeSubType;
- (void)didReachEndOfDataForInput:(id)arg1;
- (void)configurationWithID:(long long)arg1 updatedFormat:(id)arg2 didBecomeLiveForInput:(id)arg3;
- (id)nodeType;
- (void)setSettings:(id)arg1;
- (id)settings;
- (id)init;
- (void)dealloc;

@end
