/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/Message.framework/Message
 */

@interface _MFDAMessageStoreGetUpdatesRequest : DAMailboxGetUpdatesRequest <MFDAMailAccountRequest> {
    bool_isUserRequested;
}

@property(readonly) bool shouldSend;
@property(readonly) bool isUserRequested;


- (bool)mf_alwaysReportFailures;
- (id)initRequestForBodyFormat:(int)arg1 withBodySizeLimit:(int)arg2 isUserRequested:(bool)arg3;
- (bool)shouldSend;
- (id)deferredOperation;
- (bool)isUserRequested;
- (unsigned long long)generationNumber;

@end
