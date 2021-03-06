/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class NSString, NSArray, AVAssetTrack, NSLocale, AVMediaSelectionOptionInternal;

@interface AVMediaSelectionOption : NSObject <NSCopying> {
    AVMediaSelectionOptionInternal *_mediaSelectionOption;
}

@property(readonly) NSString * mediaType;
@property(readonly) NSArray * mediaSubTypes;
@property(getter=isPlayable,readonly) bool playable;
@property(readonly) NSString * extendedLanguageTag;
@property(readonly) NSLocale * locale;
@property(readonly) NSArray * commonMetadata;
@property(readonly) NSArray * availableMetadataFormats;
@property(readonly) NSString * displayName;
@property(readonly) AVAssetTrack * track;
@property(readonly) int trackID;

+ (id)mediaSelectionOptionForAsset:(id)arg1 group:(id)arg2 dictionary:(id)arg3 hasUnderlyingTrack:(bool)arg4;

- (id)outOfBandSource;
- (id)outOfBandIdentifier;
- (id)extendedLanguageTag;
- (int)trackID;
- (bool)hasMediaCharacteristic:(id)arg1;
- (id)mediaType;
- (id)commonMetadata;
- (id)group;
- (id)displayName;
- (id)locale;
- (id)_title;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionary;
- (id)description;
- (id)init;
- (void)dealloc;
- (id)mediaSubTypes;
- (bool)isPlayable;
- (id)associatedMediaSelectionOptionInMediaSelectionGroup:(id)arg1;
- (id)propertyList;
- (id)displayNameWithLocale:(id)arg1;
- (id)displayNameWithLocale:(id)arg1 fallingBackToMatchingUndeterminedAndMultilingual:(bool)arg2;
- (id)_preferredMetadataTitleAccordingToPreferredLanguages:(id)arg1 fallingBackToMatchingEmptyLocale:(bool)arg2;
- (id)associatedExtendedLanguageTag;
- (id)associatedPersistentIDs;
- (id)optionID;
- (bool)displaysNonForcedSubtitles;
- (bool)_isDesignatedDefault;
- (id)_ancillaryDescription;
- (id)track;
- (id)_groupID;
- (id)_groupMediaType;
- (id)metadataForFormat:(id)arg1;
- (id)availableMetadataFormats;

@end
