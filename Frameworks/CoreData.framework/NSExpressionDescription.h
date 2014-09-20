/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@class NSExpression;

@interface NSExpressionDescription : NSPropertyDescription  {
    id _reservedtype1_1;
    id _reservedtype1_2;
    unsigned long long _reservedtype1_3;
    id _reservedtype1_4;
    unsigned long long _reservedtype1_5;
    id _reservedtype1_6;
    void *_reservedtype2_1;
    void *_reservedtype2_2;
    void *_reservedtype2_3;
    NSExpression *_expression;
    unsigned long long _expressionResultType;
}

@property(retain) NSExpression * expression;
@property unsigned long long expressionResultType;


- (void)setExpressionResultType:(unsigned long long)arg1;
- (void)setExpression:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;
- (unsigned long long)expressionResultType;
- (void)_writeIntoData:(id)arg1 propertiesDict:(id)arg2 uniquedPropertyNames:(id)arg3 uniquedStrings:(id)arg4 uniquedData:(id)arg5 entitiesSlots:(id)arg6 fetchRequests:(id)arg7;
- (id)expression;
- (unsigned long long)_propertyType;

@end