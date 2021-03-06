/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSString, UIColor;

@interface _UIVisualEffectLayerConfig : NSObject  {
    double _opacity;
    NSString *_filterType;
    UIColor *_fillColor;
}

@property(readonly) double opacity;
@property(readonly) NSString * filterType;
@property(readonly) UIColor * fillColor;

+ (id)layerWithFillColor:(id)arg1 opacity:(double)arg2 filterType:(id)arg3;

- (void)configureLayerView:(id)arg1;
- (id)filterType;
- (id)fillColor;
- (double)opacity;
- (void)dealloc;

@end
