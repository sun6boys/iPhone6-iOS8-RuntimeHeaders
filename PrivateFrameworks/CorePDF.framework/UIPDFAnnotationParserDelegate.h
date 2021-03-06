/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

@class NSString, NSMutableString, UIPDFAnnotation;

@interface UIPDFAnnotationParserDelegate : NSObject <NSXMLParserDelegate> {
    NSMutableString *_characters;
    bool_parseError;
    UIPDFAnnotation *_annotation;
}

@property(retain) UIPDFAnnotation * annotation;
@property(readonly) bool parseError;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;


- (void)parser:(id)arg1 parseErrorOccurred:(id)arg2;
- (void)parser:(id)arg1 foundCharacters:(id)arg2;
- (void)parser:(id)arg1 didEndElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4;
- (void)parser:(id)arg1 didStartElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4 attributes:(id)arg5;
- (void)parserDidStartDocument:(id)arg1;
- (bool)parseError;
- (void)setAnnotation:(id)arg1;
- (id)annotation;
- (id)init;
- (void)dealloc;

@end
