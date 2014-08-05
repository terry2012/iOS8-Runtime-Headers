/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@class NSArray, NSString, <ABPropertyCellDelegate>, UITableView;

@interface ABContactHeaderEditView : ABContactHeaderView <UITableViewDelegate, UITableViewDataSource, ABPropertyGroupItemDelegate, ABContactPhotoViewDelegate> {
    UITableView *_editingTable;
    NSArray *_editingGroups;
    <ABPropertyCellDelegate> *_namePropertyDelegate;
}

@property(retain) NSArray * editingGroups;
@property <ABPropertyCellDelegate> * namePropertyDelegate;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;

+ (id)contactHeaderViewWithContact:(id)arg1 editingGroups:(id)arg2;

- (void)setNamePropertyDelegate:(id)arg1;
- (id)editingGroups;
- (id)selectEditingGroupAtIndex:(unsigned long long)arg1;
- (bool)photoIsModified;
- (void)setEditingGroups:(id)arg1 withUpdate:(bool)arg2;
- (void)didUpdatePhoto;
- (void)propertyItem:(id)arg1 willChangeValue:(id)arg2;
- (id)_phoneticNameForValue:(id)arg1 isFamilyName:(bool)arg2;
- (id)namePropertyDelegate;
- (void)setEditingGroups:(id)arg1;
- (id)initWithContact:(id)arg1 editingGroups:(id)arg2 frame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
- (void)updateFontSizes;
- (void)reloadDataPreservingChanges:(bool)arg1;
- (bool)hasPhoto;
- (void)setBackgroundColor:(id)arg1;
- (void)dealloc;
- (void)updateConstraints;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (bool)tableView:(id)arg1 shouldIndentWhileEditingRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;

@end
