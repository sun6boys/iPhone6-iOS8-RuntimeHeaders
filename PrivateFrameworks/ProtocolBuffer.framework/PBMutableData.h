/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/ProtocolBuffer.framework/ProtocolBuffer
 */

@interface PBMutableData : NSMutableData  {
    char *p;
    char *buffer;
    char *end;
}


- (void)_pb_growCapacityBy:(unsigned long long)arg1;
- (void*)mutableBytes;
- (void)setLength:(unsigned long long)arg1;
- (const void*)bytes;
- (id)initWithCapacity:(unsigned long long)arg1;
- (unsigned long long)length;
- (void)dealloc;

@end