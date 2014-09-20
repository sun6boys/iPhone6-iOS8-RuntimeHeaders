/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class <UIWebFormControl>, DOMHTMLSelectElement;

@interface UIWebFormSelectPeripheral : NSObject <UIFormPeripheral> {
    DOMHTMLSelectElement *_selectionNode;
    <UIWebFormControl> *_selectControl;
}

@property(retain) DOMHTMLSelectElement * _selectionNode;
@property(retain) <UIWebFormControl> * _selectControl;

+ (id)createPeripheralWithDOMHTMLSelectElement:(id)arg1;

- (id)_selectControl;
- (id)assistantView;
- (id)initWithDOMHTMLSelectElement:(id)arg1;
- (void)set_selectControl:(id)arg1;
- (id)_selectionNode;
- (void)set_selectionNode:(id)arg1;
- (void)endEditing;
- (void)beginEditing;
- (void)dealloc;

@end