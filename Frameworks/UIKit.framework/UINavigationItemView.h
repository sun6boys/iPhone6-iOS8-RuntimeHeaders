/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UINavigationItem, UILabel, UIView;

@interface UINavigationItemView : UIView  {
    UINavigationItem *_item;
    struct CGSize { 
        double width; 
        double height; 
    } _titleSize;
    UIView *_topCrossView;
    UIView *_bottomCrossView;
    bool_isCrossFading;
    bool_customFontSet;
    UILabel *_label;
    bool_isFadingInFromCustomAlpha;
}

@property(setter=_setFadingInFromCustomAlpha:) bool _isFadingInFromCustomAlpha;


- (void)_adjustLabelTrackingIfNecessary;
- (id)font;
- (void)_updateLabelContents;
- (void)_updateLabel;
- (double)_titleYAdjustmentCustomization;
- (id)_currentTextShadowColorForBarStyle:(long long)arg1;
- (struct CGSize { double x1; double x2; })_currentTextShadowOffsetForBarStyle:(long long)arg1;
- (id)_currentTextColorForBarStyle:(long long)arg1;
- (bool)_useSilverLookForBarStyle:(long long)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_labelFrame;
- (void)_setFont:(id)arg1;
- (id)_defaultFont;
- (void)_setFadingInFromCustomAlpha:(bool)arg1;
- (bool)_isFadingInFromCustomAlpha;
- (struct CGSize { double x1; double x2; })_titleSize;
- (void)_cleanUpCrossView;
- (void)_crossFadeHiddingButton:(bool)arg1;
- (void)_prepareCrossViewsForNewSize:(struct CGSize { double x1; double x2; })arg1;
- (void)_updateLabelColor;
- (void)setTitleAutoresizesToFit:(bool)arg1;
- (bool)titleAutoresizesToFit;
- (id)initWithNavigationItem:(id)arg1;
- (void)_setLineBreakMode:(long long)arg1;
- (void)_resetTitleSize;
- (id)_scriptingInfo;
- (void)setFont:(id)arg1;
- (id)title;
- (id)navigationItem;
- (void)layoutSubviews;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)dealloc;

@end