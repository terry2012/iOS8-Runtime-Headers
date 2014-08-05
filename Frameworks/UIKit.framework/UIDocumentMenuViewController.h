/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSString, UIAlertController, <UIDocumentMenuDelegate>, NSURL, NSMutableArray, _UIDocumentPickerRemoteViewController;

@interface UIDocumentMenuViewController : UIViewController <_UIDocumentPickerRemoteViewControllerContaining, UIAlertControllerContaining> {
    <UIDocumentMenuDelegate> *_weak_delegate;
    bool_dismissDelegateCalled;
    NSMutableArray *_auxiliaryOptions;
    _UIDocumentPickerRemoteViewController *_remoteViewController;
    UIAlertController *_alertController;
    unsigned long long _documentPickerMode;
    NSURL *_uploadURL;
}

@property <UIDocumentMenuDelegate> * delegate;
@property(retain) NSMutableArray * auxiliaryOptions;
@property(getter=_remoteViewController,setter=_setRemoteViewController:,retain) _UIDocumentPickerRemoteViewController * remoteViewController;
@property(retain) UIAlertController * alertController;
@property bool dismissDelegateCalled;
@property unsigned long long documentPickerMode;
@property(copy) NSURL * uploadURL;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;


- (void)setDelegate:(id)arg1;
- (id)delegate;
- (void)dealloc;
- (void)addOptionWithTitle:(id)arg1 image:(id)arg2 order:(unsigned long long)arg3 handler:(id)arg4;
- (bool)dismissDelegateCalled;
- (void)setDismissDelegateCalled:(bool)arg1;
- (id)alertController;
- (id)auxiliaryOptions;
- (void)setAuxiliaryOptions:(id)arg1;
- (void)setAlertController:(id)arg1;
- (id)_containedAlertController;
- (bool)_requiresCustomPresentationController;
- (id)_presentationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (void)viewWillAppear:(bool)arg1;
- (void)_preferredContentSizeChanged:(struct CGSize { double x1; double x2; })arg1;
- (void)_dismissWithOption:(id)arg1;
- (void)_didSelectPicker;
- (void)_didSelectURL:(id)arg1;
- (id)initWithURL:(id)arg1 inMode:(unsigned long long)arg2;
- (id)initWithDocumentTypes:(id)arg1 inMode:(unsigned long long)arg2;
- (id)uploadURL;
- (unsigned long long)documentPickerMode;
- (void)setUploadURL:(id)arg1;
- (void)_commonInitWithCompletion:(id)arg1;
- (void)setDocumentPickerMode:(unsigned long long)arg1;
- (id)_remoteViewController;
- (void)setModalPresentationStyle:(long long)arg1;
- (void)_dismissViewController;
- (void)_setRemoteViewController:(id)arg1;
- (long long)modalPresentationStyle;

@end
