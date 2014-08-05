/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/AVFoundation.framework/libAVFAudio.dylib
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class AVAudioSessionRouteDescription, NSString, NSArray, AVAudioSessionPortDescription;

@interface AVAudioSession : NSObject  {
    void *_impl;
}

@property(readonly) NSString * category;
@property(readonly) unsigned long long categoryOptions;
@property(readonly) NSString * mode;
@property(getter=isOtherAudioPlaying,readonly) bool otherAudioPlaying;
@property(readonly) bool secondaryAudioShouldBeSilencedHint;
@property(readonly) AVAudioSessionRouteDescription * currentRoute;
@property(readonly) AVAudioSessionPortDescription * preferredInput;
@property(readonly) NSArray * availableInputs;

+ (void)privateAllocInitSingleton;
+ (id)sharedInstance;
+ (id)allocWithZone:(struct _NSZone { }*)arg1;

- (void)privateHandleSecondaryAudioHintChange:(id)arg1;
- (void)privateHandleServerDied;
- (void)privateHandleOutputChannelCount:(id)arg1;
- (void)privateHandleInputChannelCount:(id)arg1;
- (void)privateHandleFormatChange:(id)arg1;
- (void)privateHandleFormatsChange:(id)arg1;
- (void)privateHandlePromptStyleChange:(id)arg1;
- (void)privateHandleOutputDataSourcesChange:(id)arg1;
- (void)privateHandleInputDataSourcesChange:(id)arg1;
- (void)privateHandleOutputVolumeChange:(id)arg1;
- (void)privateHandleInputGainChange:(id)arg1;
- (void)privateEndInterruptionWithFlags:(id)arg1;
- (void)privateBeginInterruption;
- (void)privateInputIsAvailableChanged:(id)arg1;
- (double)preferredHardwareSampleRate;
- (long long)currentHardwareOutputNumberOfChannels;
- (long long)currentHardwareInputNumberOfChannels;
- (double)currentHardwareSampleRate;
- (bool)inputIsAvailable;
- (bool)clearInputPreferences:(id*)arg1;
- (bool)setIAmTheAssistant:(bool)arg1 error:(id*)arg2;
- (bool)setDefaultChatMode:(id)arg1 error:(id*)arg2;
- (bool)silenceOutput:(unsigned long long)arg1 error:(id*)arg2;
- (bool)setActivationContext:(id)arg1 error:(id*)arg2;
- (bool)setPreferredHardwareSampleRate:(double)arg1 error:(id*)arg2;
- (void)privateHandleServerReturned;
- (id)privateRefreshAvailableInputs;
- (id)availableInputs;
- (double)speechDetectionDeviceSampleRate;
- (unsigned int)opaqueSessionID;
- (id)preferredInput;
- (bool)setPreferredInput:(id)arg1 error:(id*)arg2;
- (bool)overrideOutputAudioPort:(unsigned long long)arg1 error:(id*)arg2;
- (bool)setMode:(id)arg1 error:(id*)arg2;
- (long long)maximumOutputNumberOfChannels;
- (long long)maximumInputNumberOfChannels;
- (long long)preferredOutputNumberOfChannels;
- (long long)preferredInputNumberOfChannels;
- (unsigned long long)preferredIOBufferFrameSize;
- (unsigned long long)IOBufferFrameSize;
- (double)IOBufferDuration;
- (double)outputSafetyOffset;
- (double)inputSafetyOffset;
- (double)outputLatency;
- (double)inputLatency;
- (bool)secondaryAudioShouldBeSilencedHint;
- (bool)isOtherAudioPlaying;
- (bool)isInputGainSettable;
- (id)outputDataSource;
- (id)outputDataSources;
- (id)inputDataSource;
- (id)inputDataSources;
- (float)inputGain;
- (bool)fixHardwareFormatToMultiChannel:(bool)arg1 error:(id*)arg2;
- (bool)isHardwareFormatFixedToMultiChannel;
- (void)setAllowAllBuiltInDataSources:(bool)arg1;
- (bool)allowAllBuiltInDataSources;
- (bool)setForceSoundCheck:(bool)arg1 error:(id*)arg2;
- (bool)forceSoundCheck;
- (bool)isEarpieceActiveNoiseCancelationEnabled;
- (long long)audioFormat;
- (id)audioFormats;
- (unsigned long long)promptStyle;
- (bool)setOutputDataSource:(id)arg1 error:(id*)arg2;
- (bool)setInputDataSource:(id)arg1 error:(id*)arg2;
- (bool)setInputGain:(float)arg1 error:(id*)arg2;
- (bool)setPreferredOutputNumberOfChannels:(long long)arg1 error:(id*)arg2;
- (bool)setPreferredInputNumberOfChannels:(long long)arg1 error:(id*)arg2;
- (bool)setPreferredIOBufferFrameSize:(unsigned long long)arg1 error:(id*)arg2;
- (bool)setPreferredIOBufferDuration:(double)arg1 error:(id*)arg2;
- (void)requestRecordPermission:(id)arg1;
- (unsigned long long)recordPermission;
- (bool)setCategory:(id)arg1 withOptions:(unsigned long long)arg2 error:(id*)arg3;
- (unsigned long long)categoryOptions;
- (id)category;
- (void)privateUpdateOutputChannelCount:(id)arg1;
- (void)privateUpdateInputChannelCount:(id)arg1;
- (void)privateUpdateAudioFormat:(id)arg1;
- (void)privateUpdateAudioFormats:(id)arg1;
- (void)privateUpdatePromptStyle:(id)arg1;
- (void)privateUpdateDataSources:(id)arg1 forInput:(bool)arg2;
- (void)privateUpdateOutputVolume:(id)arg1;
- (double)preferredSampleRate;
- (long long)outputNumberOfChannels;
- (bool)isInputAvailable;
- (bool)setPreferredSampleRate:(double)arg1 error:(id*)arg2;
- (struct AVAudioSessionImpl { struct GenericRunLoopThread {} *x1; id x2; id x3; struct KVOProperty<float> { int (**x_4_1_1)(); float x_4_1_2; boolx_4_1_3; id x_4_1_4; } x4; struct KVOProperty<float> { int (**x_5_1_1)(); float x_5_1_2; boolx_5_1_3; id x_5_1_4; } x5; struct KVONSArrayProperty { int (**x_6_1_1)(); id x_6_1_2; boolx_6_1_3; id x_6_1_4; } x6; struct KVONSArrayProperty { int (**x_7_1_1)(); id x_7_1_2; boolx_7_1_3; id x_7_1_4; } x7; struct KVOProperty<unsigned int> { int (**x_8_1_1)(); unsigned int x_8_1_2; boolx_8_1_3; id x_8_1_4; } x8; struct KVONSObjectProperty<NSArray *> { int (**x_9_1_1)(); id x_9_1_2; boolx_9_1_3; id x_9_1_4; } x9; struct KVOProperty<unsigned int> { int (**x_10_1_1)(); unsigned int x_10_1_2; boolx_10_1_3; id x_10_1_4; } x10; id x11; boolx12; struct KVOProperty<unsigned int> { int (**x_13_1_1)(); unsigned int x_13_1_2; boolx_13_1_3; id x_13_1_4; } x13; struct KVOProperty<unsigned int> { int (**x_14_1_1)(); unsigned int x_14_1_2; boolx_14_1_3; id x_14_1_4; } x14; unsigned int x15; }*)privateGetImplementation;
- (id)privateConfigureRouteDescription:(id)arg1;
- (id)privateGetSelectedDataSource:(bool)arg1;
- (id)privateGetDataSources:(bool)arg1;
- (id)currentRoute;
- (void)privateUpdateInputGain:(id)arg1;
- (bool)setActive:(bool)arg1 withOptions:(unsigned long long)arg2 error:(id*)arg3;
- (bool)privateSetPropertyValue:(unsigned int)arg1 withBool:(bool)arg2 error:(id*)arg3;
- (bool)setCategory:(id)arg1 error:(id*)arg2;
- (void)privateMarkKVOPropertiesDirty:(unsigned long long)arg1;
- (bool)setActive:(bool)arg1 error:(id*)arg2;
- (long long)inputNumberOfChannels;
- (double)sampleRate;
- (float)outputVolume;
- (bool)setActive:(bool)arg1 withFlags:(long long)arg2 error:(id*)arg3;
- (double)preferredIOBufferDuration;
- (id)init;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (unsigned long long)retainCount;
- (id)autorelease;
- (oneway void)release;
- (id)retain;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)mode;

@end
