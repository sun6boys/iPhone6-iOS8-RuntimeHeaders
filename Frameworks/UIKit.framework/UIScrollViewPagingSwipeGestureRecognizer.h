/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIDelayedAction;

@interface UIScrollViewPagingSwipeGestureRecognizer : UIGestureRecognizer  {
    UIDelayedAction *_swipeFailureDelay;
    struct CGPoint { 
        double x; 
        double y; 
    } _startLocation;
    struct CGPoint { 
        double x; 
        double y; 
    } _lastLocation;
    double _lastTime;
    int _directionalFailureCount;
}


- (void)_processNewLocation:(struct CGPoint { double x1; double x2; })arg1;
- (void)enoughTimeElapsed:(id)arg1;
- (void)clearTimer;
- (void)_resetGestureRecognizer;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)dealloc;

@end
