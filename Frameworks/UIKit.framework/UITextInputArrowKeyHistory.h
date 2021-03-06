/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UITextPosition;

@interface UITextInputArrowKeyHistory : NSObject  {
    UITextPosition *startPosition;
    long long amount;
    int anchor;
    UITextPosition *start;
    UITextPosition *end;
    UITextPosition *cursor;
    boolaffinityDownstream;
}

@property(retain) UITextPosition * startPosition;
@property int anchor;
@property(retain) UITextPosition * start;
@property(retain) UITextPosition * end;
@property(retain) UITextPosition * cursor;
@property bool affinityDownstream;
@property long long amount;


- (long long)amount;
- (void)setAmount:(long long)arg1;
- (void)setAffinityDownstream:(bool)arg1;
- (void)setCursor:(id)arg1;
- (bool)affinityDownstream;
- (void)setAnchor:(int)arg1;
- (int)anchor;
- (id)cursor;
- (void)setStartPosition:(id)arg1;
- (void)setEnd:(id)arg1;
- (void)setStart:(id)arg1;
- (id)end;
- (id)start;
- (id)startPosition;
- (void)dealloc;

@end
