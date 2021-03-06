/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
 */

@class NSATSTypesetter;

@interface NSATSLineFragment : NSObject  {
    void *_line;
    NSATSTypesetter *_typesetter;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    } _glyphRange;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    } _characterRange;
    double _minPosition;
    double _maxPosition;
    long long _elasticCharIndex;
    double _elasticRangeWidth;
    unsigned int _hyphenGlyph;
    double _hyphenGlyphWidth;
    struct { 
        unsigned int _directionState : 2; 
        unsigned int _drawsOutside : 1; 
        unsigned int _isLineArray : 1; 
        unsigned int _reserved : 28; 
    } _flags;
}


- (void)finalize;
- (long long)_charIndexToBreakLineByWordWrappingAtIndex:(long long)arg1 lineFragmentWidth:(double)arg2 hyphenate:(bool*)arg3;
- (long long)resolvedLineBreakMode:(bool)arg1;
- (void)_flushCachedObjects;
- (id)_copyRenderingContextWithGlyphOrigin:(double)arg1;
- (void)saveWithGlyphOrigin:(double)arg1;
- (void)saveMorphedGlyphs:(struct _NSRange { unsigned long long x1; unsigned long long x2; }*)arg1;
- (bool)hasElasticRange;
- (double)lineWidthForType:(int)arg1;
- (void)justifyWithFactor:(double)arg1;
- (void)getTypographicLineHeight:(double*)arg1 baselineOffset:(double*)arg2 leading:(double*)arg3;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })characterRange;
- (void)layoutForStartingGlyphAtIndex:(unsigned long long)arg1 characterIndex:(unsigned long long)arg2 minPosition:(double)arg3 maxPosition:(double)arg4 lineFragmentRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg5;
- (id)initWithTypesetter:(id)arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })glyphRange;
- (void)_invalidate;
- (void)dealloc;

@end
