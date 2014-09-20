/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSString, NSArray;

@interface UIDictationPhrase : NSObject  {
    NSString *_text;
    NSArray *_alternativeInterpretations;
}

@property(readonly) NSString * text;
@property(readonly) NSArray * alternativeInterpretations;

+ (id)phraseWithText:(id)arg1 alternativeInterpretations:(id)arg2;

- (id)alternativeInterpretations;
- (id)initWithText:(id)arg1 alternativeInterpretations:(id)arg2;
- (id)text;
- (id)description;
- (void)dealloc;

@end