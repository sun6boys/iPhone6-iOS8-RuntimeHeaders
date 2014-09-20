/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIColor, NSString, NSMutableIndexSet, NSMutableArray;

@interface UIPickerTableView : UITableView <UITableViewDelegate> {
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    } _selectionBarRect;
    long long _selectionBarRow;
    NSMutableIndexSet *_checkedRows;
    double _lastClickedOffset;
    long long _lastSelectedRow;
    bool_usesModernStyle;
    UIColor *_textColor;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    } _visibleRect;
    NSMutableArray *_referencingCells;
    struct { 
        unsigned int allowsMultipleSelection : 1; 
        unsigned int scrollingDirection : 2; 
        unsigned int didSelectDisabled : 1; 
        unsigned int skipRowChangeNotifications : 1; 
        unsigned int scrollingForSelection : 1; 
        unsigned int pickerViewImplementsSelectionBarChanged : 2; 
        unsigned int cancellingAnimation : 1; 
        unsigned int updatingContentInset : 1; 
    } _pickerTableFlags;
}

@property struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } selectionBarRect;
@property long long selectionBarRow;
@property long long lastSelectedRow;
@property(getter=_usesModernStyle,setter=_setUsesModernStyle:) bool _usesModernStyle;
@property(getter=_textColor,setter=_setTextColor:,retain) UIColor * _textColor;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;


- (void)setLastSelectedRow:(long long)arg1;
- (long long)lastSelectedRow;
- (double)_zCoordinateForYCoordinate:(double)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_selectionBarRectForBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)_scrollingFinished;
- (bool)didSelectDisabled:(bool)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })selectionBarRect;
- (void)_playClickIfNecessary;
- (struct CATransform3D { double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; double x16; })_transformForCellAtY:(double)arg1;
- (void)_setContentOffset:(struct CGPoint { double x1; double x2; })arg1 notify:(bool)arg2;
- (double)_zForUnitY:(double)arg1;
- (double)_unitYForViewY:(double)arg1;
- (double)_yForY:(double)arg1;
- (double)_distanceToCenterForY:(double)arg1;
- (double)_rotationForCellCenterY:(double)arg1;
- (double)_viewYForUnitY:(double)arg1;
- (double)_yRangingFromZeroTo:(double)arg1 forUnitY:(double)arg2;
- (bool)_scrollRowAtIndexPathToSelectionBar:(id)arg1 animated:(bool)arg2;
- (id)_checkedRows;
- (void)_notifyContentOffsetChange;
- (struct CGPoint { double x1; double x2; })contentOffsetForRowAtIndexPath:(id)arg1;
- (void)_setSelectionBarRow:(long long)arg1;
- (id)_anyDateLabel;
- (id)_containerView;
- (void)_rectChangedWithNewSize:(struct CGSize { double x1; double x2; })arg1 oldSize:(struct CGSize { double x1; double x2; })arg2;
- (bool)_shouldWrapCells;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_visibleBounds;
- (void)_updateContentInsets;
- (void)_scrollViewAnimationEnded:(id)arg1 finished:(bool)arg2;
- (bool)_beginTrackingWithEvent:(id)arg1;
- (void)setContentOffset:(struct CGPoint { double x1; double x2; })arg1;
- (void)_setUsesModernStyle:(bool)arg1;
- (bool)scrollViewShouldScrollToTop:(id)arg1;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(bool)arg2;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint { double x1; double x2; })arg2 targetContentOffset:(inout struct CGPoint { double x1; double x2; }*)arg3;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)_textColor;
- (bool)isRowChecked:(long long)arg1;
- (void)setBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)selectRow:(long long)arg1 animated:(bool)arg2 notify:(bool)arg3;
- (void)setSelectionBarRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)_usesModernStyle;
- (long long)selectionBarRow;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 style:(long long)arg2 visibleRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
- (void)_setTextColor:(id)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)_pickerView;
- (void)dealloc;

@end