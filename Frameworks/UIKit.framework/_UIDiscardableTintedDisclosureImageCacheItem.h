/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIImage, UIColor;

@interface _UIDiscardableTintedDisclosureImageCacheItem : NSObject <NSDiscardableContent> {
    UIImage *_tintedImage;
    UIColor *_tintColor;
    struct { 
        unsigned int isDiscarded : 1; 
        unsigned int isPressed : 1; 
        unsigned int useCount; 
    } _flags;
}

@property(readonly) UIImage * tintedImage;
@property(readonly) UIColor * tintColor;


- (id)tintedImage;
- (id)initWithPressed:(bool)arg1 tintColor:(id)arg2;
- (bool)isContentDiscarded;
- (void)discardContentIfPossible;
- (void)endContentAccess;
- (bool)beginContentAccess;
- (id)_tintedDisclosureImage:(bool)arg1;
- (id)tintColor;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)dealloc;

@end