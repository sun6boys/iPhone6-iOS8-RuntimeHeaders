/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@class NSDictionary, NSString, NSArray;

@interface SSVRedeemCodeMetadata : NSObject <NSCopying> {
    NSDictionary *_dictionary;
    NSString *_inputCode;
}

@property(readonly) NSDictionary * redeemCodeDictionary;
@property(readonly) NSString * code;
@property(readonly) NSString * codeType;
@property(copy) NSString * inputCode;
@property(readonly) NSArray * items;


- (id)codeType;
- (id)redeemCodeDictionary;
- (void)setInputCode:(id)arg1;
- (id)initWithRedeemCodeDictionary:(id)arg1;
- (id)inputCode;
- (void).cxx_destruct;
- (id)items;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)code;

@end
