/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/PrintKit.framework/PrintKit
 */

@class NSString;

@interface PKMediaName : NSObject  {
    NSString *_mediaName;
    NSString *_mediaClass;
    NSString *_baseName;
    double _widthInUnits;
    double _heightInUnits;
    NSString *_widthStr;
    long long _units;
    double _conversionFactor;
}

@property(retain) NSString * mediaName;
@property(retain) NSString * mediaClass;
@property(retain) NSString * baseName;
@property(readonly) bool isRoll;
@property double widthInUnits;
@property double heightInUnits;
@property(retain) NSString * widthStr;
@property(readonly) double width;
@property(readonly) double height;
@property(retain,readonly) NSString * unitStr;
@property long long units;
@property double conversionFactor;

+ (id)pkMediaNameWithString:(id)arg1;

- (id)widthStr;
- (id)mediaName;
- (double)conversionFactor;
- (id)mediaClass;
- (void)setHeightInUnits:(double)arg1;
- (void)setWidthInUnits:(double)arg1;
- (void)setConversionFactor:(double)arg1;
- (void)setWidthStr:(id)arg1;
- (void)setBaseName:(id)arg1;
- (void)setMediaClass:(id)arg1;
- (void)parseMediaName:(id)arg1;
- (void)setMediaName:(id)arg1;
- (double)heightInUnits;
- (double)widthInUnits;
- (id)unitStr;
- (id)baseName;
- (void)setUnits:(long long)arg1;
- (long long)units;
- (bool)isRoll;
- (double)height;
- (id)initWithString:(id)arg1;
- (double)width;
- (void)dealloc;

@end