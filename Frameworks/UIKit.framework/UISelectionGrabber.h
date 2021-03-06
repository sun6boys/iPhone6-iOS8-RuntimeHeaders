/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UISelectionGrabberDot, UITextRangeView;

@interface UISelectionGrabber : UIView  {
    UISelectionGrabberDot *m_dotView;
    boolm_isDotted;
    boolm_activeFlattened;
    boolm_alertFlattened;
    boolm_navigationTransitionFlattened;
    boolm_animating;
    int m_orientation;
    int _applicationDeactivationReason;
}

@property bool isDotted;
@property bool activeFlattened;
@property bool alertFlattened;
@property bool navigationTransitionFlattened;
@property bool animating;
@property int orientation;
@property(readonly) UITextRangeView * hostView;

+ (id)_grabberDot;

- (bool)scroller:(id)arg1 fullyContainSelectionRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (bool)isScaling;
- (bool)clipDot:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)dotIsVisbleInDocument:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)navigationTransitionFlattened;
- (bool)activeFlattened;
- (bool)alertFlattened;
- (bool)isDotted;
- (void)setNavigationTransitionFlattened:(bool)arg1;
- (void)setActiveFlattened:(bool)arg1;
- (void)setAlertFlattened:(bool)arg1;
- (void)canExpandAfterNavigationTransition:(id)arg1;
- (void)mustFlattenForNavigationTransition:(id)arg1;
- (void)canExpandAfterBecomeActive:(id)arg1;
- (void)mustFlattenForResignActive:(id)arg1;
- (void)saveDeactivationReason:(id)arg1;
- (void)canExpandAfterAlert:(id)arg1;
- (void)mustFlattenForAlert:(id)arg1;
- (bool)isVertical;
- (bool)isPointedLeft;
- (bool)isPointedRight;
- (bool)isPointedUp;
- (bool)isPointedDown;
- (id)hostView;
- (bool)inputViewIsChanging;
- (bool)isScrolling;
- (void)setIsDotted:(bool)arg1;
- (void)updateDot;
- (bool)autoscrolled;
- (bool)animating;
- (void)setOrientation:(int)arg1;
- (void)setAnimating:(bool)arg1;
- (void)didMoveToSuperview;
- (bool)isRotating;
- (int)orientation;
- (void)removeFromSuperview;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setHidden:(bool)arg1;
- (void)drawRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)_dotView;

@end
