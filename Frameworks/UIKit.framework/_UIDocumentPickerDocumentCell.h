/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class _UIDocumentPickerContainerItem;

@interface _UIDocumentPickerDocumentCell : _UIDocumentPickerCell  {
    bool_enabled;
    _UIDocumentPickerContainerItem *_item;
}

@property(retain) _UIDocumentPickerContainerItem * item;
@property bool enabled;


- (void)updateThumbnail;
- (void)updateContents;
- (void)reloadItem:(bool)arg1;
- (id)viewControllerForDisplay;
- (void)_showPickableDiagnostic;
- (bool)enabled;
- (void)setItem:(id)arg1;
- (id)item;
- (void)prepareForReuse;
- (void)traitCollectionDidChange:(id)arg1;
- (void)setEnabled:(bool)arg1;
- (void)dealloc;

@end