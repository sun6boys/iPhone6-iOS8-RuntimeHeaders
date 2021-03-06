/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
 */

@class NSSet, NSMutableSet;

@interface BSCopyingCacheSet : NSObject  {
    NSMutableSet *_mutable;
    NSSet *_immutable;
}

@property(readonly) unsigned long long count;


- (id)immutableSet;
- (bool)containsObject:(id)arg1;
- (id)description;
- (void)addObject:(id)arg1;
- (unsigned long long)count;
- (void)removeObject:(id)arg1;
- (void)dealloc;

@end
