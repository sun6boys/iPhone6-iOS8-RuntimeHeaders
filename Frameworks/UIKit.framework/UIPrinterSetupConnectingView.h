/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UILabel, UIActivityIndicatorView;

@interface UIPrinterSetupConnectingView : UIView  {
    UILabel *_label;
    UIActivityIndicatorView *_activityIndicator;
    double _presentationTime;
}

@property(retain) UILabel * label;
@property(retain) UIActivityIndicatorView * activityIndicator;
@property double presentationTime;


- (void)setPresentationTime:(double)arg1;
- (double)presentationTime;
- (id)activityIndicator;
- (void)presentView;
- (void)setActivityIndicator:(id)arg1;
- (void)setMessage:(id)arg1 active:(bool)arg2;
- (void)setLabel:(id)arg1;
- (id)label;
- (void)willMoveToSuperview:(id)arg1;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;

@end