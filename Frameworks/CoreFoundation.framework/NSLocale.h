/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

@interface NSLocale : NSObject <NSCopying, NSSecureCoding> {
}

+ (id)ISOLanguageCodes;
+ (id)availableLocaleIdentifiers;
+ (id)componentsFromLocaleIdentifier:(id)arg1;
+ (id)canonicalLanguageIdentifierFromString:(id)arg1;
+ (id)localeWithLocaleIdentifier:(id)arg1;
+ (id)preferredLanguages;
+ (id)localeIdentifierFromComponents:(id)arg1;
+ (id)systemLocale;
+ (id)currentLocale;
+ (bool)supportsSecureCoding;
+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (id)internetServicesRegion;
+ (unsigned long long)lineDirectionForLanguage:(id)arg1;
+ (unsigned long long)characterDirectionForLanguage:(id)arg1;
+ (unsigned int)windowsLocaleCodeFromLocaleIdentifier:(id)arg1;
+ (id)localeIdentifierFromWindowsLocaleCode:(unsigned int)arg1;
+ (id)canonicalLocaleIdentifierFromString:(id)arg1;
+ (id)commonISOCurrencyCodes;
+ (id)ISOCurrencyCodes;
+ (id)ISOCountryCodes;
+ (id)autoupdatingCurrentLocale;
+ (id)mostPreferredLanguageOf:(id)arg1 forUsage:(unsigned long long)arg2 options:(unsigned long long)arg3;
+ (void)registerPreferredLanguage:(id)arg1 usage:(unsigned long long)arg2 confidence:(float)arg3;
+ (void)setPreferredLanguages:(id)arg1;
+ (id)systemLanguages;
+ (id)mostPreferredLanguageOf:(id)arg1 withPreferredLanguages:(id)arg2 forUsage:(unsigned long long)arg3 options:(unsigned long long)arg4;
+ (id)localeForBundleLanguage:(id)arg1;

- (id)objectForKey:(id)arg1;
- (id)displayNameForKey:(id)arg1 value:(id)arg2;
- (id)initWithLocaleIdentifier:(id)arg1;
- (id)localeIdentifier;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)identifier;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (unsigned long long)_cfTypeID;
- (id)_copyDisplayNameForKey:(id)arg1 value:(id)arg2;
- (id)_prefs;
- (void)_setNullLocale;
- (unsigned char)_nullLocale;
- (Class)classForCoder;
- (id)debugDescription;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end