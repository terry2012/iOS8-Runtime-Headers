/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/LocalAuthentication.framework/LocalAuthentication
 */

@class LAClient, NSString, NSData;

@interface LAContext : NSObject  {
    LAClient *_client;
    bool_cancelButtonVisible;
    bool_fallbackButtonVisible;
    NSString *_localizedFallbackTitle;
    NSString *_creatorDisplayName;
    NSData *_externalizedContext;
}

@property(copy) NSString * localizedFallbackTitle;
@property(retain) NSString * creatorDisplayName;
@property(retain) NSData * externalizedContext;
@property(getter=isCancelButtonVisible) bool cancelButtonVisible;
@property(getter=isFallbackButtonVisible) bool fallbackButtonVisible;


- (void)setFallbackButtonVisible:(bool)arg1;
- (bool)isFallbackButtonVisible;
- (void)setCancelButtonVisible:(bool)arg1;
- (bool)isCancelButtonVisible;
- (void)setExternalizedContext:(id)arg1;
- (void)setCreatorDisplayName:(id)arg1;
- (void)setLocalizedFallbackTitle:(id)arg1;
- (bool)canEvaluatePolicy:(long long)arg1 error:(id*)arg2;
- (void)evaluatePolicy:(long long)arg1 localizedReason:(id)arg2 reply:(id)arg3;
- (id)initWithUIDelegate:(id)arg1;
- (id)initWithExternalizedContext:(id)arg1;
- (id)evaluatePolicy:(long long)arg1 options:(id)arg2 error:(id*)arg3;
- (id)localizedFallbackTitle;
- (id)initWithExternalizedContext:(id)arg1 uiDelegate:(id)arg2;
- (void)enterPassword:(id)arg1 reply:(id)arg2;
- (void)failProcessedEvent:(long long)arg1 failureError:(id)arg2 reply:(id)arg3;
- (void)evaluatePolicy:(long long)arg1 options:(id)arg2 reply:(id)arg3;
- (id)externalizedContext;
- (id)creatorDisplayName;
- (id)init;
- (void)invalidate;
- (void).cxx_destruct;

@end
