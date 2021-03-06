/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class NSData, NSString, UIImage, MPImageCache, MPAVController, NSMutableDictionary, MPStoreDownload, NSObject<OS_dispatch_queue>;

@interface MPNowPlayingObserver : NSObject <MPStoreDownloadManagerObserver> {
    NSObject<OS_dispatch_queue> *_accessQueue;
    UIImage *_currentArtworkImage;
    NSData *_currentArtworkImageData;
    bool_hasSeenAnyItem;
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableDictionary *_mediaItemCoalescedUpdateDateAccessedTimers;
    MPStoreDownload *_activeDownload;
    NSObject<OS_dispatch_queue> *_statusBarQueue;
    bool_needsNowPlayingInfoUpdate;
    bool_enabled;
    MPImageCache *_imageCache;
    MPAVController *_player;
}

@property(getter=isEnabled) bool enabled;
@property(readonly) MPImageCache * imageCache;
@property(retain) MPAVController * player;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;


- (bool)_itemNotificationIsRelevantToObservedPlayer:(id)arg1;
- (void)_postNowPlayingInfo;
- (void)_playbackErrorNotification:(id)arg1;
- (void)_repeatTypeDidChangeNotification:(id)arg1;
- (void)_itemDidFinishLoadingNotification:(id)arg1;
- (void)_crossedTimeMarkerNotification:(id)arg1;
- (void)_contentsDidChangeNotification:(id)arg1;
- (void)_createNowPlayingInfoForItem:(id)arg1 completionHandler:(id)arg2;
- (void)_setNowPlayingInfo:(id)arg1 forItem:(id)arg2;
- (void)_postNowPlayingInfoForItem:(id)arg1;
- (long long)_MPNowPlayingDownloadStateForDownload:(id)arg1;
- (id)_activeDownloadForItemWithStoreID:(long long)arg1;
- (long long)_MPNowPlayingShuffleModeForMPShuffleType:(unsigned long long)arg1;
- (long long)_MPNowPlayingRepeatModeForMPRepeatType:(unsigned long long)arg1;
- (void)_prefetchArtworkForNextItem;
- (void)_coalescedUpdateLastUsedDateForCurrentItem;
- (bool)_hasProperConditionsToLoadArtwork;
- (void)_updateProgressForDownload:(id)arg1;
- (id)_storeDownloadForNowPlayingItemInArray:(id)arg1;
- (void)_setNeedsNowPlayingInfoUpdate;
- (bool)_reloadArtworkIfPossible;
- (void)_unregisterForNotificationsForPlayer:(id)arg1;
- (void)_registerForNotificationsForPlayer:(id)arg1;
- (void)_avItemTitlesDidChangeNotification:(id)arg1;
- (void)_avItemIsExplicitDidChangeNotification:(id)arg1;
- (void)_avItemDurationDidChangeNotification:(id)arg1;
- (void)_avItemArtworkDidChangeNotification:(id)arg1;
- (void)downloadManager:(id)arg1 downloadPurchaseDidFinish:(id)arg2;
- (void)downloadManager:(id)arg1 downloadDidProgress:(id)arg2;
- (void)downloadManager:(id)arg1 downloadDidFinish:(id)arg2;
- (void)downloadManager:(id)arg1 didAddDownloads:(id)arg2 removeDownloads:(id)arg3;
- (void)_mediaLibraryDisplayValuesDidChangeNotification:(id)arg1;
- (void)_timeDidJumpNotification:(id)arg1;
- (void)_rateDidChangeNotification:(id)arg1;
- (void)_bufferingStateDidChangeNotification:(id)arg1;
- (void)_itemDidChangeNotification:(id)arg1;
- (id)initWithPlayer:(id)arg1;
- (void)_playbackStateDidChangeNotification:(id)arg1;
- (void)setEnabled:(bool)arg1;
- (bool)isEnabled;
- (id)player;
- (void)setPlayer:(id)arg1;
- (id)imageCache;
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;

@end
