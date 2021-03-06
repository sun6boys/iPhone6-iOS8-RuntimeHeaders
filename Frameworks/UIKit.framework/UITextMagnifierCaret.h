/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UITextMagnifierCaret : UITextMagnifier  {
    struct CGPoint { 
        double x; 
        double y; 
    } _offset;
    float _yOffset;
}

@property struct CGPoint { double x1; double x2; } offset;
@property float yOffset;

+ (id)sharedCaretMagnifier;

- (void)setYOffset:(float)arg1;
- (void)zoomDownAnimation;
- (struct CGPoint { double x1; double x2; })animationPoint;
- (void)zoomUpAnimation;
- (void)remove;
- (void)zoomDownAnimationDidStop:(id)arg1 finished:(id)arg2;
- (void)zoomUpAnimationDidStop:(id)arg1 finished:(id)arg2;
- (void)updateFrameAndOffset;
- (id)initWithFrame;
- (float)yOffset;
- (void)setAutoscrollDirections:(int)arg1;
- (void)setAnimationPoint:(struct CGPoint { double x1; double x2; })arg1;
- (bool)terminalPointPlacedCarefully;
- (void)setMagnificationPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)beginMagnifyingTarget:(id)arg1 text:(id)arg2 magnificationPoint:(struct CGPoint { double x1; double x2; })arg3 offset:(struct CGPoint { double x1; double x2; })arg4 animated:(bool)arg5;
- (void)stopMagnifying:(bool)arg1;
- (struct CGPoint { double x1; double x2; })offset;
- (void)setOffset:(struct CGPoint { double x1; double x2; })arg1;
- (void)dealloc;

@end
