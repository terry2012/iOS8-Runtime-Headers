/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

@class NSURL, CPLStatistics, CPLConfiguration, NSDate, CPLEngineSyncManager, CPLEngineScheduler, CPLEngineTransport, NSString, NSHashTable, CPLEngineSystemMonitor, NSObject<OS_dispatch_queue>, NSArray, CPLPlatformObject, CPLEngineStore, NSError, CPLStatus;

@interface CPLEngineLibrary : NSObject <CPLAbstractObject> {
    NSArray *_components;
    NSObject<OS_dispatch_queue> *_queue;
    NSHashTable *_attachedObjects;
    NSError *_openingError;
    CPLStatus *_status;
    bool_closed;
    CPLPlatformObject *_platformObject;
    NSURL *_clientLibraryBaseURL;
    NSURL *_cloudLibraryStateStorageURL;
    NSURL *_cloudLibraryResourceStorageURL;
    NSString *_libraryIdentifier;
    CPLEngineStore *_store;
    CPLEngineScheduler *_scheduler;
    CPLEngineSyncManager *_syncManager;
    CPLEngineTransport *_transport;
    CPLStatistics *_statistics;
    CPLEngineSystemMonitor *_systemMonitor;
    CPLConfiguration *_configuration;
}

@property(copy,readonly) NSURL * clientLibraryBaseURL;
@property(copy,readonly) NSURL * cloudLibraryStateStorageURL;
@property(copy,readonly) NSURL * cloudLibraryResourceStorageURL;
@property(copy,readonly) NSString * libraryIdentifier;
@property(readonly) CPLEngineStore * store;
@property(readonly) CPLEngineScheduler * scheduler;
@property(readonly) CPLEngineSyncManager * syncManager;
@property(readonly) CPLEngineTransport * transport;
@property(readonly) CPLStatistics * statistics;
@property(readonly) CPLEngineSystemMonitor * systemMonitor;
@property(readonly) CPLConfiguration * configuration;
@property bool hasChangesToProcess;
@property bool isExceedingQuota;
@property bool iCloudLibraryHasBeenWiped;
@property bool iCloudLibraryExists;
@property(retain) NSDate * exitDeleteTime;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;
@property(readonly) CPLPlatformObject * platformObject;

+ (id)platformImplementationProtocol;

- (void)detachObject:(id)arg1 withCompletionHandler:(id)arg2;
- (void)attachObject:(id)arg1 withCompletionHandler:(id)arg2;
- (void)_performBlockWithLibrary:(bool)arg1 enumerateAttachedObjects:(id)arg2;
- (void)_closeNextComponent:(id)arg1 deactivate:(bool)arg2 lastError:(id)arg3 completionHandler:(id)arg4;
- (void)_openNextComponent:(id)arg1 completionHandler:(id)arg2;
- (void)getStatusArrayForComponents:(id)arg1 completionHandler:(id)arg2;
- (void)getStatusForComponents:(id)arg1 completionHandler:(id)arg2;
- (void)getListOfComponentsWithCompletionHandler:(id)arg1;
- (id)cloudLibraryStateStorageURL;
- (id)clientLibraryBaseURL;
- (void)startSyncSession;
- (id)initWithClientLibraryBaseURL:(id)arg1 cloudLibraryStateStorageURL:(id)arg2 cloudLibraryResourceStorageURL:(id)arg3 libraryIdentifier:(id)arg4;
- (void)notifyAttachedObjectsResourceDidFailBackgroundDownloadOfResource:(id)arg1;
- (void)notifyAttachedObjectsResourceDidDowloadInBackground:(id)arg1;
- (void)updateLastSuccessfullSyncDate:(id)arg1;
- (void)notifyAttachedObjectsPullQueueIsFull;
- (id)systemMonitor;
- (id)syncManager;
- (void)setICloudLibraryExists:(bool)arg1;
- (bool)iCloudLibraryExists;
- (void)setICloudLibraryHasBeenWiped:(bool)arg1;
- (bool)iCloudLibraryHasBeenWiped;
- (void)setExitDeleteTime:(id)arg1;
- (id)exitDeleteTime;
- (void)setIsExceedingQuota:(bool)arg1;
- (bool)isExceedingQuota;
- (id)transport;
- (void)notifyAttachedObjectsUploadTask:(id)arg1 didFinishWithError:(id)arg2;
- (void)notifyAttachedObjectsUploadTask:(id)arg1 didProgress:(float)arg2;
- (void)notifyAttachedObjectsUploadTaskDidStart:(id)arg1;
- (id)scheduler;
- (void)closeAndDeactivate:(bool)arg1 completionHandler:(id)arg2;
- (id)libraryIdentifier;
- (void)setHasChangesToProcess:(bool)arg1;
- (bool)hasChangesToProcess;
- (void)notifyAttachedObjectsSizeOfResourcesToUploadDidChangeToSize:(unsigned long long)arg1;
- (id)platformObject;
- (id)cloudLibraryResourceStorageURL;
- (id)store;
- (id)statistics;
- (id)configuration;
- (void).cxx_destruct;
- (id)description;
- (void)openWithCompletionHandler:(id)arg1;
- (id)componentName;

@end
