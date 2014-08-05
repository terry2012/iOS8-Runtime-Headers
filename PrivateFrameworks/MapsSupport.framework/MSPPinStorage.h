/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
 */

@class MSPDroppedPin, NSString, PBUnknownFields;

@interface MSPPinStorage : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    double _position;
    double _timestamp;
    MSPDroppedPin *_droppedPin;
    NSString *_identifier;
    int _type;
    struct { 
        unsigned int position : 1; 
        unsigned int timestamp : 1; 
        unsigned int type : 1; 
    } _has;
}

@property(readonly) bool hasIdentifier;
@property(retain) NSString * identifier;
@property bool hasPosition;
@property double position;
@property bool hasTimestamp;
@property double timestamp;
@property bool hasType;
@property int type;
@property(readonly) bool hasDroppedPin;
@property(retain) MSPDroppedPin * droppedPin;
@property(readonly) PBUnknownFields * unknownFields;


- (id)droppedPin;
- (bool)hasDroppedPin;
- (void)setHasPosition:(bool)arg1;
- (void)setDroppedPin:(id)arg1;
- (id)unknownFields;
- (bool)hasIdentifier;
- (void)setHasTimestamp:(bool)arg1;
- (bool)hasPosition;
- (bool)hasTimestamp;
- (void)copyTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (void)setHasType:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;
- (bool)hasType;
- (double)timestamp;
- (void)setIdentifier:(id)arg1;
- (id)identifier;
- (void)setTimestamp:(double)arg1;
- (void)setPosition:(double)arg1;
- (bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)setType:(int)arg1;
- (int)type;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (double)position;
- (id)dictionaryRepresentation;

@end
