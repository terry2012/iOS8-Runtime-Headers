/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@class CKDMescalSession;

@interface CKDMescalSessionOperationInfo : CKDatabaseOperationInfo <NSSecureCoding> {
    int _serverVersion;
    CKDMescalSession *_session;
}

@property int serverVersion;
@property(retain) CKDMescalSession * session;


- (void)setServerVersion:(int)arg1;
- (int)serverVersion;
- (void)setSession:(id)arg1;
- (id)session;
- (void).cxx_destruct;

@end
