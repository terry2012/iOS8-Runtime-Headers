/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/AVFoundation.framework/libAVFAudio.dylib
 */

@class NSArray, NSDictionary, NSURL, NSData, <AVAudioPlayerDelegate>;

@interface AVAudioPlayer : NSObject  {
    id _impl;
}

@property(getter=isPlaying,readonly) bool playing;
@property(readonly) unsigned long long numberOfChannels;
@property(readonly) double duration;
@property <AVAudioPlayerDelegate> * delegate;
@property(readonly) NSURL * url;
@property(readonly) NSData * data;
@property float pan;
@property float volume;
@property bool enableRate;
@property float rate;
@property double currentTime;
@property(readonly) double deviceCurrentTime;
@property long long numberOfLoops;
@property(readonly) NSDictionary * settings;
@property(getter=isMeteringEnabled) bool meteringEnabled;
@property(copy) NSArray * channelAssignments;


- (void)setCurrentTime:(double)arg1;
- (void)setMixToUplink:(bool)arg1;
- (bool)mixToUplink;
- (void)setChannelAssignments:(id)arg1;
- (id)channelAssignments;
- (long long)numberOfLoops;
- (void)setNumberOfLoops:(long long)arg1;
- (double)deviceCurrentTime;
- (double)currentTime;
- (bool)enableRate;
- (void)setEnableRate:(bool)arg1;
- (bool)playAtTime:(double)arg1;
- (bool)play;
- (bool)prepareToPlay;
- (id)initWithData:(id)arg1 error:(id*)arg2;
- (unsigned long long)numberOfChannels;
- (id)initWithContentsOfURL:(id)arg1 fileTypeHint:(id)arg2 error:(id*)arg3;
- (id)initWithData:(id)arg1 fileTypeHint:(id)arg2 error:(id*)arg3;
- (void)endInterruption;
- (void)endInterruptionWithFlags:(id)arg1;
- (void)beginInterruption;
- (void)decodeError:(id)arg1;
- (void)finishedPlaying:(id)arg1;
- (id)initBase;
- (float)averagePowerForChannel:(unsigned long long)arg1;
- (float)peakPowerForChannel:(unsigned long long)arg1;
- (void)updateMeters;
- (void)setMeteringEnabled:(bool)arg1;
- (bool)isMeteringEnabled;
- (bool)isPlaying;
- (id)impl;
- (void)setRate:(float)arg1;
- (float)rate;
- (void)setPan:(float)arg1;
- (float)pan;
- (void)setVolume:(float)arg1;
- (float)volume;
- (id)settings;
- (id)initWithContentsOfURL:(id)arg1 error:(id*)arg2;
- (id)url;
- (void)pause;
- (void)stop;
- (void)setDelegate:(id)arg1;
- (id)data;
- (id)delegate;
- (void)finalize;
- (void)dealloc;
- (double)duration;

@end
