/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/Message.framework/Message
 */

@class MFMailboxUid, NSString, MFMessage, DAMailMessage;

@interface MFDAMessage : MFMailMessage  {
    DAMailMessage *_DAMailMessage;
    MFMessage *_rfc822CreatedMessage;
    MFMailboxUid *_mailbox;
    NSString *_externalConversationID;
}

@property(readonly) DAMailMessage * DAMailMessage;


- (id)remoteID;
- (id)initWithDAMailMessage:(id)arg1 mailbox:(id)arg2;
- (id)DAMailMessage;
- (id)remoteMailboxURL;
- (id)externalConversationID;
- (id)mailbox;
- (id)headersIfAvailable;
- (unsigned long long)messageFlags;
- (bool)messageData:(id*)arg1 messageSize:(unsigned long long*)arg2 isComplete:(bool*)arg3 downloadIfNecessary:(bool)arg4;
- (id)messageBody;
- (unsigned long long)messageSize;
- (id)headers;
- (void)dealloc;

@end
