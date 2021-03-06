/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@interface CIEnhancementHistogram : NSObject  {
    double hist[256];
}

+ (id)histogramFromDoubleData:(const double*)arg1;
+ (id)histogramFromFloatData:(const float*)arg1;
+ (id)histogramFromData:(const double*)arg1;

- (const double*)values;

@end
