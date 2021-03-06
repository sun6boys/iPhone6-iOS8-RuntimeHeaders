/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@class NSSQLEntity, NSMutableDictionary, NSString, NSMutableSet, NSMutableArray, NSSQLiteStatement;

@interface NSSQLiteConnection : NSSQLConnection  {
    struct sqlite3 { } *_db;
    struct sqlite3_stmt { } *_vmstatement;
    int _rowsProcessedCount;
    unsigned int _lastEntityKey;
    NSSQLEntity *_finalEntity;
    NSSQLEntity *_lastEntity;
    struct sqlite3_stmt { } *_fetchPKStatement;
    struct sqlite3_stmt { } *_updatePKStatement;
    NSSQLiteStatement *_beginStatement;
    NSSQLiteStatement *_commitStatement;
    NSSQLiteStatement *_rollbackStatement;
    NSMutableSet *_vmCachedStatements;
    NSMutableDictionary *_pragmaSettings;
    struct __CFDictionary { } *_cachedEntityUpdateStatements;
    double _timeOutOption;
    double _timeOutIncrement;
    void *_extraBuffersForRegisteredFunctions[5];
    NSString *_dbPathRegisteredWithBackupd;
    long long _vacuumTracker;
    NSMutableArray *_temporaryTables;
    struct __sqliteConnectionFlags { 
        unsigned int _readyToBind : 1; 
        unsigned int _fetchInProgress : 1; 
        unsigned int _fileSystemType : 2; 
        unsigned int _proxyLocking : 1; 
        unsigned int _vacuumSetupNeeded : 1; 
        unsigned int _usingWAL : 1; 
        unsigned int _disallowReconnect : 1; 
        unsigned int _reserved : 24; 
    } _sqliteConnectionFlags;
    unsigned long long _debugInode;
}

+ (void)initialize;
+ (void)__INode_Changed_AllThatIsLeftToUsIsHonor__;
+ (void)_setDebugFlags:(int)arg1;
+ (const char *)_databaseOpenURLStringForURL:(id)arg1;
+ (int)openAtPath:(const char *)arg1 handle:(struct sqlite3 {}**)arg2 flags:(int)arg3 module:(const char *)arg4;
+ (int)readMagicWordFromPath:(const char *)arg1;
+ (bool)_destroyPersistentStoreAtURL:(id)arg1 options:(id)arg2 error:(id*)arg3;
+ (bool)_replacePersistentStoreAtURL:(id)arg1 destinationOptions:(id)arg2 withPersistentStoreFromURL:(id)arg3 sourceOptions:(id)arg4 error:(id*)arg5;

- (void)deleteRow:(id)arg1;
- (void)insertRow:(id)arg1;
- (void)finalize;
- (void)execute;
- (bool)isOpen;
- (void)beginTransaction;
- (void)disconnect;
- (void)connect;
- (void)commitTransaction;
- (void)dealloc;
- (void**)_buffersForRegisteredFunctions;
- (struct sqlite3_stmt { }*)_vmstatement;
- (void)deleteCorrelation:(id)arg1;
- (void)updateCorrelation:(id)arg1;
- (void)insertCorrelation:(id)arg1;
- (long long)_getCurrentAutoVacuumValue;
- (void)_configureAutoVacuum;
- (void)_configurePageSize;
- (bool)_hasTableWithName:(id)arg1;
- (void)handleCorruptedDB:(id)arg1;
- (id)_newValueForColumn:(id)arg1 atIndex:(unsigned int)arg2 inStatement:(struct sqlite3_stmt { }*)arg3;
- (void)_clearOtherStatements;
- (void)writeCorrelationReordersFromTracker:(id)arg1;
- (void)writeCorrelationMasterReordersFromTracker:(id)arg1;
- (void)writeCorrelationDeletesFromTracker:(id)arg1;
- (void)writeCorrelationInsertsFromTracker:(id)arg1;
- (void)executeCorrelationChangesForValue1:(unsigned long long)arg1 value2:(unsigned long long)arg2 value3:(unsigned long long)arg3 value4:(unsigned long long)arg4;
- (void)_bindVariablesWithDeletedRow:(id)arg1;
- (void)_clearBindVariablesForUpdateStatement:(id)arg1 forDeltasMask:(struct __CFBitVector { }*)arg2;
- (void)_bindVariablesWithUpdatedRow:(id)arg1 andOriginalRow:(id)arg2 forDeltasMask:(struct __CFBitVector { }*)arg3;
- (void)cacheUpdateStatement:(id)arg1 forEntity:(id)arg2 andDeltasMask:(struct __CFBitVector { }*)arg3;
- (id)cachedUpdateStatementForEntity:(id)arg1 andDeltasMask:(struct __CFBitVector { }*)arg2;
- (int)_rowsChangedByLastExecute;
- (void)_clearBindVariablesForInsertedRow;
- (void)_bindVariablesWithInsertedRow:(id)arg1;
- (void)_setupVacuumIfNecessary;
- (void)_ensureNoTransactionOpen;
- (void)_finalizeStatement;
- (void)_clearCachedStatements;
- (void)_clearTransactionCaches;
- (void)_configureUbiquityMetadataTable;
- (void)_configurePragmaOptions:(int)arg1 createdSchema:(bool)arg2;
- (void)_configureIntegrityCheck;
- (void)_configureSynchronousMode;
- (void)_registerExtraFunctions;
- (bool)performIntegrityCheck;
- (void)_executeSQLString:(id)arg1;
- (long long)_fetchMaxPrimaryKeyForEntity:(id)arg1;
- (void)_ensureDatabaseOpen;
- (void)_ensureNoFetchInProgress;
- (void)_ensureNoStatementPrepared;
- (bool)isLocalFS;
- (void)dropUbiquityTables;
- (id)ubiquityTableValueForKey:(id)arg1;
- (id)ubiquityTableKeysAndValues;
- (void)setUbiquityTableValue:(id)arg1 forKey:(id)arg2;
- (id)createMapOfEntityNameToPKMaxForEntities:(id)arg1;
- (id)createMapOfEntityNameToPKMaxForEntitiesFromPKTable:(id)arg1;
- (id)createMapOfEntityNameToPKMaxForEntitiesFromUBRangeTable:(id)arg1;
- (id)allPeerRanges;
- (void)addPeerRangeForPeerID:(id)arg1 entityName:(id)arg2 rangeStart:(id)arg3 rangeEnd:(id)arg4 peerRangeStart:(id)arg5 peerRangeEnd:(id)arg6;
- (void)addPeerRange:(id)arg1;
- (void)updateUbiquityKnowledgeForPeerWithID:(id)arg1 andTransactionNumber:(id)arg2;
- (void)updateUbiquityKnowledgeVector:(id)arg1;
- (id)fetchUbiquityKnowledgeVector;
- (void)_performPostSaveTasks;
- (bool)hasPrimaryKeyTable;
- (void)endPrimaryKeyGeneration;
- (void)prepareForPrimaryKeyGeneration;
- (long long)generatePrimaryKeysForEntity:(id)arg1 batch:(unsigned int)arg2;
- (id)newFetchUUIDSForSubentitiesRootedAt:(id)arg1;
- (id)fetchTableCreationSQL;
- (id)fetchTableNames;
- (long long)fetchMaxPrimaryKeyForEntity:(id)arg1;
- (struct __CFArray { }*)rawIntegerRowsForSQL:(id)arg1;
- (int)fetchResultSet:(void*)arg1 usingFetchPlan:(id)arg2;
- (id)describeResults;
- (void)setExclusiveLockingMode:(bool)arg1;
- (void)updateRow:(id)arg1;
- (void)writeCorrelationChangesFromTracker:(id)arg1;
- (bool)databaseIsEmpty;
- (bool)canConnect;
- (void)_forceDisconnectOnError;
- (id)initWithAdapter:(id)arg1;
- (id)newFetchedArray;
- (void)rollbackTransaction;
- (void)didCreateSchema;
- (bool)hasMetadataTable;
- (void)willCreateSchema;
- (void)releaseSQLStatement;
- (void)resetSQLStatement;
- (void)cacheCurrentDBStatementOn:(id)arg1;
- (void)prepareSQLStatement:(id)arg1;
- (void)bindTempTableForBindIntarray:(id)arg1;
- (bool)isFetchInProgress;
- (void)endFetch;
- (void)_endPowerAssertionWithAssert:(unsigned long long)arg1 andApp:(id)arg2;
- (id)_beginPowerAssertionWithAssert:(unsigned long long*)arg1;
- (id)_adapter;

@end
