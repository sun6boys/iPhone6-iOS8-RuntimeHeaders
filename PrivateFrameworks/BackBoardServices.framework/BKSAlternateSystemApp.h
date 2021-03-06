/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
 */

@class NSString, NSXPCConnection, <BKSAlternateSystemAppDelegate>, NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_semaphore>;

@interface BKSAlternateSystemApp : NSObject <BKSAlternateSystemAppClientProtocol> {
    bool_stateChangeWaiter;
    <BKSAlternateSystemAppDelegate> *_delegate;
    NSString *_bundleId;
    NSXPCConnection *_connection;
    NSObject<OS_dispatch_queue> *_queue;
    long long _state;
    NSObject<OS_dispatch_semaphore> *_stateChangeSemaphore;
}

@property <BKSAlternateSystemAppDelegate> * delegate;
@property(copy) NSString * bundleId;
@property(retain) NSXPCConnection * connection;
@property(retain) NSObject<OS_dispatch_queue> * queue;
@property long long state;
@property bool stateChangeWaiter;
@property(retain) NSObject<OS_dispatch_semaphore> * stateChangeSemaphore;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;


- (void)setBundleId:(id)arg1;
- (id)queue;
- (void)setQueue:(id)arg1;
- (id)stateChangeSemaphore;
- (void)setStateChangeWaiter:(bool)arg1;
- (bool)stateChangeWaiter;
- (id)initWithBundleId:(id)arg1;
- (void)_handleInvalidatedConnection;
- (void)_handleInterruptedConnection;
- (void)alternateSystemAppWithBundleIDDidTerminate:(id)arg1;
- (void)alternateSystemAppWithBundleIDDidOpen:(id)arg1;
- (void)alternateSystemAppWithBundleID:(id)arg1 didExitWithReason:(unsigned long long)arg2;
- (void)alternateSystemAppWithBundleID:(id)arg1 failedToOpenWithResult:(id)arg2;
- (void)didUnblockSystemAppForAlternateSystemApp;
- (void)didBlockSystemAppForAlternateSystemApp;
- (void)_waitForState:(long long)arg1;
- (void)_queue_changeState:(long long)arg1;
- (void)_queue_ensureConnection;
- (void)setStateChangeSemaphore:(id)arg1;
- (void)setConnection:(id)arg1;
- (id)connection;
- (void)_invalidate;
- (void)activate;
- (void)setState:(long long)arg1;
- (long long)state;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void)dealloc;
- (id)bundleId;
- (void)terminate;

@end
