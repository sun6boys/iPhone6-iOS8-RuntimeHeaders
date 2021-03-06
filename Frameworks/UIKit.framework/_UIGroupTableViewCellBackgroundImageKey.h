/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIColor;

@interface _UIGroupTableViewCellBackgroundImageKey : NSObject <NSCopying> {
    bool_opaque;
    bool_selected;
    struct CGSize { 
        double width; 
        double height; 
    } _size;
    UIColor *_backgroundColor;
    UIColor *_sectionBorderColor;
    double _sectionBorderWidth;
    UIColor *_separatorColor;
    UIColor *_topShadowColor;
    UIColor *_bottomShadowColor;
    UIColor *_fillColor;
    UIColor *_selectionColor;
    double _leftPhase;
    double _rightPhase;
    int _sectionLocation;
    long long _selectionStyle;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    } _separatorInset;
}

@property bool opaque;
@property bool selected;
@property struct CGSize { double x1; double x2; } size;
@property(retain) UIColor * backgroundColor;
@property(retain) UIColor * sectionBorderColor;
@property double sectionBorderWidth;
@property(retain) UIColor * separatorColor;
@property(retain) UIColor * topShadowColor;
@property(retain) UIColor * bottomShadowColor;
@property(retain) UIColor * fillColor;
@property(retain) UIColor * selectionColor;
@property double leftPhase;
@property double rightPhase;
@property int sectionLocation;
@property long long selectionStyle;
@property struct UIEdgeInsets { double x1; double x2; double x3; double x4; } separatorInset;


- (void)setRightPhase:(double)arg1;
- (double)rightPhase;
- (void)setLeftPhase:(double)arg1;
- (double)leftPhase;
- (void)setSelectionColor:(id)arg1;
- (id)selectionColor;
- (double)sectionBorderWidth;
- (bool)selected;
- (id)bottomShadowColor;
- (void)setSectionLocation:(int)arg1;
- (void)setSectionBorderWidth:(double)arg1;
- (bool)opaque;
- (id)topShadowColor;
- (int)sectionLocation;
- (long long)selectionStyle;
- (void)setSelectionStyle:(long long)arg1;
- (id)fillColor;
- (void)setFillColor:(id)arg1;
- (void)setSeparatorInset:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setSelected:(bool)arg1;
- (id)sectionBorderColor;
- (void)setBottomShadowColor:(id)arg1;
- (void)setTopShadowColor:(id)arg1;
- (void)setSeparatorColor:(id)arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })separatorInset;
- (void)setSectionBorderColor:(id)arg1;
- (id)separatorColor;
- (void)setSize:(struct CGSize { double x1; double x2; })arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)backgroundColor;
- (void)setBackgroundColor:(id)arg1;
- (struct CGSize { double x1; double x2; })size;
- (void)dealloc;
- (void)setOpaque:(bool)arg1;

@end
