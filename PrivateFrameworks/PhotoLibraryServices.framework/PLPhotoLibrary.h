/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@class NSMutableDictionary, PLGenericAlbum, PLInFlightAssetsAlbum, NSMutableArray, PLManagedAlbum, PLThumbnailManager, NSCalendar, NSSet, NSObject<PLAlbumProtocol>, PLManagedObjectContext, NSArray, PLFetchingAlbum;

@interface PLPhotoLibrary : NSObject  {
    bool_listeningForITunesSyncing;
    bool_isTransient;
    unsigned long long _pendingTransactions;
    struct __CFDictionary { } *_allPhotos;
    int _databaseMigrationKind;
    NSMutableArray *_transactionCompletionHandlers;
    PLThumbnailManager *_thumbnailManager;
    PLGenericAlbum *_allImportedPhotosAlbum;
    PLGenericAlbum *_lastImportedPhotosAlbum;
    NSCalendar *_exifConversionCalendar;
    NSMutableDictionary *_photoStreamAlbumsByStreamID;
    NSMutableArray *_photoStreamAlbums;
    NSSet *_imageFileExtensions;
    NSSet *_rawImageFileExtensions;
    NSSet *_audioFileExtensions;
    NSSet *_extraVideoExtensions;
    unsigned long long _lastFetchedGPSCount;
    unsigned long long _insertedCountSinceLastFetchedGPSCount;
    unsigned long long _deletedCountSinceLastFetchedGPSCount;
    unsigned long long _newlyCompleteWithGPS;
    PLManagedAlbum *_cameraRollAlbum;
    PLFetchingAlbum *_recentlyAddedAlbum;
    PLFetchingAlbum *_cameraSessionAlbum;
    PLInFlightAssetsAlbum *_inFlightAssetsAlbum;
    PLManagedObjectContext *managedObjectContext;
}

@property(retain) PLManagedObjectContext * managedObjectContext;
@property(retain,readonly) PLThumbnailManager * thumbnailManager;
@property(retain,readonly) NSObject<PLAlbumProtocol> * savedPhotosAlbum;
@property(retain,readonly) NSObject<PLAlbumProtocol> * recentlyAddedAlbum;
@property(retain,readonly) NSObject<PLAlbumProtocol> * inFlightAssetsAlbum;
@property(copy,readonly) NSArray * albums;
@property(copy,readonly) NSArray * userAlbums;
@property(copy,readonly) NSArray * imagePickerAlbums;
@property(copy,readonly) NSArray * wallpaperAlbums;
@property(copy,readonly) NSArray * importAlbums;
@property(copy,readonly) NSArray * eventAlbums;
@property(copy,readonly) NSArray * faceAlbums;
@property(copy,readonly) NSArray * placeAlbums;
@property(copy,readonly) NSArray * photoStreamAlbums;
@property(copy,readonly) NSArray * photoStreamAlbumsForPreferences;

+ (void)setVideoCaptureIsBusy:(bool)arg1;
+ (unsigned long long)CloudPhotoLibrarySize;
+ (bool)_assetsLibrary_isSharedPhotoStreamsSupportEnabled;
+ (bool)isAlbumSynced:(id)arg1;
+ (id)syncedAlbumSubtitleStringFormat;
+ (void)initializeGraphicsServices;
+ (bool)processCanWriteSandboxForPath:(id)arg1;
+ (bool)processCanReadSandboxForPath:(id)arg1;
+ (id)simpleDCIMDirectory;
+ (id)dcimDirectory;
+ (id)photoDataCPLResourceDestinationDirectoryWithIdentifier:(id)arg1;
+ (id)photoDataCPLLibraryIdentifier;
+ (id)photoDataCPLDerivativeDirectory;
+ (id)videosPath;
+ (id)photoMutationsDirectory;
+ (bool)isStreamsLibraryUpdatingExpired;
+ (void)setStreamsLibraryUpdatingExpired:(bool)arg1;
+ (void)setDupeAnalysisNeeded:(bool)arg1;
+ (id)pauseTime;
+ (void)setICloudPhotosEnabled:(bool)arg1;
+ (void)setEnableICloudPhotos:(bool)arg1;
+ (void)setDisableICloudPhotos:(bool)arg1;
+ (bool)isMomentAnalysisNeeded;
+ (void)setMomentAnalysisNeeded:(bool)arg1;
+ (void)setTakingPhotoIsBusy:(bool)arg1;
+ (void)setImageWriterIsBusy:(bool)arg1;
+ (void)setMigratorIsBusy:(bool)arg1;
+ (void)createPhotoStreamAlbumWithStreamID:(id)arg1 completionHandler:(id)arg2;
+ (id)assetsDataDirectory;
+ (id)lightweightReimportPhotoCloudSharingAssetFileNameWithCloudAssetGUID:(id)arg1 type:(id)arg2;
+ (id)lightweightReimportPhotoCloudSharingAssetDirectoryForAlbumWithCloudGUID:(id)arg1 cloudPersonID:(id)arg2;
+ (id)photoCloudSharingMetadataDirectory;
+ (void)setCloudAlbumSharingEnabled:(bool)arg1;
+ (void)setPhotoStreamEnabled:(bool)arg1;
+ (bool)isSafeToRecoverAfterCrash;
+ (bool)areOpportunisticTasksDisabled;
+ (void)disableOpportunisticTasks:(bool)arg1;
+ (void)handlePossibleCoreDataError:(id)arg1;
+ (id)syncInfoPath;
+ (bool)isDupeAnalysisNeeded;
+ (id)photoStreamsDataDirectory;
+ (void)resetSyncedAssetsDCIMDirectory;
+ (id)iTunesSyncedAssetSmallThumbnailsDirectory;
+ (id)iTunesSyncedAssetMetadataThumbnailsDirectory;
+ (id)iTunesPhotosDirectory;
+ (id)iTunesSyncedFaceDataDirectory;
+ (id)iTunesSyncedFaceAlbumThumbnailsDirectory;
+ (bool)createSqliteErrorIndicatorFile;
+ (id)sqliteErrorIndicatorFilePath;
+ (bool)processWithID:(int)arg1 canWriteSandboxForPath:(id)arg2;
+ (bool)processWithID:(int)arg1 canReadSandboxForPath:(id)arg2;
+ (id)photoDataCPLDirectory;
+ (id)photoDataDirectoryURL;
+ (id)streamsLibraryUpdatingExpiredIndicatorFilePath;
+ (id)libraryAvailableIndicatorFilePath;
+ (id)dupeAnalysisNeededFilePath;
+ (id)pauseICloudPhotosFilePath;
+ (bool)isDisableICloudPhotos;
+ (bool)isEnableICloudPhotos;
+ (void)setPauseMarker:(bool)arg1;
+ (bool)isICloudPhotosPaused;
+ (void)setCameraRollCountedInQuota:(bool)arg1;
+ (void)clearICloudPhotosMarker;
+ (id)enableICloudPhotosFilePath;
+ (id)disableICloudPhotosFilePath;
+ (id)momentAnalysisNeededFilePath;
+ (id)migrationIndicatorFilePath;
+ (void)postGlobalPhotoLibraryAvailableNotification;
+ (void)setLibraryAvailableIndicatorState:(bool)arg1;
+ (id)persistedAlbumDataDirectoryURL;
+ (id)mediaFilesDirectoryURL;
+ (id)iTunesSyncedAssetsDirectory;
+ (id)pathToAssetsToAlbumsMapping;
+ (bool)libraryAvailableIndicatorState;
+ (id)imageWriterIndicatorFilePath;
+ (id)takingPhotoIndicatorFilePath;
+ (id)takingVideoIndicatorFilePath;
+ (id)dcimDirectoryURL;
+ (id)photoDataCachesDirectory;
+ (id)photoCloudSharingDataDirectory;
+ (struct NSObject { Class x1; }*)savedPhotosAlbum;
+ (void)_doFilesystemImportIfNeeded;
+ (void)setApplicationIsWildcat:(bool)arg1;
+ (bool)photoLibraryIsObtainable;
+ (id)opportunisticTaskIsolationQueue;
+ (void)enqeueRecoveryJob:(id)arg1;
+ (id)crashRecoveryIndicatorFilePaths:(bool)arg1;
+ (void)setSqliteErrorAndExitIfNecessary;
+ (id)photoMetadataDirectoryURL;
+ (id)photoCloudSharingCacheDataDirectory;
+ (id)lightweightReimportPhotoCloudSharingDataDirectory;
+ (id)fileReservationForFileAtPath:(id)arg1 exclusive:(bool)arg2;
+ (id)photoDataMiscDirectory;
+ (id)photoDataDirectory;
+ (void)_assetsLibrary_disableSharedPhotoStreamsSupport;
+ (bool)canSaveVideoToCameraRoll:(id)arg1;
+ (bool)isApplicationWildcat;
+ (id)sharedPhotoLibrary;
+ (void)repairSingletonObjects;
+ (void)recoverFromCrashIfNeeded;
+ (bool)isRunningInStoreDemoMode;

- (id)albumListForAlbumOfKind:(int)arg1;
- (void)userTrashAssets:(id)arg1;
- (void)userTrashAlbums:(id)arg1;
- (void)clientApplicationWillEnterForeground;
- (bool)hasPhotoWithFileCreationDate:(id)arg1 fileName:(id)arg2 fileSize:(long long)arg3;
- (id)masterFilenameFromSidecarFileInfo:(id)arg1;
- (void)setLastImportSessionUUID:(id)arg1;
- (id)managedObjectContextStoreUUID;
- (bool)isPhotoInSavedPhotosAlbum:(id)arg1;
- (void)userExpungeAssets:(id)arg1;
- (void)userUntrashAssets:(id)arg1;
- (id)duplicatePhotoStreamPhotosForPhotos:(id)arg1;
- (id)assetURLForManagedPhoto:(id)arg1;
- (struct NSObject { Class x1; }*)inFlightAssetsAlbum;
- (id)librarySizes;
- (bool)getPhotoCount:(unsigned long long*)arg1 videoCount:(unsigned long long*)arg2;
- (id)albumsForContentMode:(int)arg1;
- (void)processSyncSaveJob:(id)arg1 albumMap:(id)arg2;
- (bool)isImageFileExtension:(id)arg1;
- (id)masterURLFromSidecarURLs:(id)arg1;
- (id)addDCIMEntryAtFileURL:(id)arg1 toEvent:(struct NSObject { Class x1; }*)arg2 sidecarFileInfo:(id)arg3 progress:(id)arg4 importSessionIdentifier:(id)arg5 isImported:(bool)arg6 previewImage:(id)arg7 thumbnailImage:(id)arg8 savedAssetType:(short)arg9 replacementUUID:(id)arg10 publicGlobalUUID:(id)arg11 extendedInfo:(id)arg12 thumbnailsData:(struct __CFDictionary { }*)arg13 withUUID:(id)arg14 isPlaceholder:(bool)arg15;
- (void)modifyDCIMEntryForPhoto:(id)arg1;
- (id)dataForPhoto:(id)arg1 format:(int)arg2 width:(int*)arg3 height:(int*)arg4 bytesPerRow:(int*)arg5 dataWidth:(int*)arg6 dataHeight:(int*)arg7 imageDataOffset:(int*)arg8;
- (id)imageForFormat:(int)arg1 forAsset:(id)arg2;
- (struct NSObject { Class x1; }*)iPadAllPhotosAlbumIfExists;
- (struct NSObject { Class x1; }*)allPhotosAlbumIfExists;
- (unsigned long long)editableAlbumCount;
- (void)_updateWithInsertedAssetsCount:(unsigned long long)arg1 deletedCount:(unsigned long long)arg2 updatedAssets:(id)arg3;
- (bool)hasAtLeastOnePhotoWithGPS;
- (void)resetCachedImportAlbumsIfNeededForAlbum:(id)arg1;
- (id)lastImportedPhotosAlbum;
- (void)recreateAlbumsFromMetadata;
- (bool)needsMigration;
- (id)managedObjectWithObjectID:(id)arg1;
- (void)cleanupModelAfterRestoreFromiTunesBackup;
- (void)_migrationDidFinish;
- (bool)deleteAllDiagnosticFiles:(id*)arg1;
- (id)photoFromAssetURL:(id)arg1;
- (id)assetURLForPhoto:(id)arg1;
- (id)lastImportSessionUUID;
- (void)removeFromKnownPhotoStreamAlbums:(id)arg1;
- (void)addToKnownPhotoStreamAlbums:(id)arg1;
- (id)assetWithUUID:(id)arg1;
- (unsigned long long)countOfLocalAlbumsContainingAssets:(id)arg1 assetsInSomeAlbumCount:(long long*)arg2;
- (void)userExpungeAlbums:(id)arg1;
- (void)userUntrashAlbums:(id)arg1;
- (id)placeAlbums;
- (id)wallpaperAlbums;
- (struct NSObject { Class x1; }*)albumWithUuid:(id)arg1;
- (struct NSObject { Class x1; }*)eventWithName:(id)arg1 andImportSessionIdentifier:(id)arg2;
- (void)addInflightAsset:(id)arg1;
- (struct NSObject { Class x1; }*)inFlightAssetsAlbumIfAvailable;
- (struct NSObject { Class x1; }*)recentlyAddedAlbum;
- (void)withDispatchGroup:(id)arg1 performBlock:(id)arg2;
- (void)withDispatchGroup:(id)arg1 performTransaction:(id)arg2 completionHandler:(id)arg3;
- (void)withDispatchGroup:(id)arg1 performTransaction:(id)arg2;
- (void)performBlock:(id)arg1 completionHandler:(id)arg2;
- (void)addCompletionHandlerToCurrentTransaction:(id)arg1;
- (void)performTransactionAndWait:(id)arg1 completionHandler:(id)arg2;
- (void)performTransactionAndWait:(id)arg1;
- (id)iTunesSyncedContentInfo;
- (bool)hasITunesSyncedContent;
- (void)deleteAllImages;
- (void)deleteImages:(id)arg1;
- (bool)hasAtLeastOnePhoto;
- (bool)hasAtLeastOneItem;
- (void)photoLibraryCorruptNotification;
- (id)countOfAllPhotosAndVideos;
- (void)flushAlbums;
- (void)flushPhotoStreamAlbums;
- (void)flushDCIMAlbums;
- (void)testForRecoveryInBackground;
- (bool)_checkMomentAnalysisCompletion;
- (void)performBlockAndWait:(id)arg1 completionHandler:(id)arg2;
- (bool)_hasPendingAssets;
- (id)syncProgressAlbums;
- (struct NSObject { Class x1; }*)filesystemImportProgressAlbum;
- (struct NSObject { Class x1; }*)otaRestoreProgressAlbum;
- (id)imagePickerAlbums;
- (id)albumListForContentMode:(int)arg1;
- (struct NSObject { Class x1; }*)eventAlbumContainingPhoto:(id)arg1;
- (struct NSObject { Class x1; }*)syncProgressAlbum;
- (void)cleanupFilesAfteriTunesSyncBeforeDate:(id)arg1;
- (bool)isAudioFileExtension:(id)arg1;
- (bool)isRawImageFileExtension:(id)arg1;
- (bool)isNonRawImageFileExtension:(id)arg1;
- (bool)isVideoFileExtension:(id)arg1;
- (void)_loadFileExtensionInformation;
- (int)priorityForFileExtension:(id)arg1;
- (id)allImportedPhotosAlbum;
- (id)newImageForPhoto:(id)arg1 format:(int)arg2 allowPlaceholder:(bool)arg3 outImageProperties:(const struct __CFDictionary {}**)arg4 outDeliveredPlaceholder:(bool*)arg5;
- (id)thumbnailManager;
- (id)newImageForPhoto:(id)arg1 format:(int)arg2;
- (struct NSObject { Class x1; }*)iPadAllPhotosAlbum;
- (struct NSObject { Class x1; }*)allPhotosAlbum;
- (void)_updateHasAtLeastOnePhotoWithGPSWithInsertedCount:(unsigned long long)arg1 deletedCount:(unsigned long long)arg2 updatedAssets:(id)arg3;
- (id)lastImportedPhotosAlbumCreateIfNeeded:(bool)arg1;
- (id)allImportedPhotosAlbumCreateIfNeeded:(bool)arg1;
- (void)deleteITunesSyncedContent;
- (void)prepareDatabaseForOTAAssetsPhase;
- (void)_linkAsideAlbumMetadataForOTARestore;
- (void)_removeSyncedAlbumsInTransactionWithManagedObjectContext:(id)arg1;
- (id)_allAssetsForDeletion:(id)arg1;
- (void)_calculatePendingItemCountsAfterOTARestoreWithMangedObjectContext:(id)arg1;
- (void)_safeSave:(id)arg1;
- (void)_deleteObsoleteMetadataFiles;
- (void)setGlobalValue:(id)arg1 forKey:(id)arg2;
- (id)globalValueForKey:(id)arg1;
- (void)performTransaction:(id)arg1 completionHandler:(id)arg2;
- (void)_userApplyTrashedState:(short)arg1 toAssets:(id)arg2;
- (void)_userDeleteAssets:(id)arg1;
- (void)_filterAssets:(id)arg1 toTrashableAssets:(id*)arg2 deletableAssets:(id*)arg3 otherAssets:(id*)arg4;
- (id)assetWithUUID:(id)arg1 inContainer:(id)arg2;
- (void)_userApplyTrashedState:(short)arg1 toAlbums:(id)arg2;
- (void)_userDeleteAlbums:(id)arg1;
- (void)_filterAlbums:(id)arg1 toTrashableAlbums:(id*)arg2 deletableAlbums:(id*)arg3 otherAlbums:(id*)arg4;
- (id)photoStreamAlbumsForPreferences;
- (struct NSObject { Class x1; }*)allPhotoStreamPhotosAlbum;
- (void)removeInflightAssets:(id)arg1;
- (struct NSObject { Class x1; }*)savedPhotosAlbum;
- (void)_withDispatchGroup:(id)arg1 synchronously:(bool)arg2 performBlock:(id)arg3 completionHandler:(id)arg4;
- (void)_withDispatchGroup:(id)arg1 synchronously:(bool)arg2 performTransaction:(id)arg3 completionHandler:(id)arg4;
- (void)_batchDeleteAssets:(id)arg1 inManagedObjectContext:(id)arg2;
- (id)albums;
- (bool)_hasAtLeastOneItem:(bool)arg1;
- (void)copyAssetToCameraRoll:(id)arg1;
- (void)_releaseThumbnailManager;
- (void)setManagedObjectContext:(id)arg1;
- (void)loadDatabase:(const char *)arg1;
- (id)initWithTransientContext:(bool)arg1 name:(const char *)arg2;
- (struct NSObject { Class x1; }*)albumFromGroupURL:(id)arg1;
- (id)faceAlbums;
- (id)importAlbums;
- (id)eventAlbums;
- (id)userAlbums;
- (id)syncedAlbums;
- (id)assetURLForPhoto:(id)arg1 extension:(id)arg2;
- (void)performTransaction:(id)arg1;
- (id)objectWithObjectID:(id)arg1;
- (id)photoStreamAlbums;
- (void)cleanupForStoreDemoMode;
- (bool)hasCompletedMomentAnalysis;
- (id)incompleteRestoreProcesses;
- (bool)hasCompletedRestorePostProcessing;
- (id)existingObjectWithID:(id)arg1 error:(id*)arg2;
- (unsigned long long)concurrencyType;
- (void)performBlock:(id)arg1;
- (bool)isTransient;
- (id)managedObjectContext;
- (id)init;
- (id)initWithName:(const char *)arg1;
- (id)name;
- (void)dealloc;
- (id)_init;

@end
