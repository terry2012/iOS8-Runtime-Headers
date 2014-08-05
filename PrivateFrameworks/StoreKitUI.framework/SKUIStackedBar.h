/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class _UIBackdropView, NSArray, <SKUIStackedBarDelegate>, UIView;

@interface SKUIStackedBar : UIView  {
    <SKUIStackedBarDelegate> *_delegate;
    _UIBackdropView *_backdropView;
    NSArray *_items;
    NSArray *_cells;
    bool_lastItemExpanded;
    bool_hidesStatusBar;
    bool_splitViewStyle;
    bool_alwaysShowsBackButton;
    bool_zeroHeightWhenFirstChildExpanded;
    double _offset;
    UIView *_wrapperView;
    UIView *_maskView;
    double _newOffset;
}

@property <SKUIStackedBarDelegate> * delegate;
@property(retain) NSArray * items;
@property bool alwaysShowsBackButton;
@property bool hidesStatusBar;
@property bool lastItemExpanded;
@property bool splitViewStyle;
@property bool zeroHeightWhenFirstChildExpanded;
@property double offset;


- (void)_buttonAction:(id)arg1;
- (bool)zeroHeightWhenFirstChildExpanded;
- (bool)hidesStatusBar;
- (bool)lastItemExpanded;
- (bool)alwaysShowsBackButton;
- (void)_resetNewOffset;
- (void)_selectItemAtIndex:(long long)arg1;
- (void)_backAction:(id)arg1;
- (void)animateToFullSizeIfNecessary;
- (void)setZeroHeightWhenFirstChildExpanded:(bool)arg1;
- (void)setLastItemExpanded:(bool)arg1;
- (void)setLastItemExpanded:(bool)arg1 animated:(bool)arg2;
- (void)setAlwaysShowsBackButton:(bool)arg1;
- (void)setHidesStatusBar:(bool)arg1;
- (void)setSplitViewStyle:(bool)arg1;
- (bool)splitViewStyle;
- (void)_reload;
- (id)items;
- (void)setItems:(id)arg1;
- (void)setOffset:(double)arg1;
- (double)offset;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (void).cxx_destruct;
- (void)sizeToFit;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (void)layoutSubviews;

@end
