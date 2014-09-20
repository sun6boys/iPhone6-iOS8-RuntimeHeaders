/* Generated by RuntimeBrowser.
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@class NSString;

@interface AWDPushSent : PBCodable <NSCopying> {
    unsigned long long _timestamp;
    unsigned int _connectionType;
    unsigned int _dualChannelState;
    unsigned int _error;
    unsigned int _flushes;
    NSString *_guid;
    int _linkQuality;
    unsigned int _payloadSize;
    unsigned int _sendDuration;
    struct { 
        unsigned int timestamp : 1; 
        unsigned int connectionType : 1; 
        unsigned int dualChannelState : 1; 
        unsigned int error : 1; 
        unsigned int flushes : 1; 
        unsigned int linkQuality : 1; 
        unsigned int payloadSize : 1; 
        unsigned int sendDuration : 1; 
    } _has;
}

@property(readonly) bool hasGuid;
@property(retain) NSString * guid;
@property bool hasTimestamp;
@property unsigned long long timestamp;
@property bool hasConnectionType;
@property unsigned int connectionType;
@property bool hasLinkQuality;
@property int linkQuality;
@property bool hasFlushes;
@property unsigned int flushes;
@property bool hasSendDuration;
@property unsigned int sendDuration;
@property bool hasPayloadSize;
@property unsigned int payloadSize;
@property bool hasError;
@property unsigned int error;
@property bool hasDualChannelState;
@property unsigned int dualChannelState;


- (unsigned int)dualChannelState;
- (unsigned int)payloadSize;
- (unsigned int)sendDuration;
- (unsigned int)flushes;
- (int)linkQuality;
- (bool)hasDualChannelState;
- (void)setHasDualChannelState:(bool)arg1;
- (void)setDualChannelState:(unsigned int)arg1;
- (void)setHasError:(bool)arg1;
- (bool)hasPayloadSize;
- (void)setHasPayloadSize:(bool)arg1;
- (void)setPayloadSize:(unsigned int)arg1;
- (bool)hasSendDuration;
- (void)setHasSendDuration:(bool)arg1;
- (void)setSendDuration:(unsigned int)arg1;
- (bool)hasFlushes;
- (void)setHasFlushes:(bool)arg1;
- (void)setFlushes:(unsigned int)arg1;
- (bool)hasLinkQuality;
- (void)setHasLinkQuality:(bool)arg1;
- (void)setLinkQuality:(int)arg1;
- (bool)hasConnectionType;
- (void)setHasConnectionType:(bool)arg1;
- (bool)hasGuid;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)guid;
- (void)setError:(unsigned int)arg1;
- (unsigned int)error;
- (void)setHasTimestamp:(bool)arg1;
- (void)setConnectionType:(unsigned int)arg1;
- (unsigned int)connectionType;
- (bool)hasTimestamp;
- (bool)hasError;
- (void)setGuid:(id)arg1;
- (id)dictionaryRepresentation;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (unsigned long long)timestamp;
- (id)description;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)dealloc;

@end