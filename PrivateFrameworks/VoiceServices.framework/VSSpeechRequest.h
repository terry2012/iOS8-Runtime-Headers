/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/VoiceServices.framework/VoiceServices
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSString, NSAttributedString, NSURL;

@interface VSSpeechRequest : NSObject <NSSecureCoding> {
    bool_useCustomVoice;
    bool_maintainsInput;
    bool_audioSessionIDIsValid;
    unsigned int _audioSessionID;
    unsigned int _audioQueueFlags;
    NSString *_text;
    NSAttributedString *_attributedText;
    NSString *_languageCode;
    NSString *_voiceName;
    long long _footprint;
    long long _gender;
    NSURL *_outputPath;
    double _rate;
    double _pitch;
    double _volume;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _stopHandler;


  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _pauseHandler;

}

@property(copy) NSString * text;
@property(copy) NSAttributedString * attributedText;
@property(copy) NSString * languageCode;
@property(copy) NSString * voiceName;
@property long long footprint;
@property bool useCustomVoice;
@property long long gender;
@property(copy) NSURL * outputPath;
@property double rate;
@property double pitch;
@property double volume;
@property bool maintainsInput;
@property bool audioSessionIDIsValid;
@property unsigned int audioSessionID;
@property unsigned int audioQueueFlags;
@property(copy) id stopHandler;
@property(copy) id pauseHandler;

+ (bool)supportsSecureCoding;

- (void)setPauseHandler:(id)arg1;
- (id)pauseHandler;
- (void)setStopHandler:(id)arg1;
- (id)stopHandler;
- (void)setAudioQueueFlags:(unsigned int)arg1;
- (unsigned int)audioQueueFlags;
- (void)setAudioSessionID:(unsigned int)arg1;
- (void)setAudioSessionIDIsValid:(bool)arg1;
- (bool)audioSessionIDIsValid;
- (void)setMaintainsInput:(bool)arg1;
- (bool)maintainsInput;
- (void)setOutputPath:(id)arg1;
- (id)outputPath;
- (void)setGender:(long long)arg1;
- (void)setUseCustomVoice:(bool)arg1;
- (bool)useCustomVoice;
- (void)setFootprint:(long long)arg1;
- (void)setVoiceName:(id)arg1;
- (id)voiceName;
- (unsigned int)audioSessionID;
- (long long)gender;
- (long long)footprint;
- (void)setPitch:(double)arg1;
- (void)setRate:(double)arg1;
- (double)rate;
- (void)setVolume:(double)arg1;
- (double)volume;
- (void)setLanguageCode:(id)arg1;
- (double)pitch;
- (id)text;
- (id)languageCode;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void).cxx_destruct;
- (id)description;
- (id)attributedText;
- (void)setAttributedText:(id)arg1;
- (void)setText:(id)arg1;

@end
