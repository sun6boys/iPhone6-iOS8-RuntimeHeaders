/* Generated by RuntimeBrowser.
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@class NSString;

@interface AWDPushConnectionDisconnected : PBCodable <NSCopying> {
    unsigned long long _timestamp;
    unsigned int _connectionType;
    unsigned int _error;
    int _genericError;
    NSString *_guid;
    int _linkQuality;
    unsigned int _sslError;
    struct { 
        unsigned int timestamp : 1; 
        unsigned int connectionType : 1; 
        unsigned int error : 1; 
        unsigned int genericError : 1; 
        unsigned int linkQuality : 1; 
        unsigned int sslError : 1; 
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
@property bool hasError;
@property unsigned int error;
@property bool hasSslError;
@property unsigned int sslError;
@property bool hasGenericError;
@property int genericError;


- (unsigned int)sslError;
- (bool)hasSslError;
- (void)setHasSslError:(bool)arg1;
- (void)setSslError:(unsigned int)arg1;
- (int)genericError;
- (bool)hasGenericError;
- (void)setHasGenericError:(bool)arg1;
- (void)setGenericError:(int)arg1;
- (int)linkQuality;
- (void)setHasError:(bool)arg1;
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
