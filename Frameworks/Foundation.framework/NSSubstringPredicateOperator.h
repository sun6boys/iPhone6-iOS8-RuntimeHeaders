/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSSubstringPredicateOperator : NSStringPredicateOperator  {
    unsigned long long _position;
}

+ (bool)supportsSecureCoding;

- (id)symbol;
- (unsigned long long)position;
- (SEL)selector;
- (bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithOperatorType:(unsigned long long)arg1 modifier:(unsigned long long)arg2 variant:(unsigned long long)arg3 position:(unsigned long long)arg4;
- (bool)performPrimitiveOperationUsingObject:(id)arg1 andObject:(id)arg2;

@end