/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSArray, NSObject<OS_dispatch_group>, NSDictionary;

@interface CKDDecryptRecordsOperation : CKDDatabaseOperation  {

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _recordDecryptedBlock;

    NSArray *_recordsToDecrypt;
    NSObject<OS_dispatch_group> *_recordDecryptGroup;
    NSDictionary *_webSharingIdentityDataByRecordID;
}

@property(copy) id recordDecryptedBlock;
@property(retain) NSArray * recordsToDecrypt;
@property(retain) NSObject<OS_dispatch_group> * recordDecryptGroup;
@property(retain) NSDictionary * webSharingIdentityDataByRecordID;


- (id)_unwrapPackageAssets:(id)arg1 withPCS:(struct _OpaquePCSShareProtection { }*)arg2;
- (id)_unwrapEncryptedData:(id)arg1 withPCS:(struct _OpaquePCSShareProtection { }*)arg2 forField:(id)arg3;
- (id)_unwrapAssetKey:(id)arg1 withPCS:(struct _OpaquePCSShareProtection { }*)arg2;
- (void)_decryptRecord:(id)arg1 usingWebSharingIdentityData:(id)arg2;
- (void)_recordWasDecrypted:(id)arg1 withError:(id)arg2;
- (id)_unwrapEncryptedPropertiesOnRecord:(id)arg1 withPCS:(struct _OpaquePCSShareProtection { }*)arg2;
- (void)_handleProtectionDataForRecord:(id)arg1;
- (void)_decryptRecord:(id)arg1;
- (id)recordDecryptGroup;
- (id)recordDecryptedBlock;
- (void)setRecordDecryptGroup:(id)arg1;
- (id)recordsToDecrypt;
- (void)setRecordDecryptedBlock:(id)arg1;
- (void)setRecordsToDecrypt:(id)arg1;
- (bool)shouldCheckAppVersion;
- (bool)operationShouldBeFlowControlled;
- (id)initWithOperationInfo:(id)arg1 clientContext:(id)arg2;
- (void)setWebSharingIdentityDataByRecordID:(id)arg1;
- (id)webSharingIdentityDataByRecordID;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (void)main;
- (void).cxx_destruct;

@end
