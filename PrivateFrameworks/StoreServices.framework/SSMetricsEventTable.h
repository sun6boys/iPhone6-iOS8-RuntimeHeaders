/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@class SSSQLiteDatabase;

@interface SSMetricsEventTable : NSObject  {
    SSSQLiteDatabase *_database;
}

+ (id)databasePath;

- (void)performTransctionWithBlock:(id)arg1;
- (bool)_setupDatabase;
- (id)init;
- (void)dealloc;
- (id)initWithDatabase:(id)arg1;

@end