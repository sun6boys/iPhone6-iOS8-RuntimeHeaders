/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIPanGestureVelocitySample : NSObject  {
    struct CGPoint { 
        double x; 
        double y; 
    } start;
    struct CGPoint { 
        double x; 
        double y; 
    } end;
    double dt;
}

@property struct CGPoint { double x1; double x2; } start;
@property struct CGPoint { double x1; double x2; } end;
@property double dt;


- (void)setDt:(double)arg1;
- (double)dt;
- (void)setEnd:(struct CGPoint { double x1; double x2; })arg1;
- (void)setStart:(struct CGPoint { double x1; double x2; })arg1;
- (struct CGPoint { double x1; double x2; })end;
- (struct CGPoint { double x1; double x2; })start;

@end
