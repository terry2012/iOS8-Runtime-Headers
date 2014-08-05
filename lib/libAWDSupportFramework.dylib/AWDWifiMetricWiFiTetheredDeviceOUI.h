/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/usr/lib/libAWDSupportFramework.dylib
 */

@class NSData;

@interface AWDWifiMetricWiFiTetheredDeviceOUI : PBCodable <NSCopying> {
    unsigned long long _timestamp;
    NSData *_tetheredOUI;
    struct { 
        unsigned int timestamp : 1; 
    } _has;
}

@property(readonly) bool hasTetheredOUI;
@property(retain) NSData * tetheredOUI;
@property bool hasTimestamp;
@property unsigned long long timestamp;


- (id)tetheredOUI;
- (bool)hasTetheredOUI;
- (void)setTetheredOUI:(id)arg1;
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
