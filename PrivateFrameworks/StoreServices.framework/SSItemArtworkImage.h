/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@class NSString, NSMutableDictionary, NSURL;

@interface SSItemArtworkImage : NSObject <SSXPCCoding, NSCopying> {
    NSMutableDictionary *_dictionary;
    NSString *_imageKind;
}

@property(readonly) long long height;
@property(readonly) long long width;
@property(copy) NSString * imageKind;
@property(readonly) long long imageOrientation;
@property(readonly) double imageScale;
@property(getter=isPrerendered,readonly) bool prerendered;
@property(retain) NSURL * URL;
@property(readonly) struct CGSize { double x1; double x2; } imageSize;
@property(readonly) NSString * URLString;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;


- (bool)isPrerendered;
- (id)imageKind;
- (double)imageScale;
- (void)setValue:(id)arg1 forProperty:(id)arg2;
- (void)setImageKindWithTypeName:(id)arg1 variantName:(id)arg2;
- (void)setImageKind:(id)arg1;
- (id)initWithArtworkDictionary:(id)arg1;
- (void)_setValue:(id)arg1 forKey:(id)arg2;
- (id)copyXPCEncoding;
- (id)initWithXPCEncoding:(id)arg1;
- (id)URLString;
- (id)valueForProperty:(id)arg1;
- (void)setURL:(id)arg1;
- (id)URL;
- (long long)height;
- (long long)width;
- (struct CGSize { double x1; double x2; })imageSize;
- (long long)imageOrientation;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)dealloc;

@end