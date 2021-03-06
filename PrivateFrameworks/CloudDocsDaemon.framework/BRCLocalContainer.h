/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class PQLNameInjection, BRCVersionUploader, NSNumber, NSDictionary, NSObject<OS_dispatch_group>, BRCSyncDownOperation, BRCSyncBudgetThrottle, <BRCLocalContainerDelegate>, BRCAccountSession, NSString, NSMutableIndexSet, NSMutableSet, BRCVersionDownloader, NSError, NSArray, BRCRelativePath, BRContainer, BRCSyncOperationThrottle, BRCServerContainer, BRCSyncUpOperation, NSURL, PQLConnection, BRCDBThrottle;

@interface BRCLocalContainer : NSObject <BRCContainer> {
    BRCAccountSession *_session;
    bool_activated;
    unsigned int _schemaVersion;
    unsigned long long _readerLastRowID;

  /* Unexpected information at end of encoded ivar type: Q */
  /* Error parsing encoded ivar type info: AQ */
    /* Warning: Unrecognized filer type: 'A' using 'void*' */ void*_activeQueries;


  /* Unexpected information at end of encoded ivar type: Q */
  /* Error parsing encoded ivar type info: AQ */
    /* Warning: Unrecognized filer type: 'A' using 'void*' */ void*_activeRecursiveQueries;


  /* Unexpected information at end of encoded ivar type: Q */
  /* Error parsing encoded ivar type info: AQ */
    /* Warning: Unrecognized filer type: 'A' using 'void*' */ void*_activeAliasQueries;

    unsigned long long _maxLostStamp;
    NSNumber *_deepScanStamp;
    unsigned long long _lostHeapKey;
    unsigned long long _syncUpRetryAfter;

  /* Unexpected information at end of encoded ivar type: I */
  /* Error parsing encoded ivar type info: AI */
    /* Warning: Unrecognized filer type: 'A' using 'void*' */ void*_syncState;


  /* Unexpected information at end of encoded ivar type: Q */
  /* Error parsing encoded ivar type info: AQ */
    /* Warning: Unrecognized filer type: 'A' using 'void*' */ void*_syncBarriers;

    BRCSyncUpOperation *_syncUpOperation;
    NSError *_lastSyncUpError;
    BRCSyncDownOperation *_syncDownOperation;
    NSError *_lastSyncDownError;
    BRCSyncOperationThrottle *_syncUpThrottle;
    BRCSyncBudgetThrottle *_syncUpBudget;
    BRCSyncOperationThrottle *_syncDownThrottle;
    BRCVersionDownloader *_versionDownloader;
    BRCVersionUploader *_versionUploader;
    NSMutableIndexSet *_appliedTombstoneRanks;
    NSObject<OS_dispatch_group> *_faultingGroup;
    NSMutableIndexSet *_pendingCoordinatedIOs;
    NSMutableSet *_pendingFileCoordinators;
    bool_shouldForceContainerForeground;
    NSMutableSet *_foregroundXPCClients;
    NSMutableSet *_XPCClientsUsingUbiquity;
    int _notifyTokenForFramework;
    bool_deactivated;
    bool_needsSave;
    bool_containerMetadataNeedsSyncUp;
    unsigned int _state;
    <BRCLocalContainerDelegate> *_delegate;
    PQLConnection *_db;
    BRCServerContainer *_serverContainer;
    NSString *_containerID;
    NSString *_mangledID;
    BRCRelativePath *_root;
    NSNumber *_fileID;
    NSNumber *_generationID;
    unsigned long long _requestID;
    PQLNameInjection *_itemsTable;
    PQLNameInjection *_pkgItemsTable;
    PQLNameInjection *_desiredAdditionsTable;
    PQLNameInjection *_serverItemsTable;
    NSArray *_tableNames;
    BRCDBThrottle *_readerThrottle;
    BRCDBThrottle *_applyThrottle;
    NSArray *_syncThrottles;
    BRContainer *_containerMetadata;
    NSString *_containerMetadataEtag;
}

@property(readonly) unsigned int state;
@property(readonly) bool deactivated;
@property(retain) <BRCLocalContainerDelegate> * delegate;
@property(retain) BRCRelativePath * root;
@property(readonly) BRCRelativePath * path;
@property(readonly) BRCRelativePath * documentsPath;
@property(readonly) NSURL * url;
@property(readonly) NSNumber * fileID;
@property(readonly) NSNumber * generationID;
@property(readonly) NSString * mangledID;
@property(retain) BRCServerContainer * serverContainer;
@property(retain) BRCAccountSession * accountSession;
@property(readonly) BRCVersionUploader * versionUploader;
@property(readonly) BRCVersionDownloader * versionDownloader;
@property(readonly) bool allowsCellularAccess;
@property(readonly) BRContainer * containerMetadata;
@property(retain) NSString * containerMetadataEtag;
@property bool containerMetadataNeedsSyncUp;
@property(readonly) bool isForeground;
@property(readonly) NSString * coreDuetAdmissionTicket;
@property(readonly) PQLConnection * db;
@property(readonly) PQLNameInjection * itemsTable;
@property(readonly) PQLNameInjection * pkgItemsTable;
@property(readonly) PQLNameInjection * desiredAdditionsTable;
@property(readonly) PQLNameInjection * serverItemsTable;
@property(readonly) BRCDBThrottle * readerThrottle;
@property(readonly) BRCDBThrottle * applyThrottle;
@property(readonly) bool hasActiveQueries;
@property(readonly) bool hasActiveRecursiveQueries;
@property(readonly) bool hasActiveAliasQueries;
@property(readonly) NSNumber * deepScanStamp;
@property(readonly) unsigned long long lostHeapKey;
@property(readonly) unsigned long long currentRequestID;
@property(readonly) unsigned int syncState;
@property(readonly) NSArray * syncThrottles;
@property(readonly) unsigned long long syncKey;
@property(readonly) bool hasUploads;
@property(readonly) bool hasDownloads;
@property(readonly) bool isGreedy;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;
@property(readonly) bool needsSave;
@property(readonly) NSString * containerID;
@property(readonly) NSString * zoneName;
@property(readonly) NSDictionary * plist;
@property(readonly) NSArray * tableNames;

+ (bool)_sql_upgrade_to_version1:(id)arg1;
+ (struct PQLResultSet { Class x1; }*)containersEnumerator:(id)arg1;
+ (id)containerByID:(id)arg1 withDB:(id)arg2;

- (void)setServerContainer:(id)arg1;
- (bool)isRankPostponed:(id)arg1;
- (void)notifyClient:(id)arg1 whenFaultingIsDone:(id)arg2;
- (bool)fileIDIsStaged:(unsigned long long)arg1;
- (unsigned long long)documentCount;
- (unsigned long long)documentEvictableSizeUsage;
- (unsigned long long)documentSizeUsage;
- (bool)hasLocalChanges;
- (bool)hasUbiquitousDocuments;
- (void)handleRootRecordDeletion;
- (void)didSyncDownRequestID:(unsigned long long)arg1 recoverFromRank:(id)arg2 caughtUpWithServer:(bool)arg3 flushClientTruth:(bool)arg4;
- (void)syncDownOperation:(id)arg1 didFinishWithError:(id)arg2;
- (void)resetSyncBudgetAndThrottle;
- (void)didClearAllItemsMarkedOverQuota;
- (void)didUploadAllItems;
- (bool)changedAtRelativePath:(id)arg1;
- (id)deepScanStamp;
- (void)scheduleCoordinatedReadForItem:(id)arg1 atPath:(id)arg2;
- (struct PQLResultSet { Class x1; }*)evictableDocumentsEnumerator;
- (struct PQLResultSet { Class x1; }*)itemsEnumeratorWithParentID:(id)arg1;
- (struct PQLResultSet { Class x1; }*)stagedItemsEnumerator;
- (struct PQLResultSet { Class x1; }*)bouncedItemsEnumerator;
- (struct PQLResultSet { Class x1; }*)itemsWithFailedUploadEnumeratorWithSizeSmallerThan:(unsigned long long)arg1;
- (struct PQLResultSet { Class x1; }*)itemsNeedingUploadEnumeratorWithItemIDFilter:(id)arg1;
- (struct PQLResultSet { Class x1; }*)serverItemsEnumerator;
- (struct PQLResultSet { Class x1; }*)itemsEnumerator;
- (bool)existsByParentID:(id)arg1 andName:(id)arg2;
- (bool)existsByItemID:(id)arg1;
- (id)itemByRowID:(unsigned long long)arg1;
- (void)removeClientUsingUbiquity:(id)arg1;
- (void)addClientUsingUbiquity:(id)arg1;
- (void)removeForegroundClient:(id)arg1;
- (void)addForegroundClient:(id)arg1;
- (id)coreDuetAdmissionTicket;
- (void)_setupDuetIfNeeded;
- (void)unregisterQueryWithAliases:(bool)arg1 isRecursive:(bool)arg2;
- (id)documentsPath;
- (bool)isGreedy;
- (void)startDownloadItem:(id)arg1 options:(unsigned long long)arg2 group:(id)arg3;
- (bool)evictItem:(id)arg1 group:(id)arg2 error:(id*)arg3;
- (struct PQLResultSet { Class x1; }*)itemsWithInFlightDiffsEnumerator;
- (void)_buildUnappliedCommandsQueue:(unsigned long long)arg1 maxRank:(unsigned long long)arg2;
- (id)_itemsKilledInSyncUp;
- (id)_unappliedRanks;
- (id)syncThrottles;
- (void)_learnCKInfosFromSavedRecords:(id)arg1;
- (void)_markRequestIDAcked;
- (void)setSyncDisabled:(bool)arg1;
- (void)_syncUpOfRecords:(id)arg1 didFinishWithError:(id)arg2;
- (bool)hasUploads;
- (unsigned long long)backoffBeforeProcessingLostItemWithStamp:(unsigned long long)arg1;
- (struct PQLResultSet { Class x1; }*)_itemsNeedingUploadEnumeratorWithAdditionalClause:(id)arg1;
- (id)resolveClashOfAlias:(id)arg1 atPath:(id)arg2 withAlias:(id)arg3 atPath:(id)arg4;
- (bool)hasUbiquityClientsConnected;
- (void)startDownloadingItemsUsingGroup:(id)arg1;
- (void)tellDuetContainerWasAccessedByBundleID:(id)arg1;
- (void)clearStateBits:(unsigned int)arg1;
- (void)clearSyncStateBits:(unsigned int)arg1;
- (void)setSyncStateBits:(unsigned int)arg1;
- (void)setStateBits:(unsigned int)arg1;
- (void)_activateState:(unsigned int)arg1 origState:(unsigned int)arg2;
- (void)_notifyFrameworkContainersMonitorWithState:(bool)arg1;
- (unsigned long long)currentRequestID;
- (unsigned long long)nextSyncUpRequestID;
- (void)didDownloadAllItems;
- (struct PQLResultSet { Class x1; }*)itemsNeedingDownloadEnumeratorWithItemIDFilter:(id)arg1;
- (bool)hasDownloads;
- (void)signalAdditionsNeedsApply;
- (bool)handleResetErrorIfNeeded:(id)arg1;
- (id)desiredThumbnailForItemID:(id)arg1;
- (id)desiredLoserForItemID:(id)arg1 etag:(id)arg2;
- (struct PQLResultSet { Class x1; }*)losersNeedingDownloadEnumeratorForItemID:(id)arg1;
- (id)deviceKeyForName:(id)arg1;
- (id)xattrForSignature:(id)arg1;
- (id)tableNames;
- (struct PQLResultSet { Class x1; }*)itemsEnumeratorWithDB:(id)arg1;
- (void)_checkResultSetIsEmpty:(id)arg1 logToFile:(struct __sFILE { char *x1; int x2; int x3; short x4; short x5; struct __sbuf { char *x_6_1_1; int x_6_1_2; } x6; int x7; void *x8; int (*x9)(); int (*x10)(); int (*x11)(); int (*x12)(); struct __sbuf { char *x_13_1_1; int x_13_1_2; } x13; struct __sFILEX {} *x14; int x15; unsigned char x16[3]; unsigned char x17[1]; struct __sbuf { char *x_18_1_1; int x_18_1_2; } x18; int x19; long long x20; }*)arg2 reason:(id)arg3 result:(bool*)arg4;
- (bool)_dumpChildrenOfDirectory:(id)arg1 toContext:(id)arg2 visitedItems:(id)arg3 depth:(int)arg4 error:(id*)arg5;
- (void)didGCTombstoneRanks:(id)arg1;
- (bool)deactivated;
- (void)updateWithPlist:(id)arg1;
- (id)initWithDB:(id)arg1;
- (id)plist;
- (bool)recomputeSyncBlockState;
- (void)_updateContainerMetadataFromRecord:(id)arg1;
- (void)setContainerMetadataNeedsSyncUp:(bool)arg1;
- (void)setContainerMetadataEtag:(id)arg1;
- (id)containerMetadataEtag;
- (void)startSyncOperationOnQueue:(id)arg1 syncUpBudget:(float)arg2 now:(unsigned long long)arg3;
- (void)retriedUnappliedRank:(id)arg1;
- (bool)hasUnappliedCommands;
- (id)nextUnappliedBatch:(unsigned int)arg1 now:(unsigned long long)arg2 next:(long long*)arg3;
- (struct PQLResultSet { Class x1; }*)liveItemIDsWithStagedAdditionsEnumerator;
- (id)nextLostItemIDWithBackoff:(unsigned long long*)arg1 now:(unsigned long long)arg2;
- (bool)hasItemsPendingRead;
- (long long)nextReadRetryTimestamp;
- (id)coordinatorForItem:(id)arg1 forRead:(bool)arg2;
- (id)nextItemToRead;
- (void)availableQuotaDidIncreaseWithNewAvailableQuota:(long long)arg1;
- (void)scheduleSyncDown;
- (id)containerMetadata;
- (id)_initWithContainerID:(id)arg1 path:(id)arg2 db:(id)arg3 accountSession:(id)arg4;
- (void)activateWithServerContainer:(id)arg1 forCreation:(bool)arg2;
- (void)scheduleContainerMetadataSyncUp;
- (bool)containerMetadataNeedsSyncUp;
- (void)setRoot:(id)arg1;
- (bool)upgradeTables;
- (unsigned int)syncState;
- (bool)finishedReset:(unsigned long long)arg1;
- (void)reset:(unsigned long long)arg1;
- (bool)startReset:(unsigned long long)arg1;
- (unsigned long long)lostHeapKey;
- (void)markLatestSyncRequestFailed;
- (id)initFromPQLResultSet:(id)arg1 error:(id*)arg2;
- (void)signalNeedsToApplyChanges;
- (void)removeUnappliedRank:(id)arg1 isAppliedTombstone:(bool)arg2;
- (void)postponeUnappliedRank:(id)arg1;
- (void)didMarkItemNeedsDownload;
- (void)rescheduleUnappliedRank:(id)arg1 forFaultCreation:(bool)arg2;
- (unsigned long long)markChildrenLostForItemID:(id)arg1;
- (void)didMarkItemRejected;
- (void)didMarkItemNeedsUpload;
- (void)didMarkItemWithSizeDecreaseNeedsSyncUp;
- (void)didMarkItemUploadOverQuota;
- (void)scheduleRead;
- (void)didUpdateCurrentVersionOfItem:(id)arg1;
- (void)reschedulePostponedRanks;
- (void)scheduleSyncUp;
- (void)didFindLostItem:(id)arg1;
- (bool)itemHasChildren:(id)arg1;
- (bool)deleteReservedChildren:(id)arg1;
- (bool)hasActiveRecursiveQueries;
- (bool)hasActiveQueries;
- (bool)hasActiveAliasQueries;
- (void)serverDidAckAliasTargetDeletion:(id)arg1;
- (id)desiredAdditionsTable;
- (void)rescheduleUnappliedItemID:(id)arg1 forFaultCreation:(bool)arg2;
- (bool)serverDidAckAliasTarget:(id)arg1;
- (id)pkgItemsTable;
- (void)scheduleDeepScan;
- (id)serverItemsTable;
- (void)updateFromFSAtPath:(id)arg1;
- (unsigned long long)allocateLostStampAddingBackoff:(bool)arg1;
- (long long)throttleHashWithItemID:(id)arg1;
- (bool)printStatusLoggingToFile:(struct __sFILE { char *x1; int x2; int x3; short x4; short x5; struct __sbuf { char *x_6_1_1; int x_6_1_2; } x6; int x7; void *x8; int (*x9)(); int (*x10)(); int (*x11)(); int (*x12)(); struct __sbuf { char *x_13_1_1; int x_13_1_2; } x13; struct __sFILEX {} *x14; int x15; unsigned char x16[3]; unsigned char x17[1]; struct __sbuf { char *x_18_1_1; int x_18_1_2; } x18; int x19; long long x20; }*)arg1 withDB:(id)arg2;
- (bool)validateStructureLoggingToFile:(struct __sFILE { char *x1; int x2; int x3; short x4; short x5; struct __sbuf { char *x_6_1_1; int x_6_1_2; } x6; int x7; void *x8; int (*x9)(); int (*x10)(); int (*x11)(); int (*x12)(); struct __sbuf { char *x_13_1_1; int x_13_1_2; } x13; struct __sFILEX {} *x14; int x15; unsigned char x16[3]; unsigned char x17[1]; struct __sbuf { char *x_18_1_1; int x_18_1_2; } x18; int x19; long long x20; }*)arg1 withDB:(id)arg2;
- (bool)validateItemsLoggingToFile:(struct __sFILE { char *x1; int x2; int x3; short x4; short x5; struct __sbuf { char *x_6_1_1; int x_6_1_2; } x6; int x7; void *x8; int (*x9)(); int (*x10)(); int (*x11)(); int (*x12)(); struct __sbuf { char *x_13_1_1; int x_13_1_2; } x13; struct __sFILEX {} *x14; int x15; unsigned char x16[3]; unsigned char x17[1]; struct __sbuf { char *x_18_1_1; int x_18_1_2; } x18; int x19; long long x20; }*)arg1 withDB:(id)arg2;
- (struct PQLResultSet { Class x1; }*)itemsEnumeratorParentedTo:(id)arg1 notParentedTo:(id)arg2 rankMin:(unsigned long long)arg3 rankMax:(unsigned long long)arg4 namePrefix:(id)arg5 shouldIncludeFolders:(bool)arg6 shouldIncludeAliases:(bool)arg7 count:(unsigned long long)arg8;
- (struct PQLResultSet { Class x1; }*)itemsEnumeratorChildOf:(id)arg1 rankMin:(unsigned long long)arg2 rankMax:(unsigned long long)arg3 count:(unsigned long long)arg4;
- (void)registerQueryWithAliases:(bool)arg1 isRecursive:(bool)arg2;
- (id)reservedItemByParentID:(id)arg1 andDisplayName:(id)arg2;
- (id)faultByParentID:(id)arg1 andDisplayName:(id)arg2;
- (id)directoryItemIDByFileID:(unsigned long long)arg1;
- (id)fileIDForDirectoryItemID:(id)arg1 withDB:(id)arg2;
- (id)itemByDocumentID:(unsigned int)arg1;
- (id)itemByFileID:(unsigned long long)arg1;
- (id)itemByParentID:(id)arg1 andName:(id)arg2;
- (id)serverItemByParentID:(id)arg1 andName:(id)arg2;
- (id)serverItemByItemID:(id)arg1;
- (id)parentIDForPath:(id)arg1;
- (unsigned long long)countOfItemsWithPendingChanges;
- (id)readerThrottle;
- (id)applyThrottle;
- (bool)dumpTablesToContext:(id)arg1 error:(id*)arg2;
- (bool)dumpActivityToContext:(id)arg1 error:(id*)arg2;
- (bool)saveToDB;
- (id)itemsTable;
- (id)itemByItemID:(id)arg1;
- (id)versionUploader;
- (id)versionDownloader;
- (void)setAccountSession:(id)arg1;
- (id)accountSession;
- (id)serverContainer;
- (id)mangledID;
- (bool)isForeground;
- (id)db;
- (unsigned long long)syncKey;
- (id)generationID;
- (id)fileID;
- (id)containerID;
- (id)zoneName;
- (void)setContainerID:(id)arg1;
- (void)deactivate;
- (id)path;
- (id)url;
- (id)root;
- (bool)needsSave;
- (void)setNeedsSave:(bool)arg1;
- (void)setDelegate:(id)arg1;
- (bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (bool)allowsCellularAccess;
- (id)delegate;
- (unsigned int)state;
- (void)dealloc;
- (void).cxx_destruct;
- (id)description;

@end
