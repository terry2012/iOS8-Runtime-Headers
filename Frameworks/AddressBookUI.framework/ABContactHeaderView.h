/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@class CNContact, NSDictionary, <ABContactHeaderViewDelegate>, ABContactPhotoView, <ABPresenterDelegate>, NSMutableArray;

@interface ABContactHeaderView : UIView  {
    bool_needsReload;
    NSDictionary *_nameTextAttributes;
    <ABPresenterDelegate> *_delegate;
    <ABContactHeaderViewDelegate> *_headerDelegate;
    NSMutableArray *_headerConstraints;
    ABContactPhotoView *_photoView;
    CNContact *_contact;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    } _contentMargins;
}

@property struct UIEdgeInsets { double x1; double x2; double x3; double x4; } contentMargins;
@property(copy) NSDictionary * nameTextAttributes;
@property <ABPresenterDelegate> * delegate;
@property <ABContactHeaderViewDelegate> * headerDelegate;
@property(retain) NSMutableArray * headerConstraints;
@property(readonly) ABContactPhotoView * photoView;
@property(readonly) CNContact * contact;


- (void)setHeaderDelegate:(id)arg1;
- (id)headerDelegate;
- (void)saveContactPhoto;
- (void)setContentMargins:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)updateFontSizes;
- (void)updateWithNewContact:(id)arg1;
- (id)nameTextAttributes;
- (void)setNeedsReload;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })contentMargins;
- (id)photoView;
- (void)setHeaderConstraints:(id)arg1;
- (id)headerConstraints;
- (void)reloadDataIfNeeded;
- (void)setNameTextAttributes:(id)arg1;
- (id)initWithContact:(id)arg1 frame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)reloadDataPreservingChanges:(bool)arg1;
- (id)contact;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (void)dealloc;
- (void)updateConstraints;
- (struct CGSize { double x1; double x2; })systemLayoutSizeFittingSize:(struct CGSize { double x1; double x2; })arg1 withHorizontalFittingPriority:(float)arg2 verticalFittingPriority:(float)arg3;

@end
