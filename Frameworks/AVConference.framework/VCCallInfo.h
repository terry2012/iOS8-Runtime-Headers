/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/GameKitServices.framework/Frameworks/AVConference.framework/AVConference
 */

@class NSString, NSDictionary, NSData, NSMutableDictionary, SDPMini;

@interface VCCallInfo : NSObject  {
    unsigned int callID;
    NSData *connectionData;
    NSData *relayConnectionData;
    NSString *participantID;
    NSDictionary *relayRequest;
    NSMutableDictionary *relayRequestResponse;
    NSDictionary *relayUpdate;
    unsigned int auNumber;
    unsigned int maxBandwidth;
    unsigned int cellBandwith;
    int cellTech;
    boolvideoIsPaused;
    boolisVideoQualityDegraded;
    double lastGoodVideoQualityTime;
    double lastBadVideoQualityTime;
    double lastVideoQualityDegradedSwitchTime;
    NSString *sdpString;
    SDPMini *sdp;
    boolis4x;
    boolisIOS;
    boolusesInitialFECImplementation;
    boolsupportsDynamicMaxBitrate;
    boolsupportsSpecialAACBundle;
    boolsupportsSKEOptimization;
    unsigned int visibleRectCropping;
    booluseNewPLCalc;
    double firstDegradedMeasure;
    double videoDegradedThreshold;
    unsigned char u8Version;
}

@property unsigned int callID;
@property(retain) NSData * connectionData;
@property(retain) NSData * relayConnectionData;
@property(retain) NSDictionary * relayRequest;
@property(retain) NSMutableDictionary * relayRequestResponse;
@property(retain) NSDictionary * relayUpdate;
@property unsigned int auNumber;
@property unsigned int maxBandwidth;
@property unsigned int cellBandwith;
@property(copy) NSString * participantID;
@property int cellTech;
@property bool isVideoQualityDegraded;
@property bool videoIsPaused;
@property(retain) NSString * sdpString;
@property(retain) SDPMini * sdp;
@property(readonly) bool requiresImplicitFeatureString;
@property(readonly) bool isIOS;
@property(readonly) bool usesInitialFECImplementation;
@property bool supportsDynamicMaxBitrate;
@property bool supportsSKEOptimization;
@property(readonly) bool supportsSpecialAACBundle;
@property unsigned int visibleRectCropping;
@property(readonly) bool useNewPLCalc;
@property unsigned char u8Version;
@property(readonly) bool supportsDynamicContentsRectWithAspectPreservation;


- (void)setVisibleRectCropping:(unsigned int)arg1;
- (unsigned int)visibleRectCropping;
- (void)setIsVideoQualityDegraded:(bool)arg1;
- (int)cellTech;
- (void)setRelayRequest:(id)arg1;
- (id)relayRequest;
- (bool)supportsDynamicContentsRectWithAspectPreservation;
- (unsigned int)auNumber;
- (bool)requiresImplicitFeatureString;
- (bool)isIOS;
- (bool)useNewPLCalc;
- (bool)supportsSpecialAACBundle;
- (void)setAuNumber:(unsigned int)arg1;
- (void)setSupportsDynamicMaxBitrate:(bool)arg1;
- (id)sdpString;
- (void)setSdpString:(id)arg1;
- (void)setSdp:(id)arg1;
- (id)sdp;
- (void)setU8Version:(unsigned char)arg1;
- (void)setConnectionData:(id)arg1;
- (bool)usesInitialFECImplementation;
- (unsigned char)u8Version;
- (bool)supportsSKEOptimization;
- (id)relayConnectionData;
- (void)setRelayConnectionData:(id)arg1;
- (id)relayUpdate;
- (void)setRelayUpdate:(id)arg1;
- (id)relayRequestResponse;
- (void)setRelayRequestResponse:(id)arg1;
- (void)setVideoIsPaused:(bool)arg1;
- (struct VoiceIOFarEndVersionInfo { unsigned char x1[64]; unsigned char x2[64]; unsigned int x3; })audioVersionInfo:(bool)arg1;
- (id)connectionData;
- (bool)supportSDPCompression;
- (void)resetLastGoodVideoQualityTime:(double)arg1;
- (unsigned int)cellBandwith;
- (void)setCellBandwith:(unsigned int)arg1;
- (void)setCellTech:(int)arg1;
- (bool)supportsDynamicMaxBitrate;
- (bool)isVideoQualityDegraded;
- (bool)updateWithCurrentFramerate:(double)arg1 bitrate:(double)arg2 packetLossRate:(float)arg3 time:(double)arg4;
- (bool)videoIsPaused;
- (void)setSupportsSKEOptimization:(bool)arg1;
- (void)setMaxBandwidth:(unsigned int)arg1;
- (unsigned int)maxBandwidth;
- (void)setParticipantID:(id)arg1;
- (id)participantID;
- (void)setUserAgent:(id)arg1;
- (unsigned int)callID;
- (void)setCallID:(unsigned int)arg1;
- (id)init;
- (void)dealloc;

@end
