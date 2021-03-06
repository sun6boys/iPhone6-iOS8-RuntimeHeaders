/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class _UIMotionEffectEngineLogger, CADisplayLink, NSArray, NSOperationQueue, _UILazyMapTable, NSMutableSet, CMMotionManager, _UIAssociationTable, NSMapTable;

@interface _UIMotionEffectEngine : NSObject  {
    _UIAssociationTable *_effectViewAssociationTable;
    _UILazyMapTable *_analyzerSettingsToAnalyzers;
    NSMapTable *_analyzersToEffects;
    NSMapTable *_analyzersToHistories;
    NSMapTable *_suspendedViewsToEffectSets;
    CMMotionManager *_motionManager;
    NSOperationQueue *_motionEventQueue;
    bool_hasReceivedAtLeastOneMotionEventSinceStarting;
    struct { 
        struct { 
            double w; 
            double x; 
            double y; 
            double z; 
        } quaternion; 
        struct { 
            float x; 
            float y; 
            float z; 
        } userAcceleration; 
        struct { 
            float x; 
            float y; 
            float z; 
        } rotationRate; 
        struct { 
            float x; 
            float y; 
            float z; 
        } magneticField; 
        int magneticFieldCalibrationLevel; 
        booldoingYawCorrection; 
        booldoingBiasEstimation; 
        boolisInitialized; 
    } _pendingDeviceMotionStruct;
    double _pendingDeviceMotionTimestamp;
    int _pendingDeviceMotionLock;
    CADisplayLink *_displayLink;
    bool_generatingUpdates;
    NSMutableSet *_suspendReasons;
    struct { 
        double w; 
        double x; 
        double y; 
        double z; 
    } _lastDeviceQuaternion;
    double _lastUpdateTimestamp;
    bool_slowUpdatesEnabled;
    bool_pendingSlowDown;
    long long _sensorStatus;
    bool_allAnalyzersAreCentered;
    bool_hasAppliedAtLeastOneUpdateSinceStarting;
    bool_isPendingReset;
    _UIMotionEffectEngineLogger *_motionLogger;
    int _thermalNotificationToken;
    int _screenDimmingNotificationToken;
    long long _targetInterfaceOrientation;
}

@property(readonly) NSArray * suspensionReasons;
@property(setter=_setTargetInterfaceOrientation:) long long _targetInterfaceOrientation;

+ (bool)_motionEffectsEnabled;
+ (bool)_motionEffectsSupported;

- (void)_setMotionManagerSensorStatus:(long long)arg1;
- (void)_scheduleUpdateWithDeviceMotion:(const struct { struct { double x_1_1_1; double x_1_1_2; double x_1_1_3; double x_1_1_4; } x1; struct { float x_2_1_1; float x_2_1_2; float x_2_1_3; } x2; struct { float x_3_1_1; float x_3_1_2; float x_3_1_3; } x3; struct { float x_4_1_1; float x_4_1_2; float x_4_1_3; } x4; int x5; boolx6; boolx7; boolx8; }*)arg1 timestamp:(double)arg2;
- (void)_unregisterMotionEffect:(id)arg1 fromView:(id)arg2;
- (void)_handleLatestDeviceMotion;
- (void)_startGeneratingUpdates;
- (bool)_shouldGenerateUpdates;
- (void)_applyEffectsFromAnalyzer:(id)arg1;
- (bool)_shouldSuspendApplicationForHysteresisGivenLastAppliedViewerOffset:(struct UIOffset { double x1; double x2; })arg1 newViewerOffset:(struct UIOffset { double x1; double x2; })arg2 wasSuspendingApplicationForHysteresis:(bool)arg3;
- (void)_toggleSlowUpdates;
- (bool)_isSuspended;
- (void)_updateDisplayLinkInterval;
- (void)_unapplyAllEffects;
- (void)_stopGeneratingUpdates;
- (void)_startOrStopGeneratingUpdates;
- (id)suspensionReasons;
- (long long)_targetInterfaceOrientation;
- (void)_setTargetInterfaceOrientation:(long long)arg1;
- (bool)_motionEffectsAreSuspendedForView:(id)arg1;
- (id)_motionEffectsForView:(id)arg1;
- (void)resetMotionAnalysis;
- (void)endSuspendingForReason:(id)arg1;
- (void)beginSuspendingForReason:(id)arg1;
- (void)_unregisterAllMotionEffectsForView:(id)arg1;
- (void)endSuspendingMotionEffectsForView:(id)arg1;
- (bool)_hasMotionEffectsForView:(id)arg1;
- (void)endApplyingMotionEffect:(id)arg1 toView:(id)arg2;
- (bool)_motionEffect:(id)arg1 belongsToView:(id)arg2;
- (void)beginApplyingMotionEffect:(id)arg1 toView:(id)arg2;
- (void)beginSuspendingMotionEffectsForView:(id)arg1;
- (id)debugDescription;
- (id)init;
- (void)dealloc;

@end
