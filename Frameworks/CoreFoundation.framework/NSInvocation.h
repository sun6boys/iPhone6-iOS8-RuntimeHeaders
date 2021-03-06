/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class NSMethodSignature;

@interface NSInvocation : NSObject  {
    void *_frame;
    void *_retdata;
    id _signature;
    id _container;
    unsigned char _retainedArgs;
    unsigned char _reserved[15];
}

@property(retain,readonly) NSMethodSignature * methodSignature;
@property(readonly) bool argumentsRetained;
@property id target;
@property SEL selector;

+ (id)invocationWithMethodSignature:(id)arg1;
+ (id)_invocationWithMethodSignature:(id)arg1 frame:(void*)arg2;

- (void)invokeUsingIMP:(int (*)())arg1;
- (void)setReturnValue:(void*)arg1;
- (void)getArgument:(void*)arg1 atIndex:(long long)arg2;
- (id)methodSignature;
- (void)getReturnValue:(void*)arg1;
- (void)invokeWithTarget:(id)arg1;
- (void)retainArguments;
- (SEL)selector;
- (id)target;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)setSelector:(SEL)arg1;
- (void)setTarget:(id)arg1;
- (void)invoke;
- (void)setArgument:(void*)arg1 atIndex:(long long)arg2;
- (id)init;
- (void)dealloc;
- (void)invokeSuper;
- (void)_addAttachedObject:(id)arg1;
- (bool)argumentsRetained;
- (id)debugDescription;
- (id)userInfo;
- (void)setUserInfo:(id)arg1;
- (bool)_hasBlockArgument;
- (bool)wantsReturnValue;
- (void)_webkit_invokeAndHandleException:(id)arg1;

@end
