/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/AssertionServices.framework/AssertionServices
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class BSSignal, NSArray, NSObject<OS_xpc_object>, NSObject<OS_dispatch_queue>;

@interface BKSApplicationStateMonitor : NSObject  {
    NSObject<OS_xpc_object> *_connection;
    BSSignal *_invalidationSignal;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _handler;

    unsigned int _interestedStates;
    NSArray *_interestedBundleIDs;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_messageHandlingQueue;
    NSObject<OS_xpc_object> *_serverEndpoint;
    bool_denied;
}

@property(copy) id handler;
@property unsigned int interestedStates;
@property(copy) NSArray * interestedBundleIDs;


- (void)applicationInfoForApplication:(id)arg1 completion:(id)arg2;
- (unsigned int)interestedStates;
- (void)applicationInfoForPID:(int)arg1 completion:(id)arg2;
- (void)updateInterestedBundleIDs:(id)arg1;
- (id)bundleInfoValueForKey:(id)arg1 PID:(int)arg2;
- (id)initWithBundleIDs:(id)arg1 states:(unsigned int)arg2;
- (void)queue_connectionWasInvalidated;
- (void)queue_reregister;
- (void)queue_invalidate;
- (void)queue_handleMessage:(id)arg1;
- (bool)isApplicationBeingDebugged:(id)arg1;
- (void)updateInterestedStates:(unsigned int)arg1;
- (void)queue_updateInterestedStates:(bool)arg1;
- (void)queue_updateInterestedStates;
- (id)interestedBundleIDs;
- (void)updateInterestedBundleIDs:(id)arg1 states:(unsigned int)arg2;
- (void)queue_setInterestedStates:(unsigned int)arg1;
- (void)queue_setInterestedBundleIDs:(id)arg1;
- (void)queue_setHandler:(id)arg1;
- (void)queue_registerWithServer;
- (void)setInterestedStates:(unsigned int)arg1;
- (void)setInterestedBundleIDs:(id)arg1;
- (id)initWithEndpoint:(id)arg1 bundleIDs:(id)arg2 states:(unsigned int)arg3;
- (id)_connection;
- (id)handler;
- (void)setHandler:(id)arg1;
- (void)invalidate;
- (id)init;
- (void)dealloc;
- (unsigned int)mostElevatedApplicationStateForPID:(int)arg1;
- (void)_setEndpoint:(id)arg1;
- (unsigned int)applicationStateForApplication:(id)arg1;

@end