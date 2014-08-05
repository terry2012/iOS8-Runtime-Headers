/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@class NSData;

@interface CKDMescalCertURLRequest : CKDURLRequest  {
    NSData *_mescalCert;
}

@property(retain) NSData * mescalCert;


- (void)setMescalCert:(id)arg1;
- (bool)hasRequestBody;
- (bool)requiresDeviceID;
- (bool)allowsAnonymousAccount;
- (long long)partitionType;
- (long long)serverType;
- (void)requestDidParsePlaintextObject:(id)arg1;
- (bool)requiresSignature;
- (id)mescalCert;
- (id)httpMethod;
- (id)url;
- (void).cxx_destruct;

@end
