/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/usr/lib/libAWDSupportFramework.dylib
 */

@class NSMutableArray;

@interface AWDPowerDisplayBacklightMetrics : PBCodable <NSCopying> {
    unsigned long long _timestamp;
    unsigned int _alsAutoBrightnessChangeCount;
    int _alsAutoBrightnessCurveE0A;
    int _alsAutoBrightnessCurveE0B;
    int _alsAutoBrightnessCurveE1;
    int _alsAutoBrightnessCurveE2;
    int _alsAutoBrightnessCurveEdynth;
    int _alsAutoBrightnessCurveL0A;
    int _alsAutoBrightnessCurveL0B;
    int _alsAutoBrightnessCurveL1;
    int _alsAutoBrightnessCurveL2;
    unsigned int _alsAutoBrightnessLux;
    unsigned int _alsAutoBrightnessSlider;
    unsigned int _alsBrightnessEnableCnt;
    NSMutableArray *_backlightBuckets;
    unsigned int _dispOnCount;
    unsigned int _displayIdlePercentage;
    unsigned int _mieCount;
    unsigned int _mieDuration;
    unsigned int _pluggedDisplayOnDuration;
    unsigned int _totalBacklightPower;
    unsigned int _totalDisplayPower;
    unsigned int _unpluggedDisplayOnDuration;
    struct { 
        unsigned int timestamp : 1; 
        unsigned int alsAutoBrightnessChangeCount : 1; 
        unsigned int alsAutoBrightnessCurveE0A : 1; 
        unsigned int alsAutoBrightnessCurveE0B : 1; 
        unsigned int alsAutoBrightnessCurveE1 : 1; 
        unsigned int alsAutoBrightnessCurveE2 : 1; 
        unsigned int alsAutoBrightnessCurveEdynth : 1; 
        unsigned int alsAutoBrightnessCurveL0A : 1; 
        unsigned int alsAutoBrightnessCurveL0B : 1; 
        unsigned int alsAutoBrightnessCurveL1 : 1; 
        unsigned int alsAutoBrightnessCurveL2 : 1; 
        unsigned int alsAutoBrightnessLux : 1; 
        unsigned int alsAutoBrightnessSlider : 1; 
        unsigned int alsBrightnessEnableCnt : 1; 
        unsigned int dispOnCount : 1; 
        unsigned int displayIdlePercentage : 1; 
        unsigned int mieCount : 1; 
        unsigned int mieDuration : 1; 
        unsigned int pluggedDisplayOnDuration : 1; 
        unsigned int totalBacklightPower : 1; 
        unsigned int totalDisplayPower : 1; 
        unsigned int unpluggedDisplayOnDuration : 1; 
    } _has;
}

@property bool hasTimestamp;
@property unsigned long long timestamp;
@property bool hasDispOnCount;
@property unsigned int dispOnCount;
@property bool hasUnpluggedDisplayOnDuration;
@property unsigned int unpluggedDisplayOnDuration;
@property bool hasPluggedDisplayOnDuration;
@property unsigned int pluggedDisplayOnDuration;
@property bool hasMieDuration;
@property unsigned int mieDuration;
@property bool hasMieCount;
@property unsigned int mieCount;
@property bool hasDisplayIdlePercentage;
@property unsigned int displayIdlePercentage;
@property bool hasAlsAutoBrightnessCurveE1;
@property int alsAutoBrightnessCurveE1;
@property bool hasAlsAutoBrightnessCurveL1;
@property int alsAutoBrightnessCurveL1;
@property bool hasAlsAutoBrightnessCurveE2;
@property int alsAutoBrightnessCurveE2;
@property bool hasAlsAutoBrightnessCurveL2;
@property int alsAutoBrightnessCurveL2;
@property bool hasAlsAutoBrightnessCurveE0A;
@property int alsAutoBrightnessCurveE0A;
@property bool hasAlsAutoBrightnessCurveL0A;
@property int alsAutoBrightnessCurveL0A;
@property bool hasAlsAutoBrightnessCurveE0B;
@property int alsAutoBrightnessCurveE0B;
@property bool hasAlsAutoBrightnessCurveL0B;
@property int alsAutoBrightnessCurveL0B;
@property bool hasAlsAutoBrightnessCurveEdynth;
@property int alsAutoBrightnessCurveEdynth;
@property bool hasAlsAutoBrightnessSlider;
@property unsigned int alsAutoBrightnessSlider;
@property bool hasAlsAutoBrightnessLux;
@property unsigned int alsAutoBrightnessLux;
@property bool hasAlsAutoBrightnessChangeCount;
@property unsigned int alsAutoBrightnessChangeCount;
@property bool hasAlsBrightnessEnableCnt;
@property unsigned int alsBrightnessEnableCnt;
@property(retain) NSMutableArray * backlightBuckets;
@property bool hasTotalDisplayPower;
@property unsigned int totalDisplayPower;
@property bool hasTotalBacklightPower;
@property unsigned int totalBacklightPower;


- (unsigned int)totalBacklightPower;
- (unsigned int)totalDisplayPower;
- (id)backlightBuckets;
- (unsigned int)alsBrightnessEnableCnt;
- (unsigned int)alsAutoBrightnessChangeCount;
- (unsigned int)alsAutoBrightnessLux;
- (unsigned int)alsAutoBrightnessSlider;
- (int)alsAutoBrightnessCurveEdynth;
- (int)alsAutoBrightnessCurveL0B;
- (int)alsAutoBrightnessCurveE0B;
- (int)alsAutoBrightnessCurveL0A;
- (int)alsAutoBrightnessCurveE0A;
- (int)alsAutoBrightnessCurveL2;
- (int)alsAutoBrightnessCurveE2;
- (int)alsAutoBrightnessCurveL1;
- (int)alsAutoBrightnessCurveE1;
- (unsigned int)displayIdlePercentage;
- (unsigned int)mieCount;
- (unsigned int)mieDuration;
- (unsigned int)pluggedDisplayOnDuration;
- (unsigned int)unpluggedDisplayOnDuration;
- (unsigned int)dispOnCount;
- (bool)hasTotalBacklightPower;
- (void)setHasTotalBacklightPower:(bool)arg1;
- (void)setTotalBacklightPower:(unsigned int)arg1;
- (bool)hasTotalDisplayPower;
- (void)setHasTotalDisplayPower:(bool)arg1;
- (void)setTotalDisplayPower:(unsigned int)arg1;
- (bool)hasAlsBrightnessEnableCnt;
- (void)setHasAlsBrightnessEnableCnt:(bool)arg1;
- (void)setAlsBrightnessEnableCnt:(unsigned int)arg1;
- (bool)hasAlsAutoBrightnessChangeCount;
- (void)setHasAlsAutoBrightnessChangeCount:(bool)arg1;
- (void)setAlsAutoBrightnessChangeCount:(unsigned int)arg1;
- (bool)hasAlsAutoBrightnessLux;
- (void)setHasAlsAutoBrightnessLux:(bool)arg1;
- (void)setAlsAutoBrightnessLux:(unsigned int)arg1;
- (bool)hasAlsAutoBrightnessSlider;
- (void)setHasAlsAutoBrightnessSlider:(bool)arg1;
- (void)setAlsAutoBrightnessSlider:(unsigned int)arg1;
- (bool)hasAlsAutoBrightnessCurveEdynth;
- (void)setHasAlsAutoBrightnessCurveEdynth:(bool)arg1;
- (void)setAlsAutoBrightnessCurveEdynth:(int)arg1;
- (bool)hasAlsAutoBrightnessCurveL0B;
- (void)setHasAlsAutoBrightnessCurveL0B:(bool)arg1;
- (void)setAlsAutoBrightnessCurveL0B:(int)arg1;
- (bool)hasAlsAutoBrightnessCurveE0B;
- (void)setHasAlsAutoBrightnessCurveE0B:(bool)arg1;
- (void)setAlsAutoBrightnessCurveE0B:(int)arg1;
- (bool)hasAlsAutoBrightnessCurveL0A;
- (void)setHasAlsAutoBrightnessCurveL0A:(bool)arg1;
- (void)setAlsAutoBrightnessCurveL0A:(int)arg1;
- (bool)hasAlsAutoBrightnessCurveE0A;
- (void)setHasAlsAutoBrightnessCurveE0A:(bool)arg1;
- (void)setAlsAutoBrightnessCurveE0A:(int)arg1;
- (bool)hasAlsAutoBrightnessCurveL2;
- (void)setHasAlsAutoBrightnessCurveL2:(bool)arg1;
- (void)setAlsAutoBrightnessCurveL2:(int)arg1;
- (bool)hasAlsAutoBrightnessCurveE2;
- (void)setHasAlsAutoBrightnessCurveE2:(bool)arg1;
- (void)setAlsAutoBrightnessCurveE2:(int)arg1;
- (bool)hasAlsAutoBrightnessCurveL1;
- (void)setHasAlsAutoBrightnessCurveL1:(bool)arg1;
- (void)setAlsAutoBrightnessCurveL1:(int)arg1;
- (bool)hasAlsAutoBrightnessCurveE1;
- (void)setHasAlsAutoBrightnessCurveE1:(bool)arg1;
- (void)setAlsAutoBrightnessCurveE1:(int)arg1;
- (bool)hasDisplayIdlePercentage;
- (void)setHasDisplayIdlePercentage:(bool)arg1;
- (void)setDisplayIdlePercentage:(unsigned int)arg1;
- (bool)hasMieCount;
- (void)setHasMieCount:(bool)arg1;
- (void)setMieCount:(unsigned int)arg1;
- (bool)hasMieDuration;
- (void)setHasMieDuration:(bool)arg1;
- (void)setMieDuration:(unsigned int)arg1;
- (bool)hasPluggedDisplayOnDuration;
- (void)setHasPluggedDisplayOnDuration:(bool)arg1;
- (void)setPluggedDisplayOnDuration:(unsigned int)arg1;
- (bool)hasUnpluggedDisplayOnDuration;
- (void)setHasUnpluggedDisplayOnDuration:(bool)arg1;
- (void)setUnpluggedDisplayOnDuration:(unsigned int)arg1;
- (bool)hasDispOnCount;
- (void)setHasDispOnCount:(bool)arg1;
- (void)setDispOnCount:(unsigned int)arg1;
- (id)backlightBucketAtIndex:(unsigned long long)arg1;
- (void)clearBacklightBuckets;
- (unsigned long long)backlightBucketsCount;
- (void)addBacklightBucket:(id)arg1;
- (void)setBacklightBuckets:(id)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (bool)hasTimestamp;
- (void)copyTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;
- (unsigned long long)timestamp;
- (void)setTimestamp:(unsigned long long)arg1;
- (bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)dealloc;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;

@end
