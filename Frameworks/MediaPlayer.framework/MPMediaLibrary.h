/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class NSHashTable, NSString, CADisplayLink, NSURL, NSDate, NSMutableDictionary, NSMutableArray, NSObject<OS_dispatch_queue>, QueryCriteriaResultsCache, <MPMediaLibraryDataProviderPrivate>;

@interface MPMediaLibrary : NSObject <NSSecureCoding> {
    <MPMediaLibraryDataProviderPrivate> *_libraryDataProvider;
    long long _libraryChangeObservers;
    NSObject<OS_dispatch_queue> *_entityCacheQueue;
    NSObject<OS_dispatch_queue> *_fixedQueue;
    QueryCriteriaResultsCache *_itemsForCriteriaCache;
    QueryCriteriaResultsCache *_hasItemsForCriteriaCache;
    QueryCriteriaResultsCache *_countOfItemsForCriteriaCache;
    QueryCriteriaResultsCache *_itemResultSetsForCriteriaCache;
    QueryCriteriaResultsCache *_collectionsForCriteriaCache;
    QueryCriteriaResultsCache *_hasCollectionsForCriteriaCache;
    QueryCriteriaResultsCache *_countOfCollectionsForCriteriaCache;
    QueryCriteriaResultsCache *_collectionsResultSetsForCriteriaCache;
    NSMutableDictionary *_hasItemsDidLoadForCriteria;
    NSMutableDictionary *_hasCollectionsDidLoadForCriteria;
    NSMutableDictionary *_countOfCollectionsDidLoadForCriteria;
    NSMutableDictionary *_countOfItemsDidLoadForCriteria;
    NSMutableArray *_additionalLibraryFilterPredicates;
    NSObject<OS_dispatch_queue> *_additionalLibraryFilterPredicatesAccessQueue;
    NSHashTable *_connectionAssertions;
    bool_disconnectAfterReleasingAssertions;
    float _connectionProgress;
    CADisplayLink *_connectionProgressDisplayLink;
    double _connectionProgressStartTime;
    long long _removalReason;
    unsigned int _determinedHasMedia : 1;
    unsigned int _hasMedia : 1;
    unsigned int _determinedHasSongs : 1;
    unsigned int _hasSongs : 1;
    unsigned int _determinedHasGeniusMixes : 1;
    unsigned int _hasGeniusMixes : 1;
    unsigned int _determinedHasPlaylists : 1;
    unsigned int _hasPlaylists : 1;
    unsigned int _determinedHasComposers : 1;
    unsigned int _hasComposers : 1;
    unsigned int _determinedHasPodcasts : 1;
    unsigned int _hasPodcasts : 1;
    unsigned int _determinedHasUbiquitousBookmarkableItems : 1;
    unsigned int _hasUbiquitousBookmarkableContent : 1;
    unsigned int _determinedHasAudiobooks : 1;
    unsigned int _hasAudiobooks : 1;
    long long _cloudFilteringType;
    bool_filteringDisabled;
    bool_hasVideos;
    bool_determinedHasVideos;
    bool_hasMusicVideos;
    bool_determinedHasMusicVideos;
    bool_hasAudibleAudioBooks;
    bool_determinedHasAudibleAudioBooks;
    bool_hasMovies;
    bool_determinedHasMovies;
    bool_hasCompilations;
    bool_determinedHasCompilations;
    bool_hasITunesU;
    bool_determinedHasITunesU;
    bool_hasVideoITunesU;
    bool_determinedHasVideoITunesU;
    bool_hasMovieRentals;
    bool_determinedHasMovieRentals;
    bool_hasTVShows;
    bool_determinedHasTVShows;
    bool_hasHomeVideos;
    bool_determinedHasHomeVideos;
    bool_hasVideoPodcasts;
    bool_determinedHasVideoPodcasts;
    unsigned char _originalCellNetworkFlags;
    unsigned char _originalWiFiNetworkFlags;
}

@property(readonly) NSURL * protectedContentSupportStorageURL;
@property(readonly) NSString * _syncValidity;
@property(readonly) NSDate * lastModifiedDate;
@property long long removalReason;

+ (void)uniqueIdentifierDidChangeForLibraryDataProvider:(id)arg1;
+ (void)syncGenerationDidChangeForLibraryDataProvider:(id)arg1;
+ (void)reloadDisplayValuesForLibraryDataProvider:(id)arg1;
+ (void)reloadInvisiblePropertiesForLibraryDataProvider:(id)arg1;
+ (void)reloadDynamicPropertiesForLibraryDataProvider:(id)arg1;
+ (void)reloadLibraryDataProvider:(id)arg1;
+ (void)removeLibraryDataProvider:(id)arg1 removalReason:(long long)arg2;
+ (void)addLibraryDataProvider:(id)arg1;
+ (id)libraryDataProviders;
+ (id)mediaLibraryWithUniqueIdentifier:(id)arg1;
+ (void)setLibraryServerDisabled:(bool)arg1;
+ (bool)isLibraryServerDisabled;
+ (void)endDiscoveringMediaLibraries;
+ (void)beginDiscoveringMediaLibraries;
+ (void)setDefaultMediaLibrary:(id)arg1;
+ (id)_libraryForDataProvider:(id)arg1;
+ (id)_libraryDataProviders;
+ (id)_mediaLibraries;
+ (id)mediaLibraries;
+ (void)setRunLoopForNotifications:(id)arg1;
+ (id)defaultMediaLibrary;
+ (id)deviceMediaLibrary;
+ (void)initialize;
+ (bool)supportsSecureCoding;

- (void)connectWithCompletionHandler:(id)arg1;
- (bool)setValue:(id)arg1 forDatabaseProperty:(id)arg2;
- (id)valueForDatabaseProperty:(id)arg1;
- (id)databasePath;
- (bool)performTransactionWithBlock:(id)arg1;
- (bool)isCurrentThreadInTransaction;
- (id)errorResolverForMediaItem:(id)arg1;
- (void)enumerateEntityChangesAfterSyncAnchor:(id)arg1 usingBlock:(id)arg2;
- (id)_syncValidity;
- (void)enumerateEntityChangesAfterSyncAnchor:(id)arg1 maximumRevisionType:(int)arg2 usingBlock:(id)arg3;
- (void)_removeConnectionAssertion:(id)arg1;
- (void)setCloudFilteringType:(long long)arg1;
- (id)pathForAssetURL:(id)arg1;
- (bool)isValidAssetURL:(id)arg1;
- (float)connectionProgress;
- (id)connectionAssertionWithIdentifier:(id)arg1;
- (void)connectWithAuthenticationData:(id)arg1 completionBlock:(id)arg2;
- (void)downloadAsset:(id)arg1 completionHandler:(id)arg2;
- (bool)removePlaylist:(id)arg1;
- (unsigned long long)syncPlaylistId;
- (void)setSyncPlaylistId:(unsigned long long)arg1;
- (id)addPlaylistWithName:(id)arg1;
- (id)itemWithStoreID:(unsigned long long)arg1;
- (bool)hasVideoPodcasts;
- (bool)hasHomeVideos;
- (bool)hasTVShows;
- (bool)hasMovieRentals;
- (bool)hasVideoITunesUContent;
- (bool)hasAudioITunesUContent;
- (bool)hasITunesUContent;
- (bool)hasCompilations;
- (bool)hasMovies;
- (bool)hasAudibleAudioBooks;
- (bool)hasMusicVideos;
- (bool)hasVideos;
- (bool)hasAudiobooks;
- (bool)hasComposers;
- (bool)hasGenres;
- (bool)hasPodcasts;
- (bool)hasAlbums;
- (bool)hasArtists;
- (bool)hasPlaylists;
- (bool)hasMedia;
- (bool)libraryHasBeenModifiedWithToken:(id)arg1;
- (id)modificationToken;
- (long long)removalReason;
- (void)removeLibraryFilterPredicate:(id)arg1;
- (void)addLibraryFilterPredicate:(id)arg1;
- (void)_reloadLibraryForInvisiblePropertyChangeWithNotificationInfo:(id)arg1;
- (void)_reloadLibraryForDynamicPropertyChangeWithNotificationInfo:(id)arg1;
- (void)setRemovalReason:(long long)arg1;
- (id)_initWithLibraryDataProvider:(id)arg1;
- (long long)cloudFilteringType;
- (id)additionalLibraryFilterPredicates;
- (id)_getCachedValueForQueryCritiera:(id)arg1 valueCriteriaCache:(id)arg2 entitiesForCriteriaCache:(id)arg3 didLoadBlocksByQueryCriteria:(id)arg4 valueLoadedFromEntitiesArrayBlock:(id)arg5 loadValueFromDataProviderBlock:(id)arg6;
- (bool)collectionExistsWithStoreID:(long long)arg1 groupingType:(long long)arg2 existentPID:(unsigned long long*)arg3;
- (bool)playlistExistsWithPersistentID:(unsigned long long)arg1;
- (unsigned long long)_persistentIDForAssetURL:(id)arg1;
- (id)entityCache;
- (id)syncValidity;
- (void)performReadTransactionWithBlock:(id)arg1;
- (bool)requiresAuthentication;
- (id)preferredSubtitleLanguages;
- (id)preferredAudioLanguages;
- (bool)isGeniusEnabled;
- (bool)removeItems:(id)arg1 hideFromPurchaseHistory:(bool)arg2;
- (id)addPlaylistWithName:(id)arg1 activeGeniusPlaylist:(bool)arg2;
- (id)newPlaylistWithPersistentID:(unsigned long long)arg1;
- (id)localizedSectionIndexTitles;
- (id)localizedSectionHeaderForSectionIndex:(unsigned long long)arg1;
- (bool)_checkHasContent:(bool*)arg1 determined:(bool*)arg2 queryHasEntitiesBlock:(id)arg3;
- (bool)_checkHasContent:(bool*)arg1 determined:(bool*)arg2 mediaType:(unsigned long long)arg3 queryHasEntitiesBlock:(id)arg4;
- (bool)hasUbiquitousBookmarkableItems;
- (bool)hasSongs;
- (bool)hasGeniusMixes;
- (bool)hasMediaOfType:(unsigned long long)arg1;
- (bool)writable;
- (long long)playlistGeneration;
- (unsigned long long)syncGenerationID;
- (unsigned long long)currentEntityRevision;
- (void)_connectionProgressDisplayLinkCallback:(id)arg1;
- (void)_stopConnectionProgressDisplayLink;
- (void)_scheduleLibraryChangeNotificationPostingBlock:(id)arg1;
- (void)_clearCachedContentDataAndResultSets:(bool)arg1;
- (void)_clearCachedEntitiesIncludingResultSets:(bool)arg1;
- (void)setLibraryFilterPredicates;
- (void)_reloadLibraryForRestrictionsChange;
- (void)_displayValuesDidChangeNotification:(id)arg1;
- (void)_canShowCloudTracksDidChangeNotification:(id)arg1;
- (void)_reloadLibraryForContentsChangeWithNotificationInfo:(id)arg1;
- (void)_clearPendingDisconnection;
- (void)beginGeneratingLibraryChangeNotifications;
- (void)endGeneratingLibraryChangeNotifications;
- (void)populateLocationPropertiesOfItem:(id)arg1 withPath:(id)arg2;
- (id)itemWithPersistentID:(unsigned long long)arg1 verifyExistence:(bool)arg2;
- (id)itemWithPersistentID:(unsigned long long)arg1;
- (id)multiverseIdentifierForTrackWithPersistentID:(long long)arg1;
- (id)multiverseIdentifierForCollectionWithPersistentID:(long long)arg1 groupingType:(long long)arg2;
- (id)libraryDataProvider;
- (id)_collectionPersistentIdentifiersForQueryCriteria:(id)arg1;
- (id)_itemPersistentIdentifiersForQueryCriteria:(id)arg1;
- (unsigned long long)_countOfCollectionsForQueryCriteria:(id)arg1;
- (unsigned long long)_countOfItemsForQueryCriteria:(id)arg1;
- (bool)_hasCollectionsForQueryCriteria:(id)arg1;
- (bool)_hasItemsForQueryCriteria:(id)arg1;
- (id)_collectionsForQueryCriteria:(id)arg1;
- (id)_itemsForQueryCriteria:(id)arg1;
- (id)entityWithMultiverseIdentifier:(id)arg1;
- (bool)collectionExistsWithPersistentID:(unsigned long long)arg1 groupingType:(long long)arg2;
- (bool)itemExistsWithPersistentID:(unsigned long long)arg1;
- (bool)collectionExistsWithName:(id)arg1 groupingType:(long long)arg2 existentPID:(unsigned long long*)arg3;
- (bool)collectionExistsContainedWithinPersistentIDs:(const unsigned long long*)arg1 count:(unsigned long long)arg2 groupingType:(long long)arg3 existentPID:(unsigned long long*)arg4;
- (id)playlistWithPersistentID:(unsigned long long)arg1;
- (id)artworkDataSource;
- (id)completeMyCollectionArtworkDataSource;
- (id)protectedContentSupportStorageURL;
- (long long)status;
- (id)lastModifiedDate;
- (bool)removeItems:(id)arg1;
- (id)init;
- (bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)name;
- (id)uniqueIdentifier;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (void).cxx_destruct;
- (id)description;
- (void)disconnect;
- (void)_didReceiveMemoryWarning:(id)arg1;

@end
