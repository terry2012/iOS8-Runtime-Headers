/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/MessageUI.framework/MessageUI
 */

@class UITapGestureRecognizer, NSDictionary, UIBarButtonItem, UIProgressView, ABPeoplePickerNavigationController, MFMailSignatureController, MFComposeTextContentView, _MFMailCompositionContext, MFMailAccountProxyGenerator, MFComposeImageSizeView, UIImagePickerController, MFMailPopoverManager, MFMessageContentProgressLayer, <NSCoding>, UIKeyCommand, UIAlertController, MFOutgoingMessageDelivery, MFMutableMessageHeaders, MFRecentComposeRecipient, MFModernComposeRecipientAtom, NSObject<OS_dispatch_group>, MFComposeActivityContinuationOperation, MFSecureMIMECompositionManager, UIView, MFLANContinuationAgent, NSArray, MFComposeBodyField, MFComposeRecipient, ABPersonViewController, MFMailComposeRecipientView, NSString, <MFMailComposeViewControllerDelegate>, MFMailboxUid, MFComposeSubjectView, MFAddressPickerReformatter, NSTimer, MFLock, ABUnknownPersonViewController, NSDate;

@interface MFMailComposeController : UIViewController <UINavigationControllerDelegate, UIPopoverPresentationControllerDelegate, MFMailComposeToFieldDelegate, NSUserActivityDelegate, MFComposeActivityContinuationOperationDelegate, ABPersonViewControllerDelegate, ABPeoplePickerNavigationControllerDelegate, ABUnknownPersonViewControllerDelegate, MFMailPopoverManagerDelegate, MFMailComposeViewDelegate, MFComposeHeaderViewDelegate, MFComposeSubjectViewDelegate, MFComposeImageSizeViewDelegate, MFComposeRecipientTextViewDelegate, MFSecureMIMECompositionManagerDelegate, MFComposeTypeFactoryDelegate, UIImagePickerControllerDelegate, UIPopoverControllerDelegate, MFGroupDetailViewControllerDelegate> {
    <MFMailComposeViewControllerDelegate> *_delegate;
    id _autorotationDelegate;
    id _remoteViewControllerProxy;
    MFMailAccountProxyGenerator *_accountProxyGenerator;
    _MFMailCompositionContext *_compositionContext;
    unsigned long long _options;
    NSArray *_toAddresses;
    NSArray *_ccAddresses;
    NSArray *_bccAddresses;
    NSArray *_originalBccAddresses;
    NSString *_subject;
    NSString *_originalSendingEmailAddress;
    NSString *_primaryAddressForForcedSendingAccount;
    NSString *_sendingEmailAddress;
    long long _sendingEmailAddressIndex;
    id _content;
    unsigned long long _initialAttachmentCount;
    UIView *_alternateTitleView;
    UIBarButtonItem *_sendButtonItem;
    UIBarButtonItem *_closeButtonItem;
    ABPeoplePickerNavigationController *_peoplePicker;
    ABPersonViewController *_personViewController;
    ABUnknownPersonViewController *_unknownPersonViewController;
    UIImagePickerController *_photosImagePickerController;
    MFMailComposeRecipientView *_toField;
    MFMailComposeRecipientView *_ccField;
    MFMailComposeRecipientView *_lastFocusedRecipientView;
    MFModernComposeRecipientAtom *_atomPresentingCard;
    MFComposeSubjectView *_subjectField;
    MFComposeImageSizeView *_imageSizeField;
    MFComposeBodyField *_bodyField;
    MFComposeTextContentView *_bodyTextView;
    MFMailSignatureController *_signatureController;
    MFRecentComposeRecipient *_recentRecipientPresentingCard;
    MFMailPopoverManager *_popoverManager;
    MFOutgoingMessageDelivery *_delivery;
    MFMutableMessageHeaders *_savedHeaders;
    NSString *_lastDraftMessageID;
    MFMailboxUid *_lastDraftMailboxUid;
    NSString *_initialTitle;
    MFLock *_autosaveLock;
    id _autosaveIdentifier;
    MFSecureMIMECompositionManager *_secureCompositionManager;
    NSDictionary *_certificatesByRecipient;
    NSDictionary *_errorsByRecipient;
    NSString *_addressForMissingIdentity;
    int _signingIdentityStatus;
    int _encryptionIdentityStatus;
    bool_encryptionStatusIsKnown;
    int _resolution;
    int _recipientFieldWhileViewUnloaded;
    unsigned int _isDirty : 1;
    unsigned int _bodyTextChanged : 1;
    unsigned int _shouldAutosaveWithSuspendInfo : 1;
    unsigned int _isSuspended : 1;
    unsigned int _viewWasUnloaded : 1;
    unsigned int _fromAddressPickerWasVisible : 1;
    unsigned int _stillLoading : 1;
    unsigned int _hosted : 1;
    unsigned int _hasViewAppeared : 1;
    unsigned int _rotationSnapshotTaken : 1;
    unsigned int _isPopoverVisible : 1;
    unsigned int _useSuspended : 1;
    unsigned int _didShowNotifyConfirmation : 1;
    unsigned int _showingNotifyConfirmation : 1;
    MFAddressPickerReformatter *_addressPickerReformatter;
    bool_contentVisible;
    bool_allowRestrictedAccounts;
    bool_encryptionOverrideSetting;
    UIKeyCommand *_sendKeyCommand;
    UIKeyCommand *_escapeKeyCommand;
    UITapGestureRecognizer *_requestModalTapGestureRecognizer;
    UIAlertController *_notifyConfirmation;
    MFComposeActivityContinuationOperation *_continuationOperation;
    UIProgressView *_continuationProgressView;
    MFMessageContentProgressLayer *_progressIndicatorView;
    MFLANContinuationAgent *_LANContinuationAgent;
    NSObject<OS_dispatch_group> *_imageScalingGroup;
    bool_autosaveIsValid;
    unsigned short _lastTypedCharacter;
    NSTimer *_autosaveTimer;
    NSDate *_autosavedDate;
    NSDate *_lastActiveDate;
    bool_isModal;
    int _sourceAccountManagement;
    MFComposeRecipient *_recipientPresentingCard;
    NSString *_originatingBundleID;
    UIAlertController *_popoverAlert;
}

@property id delegate;
@property(retain) id remoteViewControllerProxy;
@property(readonly) MFOutgoingMessageDelivery * delivery;
@property(readonly) NSString * lastDraftMessageID;
@property(readonly) MFMailboxUid * lastDraftMailboxUid;
@property(copy) NSString * originatingBundleID;
@property int sourceAccountManagement;
@property(readonly) NSDate * autosavedDate;
@property(retain) <NSCoding> * autosaveIdentifier;
@property bool isModal;
@property(retain) UIAlertController * popoverAlert;
@property(retain) ABPeoplePickerNavigationController * peoplePicker;
@property(retain) ABPersonViewController * personViewController;
@property(retain) ABUnknownPersonViewController * unknownPersonViewController;
@property(retain) MFModernComposeRecipientAtom * atomPresentingCard;
@property(retain) MFComposeRecipient * recipientPresentingCard;
@property(retain) NSDictionary * certificatesByRecipient;
@property(retain) NSDictionary * errorsByRecipient;
@property(copy) NSString * addressForMissingIdentity;
@property(getter=isVerticallyCompact,readonly) bool verticallyCompact;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;

+ (bool)isSetupForDeliveryAllowingRestrictedAccounts:(bool)arg1;
+ (id)preferenceForKey:(id)arg1;
+ (bool)isSetupForDeliveryAllowingRestrictedAccounts:(bool)arg1 originatingBundleID:(id)arg2 sourceAccountManagement:(int)arg3;
+ (void)initialize;

- (void)_accountsChanged:(id)arg1;
- (void)secureMIMECompositionManager:(id)arg1 encryptionStatusDidChange:(int)arg2 context:(id)arg3;
- (void)secureMIMECompositionManager:(id)arg1 signingStatusDidChange:(int)arg2 context:(id)arg3;
- (id)popoverAlert;
- (void)setOriginatingBundleID:(id)arg1;
- (id)autosavedDate;
- (bool)isModal;
- (id)delivery;
- (id)lastDraftMailboxUid;
- (id)lastDraftMessageID;
- (id)atomPresentingCard;
- (void)setRemoteViewControllerProxy:(id)arg1;
- (id)remoteViewControllerProxy;
- (void)handleLargeMessageComposeContinuationWithInputStream:(id)arg1 outputStream:(id)arg2 error:(id)arg3;
- (void)hostApplicationWillEnterForeground;
- (void)hostApplicationDidEnterBackground;
- (void)composeShortcutInvoked:(id)arg1;
- (void)setRecipientsKeyboardType:(long long)arg1;
- (bool)isSavingAsDraft;
- (void)forceSaveAsDraft;
- (void)_unscaleImages;
- (void)_unthrottleScalingWithAttachmentStore:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })rectOfAttachment:(id)arg1;
- (void)_updateOriginalBccStatusForRestore;
- (void)_tryAddSenderToBccRecipients;
- (bool)_shouldPrependBlankLineForAttachments;
- (void)setInitialTitle:(id)arg1;
- (id)initWithCompositionContext:(id)arg1 options:(unsigned long long)arg2;
- (void)groupDetailViewControllerDidCancel:(id)arg1;
- (void)groupDetailViewController:(id)arg1 didAskToRemoveGroup:(id)arg2;
- (void)groupDetailViewController:(id)arg1 didTapComposeRecipient:(id)arg2;
- (void)addSignature:(bool)arg1;
- (bool)hasAnyHiddenTrailingEmptyQuote;
- (void)setSavedHeaders:(id)arg1;
- (id)accountProxyGenerator;
- (bool)chooseSelectedSearchResultForComposeRecipientView:(id)arg1;
- (void)selectPreviousSearchResultForComposeRecipientView:(id)arg1;
- (void)selectNextSearchResultForComposeRecipientView:(id)arg1;
- (void)dismissSearchResultsForComposeRecipientView:(id)arg1;
- (bool)presentSearchResultsForComposeRecipientView:(id)arg1;
- (bool)composeRecipientViewShowingSearchResults:(id)arg1;
- (void)composeRecipientViewDidBecomeFirstResponder:(id)arg1;
- (void)composeRecipientViewReturnPressed:(id)arg1;
- (unsigned long long)presentationOptionsForRecipient:(id)arg1;
- (id)composeRecipientView:(id)arg1 composeRecipientForAddress:(id)arg2;
- (void)composeRecipientView:(id)arg1 showCorecipients:(id)arg2;
- (void)composeRecipientView:(id)arg1 showPersonCardForAtom:(id)arg2;
- (void)composeRecipientViewRequestAddRecipient:(id)arg1;
- (bool)recipientViewShouldIgnoreFirstResponderChanges:(id)arg1;
- (void)recipientViewDidResignFirstResponder:(id)arg1;
- (void)recipientViewDidBecomeFirstResponder:(id)arg1;
- (void)composeRecipientView:(id)arg1 textDidChange:(id)arg2;
- (void)composeRecipientView:(id)arg1 didChangeSize:(struct CGSize { double x1; double x2; })arg2;
- (void)composeRecipientView:(id)arg1 didReplaceRecipients:(id)arg2 withRecipients:(id)arg3;
- (void)composeRecipientView:(id)arg1 didRemoveRecipient:(id)arg2;
- (void)composeRecipientView:(id)arg1 didAddRecipient:(id)arg2;
- (void)imageSizeView:(id)arg1 changedSelectedScaleTo:(unsigned long long)arg2;
- (bool)sendingEmailDirtied;
- (long long)popoverPresentationStyleForViewController:(id)arg1;
- (void)popoverControllerDidDismissPopover:(id)arg1 isUserAction:(bool)arg2;
- (void)tappedSMIMEButton;
- (bool)shouldShowSMIMEButton;
- (void)_createAndAddContinuationProgressViewIfNecessary;
- (void)setCompositionContext:(id)arg1;
- (id)_documentForActivityContinuation;
- (void)_hideContinuationProgressViewAnimated:(bool)arg1;
- (void)_updateIdentityStatus:(int*)arg1 withPolicy:(int)arg2 identity:(struct __SecIdentity { }*)arg3 error:(id)arg4;
- (id)_missingIdentityErrorWithFormat:(id)arg1 title:(id)arg2;
- (id)addressForMissingIdentity;
- (void)_showMissingIdentityAlert;
- (bool)_hasRecipients;
- (void)_updateTitleBarForEncryptionStatus:(int)arg1;
- (void)_updateSMIMEButtonForEncryptionStatus:(int)arg1;
- (void)setAddressForMissingIdentity:(id)arg1;
- (void)setErrorsByRecipient:(id)arg1;
- (void)setCertificatesByRecipient:(id)arg1;
- (void)_updateTableCell:(id)arg1 isChecked:(bool)arg2;
- (void)didSelectCellAtRow:(unsigned long long)arg1;
- (id)_reformattedAddressAtIndex:(unsigned long long)arg1;
- (unsigned long long)_reloadNumberOfReformattedAddressesWithMaximumWidth:(double)arg1 defaultFontSize:(double)arg2;
- (void)_showPersonCardForRecipient:(id)arg1 showDeleteButton:(bool)arg2;
- (id)navigationControllerForRecentPersonCard;
- (void)_removeRecent;
- (id)recipientPresentingCard;
- (void)_updatePersonCard;
- (id)_newAddressBookViewControllerForRecipient:(id)arg1;
- (bool)isShowingRecentPersonCard;
- (void)_setLastFocusedRecipientView:(id)arg1;
- (id)errorsByRecipient;
- (id)certificatesByRecipient;
- (unsigned long long)_defaultAtomPresentationOptions;
- (bool)_hasEncryptionIdentityError;
- (void)composeRecipientView:(id)arg1 didFinishEnteringAddress:(id)arg2;
- (bool)_anyRecipientViewContainsAddress:(id)arg1;
- (void)_updateSMIMEButtonEnabledForRecipientCount;
- (void)_updateBodyFieldAutoCorrectionContext;
- (void)_updateAutoBccSendingAddress:(id)arg1 withNewSendingAddress:(id)arg2;
- (id)bccRecipients;
- (void)_dismissPersonCard;
- (void)composeRecipientViewDidFinishPickingRecipient:(id)arg1;
- (id)composeRecipientView:(id)arg1 composeRecipientForRecord:(void*)arg2 identifier:(int)arg3;
- (void)_popoverWillBePresented:(id)arg1;
- (void)didBecomeActiveComposeController;
- (void)_updateRecipientAtomStyles;
- (bool)_isActiveComposeController;
- (bool)hosted;
- (void)_finishEnteringRecipients;
- (void)_dismissPeoplePicker:(id)arg1;
- (void)_clearMessageValues;
- (void)dismissSheet;
- (id)popoverManagerCreateIfNeeded:(bool)arg1;
- (void)clearInitialTitle;
- (void)setRecipientPresentingCard:(id)arg1;
- (void)setAtomPresentingCard:(id)arg1;
- (void)setUnknownPersonViewController:(id)arg1;
- (void)setPersonViewController:(id)arg1;
- (id)unknownPersonViewController;
- (id)personViewController;
- (void)setIsModal:(bool)arg1;
- (int)_fieldForAddressField:(id)arg1;
- (void)_restoreMessageValues;
- (void)_focusGained:(id)arg1;
- (void)_composeViewDidDraw:(id)arg1;
- (void)attachmentFinishedLoading:(id)arg1;
- (void)attachmentsRemoved:(id)arg1;
- (void)_recipientTextChanged:(id)arg1;
- (void)_subjectTextChanged:(id)arg1;
- (void)_bodyTextChanged:(id)arg1;
- (int)deliverMessageRemotely;
- (bool)needsDelivery;
- (void)_explainAirplaneMode;
- (id)_messageForDraft;
- (id)_messageForRemoteDelivery;
- (void)_setUpDeliveryObject;
- (unsigned long long)_estimateMessageSize;
- (void)_physicallyScaleImagesToScale:(unsigned long long)arg1;
- (void)_presentModalAlert:(id)arg1;
- (void)_finishModalAlertClosingComposition:(bool)arg1;
- (void)_checkForInvalidAddressesWithContinuation:(id)arg1;
- (void)_checkForEmptySubjectWithContinuation:(id)arg1;
- (void)_prepareImagesForSendWithContinuation:(id)arg1;
- (void)sendMessage;
- (Class)_deliveryClass;
- (id)_messageUseSuspendInfo:(bool)arg1 endingEditing:(bool)arg2;
- (id)_outgoingMessageWithSubstituteDocument:(id)arg1 useSuspendInfo:(bool)arg2 endingEditing:(bool)arg3;
- (void)_displayPopoverAlert:(id)arg1;
- (void)_leaveMessageInOutbox;
- (void)_setupForSaveAsDraft;
- (void)_finishPopoverAlertClosingComposition:(bool)arg1;
- (void)_finishedComposing;
- (int)resolution;
- (id)_messageForAutosave;
- (void)_saveMessageValues;
- (void)_prepareForSuspend;
- (bool)_shouldAutosaveAfterTimerFiredWithInterval:(double)arg1;
- (void)_setTitleBarSubtitleText:(id)arg1 style:(unsigned long long)arg2;
- (void)_setInitialStateForImageField;
- (unsigned long long)_sizeForScale:(unsigned long long)arg1 imagesOnly:(bool)arg2;
- (void)_scaleImages;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameForAttachmentWithIdentifier:(id)arg1;
- (bool)hasAttachments;
- (bool)_wantsEncryption;
- (bool)_isPopoverOrActionSheetOrAlertVisible;
- (bool)_isSetupForDelivery;
- (bool)_shouldEnableCloseButton;
- (bool)_shouldEnableSendButton;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_optimalRectForPresentingPopoverInWebView:(id)arg1;
- (bool)isVerticallyCompact;
- (id)_allRecipientViews;
- (void)removeAddressAtIndex:(unsigned long long)arg1 field:(int)arg2;
- (void)addAddress:(id)arg1 field:(int)arg2;
- (id)addressesForField:(int)arg1;
- (void)_setRecipients:(id)arg1 forField:(int)arg2;
- (id)_addressFieldForField:(int)arg1;
- (void)_resetSecureCompositionManagerUsingNewAccount:(bool)arg1;
- (id)sendingAccountProxy;
- (bool)_setSendingEmailAddress:(id)arg1 addIfNotPresent:(bool)arg2;
- (void)_draftContentDidChange;
- (void)_autosaveTimerFired:(id)arg1;
- (void)_setAutosaveIsValid:(bool)arg1;
- (void)_makeComposeUserActivityCurrent;
- (void)_finishedLoadingAllContentAndAttachments;
- (void)_attachmentLoaderFinishedWithOriginalContent:(id)arg1;
- (void)setSendingEmailAddress:(id)arg1 addIfNotPresent:(bool)arg2;
- (void)setBccRecipients:(id)arg1;
- (void)setCcRecipients:(id)arg1;
- (void)setToRecipients:(id)arg1;
- (void)setDraftMessageID:(id)arg1 mailbox:(id)arg2;
- (id)savedHeaders;
- (bool)_isReplyOrForward;
- (void)_updateImageSizeTitles;
- (void)pickInitialFirstResponder;
- (void)_loadAttachments;
- (void)_loadingContextDidLoad:(id)arg1;
- (void)_setIsLoading:(bool)arg1;
- (void)_updateOriginalBccStatusForRestoreAddingAddress:(bool)arg1;
- (bool)_isRestoredComposition;
- (void)_checkForReplyAndForwardRestriction;
- (void)_updateSendAndCloseEnabled;
- (id)ccRecipients;
- (id)toRecipients;
- (void)_setupForAutosavedMessage:(id)arg1;
- (void)_setupForOutbox:(id)arg1;
- (void)_setupForExistingNewMessage:(id)arg1 content:(id)arg2;
- (void)_setupForDraft:(id)arg1;
- (id)originatingBundleID;
- (void)_prepareCompositionContextForLoading:(id)arg1;
- (void)_loadCompositionContext;
- (void)clearAllFields;
- (void)setProgressUIVisible:(bool)arg1 animated:(bool)arg2;
- (id)_availableAccountProxies;
- (id)_emailAddresses;
- (void)_resetProxyGenerator;
- (id)_defaultAccount;
- (bool)_secureCompositionManagerHasRecipients;
- (void)_resetSecureCompositionManager;
- (id)navigationBarTitle;
- (id)_alternateTitleView;
- (void)_updateNavigationBarTitleAnimated:(bool)arg1;
- (int)composeType;
- (void)_requestBecomeModalGestureRecognized:(id)arg1;
- (void)setAddresses:(id)arg1 field:(int)arg2;
- (void)setPopoverAlert:(id)arg1;
- (id)mailComposeView;
- (void)_preferredContentSizeCategoryDidChange:(id)arg1;
- (void)setHosted:(bool)arg1;
- (int)sourceAccountManagement;
- (void)composeSubjectViewTextFieldDidBecomeFirstResponder:(id)arg1;
- (void)composeSubjectViewTextFieldDidResignFirstResponder:(id)arg1;
- (void)composeSubjectViewDidSelectNotifyButton:(id)arg1;
- (void)activityContinuationOperation:(id)arg1 didFinishReceivingData:(id)arg2;
- (void)activityContinuationOperationReceivedBytes:(id)arg1;
- (void)activityContinuationOperation:(id)arg1 didFinishSendingDataWithResult:(unsigned long long)arg2;
- (void)activityContinuationOperation:(id)arg1 didFailWithError:(id)arg2;
- (void)setCaretPosition:(unsigned long long)arg1;
- (void)didInsertAttachment:(id)arg1;
- (id)compositionContext;
- (int)compositionType;
- (void)didInsertBodyText:(id)arg1;
- (id)bodyField;
- (void)composeHeaderViewDidConfirmValue:(id)arg1;
- (void)composeHeaderViewDidChangeValue:(id)arg1;
- (void)composeRecipientView:(id)arg1 showPersonCardForRecipient:(id)arg2;
- (bool)bccAddressesDirtied;
- (void)setSendingEmailAddress:(id)arg1;
- (id)sendingEmailAddress;
- (void)updateSignature;
- (void)scrollToSelectedEntryInFromAddressTableView:(id)arg1;
- (void)selectCurrentEntryForFromAddressPickerView:(id)arg1;
- (id)currentScaleImageSize;
- (id)sendingEmailAddressIfExists;
- (bool)canShowImageSizeField;
- (bool)canShowFromField;
- (id)popoverManager;
- (void)insertPhotoOrVideo;
- (bool)unknownPersonViewController:(id)arg1 shouldPerformDefaultActionForPerson:(void*)arg2 property:(int)arg3 identifier:(int)arg4;
- (void)unknownPersonViewController:(id)arg1 didResolveToPerson:(void*)arg2;
- (bool)personViewController:(id)arg1 shouldPerformDefaultActionForPerson:(void*)arg2 property:(int)arg3 identifier:(int)arg4;
- (void)peoplePickerNavigationController:(id)arg1 didSelectPerson:(void*)arg2 property:(int)arg3 identifier:(int)arg4;
- (void)peoplePickerNavigationController:(id)arg1 didSelectPerson:(void*)arg2;
- (id)emailAddresses;
- (bool)isDirty;
- (void)setSubject:(id)arg1;
- (id)subject;
- (void)send:(id)arg1;
- (id)attachments;
- (void)close:(id)arg1;
- (void)_close;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (void)dealloc;
- (void)userActivity:(id)arg1 didReceiveInputStream:(id)arg2 outputStream:(id)arg3;
- (void)peoplePickerNavigationControllerDidCancel:(id)arg1;
- (void)setPeoplePicker:(id)arg1;
- (id)peoplePicker;
- (id)autosaveIdentifier;
- (void)setSourceAccountManagement:(int)arg1;
- (void)setAutosaveIdentifier:(id)arg1;
- (void)autosaveWithHandler:(id)arg1;
- (void)_showPhotoPickerWithSourceType:(long long)arg1;
- (void)imagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2;
- (void)imagePickerControllerDidCancel:(id)arg1;
- (void)setContentVisible:(bool)arg1;
- (void)popoverPresentationController:(id)arg1 willRepositionPopoverToRect:(inout struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg2 inView:(inout id*)arg3;
- (void)popoverPresentationControllerDidDismissPopover:(id)arg1;
- (void)prepareForPopoverPresentation:(id)arg1;
- (void)_getRotationContentSettings:(struct { boolx1; boolx2; boolx3; boolx4; double x5; int x6; }*)arg1;
- (id)rotatingFooterView;
- (id)rotatingHeaderView;
- (void)didRotateFromInterfaceOrientation:(long long)arg1;
- (void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidUnload;
- (void)viewWillUnload;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)loadView;
- (id)keyCommands;
- (void)applicationDidResume;
- (void)updateUserActivityState:(id)arg1;
- (void)applicationWillSuspend;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)pickerView:(id)arg1 didSelectRow:(long long)arg2 inComponent:(long long)arg3;
- (id)pickerView:(id)arg1 attributedTitleForRow:(long long)arg2 forComponent:(long long)arg3;
- (unsigned long long)pickerView:(id)arg1 numberOfRowsInComponent:(unsigned long long)arg2;
- (int)numberOfComponentsInPickerView:(id)arg1;

@end
