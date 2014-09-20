/* Generated by RuntimeBrowser.
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDRATConnectedPower : PBCodable <NSCopying> {
    unsigned int _powerConnSetupMicroWatt;
    unsigned int _powerConnectedMicroWatt;
    int _rAT;
    struct { 
        unsigned int powerConnSetupMicroWatt : 1; 
        unsigned int powerConnectedMicroWatt : 1; 
        unsigned int rAT : 1; 
    } _has;
}

@property bool hasRAT;
@property int rAT;
@property bool hasPowerConnectedMicroWatt;
@property unsigned int powerConnectedMicroWatt;
@property bool hasPowerConnSetupMicroWatt;
@property unsigned int powerConnSetupMicroWatt;


- (unsigned int)powerConnSetupMicroWatt;
- (unsigned int)powerConnectedMicroWatt;
- (bool)hasPowerConnSetupMicroWatt;
- (void)setHasPowerConnSetupMicroWatt:(bool)arg1;
- (bool)hasPowerConnectedMicroWatt;
- (void)setHasPowerConnectedMicroWatt:(bool)arg1;
- (int)rAT;
- (bool)hasRAT;
- (void)setHasRAT:(bool)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (void)setPowerConnectedMicroWatt:(unsigned int)arg1;
- (void)setPowerConnSetupMicroWatt:(unsigned int)arg1;
- (void)setRAT:(int)arg1;
- (id)dictionaryRepresentation;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;

@end