/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@class NSManagedObjectModel, NSError, NSManagedObjectContext, NSDictionary, NSMigrationContext, NSMappingModel, NSEntityMapping;

@interface NSMigrationManager : NSObject  {
    NSManagedObjectModel *_sourceModel;
    NSDictionary *_sourceEntitiesByVersionHash;
    NSManagedObjectModel *_destinationModel;
    NSDictionary *_destinationEntitiesByVersionHash;
    NSMappingModel *_mappingModel;
    NSManagedObjectContext *_sourceManagedObjectContext;
    NSManagedObjectContext *_destinationManagedObjectContext;
    NSMigrationContext *_migrationContext;
    NSDictionary *_userInfo;
    struct _migrationManagerFlags { 
        unsigned int _migrationWasCancelled : 1; 
        unsigned int _usesStoreSpecificMigrationManager : 1; 
        unsigned int _reservedMigrationManager : 30; 
    } _migrationManagerFlags;
    NSError *_migrationCancellationError;
    id _reserved1;
    id _reserved2;
    id _reserved3;
    id _reserved4;
}

@property bool usesStoreSpecificMigrationManager;
@property(readonly) NSMappingModel * mappingModel;
@property(readonly) NSManagedObjectModel * sourceModel;
@property(readonly) NSManagedObjectModel * destinationModel;
@property(readonly) NSManagedObjectContext * sourceContext;
@property(readonly) NSManagedObjectContext * destinationContext;
@property(readonly) NSEntityMapping * currentEntityMapping;
@property(readonly) float migrationProgress;
@property(retain) NSDictionary * userInfo;

+ (void)setMigrationDebugLevel:(int)arg1;
+ (bool)_performSanityCheckForMapping:(id)arg1 fromSourceModel:(id)arg2 toDestinationModel:(id)arg3;
+ (int)migrationDebugLevel;

- (void)reset;
- (id)userInfo;
- (void)setUserInfo:(id)arg1;
- (void)dealloc;
- (void)setUsesStoreSpecificMigrationManager:(bool)arg1;
- (void)cancelMigrationWithError:(id)arg1;
- (float)migrationProgress;
- (id)destinationInstancesForSourceRelationshipNamed:(id)arg1 sourceInstances:(id)arg2;
- (id)destinationInstancesForEntityMappingNamed:(id)arg1 sourceInstances:(id)arg2;
- (id)sourceContext;
- (id)mappingModel;
- (id)sourceEntityForEntityMapping:(id)arg1;
- (bool)migrateStoreFromURL:(id)arg1 type:(id)arg2 options:(id)arg3 withMappingModel:(id)arg4 toDestinationURL:(id)arg5 destinationType:(id)arg6 destinationOptions:(id)arg7 error:(id*)arg8;
- (id)destinationModel;
- (id)sourceModel;
- (bool)usesStoreSpecificMigrationManager;
- (id)currentPropertyMapping;
- (id)currentEntityMapping;
- (id)destinationEntityForEntityMapping:(id)arg1;
- (id)sourceInstancesForEntityMappingNamed:(id)arg1 destinationInstances:(id)arg2;
- (void)associateSourceInstance:(id)arg1 withDestinationInstance:(id)arg2 forEntityMapping:(id)arg3;
- (id)destinationContext;
- (id)initWithSourceModel:(id)arg1 destinationModel:(id)arg2;
- (id)fetchRequestForSourceEntityNamed:(id)arg1 predicateString:(id)arg2;
- (bool)_doThirdPassForMapping:(id)arg1 error:(id*)arg2;
- (bool)_validateAllObjectsAfterMigration:(id*)arg1;
- (bool)_doSecondPassForMapping:(id)arg1 error:(id*)arg2;
- (bool)_doFirstPassForMapping:(id)arg1 error:(id*)arg2;
- (id)_evaluateSourceExpressionForMapping:(id)arg1 entityPolicy:(id)arg2;
- (id)fetchRequestForSourceEntityNamed:(id)arg1 predicateString:(id)arg2 includesSubentities:(bool)arg3;
- (id)_mappingNamed:(id)arg1;
- (bool)_migrateStoreFromURL:(id)arg1 type:(id)arg2 options:(id)arg3 withMappingModel:(id)arg4 toDestinationURL:(id)arg5 destinationType:(id)arg6 destinationOptions:(id)arg7 error:(id*)arg8;
- (void)_doCleanupOnFailure:(id)arg1;
- (id)_migrationContext;

@end