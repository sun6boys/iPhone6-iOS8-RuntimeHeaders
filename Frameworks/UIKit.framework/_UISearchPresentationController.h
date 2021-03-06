/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSMapTable, _UISearchPresentationAssistant, NSString, UIView, UIPresentationController<_UISearchControllerPresenting>;

@interface _UISearchPresentationController : UIPresentationController <_UISearchControllerPresenting> {
    _UISearchPresentationAssistant *_assistant;
    UIView *_placeholderView;
    NSMapTable *_excisedSearchBarConstraitMap;
    NSMapTable *_placeholderConstraitMap;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    } _finalFrameForContainerView;
    struct { 
        unsigned int searchBarWasTableHeaderView : 1; 
        unsigned int excisedSearchBarDuringPresentation : 1; 
        unsigned int searchBarWantedAutolayoutBeforeExcision : 1; 
    } _controllerFlags;
}

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;
@property(retain,readonly) UIView * searchBarContainerView;
@property(readonly) bool shouldAccountForStatusBar;
@property(readonly) double statusBarAdjustment;
@property(readonly) bool searchBarToBecomeTopAttached;
@property(readonly) double resultsControllerContentOffset;
@property(readonly) UIPresentationController<_UISearchControllerPresenting> * adaptivePresentationController;
@property(readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } finalFrameForContainerView;

+ (bool)shouldExciseSearchBar:(id)arg1 duringPresentationWithPresenter:(id)arg2;

- (void)_placeSearchBarBackIntoOriginalContext;
- (void)_updatePresentingViewControllerContentScrollViewWithOffsets:(struct CGSize { double x1; double x2; })arg1 transitionCoordinator:(id)arg2;
- (void)_updateContainerFinalFrameForNonExcisedSearchBar;
- (void)_exciseSearchBarFromCurrentContext;
- (double)_visibleRefreshControlHeightForTableView:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })finalFrameForContainerView;
- (id)adaptivePresentationController;
- (bool)shouldAccountForStatusBar;
- (double)resultsControllerContentOffset;
- (void)setContentVisible:(bool)arg1;
- (double)statusBarAdjustment;
- (bool)searchBarToBecomeTopAttached;
- (id)searchBarContainerView;
- (id)_presentedViewControllerForSizeClassPair:(struct { long long x1; long long x2; })arg1;
- (id)_presentationControllerForSizeClassPair:(struct { long long x1; long long x2; })arg1;
- (void)_transitionToPresentationController:(id)arg1 withTransitionCoordinator:(id)arg2;
- (bool)_shouldKeepCurrentFirstResponder;
- (id)initWithPresentedViewController:(id)arg1 presentingViewController:(id)arg2;
- (long long)adaptivePresentationStyle;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;
- (void)_transitionToWillBegin;
- (void)_transitionFromWillBegin;
- (void)dismissalTransitionWillBegin;
- (void)presentationTransitionWillBegin;
- (void)_transitionFromDidEnd;
- (void)_transitionToDidEnd;
- (void)dismissalTransitionDidEnd:(bool)arg1;
- (void)presentationTransitionDidEnd:(bool)arg1;
- (bool)_shouldRespectDefinesPresentationContext;
- (bool)shouldPresentInFullscreen;
- (bool)shouldRemovePresentersView;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameOfPresentedViewInContainerView;
- (void)dealloc;

@end
