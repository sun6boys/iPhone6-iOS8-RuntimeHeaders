/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
 */

@class NSDate, NSData, NSArray, NSString, NSMutableDictionary, NSDictionary, NSNumber;

@interface IDSSendParameters : NSObject <NSCopying> {
    NSMutableDictionary *_params;
}

@property(retain) NSDictionary * message;
@property(retain) NSData * data;
@property(retain) NSDictionary * protobuf;
@property(retain) NSArray * destinations;
@property(retain) NSString * accountUUID;
@property bool wantsAppAck;
@property bool encryptPayload;
@property bool compressPayload;
@property double timeout;
@property long long priority;
@property bool localDelivery;
@property bool requireBluetooth;
@property(retain) NSString * identifier;
@property bool bypassDuet;
@property bool activityContinuation;
@property bool nonWaking;
@property(retain) NSString * queueOneIdentifier;
@property bool fireAndForget;
@property bool expectsPeerResponse;
@property(retain) NSString * peerResponseIdentifier;
@property bool compressed;
@property(retain) NSString * fromID;
@property bool useDictAsTopLevel;
@property bool wantsResponse;
@property(retain) NSData * dataToEncrypt;
@property(retain) NSData * messageUUID;
@property(retain) NSString * alternateCallbackID;
@property(retain) NSNumber * command;
@property bool wantsDeliveryStatus;
@property(retain) NSDictionary * deliveryStatusContext;
@property(retain) NSArray * interestingRegistrationProperties;
@property(retain) NSArray * requireAllRegistrationProperties;
@property(retain) NSArray * bulkedPayload;
@property bool daemonDeathResend;
@property bool bypassSizeCheck;
@property(retain,readonly) NSDate * expirationDate;
@property(retain,readonly) NSDictionary * dictionaryRepresentation;


- (void)setObject:(id)arg1 forKey:(id)arg2;
- (id)objectForKey:(id)arg1;
- (id)expirationDate;
- (double)timeout;
- (bool)fireAndForget;
- (bool)bypassSizeCheck;
- (void)setBypassSizeCheck:(bool)arg1;
- (bool)daemonDeathResend;
- (bool)nonWaking;
- (bool)activityContinuation;
- (bool)bypassDuet;
- (bool)requireBluetooth;
- (bool)localDelivery;
- (bool)compressPayload;
- (bool)encryptPayload;
- (bool)useDictAsTopLevel;
- (id)queueOneIdentifier;
- (id)interestingRegistrationProperties;
- (id)requireAllRegistrationProperties;
- (id)bulkedPayload;
- (void)setBulkedPayload:(id)arg1;
- (id)dataToEncrypt;
- (id)accountUUID;
- (id)fromID;
- (id)protobuf;
- (id)peerResponseIdentifier;
- (id)messageUUID;
- (void)setCompressed:(bool)arg1;
- (bool)compressed;
- (bool)expectsPeerResponse;
- (id)deliveryStatusContext;
- (bool)wantsDeliveryStatus;
- (bool)wantsAppAck;
- (void)setDaemonDeathResend:(bool)arg1;
- (void)setProtobuf:(id)arg1;
- (id)alternateCallbackID;
- (void)setAccountUUID:(id)arg1;
- (void)setRequireAllRegistrationProperties:(id)arg1;
- (void)setInterestingRegistrationProperties:(id)arg1;
- (void)setQueueOneIdentifier:(id)arg1;
- (void)setActivityContinuation:(bool)arg1;
- (void)setFireAndForget:(bool)arg1;
- (void)setNonWaking:(bool)arg1;
- (void)setBypassDuet:(bool)arg1;
- (void)setPeerResponseIdentifier:(id)arg1;
- (void)setExpectsPeerResponse:(bool)arg1;
- (void)setUseDictAsTopLevel:(bool)arg1;
- (void)setRequireBluetooth:(bool)arg1;
- (void)setLocalDelivery:(bool)arg1;
- (void)setCompressPayload:(bool)arg1;
- (void)setEncryptPayload:(bool)arg1;
- (void)setAlternateCallbackID:(id)arg1;
- (void)setMessageUUID:(id)arg1;
- (void)setDeliveryStatusContext:(id)arg1;
- (void)setWantsDeliveryStatus:(bool)arg1;
- (void)setWantsAppAck:(bool)arg1;
- (void)setFromID:(id)arg1;
- (void)setWantsResponse:(bool)arg1;
- (void)setDataToEncrypt:(id)arg1;
- (id)destinations;
- (void)setTimeout:(double)arg1;
- (bool)wantsResponse;
- (void)setCommand:(id)arg1;
- (long long)priority;
- (id)dictionaryRepresentation;
- (void)setPriority:(long long)arg1;
- (void)setMessage:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (id)message;
- (void)setData:(id)arg1;
- (id)data;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)identifier;
- (id)initWithDictionary:(id)arg1;
- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;
- (void)setDestinations:(id)arg1;
- (id)command;

@end
