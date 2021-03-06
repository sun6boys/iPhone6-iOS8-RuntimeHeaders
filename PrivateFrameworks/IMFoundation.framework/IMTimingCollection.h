/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
 */

@class NSObject<OS_dispatch_queue>, NSMutableDictionary;

@interface IMTimingCollection : NSObject  {
    NSMutableDictionary *_timings;
    NSObject<OS_dispatch_queue> *_queue;
}


- (void)removeTimingForKey:(id)arg1;
- (double)totalTimeForKey:(id)arg1;
- (bool)hasKey:(id)arg1;
- (void)stopTimingForKey:(id)arg1;
- (void)startTimingForKey:(id)arg1;
- (id)description;
- (id)init;
- (void)dealloc;

@end
