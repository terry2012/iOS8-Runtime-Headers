/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@class CKDPDate;

@interface CKDPLocationCoordinate : PBCodable <NSCopying> {
    double _altitude;
    double _course;
    double _horizontalAccuracy;
    double _latitude;
    double _longitude;
    double _speed;
    double _verticalAccuracy;
    CKDPDate *_timestamp;
    struct { 
        unsigned int altitude : 1; 
        unsigned int course : 1; 
        unsigned int horizontalAccuracy : 1; 
        unsigned int latitude : 1; 
        unsigned int longitude : 1; 
        unsigned int speed : 1; 
        unsigned int verticalAccuracy : 1; 
    } _has;
}

@property bool hasLatitude;
@property double latitude;
@property bool hasLongitude;
@property double longitude;
@property bool hasHorizontalAccuracy;
@property double horizontalAccuracy;
@property bool hasAltitude;
@property double altitude;
@property bool hasVerticalAccuracy;
@property double verticalAccuracy;
@property bool hasCourse;
@property double course;
@property bool hasSpeed;
@property double speed;
@property(readonly) bool hasTimestamp;
@property(retain) CKDPDate * timestamp;


- (void)setHasCourse:(bool)arg1;
- (void)setHasLongitude:(bool)arg1;
- (void)setHasLatitude:(bool)arg1;
- (bool)hasLongitude;
- (bool)hasLatitude;
- (bool)hasCourse;
- (bool)hasSpeed;
- (void)setHasSpeed:(bool)arg1;
- (bool)hasVerticalAccuracy;
- (void)setHasVerticalAccuracy:(bool)arg1;
- (bool)hasHorizontalAccuracy;
- (void)setHasHorizontalAccuracy:(bool)arg1;
- (bool)hasAltitude;
- (void)setHasAltitude:(bool)arg1;
- (bool)hasTimestamp;
- (void)copyTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (void)setCourse:(double)arg1;
- (void)setVerticalAccuracy:(double)arg1;
- (void)setHorizontalAccuracy:(double)arg1;
- (bool)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;
- (id)timestamp;
- (void)setSpeed:(double)arg1;
- (double)speed;
- (double)horizontalAccuracy;
- (double)course;
- (double)verticalAccuracy;
- (double)altitude;
- (void)setTimestamp:(id)arg1;
- (void)setLatitude:(double)arg1;
- (void)setLongitude:(double)arg1;
- (double)longitude;
- (double)latitude;
- (void)setAltitude:(double)arg1;
- (bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;

@end
