/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class NSString, NSMutableArray;

@interface MPPSearchStringPredicate : PBCodable <NSCopying> {
    NSMutableArray *_properties;
    NSString *_searchString;
}

@property(readonly) bool hasSearchString;
@property(retain) NSString * searchString;
@property(retain) NSMutableArray * properties;


- (void)copyTo:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;
- (id)propertiesAtIndex:(unsigned long long)arg1;
- (void)clearProperties;
- (unsigned long long)propertiesCount;
- (bool)hasSearchString;
- (void)addProperties:(id)arg1;
- (void)setProperties:(id)arg1;
- (void)setSearchString:(id)arg1;
- (id)searchString;
- (bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)properties;
- (void)dealloc;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;

@end
