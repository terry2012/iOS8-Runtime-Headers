/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
 */

@class NSString, NSURL, NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_group>, MSASPConnectionGate;

@interface MSASProtocol : NSObject <NSURLConnectionDelegate> {
    bool_isShuttingDown;
    MSASPConnectionGate *_gate;
    NSObject<OS_dispatch_queue> *_pendingConnectionsQueue;
    NSObject<OS_dispatch_group> *_pendingConnectionsGroup;
    NSString *_personID;
    NSURL *_baseURL;
    NSString *_serverSideConfigVersion;
    NSString *_headerVersion;
    NSObject<OS_dispatch_queue> *_workQueue;
    NSObject<OS_dispatch_queue> *_memberQueue;
}

@property(retain,readonly) NSString * personID;
@property(retain) NSURL * baseURL;
@property(retain) NSString * serverSideConfigVersion;
@property(retain) MSASPConnectionGate * gate;
@property(retain) NSObject<OS_dispatch_queue> * pendingConnectionsQueue;
@property(retain) NSObject<OS_dispatch_group> * pendingConnectionsGroup;
@property(retain) NSObject<OS_dispatch_queue> * workQueue;
@property(retain) NSObject<OS_dispatch_queue> * memberQueue;
@property bool isShuttingDown;
@property(readonly) NSString * headerVersion;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;


- (void)shutDownCompletionBlock:(id)arg1;
- (id)headerVersion;
- (void)setPendingConnectionsGroup:(id)arg1;
- (id)pendingConnectionsGroup;
- (void)setPendingConnectionsQueue:(id)arg1;
- (id)pendingConnectionsQueue;
- (id)_setCommentPositionURL;
- (id)_getAlbumURL;
- (id)_serverSideConfigURL;
- (id)_setAlbumStateURL;
- (id)_setAssetStateURL;
- (id)_albumStateURL;
- (id)_getCommentsURLWithBaseURL:(id)arg1;
- (id)_unsubscribeURL;
- (id)_subscribeURL;
- (id)_couldNotReauthorizeError;
- (id)_getTokensURLWithBaseURL:(id)arg1;
- (id)_getAssetsURLWithBaseURL:(id)arg1;
- (id)_albumSummaryURLWithBaseURL:(id)arg1;
- (id)_sharingInfoURLWithBaseURL:(id)arg1;
- (id)_getChangesURL;
- (id)_deleteCommentURLWithBaseURL:(id)arg1;
- (id)_deleteAssetsURLWithBaseURL:(id)arg1;
- (id)_deleteURLWithBaseURL:(id)arg1;
- (id)_enableMultipleContributorsURLWithBaseURL:(id)arg1;
- (id)_enablePublicAccessURLWithBaseURL:(id)arg1;
- (id)_addCommentURLWithBaseURL:(id)arg1;
- (id)_unshareURL;
- (id)_shareURL;
- (id)_uploadCompleteURLWithBaseURL:(id)arg1;
- (id)_getVideoURLWithBaseURL:(id)arg1;
- (id)_getUploadTokensURLWithBaseURL:(id)arg1;
- (id)_putAssetsURLWithBaseURL:(id)arg1;
- (id)_updateAlbumURLWithBaseURL:(id)arg1;
- (void)sendURLRequest:(id)arg1 bodyObj:(id)arg2 completionBlock:(id)arg3;
- (bool)responseDict:(id)arg1 containsLimitErrorCode:(id)arg2 outMaxAllowed:(id*)arg3;
- (id)_createAlbumURL;
- (id)HTTPErrorWithStatusCode:(long long)arg1;
- (id)serverSideConfigVersion;
- (id)errorFromStandardProcessingOnResponse:(id)arg1 responseObject:(id)arg2 checkServerSideConfigVersion:(bool)arg3 error:(id)arg4 body:(id)arg5;
- (void)setGate:(id)arg1;
- (void)sendURLRequest:(id)arg1 method:(id)arg2 bodyObj:(id)arg3 checkServerSideConfigVersion:(bool)arg4 completionBlock:(id)arg5;
- (id)stoppingError;
- (id)shutDownError;
- (void)setIsShuttingDown:(bool)arg1;
- (id)gate;
- (void)getTokensForAssets:(id)arg1 inAlbum:(id)arg2 albumURLString:(id)arg3 completionBlock:(id)arg4;
- (void)getVideoURL:(id)arg1 forAssetCollectionWithGUID:(id)arg2 inAlbumWithGUID:(id)arg3 albumURLString:(id)arg4 completionBlock:(id)arg5;
- (void)setMultipleContributorsEnabled:(bool)arg1 forAlbum:(id)arg2 completionBlock:(id)arg3;
- (void)setPublicAccessEnabled:(bool)arg1 forAlbum:(id)arg2 completionBlock:(id)arg3;
- (void)addComment:(id)arg1 toAssetCollection:(id)arg2 inAlbum:(id)arg3 albumURLString:(id)arg4 completionBlock:(id)arg5;
- (void)removeSharingRelationships:(id)arg1 fromAlbum:(id)arg2 completionBlock:(id)arg3;
- (void)addSharingRelationships:(id)arg1 toAlbum:(id)arg2 completionBlock:(id)arg3;
- (void)getUploadTokens:(id)arg1 forAssetCollectionWithGUID:(id)arg2 inAlbumWithGUID:(id)arg3 albumURLString:(id)arg4 completionBlock:(id)arg5;
- (void)putAssetCollections:(id)arg1 intoAlbum:(id)arg2 albumURLString:(id)arg3 completionBlock:(id)arg4;
- (void)sendUploadCompleteSuccessfulAssetCollections:(id)arg1 failedAssetCollections:(id)arg2 album:(id)arg3 completionBlock:(id)arg4;
- (void)updateAlbum:(id)arg1 albumURLString:(id)arg2 completionBlock:(id)arg3;
- (void)createAlbum:(id)arg1 completionBlock:(id)arg2;
- (void)deleteComment:(id)arg1 fromAssetCollection:(id)arg2 inAlbum:(id)arg3 albumURLString:(id)arg4 completionBlock:(id)arg5;
- (void)deleteAssetCollections:(id)arg1 inAlbum:(id)arg2 completionBlock:(id)arg3;
- (void)deleteAlbum:(id)arg1 completionBlock:(id)arg2;
- (void)setAssetCollectionSyncedState:(id)arg1 forAssetCollection:(id)arg2 inAlbum:(id)arg3 assetCollectionStateCtag:(id)arg4 completionBlock:(id)arg5;
- (void)setAlbumSyncedState:(id)arg1 forAlbum:(id)arg2 albumStateCtag:(id)arg3 completionBlock:(id)arg4;
- (void)getAlbumSyncedStateForAlbum:(id)arg1 assetCollectionStateBlock:(id)arg2 completionBlock:(id)arg3;
- (void)getCommentChanges:(id)arg1 inAlbumWithGUID:(id)arg2 albumURLString:(id)arg3 completionBlock:(id)arg4;
- (void)getAssetCollections:(id)arg1 inAlbum:(id)arg2 albumURLString:(id)arg3 completionBlock:(id)arg4;
- (void)unsubscribeFromAlbum:(id)arg1 completionBlock:(id)arg2;
- (void)subscribeToAlbum:(id)arg1 completionBlock:(id)arg2;
- (void)getSharingInfoForAlbum:(id)arg1 albumURLString:(id)arg2 completionBlock:(id)arg3;
- (void)albumSummaryAlbum:(id)arg1 albumURLString:(id)arg2 resetSync:(bool)arg3 completionBlock:(id)arg4;
- (void)getChangesRootCtag:(id)arg1 completionBlock:(id)arg2;
- (id)stopHandlerBlock;
- (void)getAlbumURLForAlbumWithGUID:(id)arg1 completionBlock:(id)arg2;
- (void)getServerSideConfigCompletionBlock:(id)arg1;
- (void)stopCompletionBlock:(id)arg1;
- (void)setServerSideConfigVersion:(id)arg1;
- (void)acceptInvitationWithToken:(id)arg1 completionBlock:(id)arg2;
- (id)initWithPersonID:(id)arg1;
- (id)personID;
- (bool)isShuttingDown;
- (void)setBaseURL:(id)arg1;
- (id)baseURL;
- (void)setWorkQueue:(id)arg1;
- (id)workQueue;
- (void)dealloc;
- (void).cxx_destruct;
- (void)setMemberQueue:(id)arg1;
- (id)memberQueue;

@end
