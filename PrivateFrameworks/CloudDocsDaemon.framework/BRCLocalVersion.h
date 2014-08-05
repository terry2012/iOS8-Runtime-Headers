/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

@class NSString, NSError, CKRecord, NSNumber;

@interface BRCLocalVersion : BRCVersion <BRCSyncThrottleVersionProtocol> {
    CKRecord *_uploadedAssets;
    NSError *_uploadError;
}

@property(retain) CKRecord * uploadedAssets;
@property(retain) NSError * uploadError;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;
@property(readonly) NSNumber * sizeObj;
@property(readonly) NSNumber * isPackageObj;

+ (bool)supportsSecureCoding;

- (void)setUploadError:(id)arg1;
- (void)setUploadedAssets:(id)arg1;
- (id)uploadedAssets;
- (void)sqliteBind:(struct sqlite3_stmt { }*)arg1 index:(int)arg2;
- (void)updateFromFSAtPath:(id)arg1;
- (bool)isMissingUploadsWithDiffs:(unsigned long long)arg1;
- (id)initWithServerVersion:(id)arg1;
- (unsigned long long)diffAgainstLocalVersion:(id)arg1;
- (id)isPackageObj;
- (id)sizeObj;
- (void)updateLocationAndMetaFromFSAtPath:(id)arg1;
- (void)clearVersionSignatures:(unsigned long long)arg1 isPackage:(bool)arg2;
- (id)initWithLocalVersion:(id)arg1;
- (id)initFromResultSet:(id)arg1 pos:(int)arg2 container:(id)arg3;
- (id)descriptionWithContext:(id)arg1;
- (id)uploadError;
- (id)initWithVersion:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;

@end
