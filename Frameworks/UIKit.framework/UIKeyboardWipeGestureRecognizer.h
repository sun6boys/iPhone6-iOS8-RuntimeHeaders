/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UITouch, NSMutableArray;

@interface UIKeyboardWipeGestureRecognizer : UIGestureRecognizer  {
    NSMutableArray *_endPoints;
    UITouch *candidateEndpoint;
}

@property(retain) UITouch * candidateEndpoint;


- (bool)segmentsLookLikeAWipe:(id)arg1;
- (id)candidateEndpoint;
- (void)setCandidateEndpoint:(id)arg1;
- (void)reset;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;
- (void)dealloc;

@end
