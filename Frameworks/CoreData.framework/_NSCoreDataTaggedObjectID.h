/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface _NSCoreDataTaggedObjectID : _NSScalarObjectID  {
}

+ (id)alloc;
+ (void)initialize;
+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (void)_storeDeallocated;
+ (id)_storeInfo1;
+ (void)_setStoreInfo1:(id)arg1;
+ (id)managedObjectIDFromURIRepresentation:(id)arg1;
+ (unsigned int)allocateBatch:(id*)arg1 count:(unsigned int)arg2;
+ (Class)classWithStore:(id)arg1 andEntity:(id)arg2;
+ (void)setObjectStoreIdentifier:(id)arg1;

- (oneway void)release;
- (bool)isTemporaryID;
- (id)entity;
- (id)entityName;
- (id)initWithObject:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)hash;
- (unsigned long long)retainCount;
- (bool)isEqual:(id)arg1;
- (id)copy;
- (void)dealloc;
- (id)retain;
- (bool)_isPersistentStoreAlive;
- (id)_storeIdentifier;
- (id)_storeInfo1;
- (id)_referenceData;
- (id)_retainedURIString;
- (id)initWithPK64:(long long)arg1;
- (long long)_referenceData64;
- (id)persistentStore;

@end
