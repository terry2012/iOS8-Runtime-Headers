/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
 */

@class NSString;

@interface AASigningSession : NSObject  {
    NSString *_certURL;
    NSString *_sessionURL;
    int _error;
}

@property(readonly) int error;


- (id)signatureForData:(id)arg1;
- (void)establishSession;
- (id)initWithCertURL:(id)arg1 sessionURL:(id)arg2;
- (int)error;
- (void)dealloc;
- (void).cxx_destruct;

@end
