/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/CallHistory.framework/CallHistory
 */

@class NSObject<OS_dispatch_queue>, CallHistoryDBClientHandle, TransactionManager;

@interface SyncManager : CHLogger <SyncManagerProtocol> {
    TransactionManager *_transactionManager;
    id _syncHelperReadyNotificationRef;
    NSObject<OS_dispatch_queue> *_queue;
    CallHistoryDBClientHandle *_dbHandle;
}

@property(retain) CallHistoryDBClientHandle * dbHandle;


- (void)setDbHandle:(id)arg1;
- (void)deleteAllObjects;
- (id)fetchAllObjects;
- (void)addUpdateTransactions:(id)arg1;
- (void)deleteObjectWithUniqueId:(id)arg1;
- (id)fetchObjectWithUniqueId:(id)arg1;
- (id)dbHandle;
- (id)archiveCallObject:(id)arg1;
- (void)createDBHandle;
- (void)createDBHandleIfNeeded;
- (void)resetTimers;
- (double)timerLifetime;
- (double)timerOutgoing;
- (double)timerIncoming;
- (void)deleteObjectsWithLimits:(id)arg1;
- (void)deleteObjectsWithUniqueIds:(id)arg1;
- (void)updateObjects:(id)arg1;
- (void)updateAllObjects:(id)arg1;
- (void)insertWithoutTransaction:(id)arg1;
- (id)fetchObjectsWithLimits:(id)arg1;
- (void)unRegisterForNotifications;
- (void)registerForNotifications;
- (void)insert:(id)arg1;
- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithQueue:(id)arg1;

@end