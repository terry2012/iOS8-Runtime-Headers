/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/CoreData.framework/CoreData
 */

@class PFUbiquityLocation, NSString, NSRecursiveLock, PFUbiquitySaveSnapshot, PFUbiquityKnowledgeVector, NSMutableDictionary, NSNumber;

@interface PFUbiquityTransactionLog : NSObject  {
    NSMutableDictionary *_contents;
    int _transactionLogType;
    bool_useTemporaryLogLocation;
    PFUbiquityLocation *_transactionLogLocation;
    PFUbiquityLocation *_temporaryTransactionLogLocation;
    PFUbiquityLocation *_stagingTransactionLogLocation;
    NSString *_fileProtectionOption;
    bool_inTemporaryLocation;
    bool_inStagingLocation;
    bool_inPermanentLocation;
    PFUbiquityKnowledgeVector *_knowledgeVector;
    PFUbiquitySaveSnapshot *_saveSnapshot;
    NSString *_localPeerID;
    bool_loadUsingRetry;
    bool_loadedComparisonMetadata;
    bool_loadedImportMetadata;
    bool_loadedInsertedObjectData;
    bool_loadedUpdatedObjectData;
    bool_loadedDeletedObjectData;
    bool_loadedContents;
    NSRecursiveLock *_contentsLock;
}

@property bool useTemporaryLogLocation;
@property(readonly) bool inTemporaryLocation;
@property(readonly) bool inStagingLocation;
@property(readonly) bool inPermanentLocation;
@property(readonly) NSString * storeName;
@property(readonly) NSString * exportingPeerID;
@property(readonly) NSString * modelVersionHash;
@property(readonly) NSString * fileProtectionOption;
@property(readonly) NSNumber * transactionNumber;
@property(readonly) NSString * transactionLogFilename;
@property(readonly) int transactionLogType;
@property(readonly) PFUbiquityLocation * transactionLogLocation;
@property(readonly) PFUbiquityLocation * temporaryTransactionLogLocation;
@property(readonly) PFUbiquityLocation * stagingTransactionLogLocation;
@property(readonly) PFUbiquitySaveSnapshot * saveSnapshot;
@property(readonly) PFUbiquityLocation * currentLocation;
@property(readonly) PFUbiquityKnowledgeVector * knowledgeVector;
@property(readonly) NSString * localPeerID;
@property bool loadUsingRetry;
@property(readonly) bool loadedComparisonMetadata;
@property(readonly) bool loadedImportMetadata;
@property(readonly) bool loadedInsertedObjectData;
@property(readonly) bool loadedUpdatedObjectData;
@property(readonly) bool loadedDeletedObjectData;

+ (id)generateTransactionLogFilename;
+ (void)truncateLogFilesBeforeBaselineMetadata:(id)arg1 withLocalPeerID:(id)arg2 andUbiquityRootLocation:(id)arg3;
+ (id)transactionLogFilenameUUID;
+ (void)truncateLogFilesForPeerID:(id)arg1 storeName:(id)arg2 modelVersionHash:(id)arg3 beforeKnowledgeVector:(id)arg4 withLocalPeerID:(id)arg5 andUbiquityRootLocation:(id)arg6;
+ (void)updateModificationTimesForLocation:(id)arg1;
+ (id)createDataFromExtendedAttrsForLog:(id)arg1 error:(id*)arg2;
+ (id)createTransactionLogFilenameForLogType:(int)arg1;
+ (int)transactionLogTypeFromLocation:(id)arg1;
+ (bool)pruneTemporaryLogDirectoryForPeerRootLocation:(id)arg1 error:(id*)arg2;

- (bool)loadedDeletedObjectData;
- (bool)loadedUpdatedObjectData;
- (bool)loadedInsertedObjectData;
- (bool)loadedImportMetadata;
- (bool)loadedComparisonMetadata;
- (void)setLoadUsingRetry:(bool)arg1;
- (bool)loadUsingRetry;
- (id)fileProtectionOption;
- (id)generatePeerCodeKnowledgeVectorWithManagedObjectContext:(id)arg1;
- (bool)rewriteToDiskWithError:(id*)arg1;
- (id)initWithTransactionLogURL:(id)arg1 ubiquityRootLocation:(id)arg2 andLocalPeerID:(id)arg3;
- (bool)deleteLogFileWithError:(id*)arg1;
- (void)cleanupExternalDataReferences;
- (bool)writeContentsOfZipArchive:(id)arg1 intoExtendedAttributesForFile:(id)arg2 error:(id*)arg3;
- (void)populateContents;
- (bool)useTemporaryLogLocation;
- (bool)loadContents:(id*)arg1;
- (id)loadPlistAtLocation:(id)arg1 withError:(id*)arg2;
- (void)releaseDeletedObjects;
- (void)releaseUpdatedObjects;
- (void)releaseInsertedObjects;
- (bool)inStagingLocation;
- (bool)inTemporaryLocation;
- (bool)inPermanentLocation;
- (id)stagingTransactionLogLocation;
- (id)temporaryTransactionLogLocation;
- (id)currentLocation;
- (int)transactionLogType;
- (id)initWithStoreName:(id)arg1 andSaveSnapshot:(id)arg2 andRootLocation:(id)arg3;
- (id)transactionLogFilename;
- (id)knowledgeVector;
- (id)exportingPeerID;
- (bool)loadComparisonMetadataWithError:(id*)arg1;
- (bool)releaseContents:(id*)arg1;
- (id)transactionLogLocation;
- (id)localPeerID;
- (id)modelVersionHash;
- (bool)writeToDiskWithError:(id*)arg1 andUpdateFilenameInTransactionEntries:(id)arg2;
- (void)setUseTemporaryLogLocation:(bool)arg1;
- (id)transactionNumber;
- (id)storeName;
- (id)saveSnapshot;
- (bool)loadUpdatedObjectsDataWithError:(id*)arg1;
- (bool)loadDeletedObjectsDataWithError:(id*)arg1;
- (bool)loadInsertedObjectsDataWithError:(id*)arg1;
- (bool)loadImportMetadataWithError:(id*)arg1;
- (bool)moveFileToPermanentLocationWithError:(id*)arg1;
- (id)initWithTransactionLogLocation:(id)arg1 andLocalPeerID:(id)arg2;
- (id)init;
- (void)dealloc;
- (id)description;

@end
