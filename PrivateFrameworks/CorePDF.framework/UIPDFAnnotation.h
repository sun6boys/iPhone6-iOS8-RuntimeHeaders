/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

@class NSString, UIPDFAnnotationView, CALayer, UIPDFPopupAnnotation, UIPDFAnnotationController, NSMutableArray, UIPDFPage, UIPDFSelection;

@interface UIPDFAnnotation : NSObject  {
    struct CGPDFDictionary { } *_dictionary;
    struct CGColor { } *_color;
    void *_appearanceStream;
    struct CGPDFString { } *_pdfContents;
    NSString *_annotationID;
    bool_hidden;
    UIPDFAnnotationView *_annotationView;
    UIPDFAnnotationController *_annotationController;
    NSMutableArray *_quadPoints;
    CALayer *_drawingLayer;
    UIPDFSelection *_selection;
    booleditable;
    id data;
    NSString *_contents;
    long long _index;
    UIPDFPopupAnnotation *_popup;
    NSString *_associatedAnnotationID;
    UIPDFPage *_page;
    unsigned long long _tag;
}

@property(retain) CALayer * drawingLayer;
@property(retain) UIPDFAnnotationView * annotationView;
@property UIPDFPage * page;
@property UIPDFAnnotationController * annotationController;
@property(readonly) bool recognizeGestures;
@property bool editable;
@property UIPDFSelection * selection;
@property(retain) id data;
@property(retain) NSString * contents;
@property long long index;
@property UIPDFPopupAnnotation * popup;
@property(retain) NSString * associatedAnnotationID;
@property unsigned long long tag;

+ (id)newAnnotationWithPage:(id)arg1 fromArchive:(id)arg2;

- (id)archive;
- (bool)hidden;
- (int)annotationType;
- (id)drawingLayer;
- (id)associatedAnnotationID;
- (void)setAnnotationController:(id)arg1;
- (id)descriptionHOLD;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })popUpAnnotationRect;
- (const char *)pdfContents;
- (bool)hasPopUp;
- (id)getImageNamed:(id)arg1 ofType:(id)arg2;
- (id)initWithAnnotationDictionary:(struct CGPDFDictionary { }*)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })rectIn:(struct CGPDFArray { }*)arg1;
- (id)annotationID;
- (void)setDrawingLayer:(id)arg1;
- (void)setAssociatedAnnotationID:(id)arg1;
- (void)setAnnotationID:(id)arg1;
- (void)setPageView:(id)arg1;
- (void)setIndex:(long long)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })Rect;
- (id)annotationController;
- (Class)viewClass;
- (void)drawInContext:(struct CGContext { }*)arg1;
- (void)setPage:(id)arg1;
- (id)page;
- (void)setPopup:(id)arg1;
- (id)popup;
- (bool)editable;
- (long long)index;
- (void)setColor:(struct CGColor { }*)arg1;
- (struct CGColor { }*)color;
- (void)setEditable:(bool)arg1;
- (void)setSelection:(id)arg1;
- (id)selection;
- (void)drawLayer:(id)arg1 inContext:(struct CGContext { }*)arg2;
- (void)setContents:(id)arg1;
- (void)setTag:(unsigned long long)arg1;
- (unsigned long long)tag;
- (id)contents;
- (void)setData:(id)arg1;
- (id)data;
- (bool)containsPoint:(struct CGPoint { double x1; double x2; })arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frame;
- (id)init;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })bounds;
- (void)dealloc;
- (id)annotationView;
- (void)setAnnotationView:(id)arg1;
- (bool)recognizeGestures;
- (struct CGPath { }*)newPathFromQuadPoints;
- (void)makeQuadpointsFrom:(id)arg1;
- (id)newSelection;

@end
