/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
 */

@class BSZeroingWeakReference, FBWorkspaceServer, NSString, FBSceneClientProviderInvalidationAction, BSAuditToken, NSObject<OS_dispatch_queue>, <FBWorkspaceDelegate>, NSMapTable, FBProcess;

@interface FBWorkspace : NSObject <FBSceneClientProvider> {
    BSZeroingWeakReference *_zeroingWeakDelegate;
    BSZeroingWeakReference *_zeroingWeakProcess;
    FBWorkspaceServer *_server;
    NSMapTable *_hostToClientMap;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_callOutQueue;
    FBSceneClientProviderInvalidationAction *_invalidationAction;
    bool_willInvalidate;
    bool_invalidated;
}

@property <FBWorkspaceDelegate> * delegate;
@property(readonly) FBProcess * process;
@property(retain,readonly) BSAuditToken * auditToken;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;


- (void)server:(id)arg1 handleDestroySceneRequest:(id)arg2 withCompletion:(id)arg3;
- (void)server:(id)arg1 handleCreateSceneRequest:(id)arg2 withCompletion:(id)arg3;
- (void)_queue_invalidateAllScenes;
- (void)_queue_willInvalidateAllScenes;
- (id)initWithParentProcess:(id)arg1 queue:(id)arg2 callOutQueue:(id)arg3;
- (id)_newSceneWithHost:(id)arg1 initialClientSettings:(id)arg2;
- (void)_queue_fireInvalidationAction;
- (void)_queue_enumerateScenes:(id)arg1;
- (id)_newWorkspaceServer;
- (id)_server;
- (void)unregisterHost:(id)arg1;
- (id)registerHost:(id)arg1 withInitialClientSettings:(id)arg2;
- (void)registerInvalidationAction:(id)arg1;
- (id)process;
- (void)beginTransaction;
- (id)_queue;
- (void)sendActions:(id)arg1;
- (void)endTransaction;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (void)dealloc;
- (id)description;
- (id)auditToken;

@end
