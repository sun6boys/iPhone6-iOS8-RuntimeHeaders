/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@class NSString;

@interface SSMetricsPageEvent : SSMetricsBaseEvent  {
}

@property(getter=isCachedResponse) bool cachedResponse;
@property(retain) NSString * navigationType;
@property double pageRenderTime;
@property(retain) NSString * referringAppName;
@property(retain) NSString * referringURL;
@property double requestEndTime;
@property double requestStartTime;
@property double responseEndTime;
@property double responseStartTime;
@property(retain) NSString * searchTerm;
@property(retain) NSString * serverApplicationInstance;
@property(retain) NSString * serverTiming;
@property(getter=isUbered) bool ubered;
@property(retain) NSString * pageHistoryDescription;


- (void)setRequestEndTime:(double)arg1;
- (void)setPageHistoryDescriptionWithIdentifiers:(id)arg1;
- (void)setCachedResponse:(bool)arg1;
- (id)serverTiming;
- (double)requestEndTime;
- (id)referringURL;
- (id)referringAppName;
- (double)pageRenderTime;
- (id)pageHistoryDescription;
- (bool)isUbered;
- (bool)isCachedResponse;
- (id)serverApplicationInstance;
- (void)setPageHistoryDescription:(id)arg1;
- (void)setServerTiming:(id)arg1;
- (void)setServerApplicationInstance:(id)arg1;
- (void)setRequestStartTime:(double)arg1;
- (void)setResponseEndTime:(double)arg1;
- (void)setReferringURL:(id)arg1;
- (void)setReferringAppName:(id)arg1;
- (void)setResponseStartTime:(double)arg1;
- (double)responseEndTime;
- (double)responseStartTime;
- (double)requestStartTime;
- (void)setUbered:(bool)arg1;
- (void)setNavigationType:(id)arg1;
- (void)setPageRenderTime:(double)arg1;
- (id)navigationType;
- (id)description;
- (id)init;
- (void)setSearchTerm:(id)arg1;
- (id)searchTerm;

@end
