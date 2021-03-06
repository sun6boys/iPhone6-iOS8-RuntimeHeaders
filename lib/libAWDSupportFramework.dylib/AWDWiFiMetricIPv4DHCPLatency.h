/* Generated by RuntimeBrowser.
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDWiFiMetricIPv4DHCPLatency : PBCodable <NSCopying> {
    unsigned long long _timestamp;
    unsigned int _dhcpLatencyMilliSecs;
    unsigned int _dhcpLeaseMins;
    unsigned int _securityType;
    struct { 
        unsigned int timestamp : 1; 
        unsigned int dhcpLatencyMilliSecs : 1; 
        unsigned int dhcpLeaseMins : 1; 
        unsigned int securityType : 1; 
    } _has;
}

@property bool hasDhcpLatencyMilliSecs;
@property unsigned int dhcpLatencyMilliSecs;
@property bool hasSecurityType;
@property unsigned int securityType;
@property bool hasDhcpLeaseMins;
@property unsigned int dhcpLeaseMins;
@property bool hasTimestamp;
@property unsigned long long timestamp;


- (unsigned int)dhcpLeaseMins;
- (unsigned int)dhcpLatencyMilliSecs;
- (bool)hasDhcpLeaseMins;
- (void)setHasDhcpLeaseMins:(bool)arg1;
- (void)setDhcpLeaseMins:(unsigned int)arg1;
- (bool)hasDhcpLatencyMilliSecs;
- (void)setHasDhcpLatencyMilliSecs:(bool)arg1;
- (void)setDhcpLatencyMilliSecs:(unsigned int)arg1;
- (unsigned int)securityType;
- (bool)hasSecurityType;
- (void)setHasSecurityType:(bool)arg1;
- (void)setSecurityType:(unsigned int)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (bool)hasTimestamp;
- (id)dictionaryRepresentation;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (unsigned long long)timestamp;
- (id)description;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;

@end
