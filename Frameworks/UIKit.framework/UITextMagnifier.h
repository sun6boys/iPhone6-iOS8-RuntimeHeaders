/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UITextMagnifierTimeWeightedPoint, UIResponder<UITextInput>, UIView;

@interface UITextMagnifier : UIView  {
    UIView *_target;
    struct CGPoint { 
        double x; 
        double y; 
    } _magnificationPoint;
    struct CGPoint { 
        double x; 
        double y; 
    } _animationPoint;
    struct CGPoint { 
        double x; 
        double y; 
    } _terminalPoint;
    bool_terminalPointPlacedCarefully;
    UIResponder<UITextInput> *_text;
    UITextMagnifierTimeWeightedPoint *_weightedPoint;
    UIView *_magnifierRenderer;
    UIView *_autoscrollRenderer;
    int _autoscrollDirections;
}

@property(retain) UIView * target;
@property(retain) UIResponder<UITextInput> * text;
@property struct CGPoint { double x1; double x2; } magnificationPoint;
@property struct CGPoint { double x1; double x2; } animationPoint;
@property(readonly) struct CGPoint { double x1; double x2; } terminalPoint;
@property(readonly) bool terminalPointPlacedCarefully;

+ (id)getLoupeBackgroundColor:(id)arg1;

- (void)zoomDownAnimation;
- (struct CGPoint { double x1; double x2; })animationPoint;
- (void)windowWillRotate:(id)arg1;
- (void)zoomUpAnimation;
- (void)setToMagnifierRenderer;
- (void)detectLostTouches:(id)arg1;
- (struct CGPoint { double x1; double x2; })magnificationPoint;
- (void)remove;
- (void)zoomDownAnimationDidStop:(id)arg1 finished:(id)arg2;
- (void)zoomUpAnimationDidStop:(id)arg1 finished:(id)arg2;
- (void)animateToAutoscrollRenderer;
- (void)animateToMagnifierRenderer;
- (void)setAutoscrollDirections:(int)arg1;
- (void)setAnimationPoint:(struct CGPoint { double x1; double x2; })arg1;
- (bool)terminalPointPlacedCarefully;
- (struct CGPoint { double x1; double x2; })terminalPoint;
- (void)setMagnificationPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)beginMagnifyingTarget:(id)arg1 text:(id)arg2 magnificationPoint:(struct CGPoint { double x1; double x2; })arg3 offset:(struct CGPoint { double x1; double x2; })arg4 animated:(bool)arg5;
- (void)stopMagnifying:(bool)arg1;
- (void)postAutoscrollPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)autoscrollWillNotStart;
- (id)target;
- (void)setText:(id)arg1;
- (id)text;
- (void)setTarget:(id)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setNeedsDisplay;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;

@end
