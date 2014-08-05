/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class GEOPDReverseGeocodingParameters, GEOPDCanonicalLocationSearchParameters, GEOPDPlaceRefinementParameters, GEOPDGeocodingParameters, GEOPDSearchParameters, GEOPDSiriSearchParameters, GEOPDPlaceLookupParameters, GEOPDLocationDirectedSearchParameters;

@interface GEOPDPlaceRequestParameters : PBCodable <NSCopying> {
    GEOPDCanonicalLocationSearchParameters *_canonicalLocationSearchParameters;
    GEOPDGeocodingParameters *_geocodingParameters;
    GEOPDLocationDirectedSearchParameters *_locationDirectedSearchParameters;
    GEOPDPlaceLookupParameters *_placeLookupParameters;
    GEOPDPlaceRefinementParameters *_placeRefinementParameters;
    GEOPDReverseGeocodingParameters *_reverseGeocodingParameters;
    GEOPDSearchParameters *_searchParameters;
    GEOPDSiriSearchParameters *_siriSearchParameters;
}

@property(readonly) bool hasSearchParameters;
@property(retain) GEOPDSearchParameters * searchParameters;
@property(readonly) bool hasGeocodingParameters;
@property(retain) GEOPDGeocodingParameters * geocodingParameters;
@property(readonly) bool hasCanonicalLocationSearchParameters;
@property(retain) GEOPDCanonicalLocationSearchParameters * canonicalLocationSearchParameters;
@property(readonly) bool hasReverseGeocodingParameters;
@property(retain) GEOPDReverseGeocodingParameters * reverseGeocodingParameters;
@property(readonly) bool hasPlaceLookupParameters;
@property(retain) GEOPDPlaceLookupParameters * placeLookupParameters;
@property(readonly) bool hasPlaceRefinementParameters;
@property(retain) GEOPDPlaceRefinementParameters * placeRefinementParameters;
@property(readonly) bool hasSiriSearchParameters;
@property(retain) GEOPDSiriSearchParameters * siriSearchParameters;
@property(readonly) bool hasLocationDirectedSearchParameters;
@property(retain) GEOPDLocationDirectedSearchParameters * locationDirectedSearchParameters;


- (id)initWithCanonicalLocationSearchQueryString:(id)arg1;
- (id)initWithReverseGeocodeCoordinate:(struct { double x1; double x2; })arg1;
- (id)initWithMUIDs:(id)arg1;
- (id)initWithSearchQuery:(id)arg1 entryMetadata:(id)arg2 metadata:(id)arg3 maxResults:(unsigned int)arg4 traits:(id)arg5;
- (id)initWithSearchURLQuery:(id)arg1 coordinate:(struct { double x1; double x2; })arg2 maxResults:(unsigned int)arg3;
- (id)initWithSearchURLQuery:(id)arg1 coordinate:(struct { double x1; double x2; })arg2 muid:(unsigned long long)arg3 resultProviderId:(int)arg4;
- (id)locationDirectedSearchParameters;
- (id)siriSearchParameters;
- (id)canonicalLocationSearchParameters;
- (bool)hasLocationDirectedSearchParameters;
- (bool)hasSiriSearchParameters;
- (bool)hasPlaceLookupParameters;
- (bool)hasReverseGeocodingParameters;
- (bool)hasCanonicalLocationSearchParameters;
- (bool)hasGeocodingParameters;
- (void)setLocationDirectedSearchParameters:(id)arg1;
- (void)setSiriSearchParameters:(id)arg1;
- (void)setPlaceRefinementParameters:(id)arg1;
- (void)setPlaceLookupParameters:(id)arg1;
- (void)setReverseGeocodingParameters:(id)arg1;
- (void)setCanonicalLocationSearchParameters:(id)arg1;
- (void)setGeocodingParameters:(id)arg1;
- (void)setSearchParameters:(id)arg1;
- (id)initWithCoordinateHint:(struct { double x1; double x2; })arg1 addressHint:(id)arg2 placeNameHint:(id)arg3 traits:(id)arg4;
- (id)initWithForwardGeocodeAddressString:(id)arg1 maxResults:(unsigned int)arg2 traits:(id)arg3;
- (id)initWithForwardGeocodeAddress:(id)arg1 maxResults:(unsigned int)arg2 traits:(id)arg3;
- (id)placeRefinementParameters;
- (bool)hasPlaceRefinementParameters;
- (id)searchParameters;
- (bool)hasSearchParameters;
- (id)reverseGeocodingParameters;
- (id)geocodingParameters;
- (id)initWithMapItemToRefine:(id)arg1 traits:(id)arg2;
- (id)placeLookupParameters;
- (void)copyTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;
- (bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)dealloc;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;

@end
