/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

@class NSData, NSString, NSURL;

@interface MCFontPayload : MCPayload  {
    NSData *_fontData;
    NSString *_name;
    NSURL *_persistentURL;
}

@property(retain) NSData * fontData;
@property(retain) NSString * name;
@property(retain) NSURL * persistentURL;

+ (id)localizedPluralForm;
+ (id)localizedSingularForm;
+ (id)typeStrings;

- (void)setPersistentURL:(id)arg1;
- (void)setFontData:(id)arg1;
- (id)fontData;
- (id)persistentURL;
- (id)subtitle1Description;
- (id)subtitle1Label;
- (id)stubDictionary;
- (id)initWithDictionary:(id)arg1 profile:(id)arg2 outError:(id*)arg3;
- (void).cxx_destruct;
- (id)name;
- (void)setName:(id)arg1;
- (id)title;
- (id)description;

@end