/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface _PFLock : NSObject <NSLocking> {
    int _cd_rc;
    struct _opaque_pthread_mutex_t { 
        long long __sig; 
        BOOL __opaque[56]; 
    } _lock;
    struct _opaque_pthread_t { long long x1; struct __darwin_pthread_handler_rec {} *x2; BOOL x3[8176]; } *_owner;
    unsigned long long _count;
}

+ (void)initialize;

- (void)finalize;
- (void)unlock;
- (void)lock;
- (id)init;
- (void)dealloc;
- (bool)tryLock;

@end
