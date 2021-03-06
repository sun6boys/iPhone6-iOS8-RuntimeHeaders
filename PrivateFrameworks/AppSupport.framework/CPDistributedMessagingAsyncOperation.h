/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/AppSupport.framework/AppSupport
 */

@class NSString, NSThread, CPDistributedMessagingCenter, NSData, NSDictionary, NSError;

@interface CPDistributedMessagingAsyncOperation : NSOperation  {
    CPDistributedMessagingCenter *_center;
    NSString *_name;
    NSData *_userInfoData;
    NSString *_oolKey;
    NSData *_oolData;
    id _target;
    SEL _selector;
    void *_context;
    bool_makeServer;
    NSThread *_calloutThread;
    NSDictionary *_reply;
    NSError *_error;
}


- (void)_performCallout;
- (void)_releaseSendingData;
- (id)initWithCenter:(id)arg1 messageName:(id)arg2 userInfoData:(id)arg3 oolKey:(id)arg4 oolData:(id)arg5 target:(id)arg6 selector:(SEL)arg7 context:(void*)arg8 makeServer:(bool)arg9;
- (void)main;
- (void)dealloc;

@end
