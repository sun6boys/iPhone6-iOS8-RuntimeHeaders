/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
 */

@class CUIPSDLayerRef;

@interface CUIPSDLayerMaskRef : NSObject  {
    CUIPSDLayerRef *_layerRef;
    bool_isVectorMask;
}


- (struct CGImage { }*)createCGImageMask;
- (struct CGPath { }*)newBezierPath;
- (bool)isInvertedWhenBlending;
- (bool)isLinked;
- (id)layerRef;
- (struct CGPath { }*)newBezierPathAtScale:(double)arg1;
- (id)initVectorMaskWithLayerRef:(id)arg1;
- (id)initLayerMaskWithLayerRef:(id)arg1;
- (bool)isEnabled;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })bounds;
- (void)dealloc;

@end