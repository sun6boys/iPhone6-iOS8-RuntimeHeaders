/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSStringPredicateOperator : NSPredicateOperator  {
    unsigned long long _flags;
}

+ (bool)supportsSecureCoding;

- (unsigned long long)flags;
- (unsigned long long)options;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithOperatorType:(unsigned long long)arg1 modifier:(unsigned long long)arg2 variant:(unsigned long long)arg3;
- (void)_setOptions:(unsigned long long)arg1;
- (id)_modifierString;

@end
