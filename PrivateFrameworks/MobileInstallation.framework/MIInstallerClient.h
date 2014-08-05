/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/MobileInstallation.framework/MobileInstallation
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSXPCConnection;

@interface MIInstallerClient : NSObject <MobileInstallerDelegateProtocol> {
    NSXPCConnection *_connection;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _progressBlock;

}

@property(copy) id progressBlock;

+ (id)installerWithProgressBlock:(id)arg1;

- (id)initWithProgressBlock:(id)arg1;
- (void)_invalidateObject;
- (void)updateAppDataProtectionWithOptions:(id)arg1 completion:(id)arg2;
- (void)updateSinfForLSWithIdentifier:(id)arg1 withOptions:(id)arg2 sinfData:(id)arg3 completion:(id)arg4;
- (void)updateSinfForIdentifier:(id)arg1 withOptions:(id)arg2 sinfData:(id)arg3 completion:(id)arg4;
- (void)checkCapabilities:(id)arg1 withOptions:(id)arg2 completion:(id)arg3;
- (void)listSafeHarborsOfType:(long long)arg1 withOptions:(id)arg2 completion:(id)arg3;
- (void)removeSafeHarborForIdentifier:(id)arg1 ofType:(long long)arg2 withOptions:(id)arg3 completion:(id)arg4;
- (void)registerSafeHarborAtPath:(id)arg1 forIdentifier:(id)arg2 ofType:(long long)arg3 withOptions:(id)arg4 completion:(id)arg5;
- (void)processRestoredContainerWithIdentifier:(id)arg1 ofType:(long long)arg2 options:(id)arg3 completion:(id)arg4;
- (void)listArchivesWithOptions:(id)arg1 completion:(id)arg2;
- (void)removeArchiveForIdentifier:(id)arg1 withOptions:(id)arg2 completion:(id)arg3;
- (void)archiveIdentifier:(id)arg1 withOptions:(id)arg2 completion:(id)arg3;
- (void)fetchDiskUsageForIdentifiers:(id)arg1 withOptions:(id)arg2 completion:(id)arg3;
- (void)fetchInstalledAppsWithOptions:(id)arg1 completion:(id)arg2;
- (void)clearUninstalledIdentifiers:(id)arg1 withOptions:(id)arg2 completion:(id)arg3;
- (void)lookupUninstalledWithOptions:(id)arg1 completion:(id)arg2;
- (void)uninstallIdentifiers:(id)arg1 withOptions:(id)arg2 completion:(id)arg3;
- (void)installPath:(id)arg1 withOptions:(id)arg2 completion:(id)arg3;
- (id)progressBlock;
- (void)setProgressBlock:(id)arg1;
- (id)init;
- (void)reportProgress:(id)arg1;
- (void).cxx_destruct;

@end
