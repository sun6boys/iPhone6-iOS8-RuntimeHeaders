/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
 */

@class NSString;

@interface CLSilo : NSObject <NSCopying> {
    NSString *_identifier;
}

@property(readonly) NSString * identifier;

+ (id)main;

- (void).cxx_destruct;
- (id)initWithIdentifier:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)identifier;
- (id)debugDescription;
- (void)afterInterval:(double)arg1 async:(id)arg2;
- (id)newTimer;
- (void)assertOutside;
- (void)assertInside;
- (void)async:(id)arg1;
- (void)sync:(id)arg1;

@end