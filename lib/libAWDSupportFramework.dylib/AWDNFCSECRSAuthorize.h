/* Generated by RuntimeBrowser.
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@class NSData;

@interface AWDNFCSECRSAuthorize : PBCodable <NSCopying> {
    unsigned long long _timeDeltaFromReference;
    unsigned long long _timestamp;
    NSData *_aid;
    unsigned int _method;
    unsigned int _status;
    NSData *_uuidReference;
    bool_activated;
    struct { 
        unsigned int timeDeltaFromReference : 1; 
        unsigned int timestamp : 1; 
        unsigned int method : 1; 
        unsigned int status : 1; 
        unsigned int activated : 1; 
    } _has;
}

@property bool hasTimestamp;
@property unsigned long long timestamp;
@property bool hasStatus;
@property unsigned int status;
@property bool hasMethod;
@property unsigned int method;
@property bool hasActivated;
@property bool activated;
@property(readonly) bool hasAid;
@property(retain) NSData * aid;
@property(readonly) bool hasUuidReference;
@property(retain) NSData * uuidReference;
@property bool hasTimeDeltaFromReference;
@property unsigned long long timeDeltaFromReference;


- (bool)hasActivated;
- (void)setHasActivated:(bool)arg1;
- (bool)hasMethod;
- (void)setHasMethod:(bool)arg1;
- (id)aid;
- (bool)hasAid;
- (void)setAid:(id)arg1;
- (unsigned long long)timeDeltaFromReference;
- (id)uuidReference;
- (bool)hasTimeDeltaFromReference;
- (void)setHasTimeDeltaFromReference:(bool)arg1;
- (void)setTimeDeltaFromReference:(unsigned long long)arg1;
- (bool)hasUuidReference;
- (void)setUuidReference:(id)arg1;
- (void)setMethod:(unsigned int)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (bool)hasTimestamp;
- (bool)hasStatus;
- (void)setHasStatus:(bool)arg1;
- (void)setStatus:(unsigned int)arg1;
- (unsigned int)status;
- (void)setActivated:(bool)arg1;
- (bool)activated;
- (unsigned int)method;
- (id)dictionaryRepresentation;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (unsigned long long)timestamp;
- (id)description;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)dealloc;

@end