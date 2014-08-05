/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class NSURL, UIView;

@interface MPMoviePlayerController : NSObject <MPMediaPlayback> {
    id _implementation;
}

@property(copy) NSURL * contentURL;
@property(readonly) UIView * view;
@property(readonly) UIView * backgroundView;
@property(readonly) long long playbackState;
@property(readonly) unsigned long long loadState;
@property long long controlStyle;
@property long long repeatMode;
@property bool shouldAutoplay;
@property(getter=isFullscreen) bool fullscreen;
@property long long scalingMode;
@property(readonly) bool readyForDisplay;
@property(readonly) bool isPreparedToPlay;
@property double currentPlaybackTime;
@property float currentPlaybackRate;

+ (void)allInstancesResignActive;

- (bool)readyForDisplay;
- (bool)_isReadyForDisplay;
- (void)_resignActive;
- (void)setCurrentPlaybackRate:(float)arg1;
- (float)currentPlaybackRate;
- (void)setCurrentPlaybackTime:(double)arg1;
- (double)currentPlaybackTime;
- (double)endPlaybackTime;
- (void)setEndPlaybackTime:(double)arg1;
- (double)initialPlaybackTime;
- (void)setInitialPlaybackTime:(double)arg1;
- (double)playableDuration;
- (long long)movieSourceType;
- (void)setMovieSourceType:(long long)arg1;
- (unsigned long long)movieMediaTypes;
- (void)skipToPreviousItem;
- (void)skipToBeginning;
- (void)skipToNextItem;
- (void)endSeeking;
- (void)beginSeekingBackward;
- (void)beginSeekingForward;
- (bool)isPreparedToPlay;
- (void)setAllowsAirPlay:(bool)arg1;
- (bool)allowsAirPlay;
- (void)setScalingMode:(long long)arg1;
- (long long)scalingMode;
- (void)setFullscreen:(bool)arg1 animated:(bool)arg2;
- (void)setFullscreen:(bool)arg1;
- (bool)isFullscreen;
- (void)setShouldAutoplay:(bool)arg1;
- (bool)shouldAutoplay;
- (void)setControlStyle:(long long)arg1;
- (long long)controlStyle;
- (unsigned long long)loadState;
- (long long)playbackState;
- (id)contentURL;
- (id)initWithContentURL:(id)arg1;
- (void)setContentURL:(id)arg1;
- (long long)repeatMode;
- (void)setRepeatMode:(long long)arg1;
- (void)play;
- (void)prepareToPlay;
- (bool)isAirPlayVideoActive;
- (struct CGSize { double x1; double x2; })naturalSize;
- (id)initWithAsset:(id)arg1;
- (id)view;
- (void)pause;
- (void)stop;
- (id)init;
- (id)methodSignatureForSelector:(SEL)arg1;
- (void)forwardInvocation:(id)arg1;
- (void)dealloc;
- (void).cxx_destruct;
- (double)duration;
- (id)backgroundView;

@end
