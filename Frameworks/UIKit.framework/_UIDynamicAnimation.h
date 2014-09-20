/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@interface _UIDynamicAnimation : NSObject  {

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _completion;

    int _state;
    unsigned int _began : 1;
    unsigned int _running : 1;
    unsigned int _yield : 1;
    unsigned int _grouped : 1;
    unsigned int _usesNSTimer : 1;
}

@property(readonly) int state;

+ (id)dynamicAnimationForView:(id)arg1 withInitialValue:(double)arg2 velocity:(double)arg3 type:(int)arg4 anchorPoint:(struct CGPoint { double x1; double x2; })arg5;
+ (void)_updateAnimationsWithTimer:(id)arg1;
+ (void)_updateAnimations:(id)arg1;
+ (void)_updateAnimations:(id)arg1 timer:(id)arg2;

- (bool)_isRunning;
- (void)_setGrouped:(bool)arg1;
- (bool)_isGrouped;
- (void)_setUsesNSTimer:(bool)arg1;
- (void)_setShouldYield:(bool)arg1;
- (bool)_shouldYield;
- (void)_cancelWithAppliers:(id)arg1;
- (void)runWithCompletion:(id)arg1;
- (void)_callAppliers:(id)arg1 additionalEndAppliers:(id)arg2 done:(bool)arg3;
- (void)_appendDescriptionToString:(id)arg1 atLevel:(int)arg2;
- (void)_appendSubclassDescription:(id)arg1 atLevel:(int)arg2;
- (void)stop;
- (void)runWithCompletion:(id)arg1 forScreen:(id)arg2 runLoopMode:(id)arg3;
- (bool)_animateForInterval:(double)arg1;
- (bool)_usesNSTimer;
- (void)_stopAnimation;
- (int)state;
- (id)description;
- (id)init;
- (void)dealloc;

@end