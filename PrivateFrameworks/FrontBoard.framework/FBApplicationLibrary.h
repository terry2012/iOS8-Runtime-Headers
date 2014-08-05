/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
 */

@class NSHashTable, NSString, LSApplicationWorkspace, NSMutableDictionary, NSMutableArray, NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_group>;

@interface FBApplicationLibrary : NSObject <LSApplicationWorkspaceObserverProtocol> {
    LSApplicationWorkspace *_applicationWorkspace;
    NSObject<OS_dispatch_queue> *_observerQueue;
    NSHashTable *_observerQueue_observers;
    NSObject<OS_dispatch_queue> *_workQueue;
    NSMutableDictionary *_workQueue_installedApplicationsByBundleID;
    NSMutableDictionary *_workQueue_placeholdersByBundleID;
    bool_workQueue_usingNetwork;
    unsigned long long _workQueue_synchronizationActionCount;
    NSMutableArray *_workQueue_pendingSynchronizationExecutionBlocks;
    NSObject<OS_dispatch_queue> *_callOutQueue;
    NSObject<OS_dispatch_group> *_preInstallGroup;
    bool_usingNetwork;
}

@property(getter=isUsingNetwork,readonly) bool usingNetwork;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;

+ (id)sharedInstance;

- (void)executeOrPendInstallSynchronizationBlock:(id)arg1;
- (void)uninstallApplication:(id)arg1 completion:(id)arg2;
- (id)placeholderWithBundleIdentifier:(id)arg1;
- (id)allPlaceholders;
- (id)installedApplicationWithBundleIdentifier:(id)arg1;
- (void)_sendToObservers:(id)arg1 networkUsageDidChange:(id)arg2 usingNetwork:(bool)arg3;
- (void)_sendToObservers:(id)arg1 didCancelPlaceholders:(id)arg2;
- (void)_workQueue_decrementSynchronizationActionCount;
- (void)_sendToObservers:(id)arg1 didReplaceApplications:(id)arg2 withApplications:(id)arg3;
- (void)_sendToObservers:(id)arg1 didAddApplications:(id)arg2;
- (bool)_workQueue_applicationHasBeenModified:(id)arg1 applicationProxy:(id)arg2;
- (void)_workQueue_incrementSynchronizationActionCount;
- (void)_sendToObservers:(id)arg1 didAddPlaceholders:(id)arg2;
- (void)_workQueue_notePlaceholdersModifiedSignificantly:(id)arg1;
- (id)_workQueue_applicationInfoForProxy:(id)arg1 createIfNecessary:(bool)arg2 wasCreated:(bool*)arg3;
- (id)_workQueue_placeholderForProxy:(id)arg1 updateExistingIfNecessary:(bool)arg2 createIfNecessary:(bool)arg3 wasCreated:(bool*)arg4;
- (id)_workQueue_applicationsForProxies:(id)arg1 createIfNecessary:(bool)arg2 createdPlaceholders:(const id*)arg3 existingApplications:(const id*)arg4 unmappedProxies:(const id*)arg5;
- (id)_workQueue_placeholdersForProxies:(id)arg1 updateExistingIfNecessary:(bool)arg2 createIfNecessary:(bool)arg3 createdPlaceholders:(const id*)arg4 existingPlaceholders:(const id*)arg5 unmappedProxies:(const id*)arg6;
- (void)_dispatchToObservers:(id)arg1 synchronously:(bool)arg2 preBlock:(id)arg3 block:(id)arg4;
- (void)_workQueue_executeInstallSynchronizationBlock:(id)arg1;
- (void)_sendToObservers:(id)arg1 didRemoveApplications:(id)arg2;
- (id)_observers;
- (void)_reload;
- (bool)isUsingNetwork;
- (void)applicationInstallsArePrioritized:(id)arg1 arePaused:(id)arg2;
- (void)applicationsDidFailToUninstall:(id)arg1;
- (void)applicationsDidUninstall:(id)arg1;
- (void)applicationsWillUninstall:(id)arg1;
- (void)applicationsDidFailToInstall:(id)arg1;
- (void)applicationsDidInstall:(id)arg1;
- (void)applicationsWillInstall:(id)arg1;
- (void)applicationInstallsDidChange:(id)arg1;
- (void)applicationInstallsDidUpdateIcon:(id)arg1;
- (void)applicationInstallsDidStart:(id)arg1;
- (void)networkUsageChanged:(bool)arg1;
- (void)applicationInstallsDidResume:(id)arg1;
- (void)applicationInstallsDidPrioritize:(id)arg1;
- (void)applicationInstallsDidPause:(id)arg1;
- (void)applicationInstallsDidCancel:(id)arg1;
- (id)init;
- (void)addObserver:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)dealloc;
- (id)description;
- (id)allInstalledApplications;

@end
