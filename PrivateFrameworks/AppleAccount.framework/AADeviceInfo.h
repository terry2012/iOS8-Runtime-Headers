/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
 */

@class APSConnection, NSData, NSObject<OS_dispatch_semaphore>;

@interface AADeviceInfo : NSObject  {
    APSConnection *_apsConnection;
    bool_tokenDone;
    NSData *_token;
    NSObject<OS_dispatch_semaphore> *_tokenSema;
}

+ (id)serialNumber;
+ (id)clientInfoHeader;
+ (id)appleIDClientIdentifier;
+ (id)udid;
+ (id)apnsToken;
+ (id)userAgentHeader;
+ (id)osVersion;
+ (id)productVersion;
+ (id)infoDictionary;

- (id)deviceColor;
- (id)storageCapacity;
- (id)internationalMobileEquipmentIdentity;
- (id)mobileEquipmentIdentifier;
- (bool)hasCellularCapability;
- (id)deviceEnclosureColor;
- (id)wifiMacAddress;
- (id)deviceClass;
- (id)osName;
- (id)regionCode;
- (id)serialNumber;
- (id)deviceInfoDictionary;
- (id)clientInfoHeader;
- (id)appleIDClientIdentifier;
- (id)udid;
- (id)apnsToken;
- (id)userAgentHeader;
- (id)osVersion;
- (id)productVersion;
- (id)deviceName;
- (id)productType;
- (void).cxx_destruct;
- (id)buildVersion;

@end
