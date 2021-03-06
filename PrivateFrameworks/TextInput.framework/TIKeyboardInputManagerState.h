/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
 */

@class TIKeyboardBehaviors, NSString, TIKeyboardCandidate, TIKeyEventMap, TICharacterSetDescription;

@interface TIKeyboardInputManagerState : NSObject <NSCopying, NSSecureCoding> {
    TIKeyboardBehaviors *_keyboardBehaviors;
    union { 
        long long integerValue; 
        struct { 
            unsigned int canHandleKeyHitTest : 1; 
            unsigned int ignoresDeadKeys : 1; 
            unsigned int needsKeyHitTestResults : 1; 
            unsigned int shouldExtendPriorWord : 1; 
            unsigned int suppliesCompletions : 1; 
            unsigned int supportsNumberKeySelection : 1; 
            unsigned int supportsSetPhraseBoundary : 1; 
            unsigned int suppressCompletionsForFieldEditor : 1; 
            unsigned int usesAutoDeleteWord : 1; 
            unsigned int usesCandidateSelection : 1; 
            unsigned int commitsAcceptedCandidate : 1; 
            unsigned int nextInputWouldStartSentence : 1; 
            unsigned int inputStringIsExemptFromChecker : 1; 
            unsigned int suppressPlaceholderCandidate : 1; 
            unsigned int usesAutocorrectionLists : 1; 
        } fields; 
    } _mask;
    bool_shouldAddModifierSymbolsToWordCharacters;
    TIKeyboardCandidate *_autocorrectionRecordForInputString;
    NSString *_wordSeparator;
    unsigned long long _inputCount;
    unsigned long long _inputIndex;
    NSString *_inputString;
    TIKeyEventMap *_keyEventMap;
    NSString *_replacementForDoubleSpace;
    NSString *_shadowTyping;
    unsigned long long _initialCandidateBatchCount;
    TICharacterSetDescription *_wordCharacters;
    TICharacterSetDescription *_shortcutCompletions;
    TICharacterSetDescription *_inputsPreventingAcceptSelectedCandidate;
    TICharacterSetDescription *_inputsToReject;
    TICharacterSetDescription *_terminatorsPreventingAutocorrection;
    TICharacterSetDescription *_terminatorsDeletingAutospace;
    NSString *_searchStringForMarkedText;
}

@property bool canHandleKeyHitTest;
@property bool ignoresDeadKeys;
@property bool needsKeyHitTestResults;
@property bool shouldExtendPriorWord;
@property bool suppliesCompletions;
@property bool supportsNumberKeySelection;
@property bool supportsSetPhraseBoundary;
@property bool suppressCompletionsForFieldEditor;
@property bool usesAutoDeleteWord;
@property bool usesCandidateSelection;
@property bool usesAutocorrectionLists;
@property bool commitsAcceptedCandidate;
@property(copy) NSString * replacementForDoubleSpace;
@property(copy) NSString * wordSeparator;
@property unsigned long long initialCandidateBatchCount;
@property(retain) TIKeyboardBehaviors * keyboardBehaviors;
@property bool shouldAddModifierSymbolsToWordCharacters;
@property(copy) TICharacterSetDescription * wordCharacters;
@property(copy) TICharacterSetDescription * shortcutCompletions;
@property(copy) TICharacterSetDescription * inputsPreventingAcceptSelectedCandidate;
@property(copy) TICharacterSetDescription * inputsToReject;
@property(copy) TICharacterSetDescription * terminatorsPreventingAutocorrection;
@property(copy) TICharacterSetDescription * terminatorsDeletingAutospace;
@property(copy) NSString * inputString;
@property unsigned long long inputIndex;
@property unsigned long long inputCount;
@property bool nextInputWouldStartSentence;
@property bool inputStringIsExemptFromChecker;
@property bool suppressPlaceholderCandidate;
@property(retain) TIKeyboardCandidate * autocorrectionRecordForInputString;
@property(copy) NSString * shadowTyping;
@property(copy) NSString * searchStringForMarkedText;
@property(retain) TIKeyEventMap * keyEventMap;

+ (bool)supportsSecureCoding;

- (void)setSuppressPlaceholderCandidate:(bool)arg1;
- (void)setInputsToReject:(id)arg1;
- (id)inputsToReject;
- (void)setShortcutCompletions:(id)arg1;
- (void)setReplacementForDoubleSpace:(id)arg1;
- (void)setKeyEventMap:(id)arg1;
- (void)setShadowTyping:(id)arg1;
- (void)setNextInputWouldStartSentence:(bool)arg1;
- (void)setInputString:(id)arg1;
- (void)setKeyboardBehaviors:(id)arg1;
- (void)setTerminatorsDeletingAutospace:(id)arg1;
- (void)setTerminatorsPreventingAutocorrection:(id)arg1;
- (void)setWordCharacters:(id)arg1;
- (void)setShouldAddModifierSymbolsToWordCharacters:(bool)arg1;
- (void)setWordSeparator:(id)arg1;
- (void)setInitialCandidateBatchCount:(unsigned long long)arg1;
- (void)setCommitsAcceptedCandidate:(bool)arg1;
- (void)setUsesAutocorrectionLists:(bool)arg1;
- (void)setUsesAutoDeleteWord:(bool)arg1;
- (void)setSuppressCompletionsForFieldEditor:(bool)arg1;
- (void)setSupportsSetPhraseBoundary:(bool)arg1;
- (void)setSuppliesCompletions:(bool)arg1;
- (void)setShouldExtendPriorWord:(bool)arg1;
- (void)setNeedsKeyHitTestResults:(bool)arg1;
- (void)setIgnoresDeadKeys:(bool)arg1;
- (void)setCanHandleKeyHitTest:(bool)arg1;
- (id)terminatorsDeletingAutospace;
- (id)terminatorsPreventingAutocorrection;
- (id)wordCharacters;
- (bool)shouldAddModifierSymbolsToWordCharacters;
- (void)setInputIndex:(unsigned long long)arg1;
- (void)setAutocorrectionRecordForInputString:(id)arg1;
- (void)setInputStringIsExemptFromChecker:(bool)arg1;
- (void)setInputsPreventingAcceptSelectedCandidate:(id)arg1;
- (id)shortcutCompletions;
- (id)inputsPreventingAcceptSelectedCandidate;
- (bool)needsKeyHitTestResults;
- (bool)canHandleKeyHitTest;
- (bool)ignoresDeadKeys;
- (id)keyEventMap;
- (bool)suppressPlaceholderCandidate;
- (unsigned long long)initialCandidateBatchCount;
- (id)autocorrectionRecordForInputString;
- (bool)commitsAcceptedCandidate;
- (id)shadowTyping;
- (id)wordSeparator;
- (bool)inputStringIsExemptFromChecker;
- (bool)stringEndsWord:(id)arg1;
- (bool)inputStringAcceptsCurrentCandidateIfSelected:(id)arg1;
- (bool)shouldSuppressAutocorrectionWithTerminator:(id)arg1;
- (bool)shouldDeleteAutospaceBeforeTerminator:(id)arg1;
- (id)replacementForDoubleSpace;
- (bool)acceptInputString:(id)arg1;
- (bool)suppliesCompletions;
- (bool)suppressCompletionsForFieldEditor;
- (bool)nextInputWouldStartSentence;
- (unsigned long long)inputIndex;
- (bool)usesAutocorrectionLists;
- (bool)shouldExtendPriorWord;
- (id)inputString;
- (id)searchStringForMarkedText;
- (bool)supportsSetPhraseBoundary;
- (void)setSearchStringForMarkedText:(id)arg1;
- (unsigned long long)inputCount;
- (bool)usesAutoDeleteWord;
- (void)setSupportsNumberKeySelection:(bool)arg1;
- (bool)supportsNumberKeySelection;
- (void)setUsesCandidateSelection:(bool)arg1;
- (bool)usesCandidateSelection;
- (id)keyboardBehaviors;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;
- (void)setInputCount:(unsigned long long)arg1;

@end
