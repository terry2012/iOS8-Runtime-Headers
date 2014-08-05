/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class NSArray, SKUIViewReusePool, NSMutableArray;

@interface SKUIViewModification : NSObject  {
    SKUIViewReusePool *_viewPool;
    NSMutableArray *_views;
}

@property(readonly) NSArray * views;


- (id)addBarRatingWithElement:(id)arg1 width:(double)arg2 context:(id)arg3;
- (id)_addImageViewWithReuseIdentifier:(id)arg1 viewElement:(id)arg2 context:(id)arg3;
- (void)_styleItemOfferButton:(id)arg1 forElement:(id)arg2 context:(id)arg3;
- (id)_itemStateForButton:(id)arg1;
- (id)addTextViewWithElement:(id)arg1 width:(double)arg2 context:(id)arg3;
- (id)addLabelViewWithOrdinalElement:(id)arg1 width:(double)arg2 context:(id)arg3;
- (id)addOfferViewWithViewElement:(id)arg1 width:(double)arg2 context:(id)arg3;
- (id)addHorizontalListWithElement:(id)arg1 width:(double)arg2 context:(id)arg3;
- (id)addHeaderViewWithElement:(id)arg1 width:(double)arg2 context:(id)arg3;
- (id)addStarRatingViewWithViewElement:(id)arg1 width:(double)arg2 context:(id)arg3;
- (id)addStarRatingControlViewWithViewElement:(id)arg1 width:(double)arg2 context:(id)arg3;
- (id)addTomatoRatingViewWithViewElement:(id)arg1 width:(double)arg2 context:(id)arg3;
- (id)addDividerWithElement:(id)arg1 context:(id)arg2;
- (void)addView:(id)arg1;
- (id)addMenuButtonWithTitleItem:(id)arg1 width:(double)arg2 context:(id)arg3;
- (id)addBadgeViewWithElement:(id)arg1 width:(double)arg2 context:(id)arg3;
- (id)addLabelViewWithElement:(id)arg1 width:(double)arg2 context:(id)arg3;
- (id)addButtonWithElement:(id)arg1 width:(double)arg2 context:(id)arg3;
- (id)views;
- (id)initWithViewReusePool:(id)arg1;
- (id)addImageViewWithElement:(id)arg1 context:(id)arg2;
- (id)addImageViewWithVideoElement:(id)arg1 context:(id)arg2;
- (id)addReusableViewWithReuseIdentifier:(id)arg1;
- (void).cxx_destruct;

@end
