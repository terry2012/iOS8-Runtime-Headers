/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/RemoteUI.framework/RemoteUI
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSString, UINavigationController, NSMutableDictionary, RUIPage, RUILoader, NSMutableArray, <RemoteUIControllerDelegate>;

@interface RemoteUIController : NSObject <RUILoaderDelegate, RUIObjectModelDelegate, RUIParserDelegate> {
    UINavigationController *_modalNavigationController;
    NSMutableArray *_objectModels;
    NSMutableArray *_modalObjectModels;
    NSMutableDictionary *_elementChangeHandlers;
    RUIPage *_pageOriginatingLoad;
    UINavigationController *_navigationController;
    RUILoader *_loader;
    NSString *_userAgentString;
    <RemoteUIControllerDelegate> *_delegate;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _loadCompletion;

}

@property UINavigationController * navigationController;
@property(retain) RUILoader * loader;
@property(copy) NSString * userAgentString;
@property <RemoteUIControllerDelegate> * delegate;
@property(copy) id loadCompletion;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;


- (void)setLoader:(id)arg1;
- (void)setUserAgentString:(id)arg1;
- (void)setHandlerForButtonName:(id)arg1 handler:(id)arg2;
- (void)setHandlerForButtonsMatching:(id)arg1 handler:(id)arg2;
- (void)removeHandlerForKey:(id)arg1;
- (id)dismissObjectModelsAnimated:(bool)arg1 completion:(id)arg2;
- (void)loadData:(id)arg1 baseURL:(id)arg2;
- (id)parser:(id)arg1 createPageWithName:(id)arg2 attributes:(id)arg3;
- (void)loadURL:(id)arg1 postBody:(id)arg2 completion:(id)arg3;
- (id)popObjectModelAnimated:(bool)arg1;
- (void)pushObjectModel:(id)arg1 animated:(bool)arg2;
- (id)loadCompletion;
- (void)setHandlerForElementName:(id)arg1 handler:(id)arg2;
- (id)setHandlerForElementsMatching:(id)arg1 handler:(id)arg2;
- (void)_setHandlerWithKey:(id)arg1 forElementsMatching:(id)arg2 handler:(id)arg3;
- (void)_didRemoveObjectModel:(id)arg1;
- (void)_willPresentObjectModel:(id)arg1 modally:(bool)arg2;
- (id)loader;
- (void)loadURL:(id)arg1 postBody:(id)arg2;
- (void)setLoadCompletion:(id)arg1;
- (unsigned long long)supportedInterfaceOrientationsForObjectModel:(id)arg1 page:(id)arg2;
- (void)objectModel:(id)arg1 elementDidChange:(id)arg2;
- (void)objectModel:(id)arg1 pressedLink:(id)arg2 httpMethod:(id)arg3 completion:(id)arg4;
- (void)objectModel:(id)arg1 didNavigateBackFromController:(id)arg2 withGesture:(bool)arg3;
- (id)loader:(id)arg1 connection:(id)arg2 willSendRequest:(id)arg3 redirectResponse:(id)arg4;
- (void)loader:(id)arg1 didReceiveHTTPResponse:(id)arg2;
- (void)loader:(id)arg1 didFailWithError:(id)arg2;
- (void)loader:(id)arg1 receivedObjectModel:(id)arg2 actionSignal:(int)arg3;
- (id)parentViewControllerForObjectModel:(id)arg1;
- (id)viewControllerForAlertPresentation;
- (void)loadRequest:(id)arg1 completion:(id)arg2;
- (id)userAgentString;
- (void)loadRequest:(id)arg1;
- (id)init;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (void)dealloc;
- (void).cxx_destruct;
- (void)setNavigationController:(id)arg1;
- (id)navigationController;

@end
