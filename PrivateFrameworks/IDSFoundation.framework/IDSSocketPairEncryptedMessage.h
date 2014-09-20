/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
 */

@class NSData;

@interface IDSSocketPairEncryptedMessage : IDSSocketPairMessage  {
    NSData *_data;
}

@property(retain,readonly) NSData * data;


- (id)_nonHeaderData;
- (id)initWithCommand:(unsigned char)arg1 underlyingData:(id)arg2;
- (id)initWithData:(id)arg1;
- (id)data;
- (void)dealloc;
- (unsigned char)command;

@end