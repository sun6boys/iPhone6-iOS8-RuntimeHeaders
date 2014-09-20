/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class NSArray, AVPlayerItemErrorLogInternal;

@interface AVPlayerItemErrorLog : NSObject <NSCopying> {
    AVPlayerItemErrorLogInternal *_playerItemErrorLog;
}

@property(readonly) unsigned long long extendedLogDataStringEncoding;
@property(readonly) NSArray * events;


- (unsigned long long)extendedLogDataStringEncoding;
- (id)extendedLogData;
- (void)finalize;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)init;
- (void)dealloc;
- (id)events;
- (id)_errorLogArray;
- (id)initWithLogArray:(id)arg1;

@end