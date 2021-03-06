/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIColor, UIView;

@interface _UIModalItemTableViewCell : UITableViewCell  {
    bool_showFullWidthSeparator;
    UIColor *_fullWitdhSeparatorColor;
    UIView *_fullWidthSeparatorView;
    UIView *_topSeparatorView;
    bool_isEnabled;
}

@property bool showFullWidthSeparator;
@property(retain) UIColor * fullWidthSeparatorColor;
@property(retain,readonly) UIView * topSeparatorView;
@property bool isEnabled;


- (id)fullWidthSeparatorColor;
- (bool)showFullWidthSeparator;
- (id)topSeparatorView;
- (void)setIsEnabled:(bool)arg1;
- (void)setFullWidthSeparatorColor:(id)arg1;
- (void)setShowFullWidthSeparator:(bool)arg1;
- (bool)isEnabled;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)layoutSubviews;
- (void)dealloc;

@end
