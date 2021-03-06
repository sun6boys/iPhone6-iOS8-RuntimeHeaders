/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSComparisonPredicateOperator : NSPredicateOperator  {
    unsigned long long _variant;
    unsigned long long _options;
}

+ (bool)supportsSecureCoding;

- (unsigned long long)variant;
- (unsigned long long)options;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithOperatorType:(unsigned long long)arg1 modifier:(unsigned long long)arg2 variant:(unsigned long long)arg3 options:(unsigned long long)arg4;
- (id)initWithOperatorType:(unsigned long long)arg1 modifier:(unsigned long long)arg2 variant:(unsigned long long)arg3;
- (bool)performPrimitiveOperationUsingObject:(id)arg1 andObject:(id)arg2;
- (id)predicateFormat;
- (id)minimalFormInContext:(id)arg1 ofPredicate:(id)arg2;

@end
