/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSCFData : NSMutableData  {
    unsigned char _cfinfo[4];
    unsigned int _rc;
    long long _length;
    long long _capacity;
    struct __CFAllocator { } *_bytesDeallocator;
    char *_bytes;
}

+ (bool)automaticallyNotifiesObserversForKey:(id)arg1;

- (void)finalize;
- (oneway void)release;
- (void*)mutableBytes;
- (bool)retainWeakReference;
- (bool)allowsWeakReference;
- (void)setLength:(unsigned long long)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (const void*)bytes;
- (unsigned long long)length;
- (unsigned long long)hash;
- (unsigned long long)retainCount;
- (bool)isEqual:(id)arg1;
- (id)retain;
- (bool)_compact;

@end
