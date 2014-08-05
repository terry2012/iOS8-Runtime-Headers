/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@class UIAlertView, NSString, PLTVOutWindow, AVPlayerItem, <PLMoviePlayerControllerDelegate>, PLMoviePlayerView, AVPlayer;

@interface PLMoviePlayerController : NSObject  {
    AVPlayerItem *_playerItem;
    AVPlayer *_player;
    PLMoviePlayerView *_view;
    UIAlertView *_alertView;
    PLTVOutWindow *_tvOutWindow;
    bool_hasPendingTime;
    double _pendingTime;
    unsigned long long _pendingTimeSnapOption;
    bool_forceUpdateCurrentTime;
    bool_isExternalPlayback;
    bool_exited;
    double _lastSetCurrentTimeTime;
    bool_isSeeking;
    unsigned long long _backgroundTaskId;
    bool_audioSessionActive;
    NSString *_originalAudioCategory;
    bool_TVOutEnabled;
    bool_forceDisableTVOut;
    bool_isPreparedForPlayback;
    bool_isActiveController;
    <PLMoviePlayerControllerDelegate> *_delegate;
    unsigned long long _bufferingState;
    unsigned long long _playbackState;
}

@property <PLMoviePlayerControllerDelegate> * delegate;
@property(retain,readonly) AVPlayer * player;
@property(retain,readonly) PLMoviePlayerView * view;
@property(readonly) float playbackRate;
@property(readonly) unsigned long long playbackState;
@property(readonly) double duration;
@property double currentTime;
@property(readonly) unsigned long long bufferingState;
@property(readonly) bool isPreparedForPlayback;
@property bool TVOutEnabled;
@property(setter=_setForceDisableTVOut:) bool forceDisableTVOut;
@property bool isActiveController;

+ (bool)_isNetworkSupportedPath:(id)arg1;
+ (bool)_isStreamableAsset:(id)arg1;
+ (id)AVAssetURLWithPath:(id)arg1;

- (bool)forceDisableTVOut;
- (void)pauseDueToInsufficientData;
- (void)_playbackFailedWithError:(id)arg1;
- (void)setIsActiveController:(bool)arg1;
- (bool)isActiveController;
- (void)_displayVideoView;
- (void)_setForceDisableTVOut:(bool)arg1;
- (void)_pausePlaybackForNotification;
- (void)_restoreTVOutVideoIfNecessary;
- (void)_setPlayerAudioSessionActive:(bool)arg1;
- (void)_delayedUpdateFromPendingTime;
- (void)setCurrentTime:(double)arg1 timeSnapOption:(unsigned long long)arg2 forceUpdate:(bool)arg3;
- (void)_playerRateDidChange:(id)arg1;
- (void)_dispatchOnMainThreadWithBlock:(id)arg1;
- (void)_streamUnlikelyToKeepUp;
- (void)_streamLikelyToKeepUp;
- (void)_streamBufferFull;
- (void)_streamRanDry;
- (void)_playerItemFailedToPlayToEnd:(id)arg1;
- (void)_didLoadValueOfKey:(id)arg1 forAsset:(id)arg2;
- (void)_updateFromPendingTime;
- (void)_playerItemFailedToPlayToEndNotification:(id)arg1;
- (void)_playerItemDidReachEndNotification:(id)arg1;
- (void)_loadAsset:(id)arg1;
- (void)_setPlaybackState:(unsigned long long)arg1;
- (void)_updateAudioSession;
- (void)_tearDownPlayer;
- (void)_setPlayerItem:(id)arg1;
- (void)_setupPlayer;
- (void)playFromBeginning;
- (bool)isExternalPlayback;
- (void)playDueToEnoughData;
- (bool)isPreparedForPlayback;
- (void)setPlayerItem:(id)arg1 startTime:(double)arg2;
- (void)requestToResignAsActiveController;
- (void)requestToBecomeActiveController;
- (void)didBecomeActiveController;
- (void)willResignAsActiveController;
- (void)_tearDownTVOutWindow;
- (void)_updateTVOutEnabled;
- (void)_setupTVOutWindow;
- (void)_updateDisableAirPlayMirroringDuringPlayback;
- (void)_updateBackgroundViewInformation;
- (void)tearDownTVOutWindow;
- (void)_screenDidDisconnect:(id)arg1;
- (void)_screenDidConnect:(id)arg1;
- (id)_playerKeysToObserve;
- (void)_serverConnectionDidDie:(id)arg1;
- (void)_setBufferingState:(unsigned long long)arg1;
- (void)_willResignNotification:(id)arg1;
- (void)_willBeginSuspendAnimationNotification:(id)arg1;
- (void)_willSuspendNotification:(id)arg1;
- (void)_registerForNotifications;
- (void)_exitPlayer:(int)arg1;
- (void)setCurrentTime:(double)arg1 timeSnapOption:(unsigned long long)arg2;
- (bool)videoOutActive;
- (void)_didEnterBackgroundNotification:(id)arg1;
- (void)_willEnterForegroundNotification:(id)arg1;
- (void)setTVOutEnabled:(bool)arg1;
- (bool)TVOutEnabled;
- (unsigned long long)bufferingState;
- (void)_simpleRemoteNotification:(id)arg1;
- (unsigned long long)playbackState;
- (float)playbackRate;
- (void)setCurrentTime:(double)arg1;
- (double)currentTime;
- (void)play;
- (bool)_allowsExternalPlayback;
- (id)_asset;
- (void)_unregisterForNotifications;
- (id)player;
- (id)view;
- (long long)externalPlaybackType;
- (void)pause;
- (void)stop;
- (id)init;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (void)dealloc;
- (double)duration;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;

@end
