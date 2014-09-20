/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/AppSupport.framework/AppSupport
 */

@class NSString;

@interface PEPServiceConfiguration : NSObject  {
    NSString *_cacheFilePath;
    bool_shouldDownloadNetworkConfigFile;
    double _cachedFileLastModifyDate;
}

+ (id)sharedInstance;

- (bool)registerNetworkDefaultsForAppID:(id)arg1;
- (void)_updateDefaults:(id)arg1;
- (bool)registerNetworkDefaultsForAppIDs:(id)arg1 forceUpdate:(bool)arg2;
- (void)_postNotification;
- (id)init;
- (void)dealloc;

@end