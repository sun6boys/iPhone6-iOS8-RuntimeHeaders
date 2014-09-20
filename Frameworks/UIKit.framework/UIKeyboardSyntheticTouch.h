/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIWindow;

@interface UIKeyboardSyntheticTouch : NSObject  {
    double timestamp;
    long long phase;
    unsigned long long tapCount;
    UIWindow *window;
    struct CGPoint { 
        double x; 
        double y; 
    } locationInWindow;
    unsigned char _pathIndex;
    unsigned char _pathIdentity;
    float _pathMajorRadius;
}

@property double timestamp;
@property long long phase;
@property unsigned long long tapCount;
@property(retain) UIWindow * window;
@property struct CGPoint { double x1; double x2; } locationInWindow;
@property(readonly) unsigned char _pathIndex;
@property(readonly) unsigned char _pathIdentity;
@property float _pathMajorRadius;

+ (id)syntheticTouchWithPoint:(struct CGPoint { double x1; double x2; })arg1 timestamp:(double)arg2 window:(id)arg3;

- (void)set_pathMajorRadius:(float)arg1;
- (struct CGPoint { double x1; double x2; })getLocationInWindow;
- (void)setLocationInWindow:(struct CGPoint { double x1; double x2; })arg1;
- (id)initWithPoint:(struct CGPoint { double x1; double x2; })arg1 timestamp:(double)arg2 window:(id)arg3;
- (struct CGPoint { double x1; double x2; })locationInWindow;
- (unsigned char)_pathIdentity;
- (float)_pathMajorRadius;
- (unsigned long long)tapCount;
- (struct CGPoint { double x1; double x2; })previousLocationInView:(id)arg1;
- (void)_setLocationInWindow:(struct CGPoint { double x1; double x2; })arg1 resetPrevious:(bool)arg2;
- (unsigned char)_pathIndex;
- (void)setTimestamp:(double)arg1;
- (void)setPhase:(long long)arg1;
- (void)setTapCount:(unsigned long long)arg1;
- (long long)phase;
- (void)setWindow:(id)arg1;
- (struct CGPoint { double x1; double x2; })locationInView:(id)arg1;
- (double)timestamp;
- (id)window;

@end