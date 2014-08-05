/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/Message.framework/Message
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class <MFMailboxPathProvider>, MFWeakObjectCache, MFMailMessageLibraryMigrator, NSString, MFLibraryContentIndex, <MFMailMessageLibraryDelegate>, MFSQLiteConnectionPool, NSObject<OS_dispatch_queue>, NSMutableSet, MFDbJournal;

@interface MFMailMessageLibrary : MFMessageLibrary <MFLibraryContentIndexDataSource, MFSQLiteConnectionPoolDelegate, MFContentProtectionObserver> {
    MFSQLiteConnectionPool *_connectionPool;
    MFLibraryContentIndex *_contentIndex;
    MFWeakObjectCache *_libraryMessageCache;
    struct __CFDictionary { } *_mailboxCache;
    NSObject<OS_dispatch_queue> *_queue;
    <MFMailboxPathProvider> *_mailboxPathProvider;
    MFMailMessageLibraryMigrator *_migrator;
    NSString *_threadLocalHandleKey;
    NSString *_activeAccountClause;
    int _protectedDataAvailability;
    MFDbJournal *_protectedJournal;
    NSObject<OS_dispatch_queue> *_keyBagQueue;
    NSMutableSet *_messagesToThreadAtUnlock;
    <MFMailMessageLibraryDelegate> *_delegate;
}

@property <MFMailMessageLibraryDelegate> * delegate;
@property(readonly) int protectedDataAvailability;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;

+ (void)removeLibraryAtPath:(id)arg1;
+ (void)_removeLibrary:(bool)arg1 atPath:(id)arg2;
+ (id)defaultPath;
+ (id)defaultInstance;

- (id)_newConnection;
- (void)setSequenceIdentifier:(id)arg1 forMessagesWithRemoteIDs:(id)arg2 inMailbox:(id)arg3;
- (id)sequenceIdentifierForMessagesWithRemoteIDs:(id)arg1 inMailbox:(id)arg2;
- (void)setServerUnreadOnlyOnServerCount:(unsigned long long)arg1 forMailbox:(id)arg2;
- (unsigned int)maximumRemoteIDForMailbox:(id)arg1;
- (unsigned int)minimumRemoteIDForMailbox:(id)arg1;
- (id)getDetailsForMessages:(unsigned long long)arg1 absoluteBottom:(unsigned long long)arg2 topOfDesiredRange:(unsigned long long)arg3 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; }*)arg4 fromMailbox:(id)arg5;
- (void)setSequenceIdentifier:(id)arg1 forMessageWithLibraryID:(unsigned int)arg2;
- (id)_libraryMessageCache;
- (id)allMailboxURLStrings;
- (void)setMailboxPathProvider:(id)arg1;
- (void)pruneConversationTables:(double)arg1;
- (bool)migrate;
- (int)attachProtectedDatabase:(struct sqlite3 { }*)arg1;
- (int)protectedDataAvailability;
- (void)rebuildActiveAccountsClauseWithAccounts:(id)arg1;
- (void)iterateMessagesMatchingCriterion:(id)arg1 withResultHandler:(id)arg2 options:(unsigned int)arg3 withMonitor:(id)arg4;
- (void)sendMessagesMatchingCriterion:(id)arg1 to:(id)arg2 options:(unsigned int)arg3 baseTable:(unsigned int)arg4 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg5;
- (id)queryForCriterion:(id)arg1 db:(struct sqlite3 { }*)arg2 options:(unsigned int)arg3 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg4;
- (id)attachmentsDirectoryForLibraryID:(unsigned int)arg1 mailboxID:(unsigned int)arg2;
- (void)vacuumDataForObsoleteAccountURLString:(id)arg1;
- (id)messageIdsForConversationId:(long long)arg1 limit:(unsigned long long)arg2;
- (void)setConversationInfo:(long long)arg1 syncKey:(id)arg2 flags:(unsigned long long)arg3;
- (id)syncedConversations;
- (id)stringForQuery:(id)arg1;
- (long long)loadMoreMessagesForThreadContainingMessage:(id)arg1 hasNoMoreMessages:(bool*)arg2;
- (long long)countOfMessagesMissingFromThreadContainingMessage:(id)arg1;
- (long long)mailboxLocationOfMessageID:(unsigned int)arg1 usingDatabase:(struct sqlite3 { }*)arg2;
- (void)notifyNewDataAvailableForMessages:(id)arg1;
- (void)contentProtectionStateChanged:(int)arg1 previousState:(int)arg2;
- (id)newConnectionForConnectionPool:(id)arg1;
- (void)contentIndex:(id)arg1 invalidateItemsGreaterThanTransactionId:(unsigned int)arg2;
- (void)contentIndex:(id)arg1 assignTransactionIdentifier:(unsigned int)arg2 forDocumentIdentifiers:(id)arg3;
- (id)itemsRequiringIndexingForContentIndex:(id)arg1 limit:(unsigned long long)arg2;
- (void)renameOrRemoveDatabase;
- (void)_handleBusyError;
- (void)_handleIOError;
- (void)_handleDetachedDatabaseIOError;
- (void)_handleInvalidDatabaseIOError;
- (void)_handleProtectedDataIOError;
- (void)_handleFullDatabase;
- (void)_handleCorruptDatabase;
- (id)_activeConnection;
- (id)_setActiveConnection:(id)arg1 forWriting:(bool)arg2;
- (id)_activeConnectionWrapper;
- (id)_connectionForWriting:(bool)arg1;
- (void)_performTransaction:(id)arg1 forWriting:(bool)arg2;
- (void)_handleJournalWriteFailure;
- (void)_handleFailedMigration;
- (bool)isKeyBagUnlocked;
- (void)_reconcileJournal:(struct sqlite3 { }*)arg1;
- (void)_handleSQLiteErrorCode:(int)arg1 db:(struct sqlite3 { }*)arg2;
- (id)_activeConnectionWithDB:(struct sqlite3 { }*)arg1;
- (void)_handleProtectedDataInconsistencies;
- (void)_handleJournalMergeFailure;
- (id)_indexSetOfMessagesDeleted;
- (void)sendMessagesMatchingCriterion:(id)arg1 to:(id)arg2 options:(unsigned int)arg3 baseTable:(unsigned int)arg4 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg5 success:(bool*)arg6;
- (void)sendMessagesMatchingQuery:(const char *)arg1 db:(struct sqlite3 { }*)arg2 to:(id)arg3 options:(unsigned int)arg4;
- (id)queryForCriterion:(id)arg1 db:(struct sqlite3 { }*)arg2 options:(unsigned int)arg3 baseTable:(unsigned int)arg4 isSubquery:(bool)arg5;
- (id)queryForCriterion:(id)arg1 db:(struct sqlite3 { }*)arg2 options:(unsigned int)arg3 baseTable:(unsigned int)arg4 isSubquery:(bool)arg5 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg6;
- (id)_activeAccountsClause;
- (id)equalToMailboxIDsFromCriterion:(id)arg1;
- (id)headerDataAtPath:(id)arg1;
- (id)bodyDataAtPath:(id)arg1 headerData:(id*)arg2;
- (id)loadData:(id)arg1 forMessage:(id)arg2 usingBlock:(id)arg3;
- (void)_assignTransactionIdentifier:(unsigned int)arg1 forLibraryIDs:(id)arg2;
- (void)_setMessageDataString:(id)arg1 forKey:(id)arg2 forMessage:(id)arg3;
- (bool)_setMessageData:(id)arg1 libraryID:(unsigned int)arg2 part:(id)arg3 partial:(bool)arg4 complete:(bool)arg5;
- (id)dataPathForMessage:(id)arg1 type:(int)arg2;
- (bool)cleanupProtectedTables:(struct sqlite3 { }*)arg1 checkForInconsistencies:(bool)arg2;
- (void)_notifyDidCompact:(bool)arg1 messages:(id)arg2 mailboxes:(id)arg3;
- (id)mailboxURLForMessage:(id)arg1;
- (id)pathForMailboxURL:(id)arg1;
- (id)stringForQuery:(id)arg1 monitor:(id)arg2;
- (id)_getReferencesForHashesWithOwners:(struct __CFDictionary { }*)arg1;
- (struct __CFDictionary { }*)_copyReferenceHashesWithoutMessagesForMessageWithConversation:(id)arg1;
- (bool)_canSelectMessagesWithOptions:(unsigned int)arg1 db:(struct sqlite3 { }*)arg2;
- (id)_messageForStatement:(struct sqlite3_stmt { }*)arg1 options:(unsigned int)arg2 timestamp:(unsigned long long)arg3 isProtectedDataAvailable:(bool)arg4;
- (unsigned int)countOfRelatedMessagesMatchingCriterion:(id)arg1 forConversationsContainingMessagesMatchingCriterion:(id)arg2 forMailbox:(id)arg3;
- (unsigned int)includesMeCountForMailbox:(id)arg1;
- (unsigned int)attachmentCountForMailbox:(id)arg1;
- (unsigned int)flaggedCountForMailbox:(id)arg1;
- (unsigned int)integerForQuery:(id)arg1 withTextArgument:(id)arg2;
- (id)queryForCriterion:(id)arg1 db:(struct sqlite3 { }*)arg2 options:(unsigned int)arg3 baseTable:(unsigned int)arg4;
- (id)queryForCriterion:(id)arg1 db:(struct sqlite3 { }*)arg2 options:(unsigned int)arg3;
- (struct sqlite3 { }*)getReaderDB;
- (void)sendMessagesMatchingCriterion:(id)arg1 to:(id)arg2 options:(unsigned int)arg3 baseTable:(unsigned int)arg4;
- (void)sendMessagesForStatement:(struct sqlite3_stmt { }*)arg1 db:(struct sqlite3 { }*)arg2 to:(id)arg3 options:(unsigned int)arg4 timestamp:(unsigned long long)arg5;
- (void)iterateStatement:(struct sqlite3_stmt { }*)arg1 db:(struct sqlite3 { }*)arg2 withProgressMonitor:(id)arg3 andRowHandler:(int (*)())arg4 context:(void*)arg5;
- (int)commitTransaction:(struct sqlite3 { }*)arg1;
- (int)rollbackTransaction:(struct sqlite3 { }*)arg1;
- (id)_libraryMessageWithLibraryID:(unsigned int)arg1 wasCached:(bool*)arg2;
- (bool)_writeEmlxFile:(id)arg1 withBodyData:(id)arg2 protectionClass:(int)arg3;
- (long long)addReferencesForMessage:(id)arg1 libraryID:(unsigned int)arg2 messageIDHash:(long long)arg3 withSubject:(id)arg4 withReferences:(id)arg5 usingDatabase:(struct sqlite3 { }*)arg6 otherSubjectIDMappings:(id)arg7 usingMailbox:(int)arg8 conversationFlags:(unsigned long long*)arg9 mergeHandler:(id)arg10;
- (void)notifyConversation:(long long)arg1 hasMergedIntoConversation:(long long)arg2;
- (id)referencesFromHeaders:(id)arg1;
- (int)handleSqliteError:(struct sqlite3 { }*)arg1 format:(id)arg2;
- (void)setFlags:(unsigned long long)arg1 forConversationId:(long long)arg2;
- (unsigned long long)flagsForConversationId:(long long)arg1;
- (long long)conversationIdForMessageIds:(id)arg1;
- (id)conversationIDsOfMessagesInSameThreadAsMessageWithLibraryID:(unsigned int)arg1 messageIDHash:(long long)arg2;
- (id)addThreadingInfoBySubjectForMessageID:(unsigned int)arg1 nonPrefixedSubject:(id)arg2 messageIDsBySubject:(id)arg3 usingDatabase:(struct sqlite3 { }*)arg4 toReferences:(id)arg5 withinMailbox:(int)arg6;
- (void)_addMessageToThreadAtUnlock:(unsigned int)arg1;
- (bool)isProtectedDataAvailable:(struct sqlite3 { }*)arg1;
- (int)beginTransaction:(struct sqlite3 { }*)arg1 withType:(int)arg2;
- (void)unlockDB:(struct sqlite3 { }*)arg1;
- (struct sqlite3 { }*)getWriterDB;
- (void)applicationWillResume;
- (void)invalidateAndWait;
- (void)_reconcileAfterKeybagUnlock;
- (void)_setProtectedDataAvailabilityState:(int)arg1;
- (void)_removeCachedLibraryMessageWithLibraryID:(unsigned int)arg1;
- (void)setStoredIntegerPropertyWithName:(id)arg1 value:(id)arg2;
- (id)storedIntegerPropertyWithName:(id)arg1;
- (id)remoteStoreForMessage:(id)arg1;
- (void)updateFlagsForMessagesInPlace:(id)arg1 success:(bool*)arg2;
- (void)deleteOfflineCacheDataForAccount:(long long)arg1;
- (void)consumeOfflineCacheReplayDataForAccount:(long long)arg1 usingBlock:(id)arg2;
- (void)appendOfflineCacheReplayData:(id)arg1 forAccountID:(long long)arg2;
- (id)offlineCacheOperationsForAccount:(long long)arg1 lastTemporaryID:(unsigned int*)arg2;
- (void)markOfflineCacheOperationAsComplete:(id)arg1;
- (void)appendOfflineCacheOperation:(id)arg1 forAccount:(long long)arg2 lastTemporaryID:(unsigned int)arg3;
- (id)hiddenPOPUIDsInMailbox:(id)arg1;
- (id)allUIDsInMailbox:(id)arg1;
- (id)deletedUIDsInMailbox:(id)arg1;
- (id)UIDsToDeleteInMailbox:(id)arg1;
- (void)deletePOPUID:(id)arg1 inMailbox:(id)arg2;
- (void)closeDatabaseConnections;
- (id)messagesMatchingCriterion:(id)arg1 options:(unsigned int)arg2 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3 success:(bool*)arg4;
- (id)messagesMatchingCriterion:(id)arg1 options:(unsigned int)arg2 success:(bool*)arg3;
- (void)sendMessagesMatchingCriterion:(id)arg1 to:(id)arg2 options:(unsigned int)arg3;
- (void)sendMessagesMatchingCriterion:(id)arg1 to:(id)arg2 options:(unsigned int)arg3 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg4;
- (id)bodyDataForMessage:(id)arg1;
- (id)metadataForMessage:(id)arg1;
- (id)dataConsumerForMessage:(id)arg1;
- (id)dataConsumerForMessage:(id)arg1 isPartial:(bool)arg2;
- (id)messageWithMessageID:(id)arg1 inMailbox:(id)arg2;
- (void)removeAllMessagesFromMailbox:(id)arg1 removeMailbox:(bool)arg2 andNotify:(bool)arg3;
- (id)messagesWithMessageIDHeader:(id)arg1;
- (id)getDetailsForAllMessagesFromMailbox:(id)arg1;
- (id)getDetailsForMessagesWithRemoteIDInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 fromMailbox:(id)arg2;
- (void)setSequenceIdentifier:(id)arg1 forMailbox:(id)arg2;
- (id)sequenceIdentifierForMailbox:(id)arg1;
- (id)messageWithRemoteID:(id)arg1 inRemoteMailbox:(id)arg2;
- (id)oldestMessageInMailbox:(id)arg1;
- (unsigned int)deletedCountForMailbox:(id)arg1;
- (id)orderedBatchOfMessagesEndingAtRowId:(unsigned int)arg1 limit:(unsigned int)arg2 success:(bool*)arg3;
- (id)messagesWithSummariesForMailbox:(id)arg1 fromRowID:(unsigned int)arg2 limit:(unsigned int)arg3;
- (id)messagesWithoutSummariesForMailbox:(id)arg1;
- (id)messagesNeedingSyncConfirmationForMailbox:(id)arg1;
- (void)updateAdditionalThreadingInfoForSentMessageWithHeaders:(id)arg1 externalConversationID:(long long)arg2;
- (void)updateThreadingInfoForMessage:(id)arg1 fromHeaders:(id)arg2;
- (void)updateRecipientsForMessage:(id)arg1 fromHeaders:(id)arg2;
- (void)setFlagsForMessages:(id)arg1 mask:(unsigned long long)arg2;
- (void)compactMessages:(id)arg1 permanently:(bool)arg2;
- (void)performWriteTransaction:(id)arg1;
- (void)performReadTransaction:(id)arg1;
- (struct sqlite3_stmt { }*)preparedStatement:(struct sqlite3 { }*)arg1 pattern:(id)arg2;
- (void)compactMailbox:(id)arg1;
- (id)addMessages:(id)arg1 withMailbox:(id)arg2 fetchBodies:(bool)arg3 newMessagesByOldMessage:(id)arg4 remoteIDs:(id)arg5 setFlags:(unsigned long long)arg6 clearFlags:(unsigned long long)arg7 messageFlagsForMessages:(id)arg8 copyFiles:(bool)arg9 addPOPUIDs:(bool)arg10 dataSectionsByMessage:(id)arg11;
- (void)setFlagsFromDictionary:(id)arg1 forMessagesInMailboxURLString:(id)arg2;
- (id)messagesForMailbox:(id)arg1 olderThanNumberOfDays:(int)arg2;
- (id)bodyDataForMessage:(id)arg1 andHeaderDataIfReadilyAvailable:(id*)arg2 isComplete:(bool*)arg3;
- (id)fullBodyDataForMessage:(id)arg1 andHeaderDataIfReadilyAvailable:(id*)arg2;
- (id)dataConsumerForMessage:(id)arg1 part:(id)arg2 incomplete:(bool)arg3;
- (id)dataForMimePart:(id)arg1 isComplete:(bool*)arg2;
- (id)headerDataForMessage:(id)arg1;
- (id)messageWithMessageID:(id)arg1 options:(unsigned int)arg2 inMailbox:(id)arg3;
- (id)filterContiguousMessages:(id)arg1 forCriterion:(id)arg2 options:(unsigned int)arg3;
- (id)dateOfOldestNonSearchResultMessageInMailbox:(id)arg1;
- (id)serverSearchResultMessagesForMailbox:(id)arg1;
- (long long)oldestKnownConversationInMailbox:(id)arg1;
- (struct __CFDictionary { }*)copySendersByLibraryIDForConversation:(long long)arg1 mailbox:(id)arg2 limit:(long long)arg3;
- (id)copyMessagesWithRemoteIDs:(id)arg1 options:(unsigned int)arg2 inRemoteMailbox:(id)arg3;
- (id)messagesMatchingCriterion:(id)arg1 options:(unsigned int)arg2;
- (id)messagesWithoutSummariesForMailbox:(id)arg1 fromRowID:(unsigned int)arg2 limit:(unsigned int)arg3;
- (id)copyMessageInfosForConversationsContainingMessagesMatchingCriterion:(id)arg1 forMailbox:(id)arg2;
- (id)copyMessageInfosMatchingCriterion:(id)arg1;
- (id)copyMessageInfosForMailbox:(id)arg1;
- (id)messagesMatchingCriterion:(id)arg1 options:(unsigned int)arg2 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3;
- (id)messagesWithSummariesForMailbox:(id)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (id)messageWithLibraryID:(unsigned int)arg1 options:(unsigned int)arg2 inMailbox:(id)arg3;
- (unsigned int)nonDeletedCountForMailbox:(id)arg1 includeServerSearchResults:(bool)arg2 includeThreadSearchResults:(bool)arg3;
- (unsigned int)totalCountForMailbox:(id)arg1;
- (id)metadataForMessage:(id)arg1 key:(id)arg2;
- (void)updateMessage:(id)arg1 withMetadata:(id)arg2;
- (id)dataConsumerForMessage:(id)arg1 part:(id)arg2;
- (void)setData:(id)arg1 forMessage:(id)arg2 isPartial:(bool)arg3;
- (id)accountForMessage:(id)arg1;
- (id)dataPathForMessage:(id)arg1 part:(id)arg2;
- (id)dataPathForMessage:(id)arg1;
- (void)setSummary:(id)arg1 forMessage:(id)arg2;
- (void)setFlags:(unsigned long long)arg1 forMessage:(id)arg2;
- (bool)isMessageContentsLocallyAvailable:(id)arg1;
- (void)setMessage:(id)arg1 isPartial:(bool)arg2;
- (id)mailboxUidForMessage:(id)arg1;
- (id)urlForMailboxID:(unsigned int)arg1;
- (unsigned int)mailboxIDForURLString:(id)arg1;
- (unsigned int)nonDeletedCountForMailbox:(id)arg1;
- (unsigned int)unreadCountForMailbox:(id)arg1 matchingCriterion:(id)arg2;
- (unsigned int)unreadCountForMailbox:(id)arg1;
- (unsigned long long)serverUnreadOnlyOnServerCountForMailbox:(id)arg1;
- (long long)createLibraryIDForAccount:(id)arg1;
- (long long)libraryIDForAccount:(id)arg1;
- (bool)renameMailboxes:(id)arg1 to:(id)arg2;
- (void)deleteMailboxes:(id)arg1;
- (id)loadMeetingMetadataForMessage:(id)arg1;
- (id)loadMeetingDataForMessage:(id)arg1;
- (id)loadMeetingExternalIDForMessage:(id)arg1;
- (bool)shouldCancel;
- (id)setFlagsFromDictionary:(id)arg1 forMessages:(id)arg2;
- (void)deleteAccount:(id)arg1;
- (bool)hasCompleteDataForMimePart:(id)arg1;
- (void)setNumberOfAttachments:(unsigned int)arg1 isSigned:(bool)arg2 isEncrypted:(bool)arg3 forMessage:(id)arg4;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (void)dealloc;
- (id)initWithPath:(id)arg1;
- (void)applicationWillSuspend;

@end
