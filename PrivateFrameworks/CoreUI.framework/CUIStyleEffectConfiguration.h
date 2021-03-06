/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
 */

@interface CUIStyleEffectConfiguration : NSObject <NSCopying> {
    long long _state;
    long long _presentationState;
    long long _value;
    bool_useSimplifiedEffect;
    bool_foregroundColorShouldTintEffects;
}

@property long long state;
@property long long presentationState;
@property long long value;
@property bool useSimplifiedEffect;
@property bool foregroundColorShouldTintEffects;


- (void)setUseSimplifiedEffect:(bool)arg1;
- (long long)presentationState;
- (bool)foregroundColorShouldTintEffects;
- (void)setPresentationState:(long long)arg1;
- (bool)shouldIgnoreForegroundColor;
- (bool)useSimplifiedEffect;
- (long long)value;
- (void)setForegroundColorShouldTintEffects:(bool)arg1;
- (void)setValue:(long long)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)setState:(long long)arg1;
- (long long)state;
- (id)description;
- (id)init;

@end
