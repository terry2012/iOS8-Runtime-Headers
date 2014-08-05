/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
 */

@class MSMediaStreamDaemon, NSString, MSPublishStreamsProtocol, NSArray, NSURL, <MSPublisherDelegate>, NSMutableDictionary, MSObjectQueue, NSMutableArray, <MSPublishStorageProtocol>;

@interface MSPublisher : MSCupidStateMachine <MSPublisher, MSPublishStreamsProtocolDelegate, MSPublishStorageProtocolDelegate> {
    <MSPublisherDelegate> *_delegate;
    MSMediaStreamDaemon *_daemon;
    int _state;
    MSObjectQueue *_uploadQueue;
    MSObjectQueue *_derivativesQueue;
    MSObjectQueue *_quarantinedQueue;
    NSArray *_pendingDerivativesQueue;
    NSMutableArray *_requestAuthQueue;
    unsigned long long _sendingQueueCount;
    NSMutableArray *_sendingQueue;
    NSMutableDictionary *_fileHashToAssetMap;
    MSPublishStreamsProtocol *_protocol;
    <MSPublishStorageProtocol> *_storageProtocol;
    NSURL *_storageProtocolURL;
    NSMutableArray *_tempFiles;
    NSMutableDictionary *_maxSizeByUTI;
    long long _publishTargetByteCount;
    int _publishBatchSize;
    int _maxErrorCount;
}

@property MSMediaStreamDaemon * daemon;
@property(retain) NSURL * storageProtocolURL;
@property long long publishTargetByteCount;
@property int publishBatchSize;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;
@property <MSPublisherDelegate> * delegate;

+ (void)_setMasterNextActivityDate:(id)arg1 forPersonID:(id)arg2;
+ (id)nextActivityDateForPersonID:(id)arg1;
+ (id)_clearInstantiatedPublishersByPersonID;
+ (void)forgetPersonID:(id)arg1;
+ (void)stopAllActivities;
+ (id)existingPublisherForPersonID:(id)arg1;
+ (id)publisherForPersonID:(id)arg1;
+ (bool)isInRetryState;
+ (id)personIDsWithOutstandingActivities;
+ (id)nextActivityDate;

- (void)setPublishTargetByteCount:(long long)arg1;
- (long long)publishTargetByteCount;
- (id)storageProtocolURL;
- (void)_forget;
- (void)_removeAssetFromFileHashMap:(id)arg1;
- (void)publishStorageProtocolDidFinishPublishingAllAssets:(id)arg1;
- (void)publishStorageProtocol:(id)arg1 didFinishUploadingAsset:(id)arg2 error:(id)arg3;
- (void)publishStreamsProtocol:(id)arg1 didFinishSendingUploadCompleteError:(id)arg2;
- (void)publishStreamsProtocol:(id)arg1 didReceiveAuthenticationError:(id)arg2;
- (void)publishStreamsProtocol:(id)arg1 didFinishUploadingMetadataResponse:(id)arg2 error:(id)arg3;
- (void)setPublishBatchSize:(int)arg1;
- (int)publishBatchSize;
- (void)submitAssetCollectionsForPublication:(id)arg1;
- (void)_abort;
- (id)_abortedError;
- (void)_registerAllAssetsForWrapper:(id)arg1;
- (void)_categorizeError:(id)arg1 setOutIsIgnorable:(bool*)arg2 setOutIsCounted:(bool*)arg3 setOutIsFatal:(bool*)arg4 setOutNeedsBackoff:(bool*)arg5 setOutIsTemporary:(bool*)arg6 setOutIsTokenAuth:(bool*)arg7 setOutIsAuthError:(bool*)arg8;
- (void)_quarantineOrDiscardWrappers:(id)arg1 withError:(id)arg2;
- (void)setStorageProtocolURL:(id)arg1;
- (id)_invalidStreamsResponseErrorUnderlyingError:(id)arg1;
- (void)_addAssetToFileHashMap:(id)arg1;
- (id)_checkObjectWrappers:(id)arg1;
- (void)_removeAssetsInAssetCollectionWrappersFromAssetMap:(id)arg1;
- (void)publishStorageProtocol:(id)arg1 didFinishUsingFD:(int)arg2 forAsset:(id)arg3;
- (int)publishStorageProtocol:(id)arg1 didRequestFDForAsset:(id)arg2;
- (void)submitAssetCollectionsForPublication:(id)arg1 skipAssetCollections:(id)arg2;
- (void)_sendUploadComplete;
- (void)_sendFilesToMMCS;
- (void)_sendMetadataToStreams;
- (void)_requestDerivatives;
- (bool)_isAllowedToUpload;
- (id)_checkAssetCollectionFiles:(id)arg1;
- (id)_collectionWithNoDerivatives:(id)arg1;
- (bool)_verifyAssetFile:(id)arg1;
- (void)_registerAsset:(id)arg1;
- (void)_didFinishUsingAssetCollections:(id)arg1;
- (void)_updateMasterManifest;
- (void)_refreshServerSideConfiguredParameters;
- (void)_serverSideConfigurationDidChange:(id)arg1;
- (bool)_isInRetryState;
- (id)initWithPersonID:(id)arg1 baseURL:(id)arg2;
- (void)computeHashForAsset:(id)arg1;
- (bool)dequeueAssetCollectionWithGUIDs:(id)arg1 outError:(id*)arg2;
- (bool)enqueueAssetCollections:(id)arg1 outError:(id*)arg2;
- (void)reenqueueQuarantinedAssetCollections;
- (void)setDaemon:(id)arg1;
- (id)daemon;
- (void)deactivate;
- (void)stop;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (void)dealloc;
- (void).cxx_destruct;
- (int)_stop;
- (void)publish;
- (void)abort;

@end
