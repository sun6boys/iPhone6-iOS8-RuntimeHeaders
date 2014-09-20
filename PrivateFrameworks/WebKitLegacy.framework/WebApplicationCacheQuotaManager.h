/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
 */

@class WebSecurityOrigin;

@interface WebApplicationCacheQuotaManager : NSObject <WebQuotaManager> {
    WebSecurityOrigin *_origin;
}


- (unsigned long long)usage;
- (unsigned long long)quota;
- (id)initWithOrigin:(id)arg1;
- (void)setQuota:(unsigned long long)arg1;
- (id)origin;

@end