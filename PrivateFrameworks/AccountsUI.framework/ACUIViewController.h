/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/AccountsUI.framework/AccountsUI
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSTimer, NSString, <ACUIViewControllerAccountChangeObserver>, ACUIAccountOperationsHelper, UIProgressHUD, UIBarButtonItem, ACAccountStore;

@interface ACUIViewController : PSListController <ACUIAccountOperationsDelegate> {
    NSTimer *_idleJiggleTimer;
    void *_powerAssertion;
    bool_addedToTaskList;
    bool_activityInProgress;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _confirmationViewCompletion;

    UIProgressHUD *_hud;
    bool_validationInProgress;
    UIBarButtonItem *_doneButton;
    UIBarButtonItem *_cancelButton;
    ACAccountStore *_accountStore;
    ACUIAccountOperationsHelper *_accountOperationsHelper;
    <ACUIViewControllerAccountChangeObserver> *_accountChangeObserver;
}

@property(retain) UIBarButtonItem * doneButton;
@property(retain) UIBarButtonItem * cancelButton;
@property(retain) ACAccountStore * accountStore;
@property(retain) ACUIAccountOperationsHelper * accountOperationsHelper;
@property <ACUIViewControllerAccountChangeObserver> * accountChangeObserver;
@property bool validationInProgress;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;

+ (id)acuiAccountStore;
+ (bool)shouldPresentAsModalSheet;

- (void)setAccountChangeObserver:(id)arg1;
- (void)setAccountOperationsHelper:(id)arg1;
- (bool)isShowingActivityInProgressUI;
- (void)hideActivityInProgressUIWithDelay:(double)arg1;
- (void)showActivityInProgressUIWithMessage:(id)arg1;
- (id)accountOperationsHelper;
- (void)removeParentSpecifier;
- (void)stopValidationWithPrompt:(id)arg1 showButtons:(bool)arg2;
- (void)updateValidationPrompt:(id)arg1;
- (void)startValidationWithPrompt:(id)arg1;
- (id)showConfirmationViewForDeletingAccount:(id)arg1 context:(id)arg2 completion:(id)arg3;
- (id)showAlertViewWithButtons:(id)arg1 title:(id)arg2 message:(id)arg3 destructive:(bool)arg4 context:(id)arg5 completion:(id)arg6;
- (id)operationsHelper:(id)arg1 desiredDataclassActionFromPicker:(id)arg2;
- (void)operationsHelper:(id)arg1 didRemoveAccount:(id)arg2 withSuccess:(bool)arg3 error:(id)arg4;
- (void)operationsHelper:(id)arg1 willRemoveAccount:(id)arg2;
- (void)operationsHelper:(id)arg1 didSaveAccount:(id)arg2 withSuccess:(bool)arg3 error:(id)arg4;
- (void)operationsHelper:(id)arg1 willSaveAccount:(id)arg2;
- (id)accountChangeObserver;
- (void)_jiggleIdleTimerFired;
- (void)reloadAllParentSpecifiers;
- (void)reloadAllParentSpecifiersAnimated:(bool)arg1;
- (void)reloadParentSpecifier;
- (id)_effectiveParentController;
- (id)doneButton;
- (void)setValidationInProgress:(bool)arg1;
- (void)setDoneButton:(id)arg1;
- (bool)validationInProgress;
- (void)startValidationWithPrompt:(id)arg1 userInteraction:(bool)arg2;
- (id)showConfirmationViewWithButtons:(id)arg1 title:(id)arg2 message:(id)arg3 destructive:(bool)arg4 context:(id)arg5 completion:(id)arg6;
- (void)confirmationView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (id)showAlertViewWithButtons:(id)arg1 title:(id)arg2 message:(id)arg3 destructive:(bool)arg4 cancelButtonIndex:(long long)arg5 context:(id)arg6 completion:(id)arg7;
- (id)showConfirmationViewWithButtons:(id)arg1 title:(id)arg2 message:(id)arg3 destructive:(bool)arg4 cancelButtonIndex:(long long)arg5 context:(id)arg6 completion:(id)arg7;
- (id)showConfirmationViewWithButtons:(id)arg1 title:(id)arg2 message:(id)arg3 destructive:(bool)arg4 cancelButtonIndex:(long long)arg5 context:(id)arg6 forceAlert:(bool)arg7 completion:(id)arg8;
- (void)setTaskCompletionAssertionEnabled:(bool)arg1;
- (id)_actionSheetWithButtons:(id)arg1 title:(id)arg2 destructive:(bool)arg3 cancelButtonIndex:(long long)arg4 context:(id)arg5;
- (id)_alertViewWithButtons:(id)arg1 title:(id)arg2 message:(id)arg3 cancelButtonIndex:(long long)arg4 context:(id)arg5;
- (bool)isPresentedAsModalSheet;
- (void)cancelButtonTapped:(id)arg1;
- (void)hideActivityInProgressUI;
- (void)_preventSleepAndDimming:(bool)arg1;
- (bool)shouldReloadSpecifiersOnResume;
- (id)specifiers;
- (void)setCellsChecked:(bool)arg1;
- (void)doneButtonTapped:(id)arg1;
- (id)accountStore;
- (void)setAccountStore:(id)arg1;
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (void)dismissAnimated:(bool)arg1;
- (void)viewDidLoad;
- (void)setCancelButton:(id)arg1;
- (id)cancelButton;
- (void)alertView:(id)arg1 didDismissWithButtonIndex:(long long)arg2;
- (void)actionSheet:(id)arg1 didDismissWithButtonIndex:(long long)arg2;

@end
