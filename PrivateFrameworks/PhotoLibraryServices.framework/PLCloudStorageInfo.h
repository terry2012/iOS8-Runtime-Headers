/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLCloudStorageInfo : NSObject  {
    long long _totalBytes;
    long long _availableBytes;
    long long _usedBytes;
    long long _cameraRollBackupBytes;
}

@property long long totalBytes;
@property long long availableBytes;
@property long long usedBytes;
@property long long cameraRollBackupBytes;

+ (id)storageInfoWithTotal:(long long)arg1 available:(long long)arg2 used:(long long)arg3 cameraRollBackupBytes:(long long)arg4;

- (void)setCameraRollBackupBytes:(long long)arg1;
- (long long)cameraRollBackupBytes;
- (void)setUsedBytes:(long long)arg1;
- (long long)usedBytes;
- (void)setAvailableBytes:(long long)arg1;
- (id)initWithTotalQuotaBytes:(long long)arg1 totalAvailableBytes:(long long)arg2 totalUsedBytes:(long long)arg3 cameraRollBackupBytes:(long long)arg4;
- (long long)totalBytes;
- (void)setTotalBytes:(long long)arg1;
- (long long)availableBytes;

@end
