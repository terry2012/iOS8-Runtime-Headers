/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/MediaToolbox.framework/MediaToolbox
 */

@class FigVideoLayerInternal;

@interface FigVideoLayer : CALayer  {
    FigVideoLayerInternal *_videoLayer;
}


- (id)layerDisplayName;
- (void)_sendVideoLayerIsBeingServicedNotification;
- (bool)isVideoLayerBeingServiced;
- (void)notificationBarrier;
- (void)layerDidBecomeVisible:(bool)arg1;
- (id)initWithLayer:(id)arg1;
- (id)init;
- (void)finalize;
- (void)dealloc;

@end
