/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSArray, NSSet;

@interface _UITraitStorageList : NSObject <NSCoding> {
    id _topLevelObject;
    NSArray *_traitStorages;
    NSSet *_descendants;
}

@property(readonly) id topLevelObject;
@property(readonly) NSArray * traitStorages;
@property(readonly) NSSet * descendants;


- (id)descendants;
- (id)topLevelObject;
- (id)initWithTopLevelObject:(id)arg1 traitStorages:(id)arg2 descendants:(id)arg3;
- (id)traitStorages;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;

@end