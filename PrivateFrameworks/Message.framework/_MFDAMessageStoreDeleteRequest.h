/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/Message.framework/Message
 */

@interface _MFDAMessageStoreDeleteRequest : DAMailboxDeleteMessageRequest <MFDAMailAccountRequest> {
}

@property(readonly) bool shouldSend;
@property(readonly) bool isUserRequested;


- (bool)shouldSend;
- (id)deferredOperation;
- (bool)isUserRequested;
- (unsigned long long)generationNumber;

@end
