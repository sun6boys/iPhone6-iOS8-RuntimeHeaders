/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@class NSMutableSet;

@interface _NSXPCConnectionClassCache : NSObject  {
    int _lock;
    NSMutableSet *_cache;
}


- (void)clear;
- (id)init;
- (void)dealloc;
- (void)addClass:(Class)arg1;
- (bool)containsClass:(Class)arg1;

@end