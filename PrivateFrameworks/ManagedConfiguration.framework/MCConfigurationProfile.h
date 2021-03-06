/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

@class NSArray, MCProfileServiceProfile;

@interface MCConfigurationProfile : MCProfile  {
    NSArray *_payloads;
    NSArray *_managedPayloads;
    bool_isCloudProfile;
    bool_isCloudLocked;
    bool_isMDMProfile;
    MCProfileServiceProfile *_OTAProfile;
}

@property(retain) MCProfileServiceProfile * OTAProfile;
@property bool isCloudProfile;
@property bool isCloudLocked;
@property bool isMDMProfile;


- (void)setIsMDMProfile:(bool)arg1;
- (bool)isMDMProfile;
- (void)setIsCloudLocked:(bool)arg1;
- (bool)isCloudLocked;
- (void)setIsCloudProfile:(bool)arg1;
- (bool)isCloudProfile;
- (void)setOTAProfile:(id)arg1;
- (id)OTAProfile;
- (id)earliestCertificateExpiryDate;
- (id)localizedManagedPayloadSummaryByType;
- (id)localizedPayloadSummaryByType;
- (bool)isManagedByProfileService;
- (id)subjectSummaryFromCertificateWithPersistentID:(id)arg1;
- (id)subjectSummaryFromCertificatePayloadWithUUID:(id)arg1;
- (id)managedPayloads;
- (id)_localizedPayloadSummaryByType:(id)arg1;
- (id)installationWarningsIncludeUnsignedProfileWarning:(bool)arg1;
- (void)_sortPayloads;
- (id)initWithDictionary:(id)arg1 allowEmptyPayload:(bool)arg2 outError:(id*)arg3;
- (id)_subjectSummaryFromCertificate:(struct __SecCertificate { }*)arg1;
- (struct __SecCertificate { }*)copyCertificateFromPayloadWithUUID:(id)arg1;
- (id)payloadWithUUID:(id)arg1;
- (id)payloads;
- (id)_sortPayloads:(id)arg1;
- (void)_addObjectsOfClass:(Class)arg1 fromArray:(id)arg2 toArray:(id)arg3;
- (id)stubDictionary;
- (struct __SecCertificate { }*)copyCertificateWithPersistentID:(id)arg1;
- (void).cxx_destruct;
- (id)description;

@end
