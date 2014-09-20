/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UITextSelection, <UIWebSelectionBlock>, UIWebDocumentView;

@interface UIWebSelection : NSObject  {
    UIWebDocumentView *_documentView;
    <UIWebSelectionBlock> *_base;
    <UIWebSelectionBlock> *_extent;
    struct CGSize { 
        double width; 
        double height; 
    } _desiredSize;
    UITextSelection *_textSelection;
}

@property(readonly) UIWebDocumentView * documentView;
@property(readonly) UITextSelection * textSelection;
@property(readonly) bool valid;
@property(readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } boundingRect;
@property struct CGSize { double x1; double x2; } desiredSize;
@property(getter=isTextOnly,readonly) bool textOnly;
@property(retain) <UIWebSelectionBlock> * base;
@property(retain) <UIWebSelectionBlock> * extent;


- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })boundingTextSelectionRect;
- (void)moveEdge:(int)arg1 outwards:(bool)arg2;
- (void)adjustSelectionFromPoint:(struct CGPoint { double x1; double x2; })arg1 towardsPoint:(struct CGPoint { double x1; double x2; })arg2 withNewRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
- (id)textRepresentation;
- (id)blockOfSameWidthAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (id)domDocument;
- (void)shrinkFromEdge:(int)arg1;
- (void)growFromEdge:(int)arg1;
- (bool)isEqualToSelection:(id)arg1;
- (bool)tryToShrinkToBaseAndExtent;
- (void)setDesiredSize:(struct CGSize { double x1; double x2; })arg1;
- (id)duplicate;
- (double)distanceBetweenFirstRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 second:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 edge:(int)arg3;
- (void)useBlock;
- (void)growSelectionTowardsPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)shrinkSelectionFromPoint:(struct CGPoint { double x1; double x2; })arg1 towardsPoint:(struct CGPoint { double x1; double x2; })arg2 withNewRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
- (id)webArchive;
- (id)asDomRange;
- (struct CGSize { double x1; double x2; })desiredSize;
- (id)blockAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)setExtent:(id)arg1;
- (void)setBase:(id)arg1;
- (void)applySelectionToWebDocumentView;
- (id)base;
- (bool)blockContainsPoint:(struct CGPoint { double x1; double x2; })arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })boundingRectAndInsideFixedPosition:(int*)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })boundingTextSelectionRectAndInsideFixedPosition:(int*)arg1;
- (bool)isTextOnly;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })boundingRect;
- (bool)valid;
- (void)setSelectionWithPoint:(struct CGPoint { double x1; double x2; })arg1 ignoringLargeBlocks:(bool)arg2;
- (id)initWithDocumentView:(id)arg1;
- (id)elementAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (id)textSelectionRects;
- (id)webFrame;
- (id)textSelection;
- (id)documentView;
- (id)webView;
- (void)selectionChanged;
- (void)setSelectionWithPoint:(struct CGPoint { double x1; double x2; })arg1;
- (id)extent;
- (id)description;
- (bool)isEqual:(id)arg1;
- (void)dealloc;

@end