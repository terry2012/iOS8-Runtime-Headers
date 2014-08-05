/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class NSMutableDictionary, NSMapTable, <SKUIArtworkRequestDelegate>, SKUIItemOfferButton, SKUIResourceLoader, UIViewController, UIColor, NSHashTable, NSMutableSet, SKUIClientContext, SKUIViewElementTextLayoutCache, SKUIBadgeTextAttachmentLoader;

@interface SKUIViewElementLayoutContext : NSObject  {
    double _activePageWidth;
    NSMutableDictionary *_aggregateValues;
    <SKUIArtworkRequestDelegate> *_artworkRequestDelegate;
    SKUIBadgeTextAttachmentLoader *_badgeImageLoader;
    SKUIClientContext *_clientContext;
    unsigned long long _containerViewElementType;
    NSMapTable *_editorialLayouts;
    NSHashTable *_expandedEditorialLayouts;
    SKUIItemOfferButton *_itemOfferButton;
    NSMutableDictionary *_itemOfferButtonSizes;
    SKUIViewElementTextLayoutCache *_labelLayoutCache;
    NSMutableSet *_observedArtworkRequestIDs;
    UIViewController *_parentViewController;
    UIColor *_placeholderColor;
    NSMapTable *_placeholderImages;
    SKUIResourceLoader *_resourceLoader;
    UIColor *_tintColor;
}

@property double activePageWidth;
@property <SKUIArtworkRequestDelegate> * artworkRequestDelegate;
@property(readonly) SKUIBadgeTextAttachmentLoader * badgeImageLoader;
@property(retain) SKUIClientContext * clientContext;
@property unsigned long long containerViewElementType;
@property(retain) SKUIViewElementTextLayoutCache * labelLayoutCache;
@property UIViewController * parentViewController;
@property(retain) SKUIResourceLoader * resourceLoader;
@property(retain) UIColor * placeholderColor;
@property(retain) UIColor * tintColor;


- (id)artworkRequestDelegate;
- (void)invalidateAllEditorialLayouts;
- (void)expandEditorialForLabelElement:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeForItemOfferButton:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeForBadgeElement:(id)arg1;
- (struct CGSize { double x1; double x2; })_sizeForImageElement:(id)arg1 applyTransform:(bool)arg2;
- (bool)_loadImageForURL:(id)arg1 cacheKey:(id)arg2 dataConsumer:(id)arg3 reason:(long long)arg4;
- (void)setPlaceholderColor:(id)arg1;
- (void)setActivePageWidth:(double)arg1;
- (id)_initSKUIViewElementLayoutContext;
- (id)placeholderImageForImageElement:(id)arg1;
- (id)transientRequestIdentifierForViewElement:(id)arg1;
- (id)badgeImageLoader;
- (bool)loadImageForBadgeElement:(id)arg1 reason:(long long)arg2;
- (bool)isEditorialLayoutExpanded:(id)arg1;
- (id)editorialLayoutForLabelElement:(id)arg1 width:(double)arg2;
- (unsigned long long)containerViewElementType;
- (struct CGSize { double x1; double x2; })sizeForImageElement:(id)arg1;
- (void)_artworkRequestDidLoadImageNotification:(id)arg1;
- (void)setLabelLayoutCache:(id)arg1;
- (id)initWithStorePageSectionContext:(id)arg1;
- (bool)loadImageForArtwork:(id)arg1 reason:(long long)arg2;
- (id)placeholderColor;
- (void)setContainerViewElementType:(unsigned long long)arg1;
- (void)setAggregateValue:(id)arg1 forKey:(id)arg2;
- (id)initWithStorePageSectionContext:(id)arg1 previousLayoutContext:(id)arg2;
- (void)setArtworkRequestDelegate:(id)arg1;
- (void)setResourceLoader:(id)arg1;
- (bool)prefetchResourcesForViewElement:(id)arg1 reason:(long long)arg2;
- (double)activePageWidth;
- (id)labelLayoutCache;
- (double)defaultItemWidthForViewElement:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeForViewElement:(id)arg1 width:(double)arg2;
- (bool)loadImageForImageElement:(id)arg1 reason:(long long)arg2;
- (id)requestIdentifierForViewElement:(id)arg1;
- (id)placeholderImageForSize:(struct CGSize { double x1; double x2; })arg1;
- (bool)loadImageForArtwork:(id)arg1 dataConsumer:(id)arg2 reason:(long long)arg3;
- (id)requestIdentifierForArtwork:(id)arg1;
- (id)aggregateValueForKey:(id)arg1;
- (void)setClientContext:(id)arg1;
- (id)clientContext;
- (id)parentViewController;
- (id)resourceLoader;
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (void)setParentViewController:(id)arg1;
- (void)setTintColor:(id)arg1;
- (id)tintColor;

@end
