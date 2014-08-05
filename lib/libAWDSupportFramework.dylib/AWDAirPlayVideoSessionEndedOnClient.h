/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/usr/lib/libAWDSupportFramework.dylib
 */

@class NSString;

@interface AWDAirPlayVideoSessionEndedOnClient : PBCodable <NSCopying> {
    double _bandwidthMax;
    double _bandwidthMean;
    double _bandwidthStdDev;
    unsigned long long _timestamp;
    unsigned int _duration;
    unsigned int _localFairPlayCount;
    unsigned int _localNonFairPlayCount;
    unsigned int _readyToPlayMs;
    int _reason;
    unsigned int _remoteFairPlayCount;
    unsigned int _remoteNonFairPlayCount;
    NSString *_sessionUUID;
    unsigned int _stallCount;
    struct { 
        unsigned int bandwidthMax : 1; 
        unsigned int bandwidthMean : 1; 
        unsigned int bandwidthStdDev : 1; 
        unsigned int timestamp : 1; 
        unsigned int duration : 1; 
        unsigned int localFairPlayCount : 1; 
        unsigned int localNonFairPlayCount : 1; 
        unsigned int readyToPlayMs : 1; 
        unsigned int reason : 1; 
        unsigned int remoteFairPlayCount : 1; 
        unsigned int remoteNonFairPlayCount : 1; 
        unsigned int stallCount : 1; 
    } _has;
}

@property(readonly) bool hasSessionUUID;
@property(retain) NSString * sessionUUID;
@property bool hasTimestamp;
@property unsigned long long timestamp;
@property bool hasReason;
@property int reason;
@property bool hasDuration;
@property unsigned int duration;
@property bool hasReadyToPlayMs;
@property unsigned int readyToPlayMs;
@property bool hasStallCount;
@property unsigned int stallCount;
@property bool hasBandwidthStdDev;
@property double bandwidthStdDev;
@property bool hasBandwidthMean;
@property double bandwidthMean;
@property bool hasBandwidthMax;
@property double bandwidthMax;
@property bool hasLocalFairPlayCount;
@property unsigned int localFairPlayCount;
@property bool hasLocalNonFairPlayCount;
@property unsigned int localNonFairPlayCount;
@property bool hasRemoteFairPlayCount;
@property unsigned int remoteFairPlayCount;
@property bool hasRemoteNonFairPlayCount;
@property unsigned int remoteNonFairPlayCount;


- (bool)hasDuration;
- (unsigned int)remoteNonFairPlayCount;
- (unsigned int)remoteFairPlayCount;
- (unsigned int)localNonFairPlayCount;
- (unsigned int)localFairPlayCount;
- (double)bandwidthMax;
- (double)bandwidthMean;
- (double)bandwidthStdDev;
- (unsigned int)stallCount;
- (unsigned int)readyToPlayMs;
- (bool)hasRemoteNonFairPlayCount;
- (void)setHasRemoteNonFairPlayCount:(bool)arg1;
- (void)setRemoteNonFairPlayCount:(unsigned int)arg1;
- (bool)hasRemoteFairPlayCount;
- (void)setHasRemoteFairPlayCount:(bool)arg1;
- (void)setRemoteFairPlayCount:(unsigned int)arg1;
- (bool)hasLocalNonFairPlayCount;
- (void)setHasLocalNonFairPlayCount:(bool)arg1;
- (void)setLocalNonFairPlayCount:(unsigned int)arg1;
- (bool)hasLocalFairPlayCount;
- (void)setHasLocalFairPlayCount:(bool)arg1;
- (void)setLocalFairPlayCount:(unsigned int)arg1;
- (bool)hasBandwidthMax;
- (void)setHasBandwidthMax:(bool)arg1;
- (void)setBandwidthMax:(double)arg1;
- (bool)hasBandwidthMean;
- (void)setHasBandwidthMean:(bool)arg1;
- (void)setBandwidthMean:(double)arg1;
- (bool)hasBandwidthStdDev;
- (void)setHasBandwidthStdDev:(bool)arg1;
- (void)setBandwidthStdDev:(double)arg1;
- (bool)hasStallCount;
- (void)setHasStallCount:(bool)arg1;
- (void)setStallCount:(unsigned int)arg1;
- (bool)hasReadyToPlayMs;
- (void)setHasReadyToPlayMs:(bool)arg1;
- (void)setReadyToPlayMs:(unsigned int)arg1;
- (id)sessionUUID;
- (bool)hasReason;
- (void)setHasReason:(bool)arg1;
- (bool)hasSessionUUID;
- (void)setSessionUUID:(id)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (bool)hasTimestamp;
- (void)copyTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (void)setHasDuration:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;
- (unsigned long long)timestamp;
- (void)setReason:(int)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (void)setDuration:(unsigned int)arg1;
- (int)reason;
- (bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)dealloc;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)duration;
- (id)dictionaryRepresentation;

@end
