/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSString, <VKAnimationRunner>;

@interface VKAnimation : NSObject  {

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _stepHandler;


  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _completionHandler;


  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _timingFunction;

    double _duration;
    double _startTimestamp;
    double _lastTimestamp;
    NSString *_name;
    int _priority;
    <VKAnimationRunner> *_runner;
    struct { 
        unsigned int resuming : 1; 
        unsigned int runsForever : 1; 
        unsigned int startTimestampSet : 1; 
        unsigned int state : 3; 
    } _flags;
}

@property double duration;
@property(copy) id timingFunction;
@property(copy) id stepHandler;
@property(copy) id completionHandler;
@property(readonly) bool running;
@property bool runsForever;
@property(readonly) int priority;

+ (void)setDragCoefficientGetter:(id)arg1;

- (id)stepHandler;
- (void)transferToRunner:(id)arg1;
- (void)startWithRunner:(id)arg1;
- (id)initWithPriority:(int)arg1 name:(id)arg2;
- (id)initWithDuration:(double)arg1 priority:(int)arg2 name:(id)arg3;
- (bool)runsForever;
- (void)setRunsForever:(bool)arg1;
- (void)_stopAnimation:(bool)arg1;
- (id)initWithDuration:(double)arg1 name:(id)arg2;
- (void)onTimerFired:(double)arg1;
- (void)setStepHandler:(id)arg1;
- (id)initWithDuration:(double)arg1;
- (bool)running;
- (void)resume;
- (void)pause;
- (void)stop;
- (void)setTimingFunction:(id)arg1;
- (void)setDuration:(double)arg1;
- (id)timingFunction;
- (id)init;
- (id)initWithName:(id)arg1;
- (int)priority;
- (void)dealloc;
- (id).cxx_construct;
- (id)description;
- (double)duration;
- (id)initWithPriority:(int)arg1;
- (void)setCompletionHandler:(id)arg1;
- (id)completionHandler;

@end
