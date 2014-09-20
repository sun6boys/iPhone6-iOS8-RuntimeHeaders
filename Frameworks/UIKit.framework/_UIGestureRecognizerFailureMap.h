/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSMutableArray;

@interface _UIGestureRecognizerFailureMap : NSObject  {
    NSMutableArray *_gestureRecognizers;
    char *_failureMap;
    int _unmetFailureRequirementCount;
    int _unmetFailureDependentCount;
}

@property(readonly) bool hasUnmetFailureRequirementsOrDependents;

+ (void)buildFailureMapForGestureRecognizers:(id)arg1;
+ (void)buildFailureMapForGestureRecognizer:(id)arg1;

- (id)initWithRelatedGestures:(id)arg1;
- (void)_queueRecognizersForResetIfFinished;
- (void)_gestureRecognizerFinished:(id)arg1 withEvent:(id)arg2;
- (void)_rebuildFailureMapDefferingRelease;
- (void)rebuildFailureMap;
- (void)gestureRecognizerBecameDirty:(id)arg1;
- (bool)hasUnmetFailureRequirementsOrDependents;
- (bool)isGestureRecognizerWaitingForGestureRecognizersToFail:(id)arg1;
- (void)gestureRecognizerFinished:(id)arg1 withEvent:(id)arg2;
- (void)reloadFailureMap;
- (void)gestureRecognizerDeallocated:(id)arg1;
- (id)description;
- (void)dealloc;

@end