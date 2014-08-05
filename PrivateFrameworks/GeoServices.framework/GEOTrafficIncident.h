/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class NSString;

@interface GEOTrafficIncident : PBCodable <NSCopying> {
    double _endTime;
    double _lastUpdated;
    double _startTime;
    long long _uID;
    NSString *_info;
    NSString *_location;
    NSString *_title;
    int _type;
    int _vertexCount;
    int _vertexOffset;
    struct { 
        unsigned int endTime : 1; 
        unsigned int lastUpdated : 1; 
        unsigned int startTime : 1; 
        unsigned int uID : 1; 
        unsigned int type : 1; 
        unsigned int vertexCount : 1; 
        unsigned int vertexOffset : 1; 
    } _has;
}

@property bool hasUID;
@property long long uID;
@property(readonly) bool hasTitle;
@property(retain) NSString * title;
@property(readonly) bool hasInfo;
@property(retain) NSString * info;
@property(readonly) bool hasLocation;
@property(retain) NSString * location;
@property bool hasVertexOffset;
@property int vertexOffset;
@property bool hasVertexCount;
@property int vertexCount;
@property bool hasStartTime;
@property double startTime;
@property bool hasEndTime;
@property double endTime;
@property bool hasLastUpdated;
@property double lastUpdated;
@property bool hasType;
@property int type;


- (double)lastUpdated;
- (bool)hasLastUpdated;
- (bool)hasEndTime;
- (bool)hasStartTime;
- (void)setHasLastUpdated:(bool)arg1;
- (void)setLastUpdated:(double)arg1;
- (void)setHasEndTime:(bool)arg1;
- (bool)hasVertexCount;
- (void)setHasVertexCount:(bool)arg1;
- (bool)hasVertexOffset;
- (void)setHasVertexOffset:(bool)arg1;
- (bool)hasInfo;
- (void)setVertexCount:(int)arg1;
- (void)setVertexOffset:(int)arg1;
- (int)vertexOffset;
- (bool)hasLocation;
- (long long)uID;
- (bool)hasUID;
- (void)setHasUID:(bool)arg1;
- (void)setUID:(long long)arg1;
- (void)copyTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (void)setHasType:(bool)arg1;
- (void)setHasStartTime:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;
- (bool)hasType;
- (id)location;
- (void)setEndTime:(double)arg1;
- (double)endTime;
- (void)setTitle:(id)arg1;
- (id)title;
- (int)vertexCount;
- (id)info;
- (void)setLocation:(id)arg1;
- (bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)setType:(int)arg1;
- (void)setStartTime:(double)arg1;
- (int)type;
- (double)startTime;
- (void)dealloc;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (void)setInfo:(id)arg1;
- (bool)hasTitle;

@end
