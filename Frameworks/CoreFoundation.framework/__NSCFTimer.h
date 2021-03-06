/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

@interface __NSCFTimer : NSTimer  {
}

+ (bool)automaticallyNotifiesObserversForKey:(id)arg1;
+ (id)allocWithZone:(struct _NSZone { }*)arg1;

- (void)finalize;
- (oneway void)release;
- (id)fireDate;
- (double)timeInterval;
- (id)initWithFireDate:(id)arg1 interval:(double)arg2 target:(id)arg3 selector:(SEL)arg4 userInfo:(id)arg5 repeats:(bool)arg6;
- (bool)_isDeallocating;
- (bool)_tryRetain;
- (id)userInfo;
- (void)setFireDate:(id)arg1;
- (bool)isValid;
- (void)invalidate;
- (unsigned long long)hash;
- (unsigned long long)retainCount;
- (bool)isEqual:(id)arg1;
- (id)init;
- (id)retain;
- (void)fire;
- (void)setTolerance:(double)arg1;
- (double)tolerance;
- (unsigned long long)_cfTypeID;

@end
