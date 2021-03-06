/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIColor, NSString, UIImage, UIView;

@interface UITabBarItem : UIBarItem  {
    NSString *_title;
    SEL _action;
    id _target;
    UIImage *_templateImage;
    UIImage *_selectedTemplateImage;
    UIImage *_selectedImage;
    UIImage *_unselectedImage;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    } _imageInsets;
    NSString *_badgeValue;
    UIView *_view;
    long long _tag;
    id _appearanceStorage;
    struct { 
        unsigned int enabled : 1; 
        unsigned int style : 3; 
        unsigned int isSystemItem : 1; 
        unsigned int systemItem : 7; 
        unsigned int viewIsCustom : 1; 
        unsigned int animatedBadge : 1; 
        unsigned int customSelectedImage : 1; 
        unsigned int customUnselectedImage : 1; 
    } _tabBarItemFlags;
    long long _barMetrics;
    long long _imageStyle;
    UIColor *_tintColor;
}

@property(retain) UIView * view;
@property bool viewIsCustom;
@property bool animatedBadge;
@property(retain) UIImage * unselectedImage;
@property SEL action;
@property id target;
@property(retain) UIImage * selectedImage;
@property(copy) NSString * badgeValue;
@property(setter=_setBarMetrics:) long long _barMetrics;
@property(setter=_setImageStyle:) long long _imageStyle;
@property(setter=_setTintColor:,retain) UIColor * _tintColor;

+ (id)_appearanceBlindViewClasses;

- (id)finishedUnselectedImage;
- (id)finishedSelectedImage;
- (void)setFinishedSelectedImage:(id)arg1 withFinishedUnselectedImage:(id)arg2;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })imageInsets;
- (void)setImageInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (id)initWithTitle:(id)arg1 image:(id)arg2 selectedImage:(id)arg3;
- (id)_internalTemplateImages;
- (struct UIOffset { double x1; double x2; })titlePositionAdjustment;
- (void)setTitlePositionAdjustment:(struct UIOffset { double x1; double x2; })arg1;
- (long long)_imageStyle;
- (void)_setImageStyle:(long long)arg1;
- (void)_setBarMetrics:(long long)arg1;
- (long long)_barMetrics;
- (void)_updateToMatchCurrentState;
- (void)_setSelected:(bool)arg1;
- (void)setSelectedImage:(id)arg1;
- (bool)_isSelected;
- (id)titleTextAttributesForState:(unsigned long long)arg1;
- (id)badgeValue;
- (id)initWithTabBarSystemItem:(long long)arg1 tag:(long long)arg2;
- (void)setBadgeValue:(id)arg1;
- (id)selectedImage;
- (id)initWithTitle:(id)arg1 image:(id)arg2 tag:(long long)arg3;
- (id)_tintColor;
- (void)_setTintColor:(id)arg1;
- (void)setTitleTextAttributes:(id)arg1 forState:(unsigned long long)arg2;
- (void)setTag:(long long)arg1;
- (long long)tag;
- (bool)isEnabled;
- (void)setEnabled:(bool)arg1;
- (id)image;
- (id)title;
- (void)setTitle:(id)arg1;
- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setImage:(id)arg1;
- (void)dealloc;
- (void)setUnselectedImage:(id)arg1;
- (bool)animatedBadge;
- (void)setAnimatedBadge:(bool)arg1;
- (void)setViewIsCustom:(bool)arg1;
- (void)_setInternalTemplateImage:(id)arg1;
- (void)_setInternalTitle:(id)arg1;
- (bool)viewIsCustom;
- (id)_internalTemplateImage;
- (id)_internalTitle;
- (id)unselectedImage;
- (void)setAction:(SEL)arg1;
- (long long)systemItem;
- (bool)isSystemItem;
- (id)target;
- (void)setView:(id)arg1;
- (SEL)action;
- (void)setTarget:(id)arg1;
- (id)view;
- (id)_updateImageWithTintColor:(id)arg1 isSelected:(bool)arg2 getImageOffset:(struct UIOffset { double x1; double x2; }*)arg3;
- (void)_updateButtonForTintColor:(id)arg1 selected:(bool)arg2;
- (void)_updateViewAndPositionItems:(bool)arg1;
- (id)_createViewForTabBar:(id)arg1 showingBadge:(bool)arg2;
- (void)_setTitleTextAttributeValue:(id)arg1 forAttributeKey:(id)arg2 state:(unsigned long long)arg3;
- (id)_createViewForTabBar:(id)arg1 showingBadge:(bool)arg2 withTint:(bool)arg3;
- (void)_updateView;
- (id)nextResponder;

@end
