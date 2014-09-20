/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@class NSString, NSFormatter, <NSCopying><NSSecureCoding><NSObject>;

@interface _NSStringProxyForContext : NSString  {
    NSString *_string;
    NSFormatter *_formatter;
    <NSCopying><NSSecureCoding><NSObject> *_item;
}

@property(copy) NSString * string;
@property(copy) NSFormatter * formatter;
@property(copy) id item;


- (void)getCharacters:(unsigned short*)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (void)setString:(id)arg1;
- (void)setItem:(id)arg1;
- (unsigned short)characterAtIndex:(unsigned long long)arg1;
- (id)item;
- (id)string;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)length;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;
- (void)_retainFormatter:(id)arg1;
- (void)setFormatter:(id)arg1;
- (id)formatter;
- (id)_dynamicContextEvaluation:(id)arg1 patternString:(id)arg2;

@end