/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@class NSDictionary;

@interface BWVideoFormat : BWFormat  {
    unsigned long long _width;
    unsigned long long _height;
    unsigned int _pixelFormat;
    unsigned long long _bytesPerRowAlignment;
    unsigned long long _planeAlignment;
    unsigned long long _extendedWidth;
    unsigned long long _extendedHeight;
    unsigned int _cacheMode;
    bool_prewireBuffers;
    NSDictionary *_pixelBufferAttributes;
}

@property unsigned long long width;
@property unsigned long long height;
@property unsigned int pixelFormat;
@property unsigned long long bytesPerRowAlignment;
@property unsigned long long planeAlignment;
@property unsigned long long extendedWidth;
@property unsigned long long extendedHeight;
@property unsigned int cacheMode;
@property bool prewireBuffers;
@property(readonly) NSDictionary * pixelBufferAttributes;

+ (id)_formatRequirementsByResolvingFormatRequirements:(id)arg1 withFormatRequirements:(id)arg2;
+ (id)formatByResolvingRequirements:(id)arg1;
+ (void)initialize;

- (unsigned int)mediaType;
- (void)setCacheMode:(unsigned int)arg1;
- (void)setExtendedHeight:(unsigned long long)arg1;
- (void)setExtendedWidth:(unsigned long long)arg1;
- (void)setPixelFormat:(unsigned int)arg1;
- (unsigned long long)extendedHeight;
- (unsigned long long)extendedWidth;
- (id)_initWithResolvedPixelBufferAttributes:(id)arg1;
- (unsigned long long)planeAlignment;
- (unsigned long long)bytesPerRowAlignment;
- (void)setPlaneAlignment:(unsigned long long)arg1;
- (void)setBytesPerRowAlignment:(unsigned long long)arg1;
- (unsigned int)cacheMode;
- (bool)prewireBuffers;
- (void)setPrewireBuffers:(bool)arg1;
- (unsigned int)pixelFormat;
- (void)setHeight:(unsigned long long)arg1;
- (void)setWidth:(unsigned long long)arg1;
- (unsigned long long)height;
- (unsigned long long)width;
- (id)debugDescription;
- (id)description;
- (bool)isEqual:(id)arg1;
- (void)dealloc;
- (id)pixelBufferAttributes;
- (struct opaqueCMFormatDescription { }*)formatDescription;

@end
