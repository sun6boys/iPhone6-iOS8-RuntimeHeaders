/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/MediaServices.framework/MediaServices
 */

@class NSString;

@interface MSVSystemDialogTextField : NSObject  {
    bool_secure;
    NSString *_title;
    long long _keyboardType;
}

@property(copy) NSString * title;
@property(getter=isSecure) bool secure;
@property long long keyboardType;

+ (id)textFieldWithTitle:(id)arg1;
+ (id)textFieldWithTitle:(id)arg1 secure:(bool)arg2;

- (void).cxx_destruct;
- (void)setKeyboardType:(long long)arg1;
- (long long)keyboardType;
- (id)initWithTitle:(id)arg1;
- (bool)isSecure;
- (void)setSecure:(bool)arg1;
- (id)title;
- (void)setTitle:(id)arg1;

@end