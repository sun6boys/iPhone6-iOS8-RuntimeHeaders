/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/NearField.framework/NearField
 */

@class NFDaemonProxy;

@interface NFHardwareManager : NSObject  {
    NFDaemonProxy *_nfcd;
}

+ (id)sharedHardwareManager;

- (id)getSecureElementInfo;
- (id)getBoosterInfo;
- (id)getControllerInfo;
- (id)init;
- (void)dealloc;

@end