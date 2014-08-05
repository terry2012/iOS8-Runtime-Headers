/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/AccountsUI.framework/AccountsUI
 */

@class NSObject<OS_dispatch_queue>, ACAccountStore, <ACUIAccountOperationsDelegate>;

@interface ACUIAccountOperationsHelper : NSObject  {
    ACAccountStore *_accountStore;
    NSObject<OS_dispatch_queue> *_accountOperationsQueue;
    bool_isRemovingAccount;
    bool_isSavingAccount;
    <ACUIAccountOperationsDelegate> *_delegate;
}

@property <ACUIAccountOperationsDelegate> * delegate;
@property bool isRemovingAccount;
@property bool isSavingAccount;


- (void)removeAccount:(id)arg1;
- (bool)isSavingAccount;
- (bool)isRemovingAccount;
- (void)saveAccount:(id)arg1 withDataclassActions:(id)arg2;
- (void)saveAccount:(id)arg1;
- (void)setIsRemovingAccount:(bool)arg1;
- (void)saveAccount:(id)arg1 withDataclassActions:(id)arg2 requireVerification:(bool)arg3;
- (id)_desiredDataclassActionsFromPossibleActions:(id)arg1 forAccount:(id)arg2;
- (void)setIsSavingAccount:(bool)arg1;
- (void)saveAccount:(id)arg1 requireVerification:(bool)arg2;
- (id)initWithAccountStore:(id)arg1;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (void).cxx_destruct;

@end
