/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@class SSAuthenticationContext, NSString, SSLookupProperties;

@interface SSLookupRequest : SSRequest <SSXPCCoding> {
    SSAuthenticationContext *_authenticationContext;
    long long _personalizationStyle;
    SSLookupProperties *_properties;
    long long _resultFilters;
}

@property(copy) NSString * keyProfile;
@property long long localizationStyle;
@property(copy) SSAuthenticationContext * authenticationContext;
@property bool authenticatesIfNeeded;
@property long long personalizationStyle;
@property long long resultFilters;
@property(copy,readonly) SSLookupProperties * _lookupProperties;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;


- (void)setAuthenticatesIfNeeded:(bool)arg1;
- (bool)authenticatesIfNeeded;
- (long long)localizationStyle;
- (long long)personalizationStyle;
- (id)valueForRequestParameter:(id)arg1;
- (id)authenticationContext;
- (void)setResultFilters:(long long)arg1;
- (long long)resultFilters;
- (void)_setTimeoutInterval:(id)arg1;
- (id)_lookupProperties;
- (id)keyProfile;
- (id)copyXPCEncoding;
- (id)initWithXPCEncoding:(id)arg1;
- (bool)start;
- (id)init;
- (void)dealloc;
- (void)startWithLookupBlock:(id)arg1;
- (void)setValue:(id)arg1 forRequestParameter:(id)arg2;
- (void)setLocalizationStyle:(long long)arg1;
- (void)setPersonalizationStyle:(long long)arg1;
- (void)setKeyProfile:(id)arg1;
- (void)startWithCompletionBlock:(id)arg1;
- (void)setAuthenticationContext:(id)arg1;
- (id)initWithLocation:(id)arg1;

@end