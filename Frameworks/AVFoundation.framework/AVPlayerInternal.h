/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class AVPixelBufferAttributeMediator, NSMutableDictionary, AVPropertyStorage, NSDictionary, AVWeakKeyValueObserverProxy, AVPlayerItem, NSString, NSHashTable, NSMutableSet, NSObject<OS_dispatch_queue>, NSArray, AVWeakReference, NSError, AVAudioSessionMediaPlayerOnly;

@interface AVPlayerInternal : NSObject  {
    AVWeakReference *weakReference;
    AVWeakKeyValueObserverProxy *KVOProxy;
    AVPixelBufferAttributeMediator *pixelBufferAttributeMediator;
    NSObject<OS_dispatch_queue> *figConfigurationQueue;
    NSObject<OS_dispatch_queue> *ivarAccessQueue;
    AVPlayerItem *currentItem;
    struct OpaqueFigPlayer { } *figPlayer;
    struct OpaqueCMClock { } *figMasterClock;
    AVPropertyStorage *propertyStorage;
    NSMutableDictionary *pendingFigPlayerProperties;
    NSArray *expectedAssetTypes;
    AVPlayerItem *lastItem;
    struct OpaqueFigPlaybackItem { } *figPlaybackItemToIdentifyNextCurrentItem;
    NSMutableSet *items;
    NSObject<OS_dispatch_queue> *layersQ;
    struct __CFDictionary { } *videoLayers;
    NSMutableSet *subtitleLayers;
    NSMutableSet *closedCaptionLayers;
    struct CGSize { 
        double width; 
        double height; 
    } cachedDisplaySize;
    NSHashTable *avPlayerLayers;
    NSString *externalPlaybackVideoGravity;
    long long status;
    NSError *error;
    NSObject<OS_dispatch_queue> *stateDispatchQueue;
    NSArray *displaysUsedForPlayback;
    boolneedsToCreateFigPlayer;
    boollogPerformanceData;
    NSDictionary *cachedFigMediaSelectionCriteriaProperty;
    struct OpaqueCMTimebase { } *proxyTimebase;
    boolreevaluateBackgroundPlayback;
    boolhostApplicationInForeground;
    boolhadAssociatedOnscreenPlayerLayerWhenSuspended;
    booliapdExtendedModeIsActive;
    AVAudioSessionMediaPlayerOnly *audioSessionMediaPlayerOnly;
    NSDictionary *vibrationPattern;
    struct OpaqueFigSimpleMutex { } *prerollIDMutex;
    int nextPrerollIDToGenerate;
    int pendingPrerollID;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id prerollCompletionHandler;

    boolautoSwitchStreamVariants;
    boolpreparesItemsForPlaybackAsynchronously;
    boolallowsOutOfBandTextTrackRendering;
}



@end
