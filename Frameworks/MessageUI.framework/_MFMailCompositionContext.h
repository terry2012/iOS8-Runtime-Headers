/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/MessageUI.framework/MessageUI
 */

@class NSString, NSArray, MFMessageViewingContext, MFMailMessage;

@interface _MFMailCompositionContext : NSObject  {
    NSString *_sendingAddress;
    NSString *_subject;
    NSArray *_toRecipients;
    NSArray *_ccRecipients;
    NSArray *_bccRecipients;
    NSString *_messageBody;
    int _composeType;
    id _autosaveIdentifier;
    NSString *_contextID;
    MFMailMessage *_originalMessage;
    id _originalContent;
    MFMessageViewingContext *_loadingContext;
    bool_loadRest;
    bool_includeAttachments;
    bool_showKeyboardImmediately;
    bool_showContentImmediately;
    bool_usingDefaultAccount;
    bool_prefersFirstLineSelection;
    int _sourceAccountManagement;
    unsigned long long _caretPosition;
    NSString *_originatingBundleID;
}

@property bool usingDefaultAccount;
@property(copy) NSString * sendingAddress;
@property(copy) NSString * subject;
@property(copy) NSArray * toRecipients;
@property(copy) NSArray * ccRecipients;
@property(copy) NSArray * bccRecipients;
@property bool loadRest;
@property bool includeAttachments;
@property bool showKeyboardImmediately;
@property bool showContentImmediately;
@property bool prefersFirstLineSelection;
@property unsigned long long caretPosition;
@property(retain) id originalContent;
@property(retain) MFMessageViewingContext * loadingContext;
@property(readonly) int composeType;
@property(readonly) id autosaveIdentifier;
@property(readonly) MFMailMessage * originalMessage;
@property(copy) NSString * originatingBundleID;
@property int sourceAccountManagement;
@property(readonly) NSString * contextID;


- (void)setPrefersFirstLineSelection:(bool)arg1;
- (void)setShowContentImmediately:(bool)arg1;
- (void)setUsingDefaultAccount:(bool)arg1;
- (id)initOutboxRestoreOfMessage:(id)arg1;
- (id)initSendAgainDraftOfMessage:(id)arg1;
- (id)initDraftRestoreOfMessage:(id)arg1;
- (id)initForwardOfMessage:(id)arg1;
- (id)initReplyAllToMessage:(id)arg1;
- (id)initReplyToMessage:(id)arg1;
- (id)initRecoveredAutosavedMessageWithIdentifier:(id)arg1;
- (id)initWithComposeType:(int)arg1 originalMessage:(id)arg2;
- (id)initWithURL:(id)arg1 composeType:(int)arg2 originalMessage:(id)arg3;
- (id)initWithComposeType:(int)arg1;
- (void)setOriginatingBundleID:(id)arg1;
- (id)initWithComposeType:(int)arg1 RFC822Data:(id)arg2;
- (void)setSendingAddress:(id)arg1;
- (id)sendingAddress;
- (bool)usingDefaultAccount;
- (id)bccRecipients;
- (unsigned long long)caretPosition;
- (bool)prefersFirstLineSelection;
- (void)recordUndoAttachmentsForURLs:(id)arg1;
- (void)setShowKeyboardImmediately:(bool)arg1;
- (bool)includeAttachments;
- (void)setOriginalContent:(id)arg1;
- (id)originalContent;
- (void)setBccRecipients:(id)arg1;
- (void)setCcRecipients:(id)arg1;
- (void)setToRecipients:(id)arg1;
- (bool)showKeyboardImmediately;
- (bool)loadRest;
- (id)ccRecipients;
- (id)toRecipients;
- (bool)showContentImmediately;
- (id)originatingBundleID;
- (void)setIncludeAttachments:(bool)arg1;
- (void)setLoadRest:(bool)arg1;
- (void)setLoadingContext:(id)arg1;
- (id)originalMessage;
- (id)loadingContext;
- (int)composeType;
- (int)sourceAccountManagement;
- (void)setCaretPosition:(unsigned long long)arg1;
- (void)recordPasteboardAttachmentsForURLs:(id)arg1;
- (id)messageBody;
- (void)removeAttachment:(id)arg1;
- (void)setSubject:(id)arg1;
- (id)subject;
- (id)attachments;
- (id)contextID;
- (id)init;
- (id)initWithURL:(id)arg1;
- (void)dealloc;
- (id)addAttachmentData:(id)arg1 mimeType:(id)arg2 fileName:(id)arg3;
- (void)setMessageBody:(id)arg1 isHTML:(bool)arg2;
- (id)autosaveIdentifier;
- (void)setSourceAccountManagement:(int)arg1;

@end
