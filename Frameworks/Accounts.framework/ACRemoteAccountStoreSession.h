/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/Accounts.framework/Accounts
 */

@class NSString, NSXPCConnection;

@interface ACRemoteAccountStoreSession : NSObject <NSXPCProxyCreating> {
    NSXPCConnection *_connection;
    bool_hasConfiguredRemoteAccountStore;
    bool_notificationsEnabled;
    NSString *_spoofedBundleID;
}

@property(copy) NSString * spoofedBundleID;
@property bool notificationsEnabled;


- (id)initWithXPCConnection:(id)arg1;
- (bool)notificationsEnabled;
- (void)setNotificationsEnabled:(bool)arg1;
- (void)disconnect;
- (void).cxx_destruct;
- (void)connect;
- (id)remoteObjectProxy;
- (id)remoteObjectProxyWithErrorHandler:(id)arg1;
- (id)spoofedBundleID;
- (void)_configureRemoteAccountStoreIfNecessary;
- (void)setSpoofedBundleID:(id)arg1;

@end
