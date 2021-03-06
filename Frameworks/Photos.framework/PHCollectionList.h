/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/Photos.framework/Photos
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSString, NSArray, PHQuery, NSDate;

@interface PHCollectionList : PHCollection  {
    long long _collectionListType;
    long long _collectionListSubtype;
    NSString *_localizedTitle;
    NSDate *_startDate;
    NSDate *_endDate;
    NSArray *_localizedLocationNames;
    NSArray *_collections;
    PHQuery *_query;
    NSString *_transientIdentifier;
    int _plAlbumKind;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _childCollectionsSortingComparator;

    unsigned long long _unreadAssetCollectionsCount;
    unsigned long long _estimatedChildCollectionCount;
}

@property(readonly) long long collectionListType;
@property(readonly) long long collectionListSubtype;
@property(readonly) NSDate * startDate;
@property(readonly) NSDate * endDate;
@property(readonly) NSArray * localizedLocationNames;
@property(copy,readonly) id childCollectionsSortingComparator;
@property(readonly) unsigned long long unreadAssetCollectionsCount;
@property(readonly) unsigned long long estimatedChildCollectionCount;
@property(readonly) NSString * transientIdentifier;
@property(readonly) NSArray * collections;
@property(readonly) PHQuery * query;

+ (id)transientCollectionListWithAssetCollectionsFetchResult:(id)arg1 title:(id)arg2 identifier:(id)arg3;
+ (id)transientCollectionListWithAssetCollections:(id)arg1 title:(id)arg2 identifier:(id)arg3;
+ (id)transientCollectionListWithAssetCollectionsFetchResult:(id)arg1 title:(id)arg2;
+ (id)transientCollectionListWithAssetCollections:(id)arg1 title:(id)arg2;
+ (id)fetchMomentListsWithSubtype:(long long)arg1 options:(id)arg2;
+ (id)fetchMomentListsWithSubtype:(long long)arg1 containingMoment:(id)arg2 options:(id)arg3;
+ (id)fetchRootAlbumCollectionListWithOptions:(id)arg1;
+ (id)fetchCollectionListsWithType:(long long)arg1 subtype:(long long)arg2 options:(id)arg3;
+ (id)fetchCollectionListsWithCloudIdentifiers:(id)arg1 options:(id)arg2;
+ (id)fetchCollectionListsWithLocalIdentifiers:(id)arg1 options:(id)arg2;
+ (id)fetchCollectionListsContainingCollection:(id)arg1 options:(id)arg2;
+ (id)transientCollectionListWithCollectionsFetchResult:(id)arg1 title:(id)arg2 identifier:(id)arg3;
+ (id)transientCollectionListWithCollections:(id)arg1 title:(id)arg2 identifier:(id)arg3;
+ (id)transientCollectionListWithCollectionsFetchResult:(id)arg1 title:(id)arg2;
+ (id)transientCollectionListWithCollections:(id)arg1 title:(id)arg2;
+ (id)identifierCode;
+ (bool)managedObjectSupportsTrashedState;
+ (id)propertiesToFetchWithHint:(unsigned long long)arg1;
+ (id)entityKeyForPropertyKey:(id)arg1;
+ (id)fetchPredicateFromComparisonPredicate:(id)arg1;
+ (id)managedEntityName;

- (id)pl_assetContainerList;
- (unsigned long long)estimatedChildCollectionCount;
- (unsigned long long)unreadAssetCollectionsCount;
- (id)childCollectionsSortingComparator;
- (bool)canContainCollections;
- (long long)collectionListSubtype;
- (id)initTransientWithCollections:(id)arg1 orQuery:(id)arg2 title:(id)arg3 identifier:(id)arg4;
- (id)transientIdentifier;
- (long long)collectionListType;
- (Class)changeRequestClass;
- (id)initWithFetchDictionary:(id)arg1 propertyHint:(unsigned long long)arg2 photoLibrary:(id)arg3;
- (bool)collectionHasFixedOrder;
- (id)localizedLocationNames;
- (bool)canPerformEditOperation:(long long)arg1;
- (id)collections;
- (id)endDate;
- (id)startDate;
- (id)query;
- (void).cxx_destruct;
- (id)description;
- (id)localizedTitle;

@end
