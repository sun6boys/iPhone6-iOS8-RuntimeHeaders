/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@class NSPointerFunctions;

@interface NSPointerArray : NSObject <NSFastEnumeration, NSCopying, NSCoding> {
}

@property(copy,readonly) NSPointerFunctions * pointerFunctions;
@property unsigned long long count;

+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (id)pointerArrayWithPointerFunctions:(id)arg1;
+ (id)pointerArrayWithOptions:(unsigned long long)arg1;
+ (id)weakObjectsPointerArray;
+ (id)strongObjectsPointerArray;
+ (id)pointerArrayWithWeakObjects;
+ (id)pointerArrayWithStrongObjects;

- (void)compact;
- (id)initWithOptions:(unsigned long long)arg1;
- (void)setCount:(unsigned long long)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)init;
- (unsigned long long)count;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x1; id *x2; unsigned long long *x3; unsigned long long x4[5]; }*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3;
- (void)removePointerAtIndex:(unsigned long long)arg1;
- (void)addPointer:(void*)arg1;
- (void*)pointerAtIndex:(unsigned long long)arg1;
- (void)replacePointerAtIndex:(unsigned long long)arg1 withPointer:(void*)arg2;
- (void)insertPointer:(void*)arg1 atIndex:(unsigned long long)arg2;
- (id)pointerFunctions;
- (id)initWithPointerFunctions:(id)arg1;
- (id)allObjects;
- (id)mutableArray;

@end