/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface BWZoomDelayBuffer : NSObject  {
    struct { float x1; int x2; boolx3; } *_zoomRequestBuffer;
    unsigned int _zoomRequestBufferIndex;
    unsigned int _maxZoomDelay;
    unsigned int _currentZoomDelay;
    int _currentZoomDirection;
    int _operatingMode;
}

@property(readonly) unsigned int zoomDelay;
@property int operatingMode;


- (int)operatingMode;
- (void)setOperatingMode:(int)arg1;
- (struct { float x1; int x2; boolx3; })zoomRequestForISPAppliedZoomFactor:(float)arg1;
- (void)addZoomRequest:(struct { float x1; int x2; boolx3; })arg1;
- (void)updateZoomDelay:(unsigned int)arg1;
- (id)initWithMaxZoomDelay:(unsigned int)arg1;
- (unsigned int)zoomDelay;
- (void)dealloc;

@end
