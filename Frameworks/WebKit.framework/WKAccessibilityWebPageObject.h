/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

@class NSData;

@interface WKAccessibilityWebPageObject : WKAccessibilityWebPageObjectBase  {
    NSData *_remoteTokenData;
}

@property(retain) NSData * remoteTokenData;


- (id)accessibilityHitTest:(struct CGPoint { double x1; double x2; })arg1;
- (double)pageScale;
- (id)remoteTokenData;
- (void)_accessibilityCategoryInstalled:(id)arg1;
- (void)setRemoteTokenData:(id)arg1;
- (id)init;
- (void)dealloc;

@end