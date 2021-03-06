/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class NSObject<OS_dispatch_queue>, NSMutableArray, <SKUILayoutCacheDelegate>;

@interface SKUILayoutCache : NSObject  {
    NSMutableArray *_batchedRequests;
    <SKUILayoutCacheDelegate> *_delegate;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    NSMutableArray *_layouts;
    NSMutableArray *_requests;
}

@property <SKUILayoutCacheDelegate> * delegate;


- (void)_populateCache;
- (id)layoutForIndex:(long long)arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })addLayoutRequests:(id)arg1;
- (void)_addLayoutBatch:(id)arg1;
- (void)_layoutRequestsInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (id)layoutForIndex:(long long)arg1 forced:(bool)arg2;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })populateCacheWithLayoutRequests:(id)arg1;
- (void)commitLayoutRequests;
- (id)init;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (void).cxx_destruct;

@end
