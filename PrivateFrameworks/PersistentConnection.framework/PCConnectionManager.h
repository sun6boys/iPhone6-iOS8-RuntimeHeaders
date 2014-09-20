/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/PersistentConnection.framework/PersistentConnection
 */

@class <PCConnectionManagerDelegate>, NSString, <PCGrowthAlgorithm>, PCPersistentTimer, NSObject<OS_dispatch_queue>, NSRunLoop;

@interface PCConnectionManager : NSObject <PCLoggingDelegate, PCInterfaceMonitorDelegate> {
    int _connectionClass;
    <PCConnectionManagerDelegate> *_delegate;
    NSString *_serviceIdentifier;
    NSString *_duetIdentifier;
    int _prefsStyle;
    int _onlyAllowedStyle;
    bool_onlyAllowedStyleSet;
    long long _interfaceIdentifier;
    unsigned long long _guidancePriority;
    NSRunLoop *_delegateRunLoop;
    NSObject<OS_dispatch_queue> *_delegateQueue;
    <PCGrowthAlgorithm> *_wwanGrowthAlgorithm;
    <PCGrowthAlgorithm> *_wifiGrowthAlgorithm;
    <PCGrowthAlgorithm> *_lastScheduledGrowthAlgorithm;
    PCPersistentTimer *_intervalTimer;
    PCPersistentTimer *_reconnectWakeTimer;
    PCPersistentTimer *_delayTimer;
    unsigned int _powerAssertionID;
    double _onTimeKeepAliveTime;
    double _lastResumeTime;
    double _lastStopTime;
    double _lastReachableTime;
    double _lastReconnectTime;
    double _lastScheduledIntervalTime;
    double _timerGuidance;
    double _keepAliveGracePeriod;
    unsigned int _reconnectIteration;
    int _timerGuidanceToken;
    int _pushIsConnectedToken;
    int _prefsChangedToken;
    double _defaultPollingInterval;
    double _pollingIntervalOverride;
    bool_pollingIntervalOverrideSet;
    bool_hasStarted;
    bool_isRunning;
    bool_inCallback;
    bool_isInReconnectMode;
    bool_reconnectWithKeepAliveDelay;
    bool_forceManualWhenRoaming;
    bool_enableNonCellularConnections;
    bool_isReachable;
    bool_disableEarlyFire;
}

@property <PCConnectionManagerDelegate> * delegate;
@property(copy) NSString * duetIdentifier;
@property(readonly) bool isRunning;
@property(readonly) double currentKeepAliveInterval;
@property double minimumKeepAliveInterval;
@property double maximumKeepAliveInterval;
@property(readonly) unsigned long long countOfGrowthActions;
@property bool disableEarlyFire;
@property double keepAliveGracePeriod;
@property(readonly) double pollingInterval;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;
@property(readonly) NSString * loggingIdentifier;

+ (bool)_isCachedKeepAliveIntervalStillValid:(double)arg1 date:(id)arg2;
+ (id)intervalCacheDictionaries;
+ (id)_keepAliveCachePath;
+ (Class)growthAlgorithmClass;

- (double)keepAliveGracePeriod;
- (void)logAtLevel:(int)arg1 format:(id)arg2;
- (void)setDisableEarlyFire:(bool)arg1;
- (void)setEnableNonCellularConnections:(bool)arg1;
- (void)cancelPollingIntervalOverride;
- (void)stopAndResetManager;
- (void)setDuetIdentifier:(id)arg1;
- (id)initWithConnectionClass:(int)arg1 delegate:(id)arg2 serviceIdentifier:(id)arg3;
- (void)logAtLevel:(int)arg1 format:(id)arg2 arguments:(char *)arg3;
- (void)_adjustPollTimerIfNecessary;
- (void)_callDelegateWithEvent:(id)arg1;
- (id)_stringForEvent:(int)arg1;
- (void)_clearTimersReleasingPowerAssertion:(bool)arg1;
- (void)_delayTimerFired;
- (void)_releasePowerAssertion;
- (bool)_hasBudgetRemaining;
- (void)_takePowerAssertionWithTimeout:(double)arg1;
- (void)_intervalTimerFired;
- (bool)_isPushConnected;
- (void)_setupKeepAliveForReconnect;
- (void)_setupTimerForPollForAdjustment:(bool)arg1;
- (void)_saveWWANKeepAliveInterval;
- (void)_setupTimerForPushWithKeepAliveInterval:(double)arg1;
- (id)_currentGrowthAlgorithm;
- (void)_resolveStateWithAction:(int)arg1;
- (void)_validateActionForCurrentStyle:(int)arg1;
- (double)pollingInterval;
- (void)_calloutWithEvent:(int)arg1;
- (void)_adjustInterfaceAssertions;
- (void)_clearTimers;
- (id)initWithConnectionClass:(int)arg1 interfaceIdentifier:(long long)arg2 guidancePriority:(unsigned long long)arg3 delegate:(id)arg4 serviceIdentifier:(id)arg5;
- (id)_initWithConnectionClass:(int)arg1 interfaceIdentifier:(long long)arg2 guidancePriority:(unsigned long long)arg3 delegate:(id)arg4 delegateQueue:(id)arg5 serviceIdentifier:(id)arg6;
- (void)_loadPreferencesGeneratingEvent:(bool)arg1;
- (void)_preferencesChanged;
- (void)_setTimerGuidance:(double)arg1;
- (id)_getCachedWWANKeepAliveInterval;
- (unsigned long long)countOfGrowthActions;
- (id)_stringForAction:(int)arg1;
- (double)maximumKeepAliveInterval;
- (double)minimumKeepAliveInterval;
- (void)interfaceLinkQualityChanged:(id)arg1 previousLinkQuality:(int)arg2;
- (void)interfaceManagerInHomeCountryStatusChanged:(id)arg1;
- (void)interfaceManagerWWANInterfaceStatusChanged:(id)arg1;
- (void)interfaceManagerInternetReachabilityChanged:(id)arg1;
- (id)duetIdentifier;
- (id)loggingIdentifier;
- (double)currentKeepAliveInterval;
- (void)resumeManagerWithAction:(int)arg1;
- (bool)shouldClientScheduleReconnectDueToFailure;
- (void)stopManager;
- (void)setMaximumKeepAliveInterval:(double)arg1;
- (void)setMinimumKeepAliveInterval:(double)arg1;
- (void)setKeepAliveGracePeriod:(double)arg1;
- (bool)disableEarlyFire;
- (id)initWithConnectionClass:(int)arg1 delegate:(id)arg2 delegateQueue:(id)arg3 serviceIdentifier:(id)arg4;
- (id)_stringForStyle:(int)arg1;
- (void)setPollingIntervalOverride:(double)arg1;
- (void)startManager;
- (void)setOnlyAllowedStyle:(int)arg1;
- (bool)isRunning;
- (int)currentStyle;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void)dealloc;
- (void)log:(id)arg1;

@end