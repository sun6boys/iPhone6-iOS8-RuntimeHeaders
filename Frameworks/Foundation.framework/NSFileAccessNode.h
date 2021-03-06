/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@class NSString, NSFileAccessNode, NSMutableDictionary;

@interface NSFileAccessNode : NSObject  {
    NSFileAccessNode *_parent;
    NSString *_name;
    NSString *_normalizedName;
    NSFileAccessNode *_symbolicLinkDestination;
    unsigned long long _symbolicLinkReferenceCount;
    NSMutableDictionary *_childrenByNormalizedName;
    id _presenterOrPresenters;
    id _provider;
    id _accessClaimOrClaims;
    bool_isArbitrationBoundary;
    bool_isFilePackageIsFigured;
    bool_isFilePackage;
    NSString *_lastRequestedChildName;
    NSFileAccessNode *_lastRequestedChild;
    id _progressPublisherOrPublishers;
    id _progressSubscriberOrSubscribers;
}


- (id)parent;
- (void)setProvider:(id)arg1;
- (id)standardizedURL;
- (id)url;
- (id)description;
- (void)dealloc;
- (void)assertDescendantsLive;
- (void)assertDead;
- (void)forEachProgressSubscriberOfItemOrContainingItemPerformProcedure:(id)arg1;
- (void)forEachProgressPublisherOfItemOrContainedItemPerformProcedure:(id)arg1;
- (void)removeProgressSubscriber:(id)arg1;
- (void)addProgressSubscriber:(id)arg1;
- (void)removeProgressPublisher:(id)arg1;
- (void)addProgressPublisher:(id)arg1;
- (void)removePresenter:(id)arg1;
- (void)addPresenter:(id)arg1;
- (id)descriptionWithIndenting:(id)arg1 excludingExcessNodes:(bool)arg2;
- (id)_childrenExcludingExcessNodes:(bool)arg1;
- (bool)_mayContainCriticalDebuggingInformation;
- (void)assertLive;
- (void)forEachProgressSubscriberOfItemPerformProcedure:(id)arg1;
- (id)pathExceptPrivate;
- (void)forEachAccessClaimOnItemPerformProcedure:(id)arg1;
- (id)biggestFilePackageLocation;
- (void)forEachDescendantPerformProcedure:(id)arg1;
- (id)childForRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 ofPath:(id)arg2;
- (void)setChild:(id)arg1 forName:(id)arg2 normalizedName:(id)arg3;
- (id)normalizationOfChildName:(id)arg1;
- (void)removeChildForNormalizedName:(id)arg1;
- (void)removeSelfIfUseless;
- (void)removeAccessClaim:(id)arg1;
- (void)addAccessClaim:(id)arg1;
- (bool)itemIsSubarbitrable;
- (void)forEachRelevantAccessClaimPerformProcedure:(id)arg1;
- (void)forEachPresenterOfContainedItemPerformProcedure:(id)arg1;
- (bool)itemIsFilePackage;
- (void)forEachPresenterOfItemPerformProcedure:(id)arg1;
- (void)forEachPresenterOfContainingFilePackagePerformProcedure:(id)arg1;
- (bool)itemIsInItemAtLocation:(id)arg1;
- (bool)itemIsItemAtLocation:(id)arg1;
- (void)forEachReactorToItemOrContainedItemPerformProcedure:(id)arg1;
- (id)sensitiveDescription;
- (void)setArbitrationBoundary;
- (void)forEachPresenterOfItemOrContainingItemPerformProcedure:(id)arg1;
- (void)forEachProgressThingOfItemOrContainedItemPerformProcedure:(id)arg1;
- (void)forEachAccessClaimOnItemOrContainedItemPerformProcedure:(id)arg1;
- (id)urlOfSubitemAtPath:(id)arg1 plusPath:(id)arg2;
- (void)forEachPresenterOfItemOrContainedItemPerformProcedure:(id)arg1;
- (void)setParent:(id)arg1 name:(id)arg2;
- (void)forEachProgressPublisherOfItemPerformProcedure:(id)arg1;
- (id)descendantAtPath:(id)arg1 componentRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 forAddingLeafNode:(id)arg3 create:(bool)arg4;
- (id)pathFromAncestor:(id)arg1;
- (id)itemProvider;
- (void)forEachPresenterOfContainingItemPerformProcedure:(id)arg1;
- (id)descendantAtPath:(id)arg1 componentRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 create:(bool)arg3;
- (id)pathToDescendantForFileURL:(id)arg1 componentRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; }*)arg2;
- (void)setSymbolicLinkDestination:(id)arg1;
- (id)descendantForFileURL:(id)arg1;
- (id)initWithParent:(id)arg1 name:(id)arg2 normalizedName:(id)arg3;

@end
