/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class NSString;

@interface NSProxy <NSObject> {
    Class isa;
}

@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

+ (void)finalize;
+ (oneway void)release;
+ (id)alloc;
+ (bool)isFault;
+ (void)doesNotRecognizeSelector:(SEL)arg1;
+ (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
+ (bool)retainWeakReference;
+ (bool)allowsWeakReference;
+ (void)forwardInvocation:(id)arg1;
+ (id)instanceMethodSignatureForSelector:(SEL)arg1;
+ (id)forwardingTargetForSelector:(SEL)arg1;
+ (bool)instancesRespondToSelector:(SEL)arg1;
+ (int (*)())methodForSelector:(SEL)arg1;
+ (bool)_isDeallocating;
+ (bool)_tryRetain;
+ (void)initialize;
+ (int (*)())instanceMethodForSelector:(SEL)arg1;
+ (id)copyWithZone:(struct _NSZone { }*)arg1;
+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (id)mutableCopy;
+ (id)methodSignatureForSelector:(SEL)arg1;
+ (bool)isSubclassOfClass:(Class)arg1;
+ (id)debugDescription;
+ (id)description;
+ (Class)superclass;
+ (unsigned long long)hash;
+ (struct _NSZone { }*)zone;
+ (unsigned long long)retainCount;
+ (bool)conformsToProtocol:(id)arg1;
+ (bool)isMemberOfClass:(Class)arg1;
+ (bool)isProxy;
+ (id)performSelector:(SEL)arg1 withObject:(id)arg2 withObject:(id)arg3;
+ (id)performSelector:(SEL)arg1 withObject:(id)arg2;
+ (id)performSelector:(SEL)arg1;
+ (id)self;
+ (bool)isEqual:(id)arg1;
+ (id)autorelease;
+ (id)copy;
+ (bool)isKindOfClass:(Class)arg1;
+ (id)init;
+ (bool)respondsToSelector:(SEL)arg1;
+ (void)dealloc;
+ (Class)class;
+ (id)retain;
+ (bool)isAncestorOfObject:(id)arg1;
+ (id)_copyDescription;

- (void)finalize;
- (oneway void)release;
- (bool)isFault;
- (void)doesNotRecognizeSelector:(SEL)arg1;
- (bool)retainWeakReference;
- (bool)allowsWeakReference;
- (void)forwardInvocation:(id)arg1;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (bool)_isDeallocating;
- (bool)_tryRetain;
- (id)methodSignatureForSelector:(SEL)arg1;
- (id)debugDescription;
- (id)description;
- (Class)superclass;
- (unsigned long long)hash;
- (struct _NSZone { }*)zone;
- (unsigned long long)retainCount;
- (bool)conformsToProtocol:(id)arg1;
- (bool)isMemberOfClass:(Class)arg1;
- (bool)isProxy;
- (id)performSelector:(SEL)arg1 withObject:(id)arg2 withObject:(id)arg3;
- (id)performSelector:(SEL)arg1 withObject:(id)arg2;
- (id)performSelector:(SEL)arg1;
- (id)self;
- (bool)isEqual:(id)arg1;
- (id)autorelease;
- (bool)isKindOfClass:(Class)arg1;
- (bool)respondsToSelector:(SEL)arg1;
- (void)dealloc;
- (Class)class;
- (id)retain;
- (bool)_allowsDirectEncoding;
- (id)_copyDescription;

@end
