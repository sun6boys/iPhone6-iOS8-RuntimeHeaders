/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

@class DOMCSSRule, DOMCSSRuleList;

@interface DOMCSSStyleSheet : DOMStyleSheet  {
}

@property(readonly) DOMCSSRule * ownerRule;
@property(readonly) DOMCSSRuleList * cssRules;
@property(readonly) DOMCSSRuleList * rules;


- (void)removeRule:(unsigned int)arg1;
- (int)addRule:(id)arg1 style:(id)arg2 index:(unsigned int)arg3;
- (id)rules;
- (id)ownerRule;
- (void)deleteRule:(unsigned int)arg1;
- (unsigned int)insertRule:(id)arg1 :(unsigned int)arg2;
- (unsigned int)insertRule:(id)arg1 index:(unsigned int)arg2;
- (id)cssRules;

@end
