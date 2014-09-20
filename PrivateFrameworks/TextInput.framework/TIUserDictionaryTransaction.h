/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
 */

@class TIUserDictionaryEntryValue;

@interface TIUserDictionaryTransaction : NSObject <NSSecureCoding> {
    TIUserDictionaryEntryValue *_valueToDelete;
    TIUserDictionaryEntryValue *_valueToInsert;
}

@property(retain) TIUserDictionaryEntryValue * valueToDelete;
@property(retain) TIUserDictionaryEntryValue * valueToInsert;

+ (bool)supportsSecureCoding;

- (id)valueToDelete;
- (id)valueToInsert;
- (void)setValueToInsert:(id)arg1;
- (void)setValueToDelete:(id)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;

@end