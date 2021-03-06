/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/MediaToolbox.framework/MediaToolbox
 */

@class CMNetworkActivityMonitor;

@interface CMNetworkActivityObserver : NSObject  {
    bool_valid;
    bool_registered;
    int _cmActivityToken;
    int _cmActivityPollingToken;
    CMNetworkActivityMonitor *_activityMonitor;
}

@property(readonly) CMNetworkActivityMonitor * activityMonitor;

+ (id)registeredObserverForActivityMonitor:(id)arg1;

- (void)invalidate;
- (void)dealloc;
- (id)initForActivityMonitor:(id)arg1;
- (void)registerObservations;
- (void)_pollWithInterval:(double)arg1 networkActivityDidCompleteBlock:(id)arg2;
- (id)activityMonitor;
- (void)unregisterObservations;

@end
