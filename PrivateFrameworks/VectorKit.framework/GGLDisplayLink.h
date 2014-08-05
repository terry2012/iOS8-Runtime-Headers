/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@class CADisplay, CADisplayLink;

@interface GGLDisplayLink : NSObject  {
    SEL _selector;
    id _target;
    CADisplayLink *_displayLink;
    CADisplay *_display;
    long long _frameInterval;
    long long _skippedFrames;
    bool_paused;
}

@property(getter=isPaused) bool paused;
@property long long frameInterval;
@property(readonly) double timestamp;
@property(retain) CADisplay * display;


- (void)setPaused:(bool)arg1;
- (bool)isPaused;
- (double)timestamp;
- (void)addToRunLoop:(id)arg1 forMode:(id)arg2;
- (id)initWithTarget:(id)arg1 selector:(SEL)arg2;
- (id)display;
- (long long)frameInterval;
- (void)setDisplay:(id)arg1;
- (void)invalidate;
- (void)dealloc;
- (id)target;
- (void)_displayLinkFired:(id)arg1;
- (void)setFrameInterval:(long long)arg1;

@end
