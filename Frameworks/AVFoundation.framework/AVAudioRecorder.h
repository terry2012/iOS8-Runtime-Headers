/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/AVFoundation.framework/libAVFAudio.dylib
 */

@class NSArray, NSDictionary, NSURL, <AVAudioRecorderDelegate>;

@interface AVAudioRecorder : NSObject  {
    void *_impl;
}

@property(getter=isRecording,readonly) bool recording;
@property(readonly) NSURL * url;
@property(readonly) NSDictionary * settings;
@property <AVAudioRecorderDelegate> * delegate;
@property(readonly) double currentTime;
@property(readonly) double deviceCurrentTime;
@property(getter=isMeteringEnabled) bool meteringEnabled;
@property(copy) NSArray * channelAssignments;


- (void)endInterruptionWithFlags;
- (bool)deleteRecording;
- (bool)recordAtTime:(double)arg1 forDuration:(double)arg2;
- (bool)recordForDuration:(double)arg1;
- (bool)recordAtTime:(double)arg1;
- (bool)record;
- (bool)prepareToRecord;
- (id)initWithURL:(id)arg1 settings:(id)arg2 error:(id*)arg3;
- (id)baseInit;
- (void)privCommonCleanup;
- (void)setChannelAssignments:(id)arg1;
- (id)channelAssignments;
- (double)deviceCurrentTime;
- (double)currentTime;
- (void)endInterruption;
- (void)beginInterruption;
- (float)averagePowerForChannel:(unsigned long long)arg1;
- (float)peakPowerForChannel:(unsigned long long)arg1;
- (void)updateMeters;
- (void)setMeteringEnabled:(bool)arg1;
- (bool)isMeteringEnabled;
- (bool)isRecording;
- (void)finishedRecording;
- (struct AudioRecorderImpl { id x1; id x2; id x3; id x4; id x5; unsigned int x6; struct AudioStreamBasicDescription { double x_7_1_1; unsigned int x_7_1_2; unsigned int x_7_1_3; unsigned int x_7_1_4; unsigned int x_7_1_5; unsigned int x_7_1_6; unsigned int x_7_1_7; unsigned int x_7_1_8; unsigned int x_7_1_9; } x7; struct OpaqueAudioFileID {} *x8; struct OpaqueAudioQueue {} *x9; long long x10; long long x11; long long x12; double x13; double x14; double x15; unsigned long long x16; char *x17; boolx18; boolx19; boolx20; boolx21; boolx22; boolx23; boolx24; struct AudioQueueLevelMeterState {} *x25; struct AudioQueueBuffer {} *x26[4]; struct AudioQueueBuffer {} *x27; boolx28; unsigned long long x29; boolx30; }*)impl;
- (id)settings;
- (id)url;
- (void)pause;
- (void)stop;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (void)finalize;
- (void)dealloc;

@end
