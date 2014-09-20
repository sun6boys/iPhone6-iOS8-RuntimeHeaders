/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSPlaceholderMutableString : NSMutableString  {
}


- (oneway void)release;
- (id)initWithCharactersNoCopy:(unsigned short*)arg1 length:(unsigned long long)arg2 freeWhenDone:(bool)arg3;
- (id)initWithBytesNoCopy:(void*)arg1 length:(unsigned long long)arg2 encoding:(unsigned long long)arg3 freeWhenDone:(bool)arg4;
- (id)initWithCString:(const char *)arg1 encoding:(unsigned long long)arg2;
- (id)initWithUTF8String:(const char *)arg1;
- (void)replaceCharactersInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 withString:(id)arg2;
- (unsigned short)characterAtIndex:(unsigned long long)arg1;
- (id)initWithString:(id)arg1;
- (bool)_isDeallocating;
- (bool)_tryRetain;
- (id)initWithCapacity:(unsigned long long)arg1;
- (unsigned long long)length;
- (id)initWithBytes:(const void*)arg1 length:(unsigned long long)arg2 encoding:(unsigned long long)arg3;
- (unsigned long long)retainCount;
- (id)autorelease;
- (id)init;
- (void)dealloc;
- (id)retain;
- (id)initWithCStringNoCopy:(char *)arg1 length:(unsigned long long)arg2 freeWhenDone:(bool)arg3;
- (id)initWithFormat:(id)arg1 locale:(id)arg2 arguments:(char *)arg3;

@end