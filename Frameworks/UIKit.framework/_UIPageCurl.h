/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class _UIPageCurlState, NSMutableSet, UIView, NSMutableArray, NSNumber;

@interface _UIPageCurl : NSObject  {
    long long _spineLocation;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    } _contentRect;
    UIView *_contentView;
    _UIPageCurlState *_manualPageCurlState;
    NSMutableArray *_pendingStateQueue;
    NSMutableArray *_activeStateQueue;
    NSMutableSet *_completedStates;
    double _delayBetweenSuccessiveAnimations;
    double _pageDiagonalAngle;
    double _pageDiagonalLength;
    double _manualPageCurlMaxDAngle;
}

@property(getter=_isManualPageCurlInProgressAndUncommitted,readonly) bool _manualPageCurlInProgressAndUncommitted;
@property(readonly) NSNumber * _wrappedManualPageCurlDirection;
@property(setter=_setManualPageCurlMaxDAngle:) double _manualPageCurlMaxDAngle;
@property(readonly) long long _spineLocation;


- (void)_setManualPageCurlMaxDAngle:(double)arg1;
- (double)_manualPageCurlMaxDAngle;
- (void)_completeManualCurlAtLocation:(struct CGPoint { double x1; double x2; })arg1 withSuggestedVelocity:(double)arg2;
- (void)_updateManualCurlToLocation:(struct CGPoint { double x1; double x2; })arg1;
- (void)_enqueueCurlOfType:(long long)arg1 fromLocation:(struct CGPoint { double x1; double x2; })arg2 inDirection:(long long)arg3 withView:(id)arg4 revealingView:(id)arg5 completion:(id)arg6 finally:(id)arg7;
- (bool)_isPreviousCurlCompatibleWithCurlOfType:(long long)arg1 inDirection:(long long)arg2;
- (void)_setContentRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)_wrappedManualPageCurlDirection;
- (bool)_areAnimationsInFlightOrPending;
- (bool)_isManualPageCurlInProgressAndUncommitted;
- (id)initWithSpineLocation:(long long)arg1 andContentRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 inContentView:(id)arg3;
- (void)_cleanupState:(id)arg1;
- (void)_endManualCurlAtLocation:(struct CGPoint { double x1; double x2; })arg1 withSuggestedVelocity:(double)arg2 shouldComplete:(bool)arg3;
- (double)_durationForManualCurlEndAnimationWithSuggestedVelocity:(double)arg1 shouldComplete:(bool)arg2;
- (void)_forceCleanupState:(id)arg1 finished:(bool)arg2 completed:(bool)arg3;
- (void)_updateCurlFromState:(id)arg1 withTime:(double)arg2 radius:(double)arg3 angle:(double)arg4 addingAnimations:(id)arg5;
- (id)_newAnimationForState:(id)arg1 withKeyPath:(id)arg2 duration:(double)arg3 fromValue:(id)arg4;
- (void)_updatedInputsFromState:(id)arg1 forLocation:(struct CGPoint { double x1; double x2; })arg2 time:(double*)arg3 radius:(double*)arg4 angle:(double*)arg5;
- (void)_cancelTransitionWithState:(id)arg1 invalidatingPageCurl:(bool)arg2;
- (void)_abortManualCurlAtLocation:(struct CGPoint { double x1; double x2; })arg1 withSuggestedVelocity:(double)arg2;
- (void)_beginCurlWithState:(id)arg1 previousState:(id)arg2;
- (struct CGPoint { double x1; double x2; })_referenceLocationForInitialLocation:(struct CGPoint { double x1; double x2; })arg1 direction:(long long)arg2;
- (long long)_validatedPageCurlTypeForPageCurlType:(long long)arg1 inDirection:(long long)arg2;
- (id)_animationKeyPaths;
- (double)_inputTimeForProgress:(double)arg1 distanceToTravel:(double)arg2 radius:(double*)arg3 minRadius:(double)arg4 angle:(double)arg5 dAngle:(double)arg6 touchLocation:(struct CGPoint { double x1; double x2; })arg7 state:(id)arg8;
- (void)_fromValue:(double*)arg1 toValue:(double*)arg2 fromState:(id)arg3 forAnimationWithKeyPath:(id)arg4;
- (double)_baseAngleOffsetForState:(id)arg1;
- (double)_distanceToTravelWithCurrentSpineLocation;
- (id)_newCurlFilter;
- (bool)_populateFromValue:(double*)arg1 toValue:(double*)arg2 fromState:(id)arg3 forAnimationWithKeyPath:(id)arg4;
- (void)_cancelAllActiveTransitionsAndAbandonCallbacks:(bool)arg1;
- (void)_pageCurlAnimationDidStop:(id)arg1 withState:(id)arg2;
- (long long)_spineLocation;
- (void)_ensureCurlFilterOnLayer:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_pageViewFrame:(bool)arg1;
- (void)dealloc;

@end