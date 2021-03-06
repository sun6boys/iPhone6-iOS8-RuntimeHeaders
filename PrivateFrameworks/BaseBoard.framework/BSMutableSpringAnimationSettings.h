/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
 */

@class CAMediaTimingFunction;

@interface BSMutableSpringAnimationSettings : BSSpringAnimationSettings  {
}

@property double delay;
@property double frameInterval;
@property(retain) CAMediaTimingFunction * timingFunction;
@property double mass;
@property double stiffness;
@property double damping;
@property double epsilon;


- (void)setEpsilon:(double)arg1;
- (void)setTimingFunction:(id)arg1;
- (void)setFrameInterval:(double)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)setDelay:(double)arg1;
- (void)setMass:(double)arg1;
- (void)setDamping:(double)arg1;
- (void)setStiffness:(double)arg1;

@end
