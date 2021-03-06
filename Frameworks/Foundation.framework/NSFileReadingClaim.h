/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@class NSURL, NSFileAccessNode;

@interface NSFileReadingClaim : NSFileAccessClaim  {
    NSURL *_url;
    bool_urlDidChange;
    unsigned long long _options;
    NSFileAccessNode *_location;
    NSFileAccessNode *_rootNode;
    long long _linkResolutionCount;
}


- (void)dealloc;
- (id)initWithPurposeID:(id)arg1 url:(id)arg2 options:(unsigned long long)arg3 claimer:(id)arg4;
- (void)resolveURLThenMaybeContinueInvokingClaimer:(id)arg1;
- (bool)shouldBeRevokedPriorToInvokingAccessor;
- (bool)isBlockedByWritingItemAtLocation:(id)arg1 options:(unsigned long long)arg2;
- (bool)isBlockedByReadingItemAtLocation:(id)arg1 options:(unsigned long long)arg2;
- (void)devalueSelf;
- (bool)blocksClaim:(id)arg1;
- (void)invokeClaimer;
- (void)granted;
- (id)initWithClient:(id)arg1 messageParameters:(id)arg2 replySender:(id)arg3;
- (void)itemAtLocation:(id)arg1 wasReplacedByItemAtLocation:(id)arg2;
- (void)forwardUsingMessageSender:(id)arg1 crashHandler:(id)arg2;
- (bool)evaluateSelfWithRootNode:(id)arg1 checkSubarbitrability:(bool)arg2;

@end
