/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
 */

@class NSString;

@interface IMGroupTitleChangeItem : IMItem <NSCoding, NSCopying, IMRemoteObjectCoding> {
    NSString *_title;
    NSString *_otherCountryCode;
    NSString *_otherHandle;
    NSString *_otherUnformattedID;
}

@property(retain) NSString * title;
@property(retain) NSString * otherHandle;
@property(retain) NSString * otherUnformattedID;
@property(retain) NSString * otherCountryCode;


- (void)setOtherCountryCode:(id)arg1;
- (id)otherCountryCode;
- (void)setOtherHandle:(id)arg1;
- (void)setOtherUnformattedID:(id)arg1;
- (id)otherUnformattedID;
- (id)otherHandle;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)title;
- (id)initWithDictionary:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;
- (id)copyDictionaryRepresentation;

@end
