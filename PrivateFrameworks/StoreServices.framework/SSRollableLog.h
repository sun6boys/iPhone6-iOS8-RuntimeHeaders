/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@class NSObject<OS_dispatch_source>, NSFileHandle, NSObject<OS_dispatch_queue>, SSLogFileOptions;

@interface SSRollableLog : NSObject  {
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    double _lastFileStatTime;
    NSFileHandle *_fileHandle;
    NSObject<OS_dispatch_source> *_fileObserverSource;
    SSLogFileOptions *_options;
}

@property(readonly) SSLogFileOptions * logOptions;


- (id)logOptions;
- (void)_rollLogFiles;
- (id)_activeLogFilePath;
- (id)_logFilePathWithIndex:(long long)arg1;
- (void)_closeLogFile;
- (void)_checkLogFileSize;
- (void)_openLogFile;
- (id)initWithLogOptions:(id)arg1;
- (void)writeString:(id)arg1;
- (void)dealloc;

@end