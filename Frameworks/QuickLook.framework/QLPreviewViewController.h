/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/QuickLook.framework/QuickLook
 */

@class NSTimer, NSString, UIView, QLProgressView, <QLPreviewItemInteractionDelegate>, <QLPreviewItem>, UIDocumentPasswordView, QLGenericView, QLDisplayBundle, NSLayoutConstraint;

@interface QLPreviewViewController : UIViewController <QLPreviewItemInteractionDelegate, UIDocumentPasswordViewDelegate, QLSwippableItemProtocol> {
    <QLPreviewItemInteractionDelegate> *_displayBundleDelegate;
    <QLPreviewItem> *_previewItem;
    long long _index;
    struct { 
        long long pid; 
        struct { 
            unsigned int val[8]; 
        } audit_token; 
        struct CGRect { 
            struct CGPoint { 
                double x; 
                double y; 
            } origin; 
            struct CGSize { 
                double width; 
                double height; 
            } size; 
        } contentFrame; 
    } _clientContext;
    int _previewMode;
    bool_needsReload;
    bool_swiping;
    bool_shouldSwapDisplayBundles;
    UIView *_scalingView;
    UIView *_contentContainerView;
    UIView *_accessoryContainerView;
    double _aspectRatio;
    double _scaleFactor;
    double _navigationBarVerticalOffset;
    QLDisplayBundle *_displayBundle;
    QLDisplayBundle *_newDisplayBundle;
    NSTimer *_progressTimer;
    QLProgressView *_progressView;
    NSString *_loadingTextForMissingFiles;
    bool_overlayHidden;
    UIDocumentPasswordView *_documentPasswordView;
    NSLayoutConstraint *_documentPasswordViewKeyboardConstraint;
    QLGenericView *_airPlayPasswordView;
    bool_loadedWithPassword;
    bool_visible;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    } _initialFrame;
}

@property(readonly) QLDisplayBundle * displayBundle;
@property <QLPreviewItemInteractionDelegate> * displayBundleDelegate;
@property int previewMode;
@property struct { long long x1; struct { unsigned int x_2_1_1[8]; } x2; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_3_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_3_1_2; } x3; } clientContext;
@property(readonly) int airPlayMode;
@property(readonly) UIView * airPlayView;
@property(readonly) UIView * snapshotView;
@property bool visible;
@property struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } initialFrame;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;
@property long long index;
@property(retain) <QLPreviewItem> * previewItem;


- (void)setInitialFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })initialFrame;
- (void)setDisplayBundleDelegate:(id)arg1;
- (id)displayBundleDelegate;
- (void)preloadIfNeeded;
- (id)airPlayView;
- (id)displayBundle;
- (void)setAspectRatio:(double)arg1 scaleFactor:(double)arg2;
- (void)didFinishSwiping;
- (void)willStartSwiping;
- (void)previewItemDidExitFullScreen:(id)arg1;
- (void)previewItem:(id)arg1 willEnterFullScreenWithHostedWindow:(id)arg2;
- (void)previewItem:(id)arg1 setAVState:(id)arg2;
- (void)_showPasswordView;
- (void)previewItem:(id)arg1 willHideOverlayWithDuration:(double)arg2;
- (void)previewItem:(id)arg1 willShowOverlayWithDuration:(double)arg2;
- (void)viewWasTappedOnPreviewItem:(id)arg1;
- (void)_swapDisplayBundles;
- (void)_scheduleShowProgressiveUI;
- (void)_showGenericDisplayBundleForPreviewItem:(id)arg1;
- (void)_keyboardVisibilityChanged:(id)arg1;
- (void)_removeDisplayBundles;
- (void)_hideProgressiveUI;
- (void)_hidePasswordView;
- (void)_updateProgressUIWithDuration:(double)arg1;
- (void)refreshPreviewItem;
- (void)_refreshPreviewItem:(bool)arg1 withPassword:(id)arg2;
- (void)_showProgressUI;
- (void)_prepareDisplayBundle:(id)arg1 preload:(bool)arg2 withHints:(id)arg3;
- (void)_cancelScheduledShowProgressiveUI;
- (void)_layoutViews;
- (void)overlayWasInteractedWithOnPreviewItem:(id)arg1;
- (id)clientProcessAlertViewForPreviewItem:(id)arg1;
- (void)previewItem:(id)arg1 receivedTapOnURL:(id)arg2;
- (id)previewItem:(id)arg1 willSendRequest:(id)arg2;
- (void)showContentsWasTappedForPreviewItem:(id)arg1;
- (void)setClientContext:(struct { long long x1; struct { unsigned int x_2_1_1[8]; } x2; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_3_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_3_1_2; } x3; })arg1;
- (struct { long long x1; struct { unsigned int x_2_1_1[8]; } x2; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_3_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_3_1_2; } x3; })clientContext;
- (void)setNavigationBarVerticalOffset:(double)arg1;
- (void)discardAirPlayView;
- (void)setupAirPlayView;
- (void)endTrackingViewUpdates;
- (void)beginTrackingViewUpdates;
- (int)airPlayMode;
- (int)previewMode;
- (void)setPreviewMode:(int)arg1;
- (void)cancelLoadIfNeeded;
- (void)viewDidUpdateForPreviewItem:(id)arg1;
- (void)previewItem:(id)arg1 requiresDisplayBundle:(id)arg2 withHints:(id)arg3;
- (void)previewItemDidLoad:(id)arg1 atIndex:(long long)arg2 withError:(id)arg3;
- (void)previewItemWillLoad:(id)arg1;
- (void)setOverlayHidden:(bool)arg1 duration:(double)arg2;
- (void)setLoadingTextForMissingFiles:(id)arg1;
- (void)setPreviewItem:(id)arg1;
- (id)previewItem;
- (void)setIndex:(long long)arg1;
- (long long)index;
- (bool)visible;
- (void)setVisible:(bool)arg1;
- (id)init;
- (void)dealloc;
- (id)description;
- (void)didEndEditingPassword:(id)arg1 inView:(id)arg2;
- (void)didBeginEditingPassword:(id)arg1 inView:(id)arg2;
- (void)userDidEnterPassword:(id)arg1 forPasswordView:(id)arg2;
- (void)viewDidAppear:(bool)arg1;
- (void)willMoveToParentViewController:(id)arg1;
- (void)loadView;
- (id)snapshotView;

@end
