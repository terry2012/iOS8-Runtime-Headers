/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class NSData, NSString, NSArray, NSHashTable, GEOZilchDecoder, GEORouteWalkMapMatcher, GEORouteDriveMapMatcher, GEOComposedWaypoint, NSMutableArray, GEOMapRegion, GEORoute;

@interface GEOComposedRoute : NSObject <GEOMapAccessRestrictions> {
    NSHashTable *_observers;
    NSData *_pointData;
    bool_usesZilch;
    GEOComposedWaypoint *_origin;
    GEOComposedWaypoint *_destination;
    NSArray *_legs;
    NSArray *_steps;
    NSString *_name;
    NSData *_routeID;
    unsigned int _expectedTime;
    unsigned int _distance;
    NSArray *_advisoryNotices;
    GEORoute *_geoRoute;
    NSArray *_maneuverDisplaySteps;
    bool_maneuverDisplayEnabled;
    unsigned long long _currentDisplayStep;
    unsigned int _maneuverDisplayCount;
    double *_pointLengths;
    struct { struct PolylineCoordinate { unsigned int x_1_1_1; float x_1_1_2; } x1; struct PolylineCoordinate { unsigned int x_2_1_1; float x_2_1_2; } x2; } *_currentManeuverDisplayEndPoints;
    unsigned long long _selectedLegIndex;
    unsigned int _firstVisiblePoint;
    GEOMapRegion *_boundingMapRegion;
    NSMutableArray *_sections;
    NSMutableArray *_snappedPaths;
    GEOZilchDecoder *_zilchDecoder;
    bool_allowsNetworkTileLoad;
    GEORouteDriveMapMatcher *_driveMapMatcher;
    GEORouteWalkMapMatcher *_walkMapMatcher;
}

@property(readonly) NSData * routeID;
@property(readonly) unsigned int pointCount;
@property(retain) GEOComposedWaypoint * origin;
@property(retain) GEOComposedWaypoint * destination;
@property(readonly) NSArray * steps;
@property(readonly) NSArray * legs;
@property(readonly) NSString * name;
@property(retain) NSArray * advisoryNotices;
@property(readonly) void* controlPoints;
@property(readonly) unsigned long long stepsCount;
@property(readonly) GEORoute * geoRoute;
@property(readonly) bool hasExpectedTime;
@property unsigned int expectedTime;
@property(readonly) unsigned int distance;
@property bool maneuverDisplayEnabled;
@property unsigned long long currentDisplayStep;
@property(retain) NSArray * maneuverDisplaySteps;
@property(readonly) unsigned int maneuverDisplayCount;
@property unsigned long long selectedLegIndex;
@property unsigned int firstVisiblePoint;
@property(readonly) unsigned long long trafficColorsCount;
@property(readonly) unsigned int* trafficColors;
@property(readonly) unsigned long long trafficColorOffsetsCount;
@property(readonly) unsigned int* trafficColorOffsets;
@property(readonly) int transportType;
@property(readonly) NSArray * routeNames;
@property(readonly) int routeType;
@property(readonly) NSArray * sections;
@property(readonly) GEOMapRegion * boundingMapRegion;
@property bool allowsNetworkTileLoad;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;


- (struct { double x1; double x2; })locationAtDistance:(double)arg1 from:(id)arg2;
- (double)distanceFromPoint:(struct PolylineCoordinate { unsigned int x1; float x2; })arg1 toPoint:(struct PolylineCoordinate { unsigned int x1; float x2; })arg2;
- (bool)isSnapping;
- (id)getSnappedPathsForVisibleRect:(struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })arg1 rectsToSnap:(struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; }*)arg2 rectsToSnapCount:(unsigned long long)arg3 observer:(id)arg4;
- (struct PolylineCoordinate { unsigned int x1; float x2; })coordinateAtOffset:(double)arg1;
- (bool)supportsSnapping;
- (bool)maneuverDisplayEnabled;
- (unsigned int)maneuverDisplayCount;
- (void)updateManeuverDisplayEndpointsAtMetersPerPoint:(double)arg1;
- (struct { struct PolylineCoordinate { unsigned int x_1_1_1; float x_1_1_2; } x1; struct PolylineCoordinate { unsigned int x_2_1_1; float x_2_1_2; } x2; })maneuverDisplayEndpointsAtIndex:(unsigned long long)arg1;
- (unsigned long long)currentDisplayStep;
- (id)boundingMapRegion;
- (int)transportTypeForStep:(id)arg1;
- (void)setAllowsNetworkTileLoad:(bool)arg1;
- (unsigned long long)selectedLegIndex;
- (void)setFirstVisiblePoint:(unsigned int)arg1;
- (unsigned int)firstVisiblePoint;
- (id)maneuverDisplaySteps;
- (void)setManeuverDisplayEnabled:(bool)arg1;
- (void)clearSnappedPathsForObserver:(id)arg1;
- (void)setupRoadSegmentIdsForRouteHintFromMatch:(id)arg1 distanceAhead:(double)arg2 roadSegmentIdGenerator:(id)arg3 handler:(id)arg4;
- (id)matchToRouteWithLocation:(id)arg1 trackedLocation:(id)arg2 onDate:(id)arg3 transportType:(int)arg4 useSnappedPaths:(bool)arg5;
- (bool)isLocationCoordinate:(struct { double x1; double x2; })arg1 withinDistance:(double)arg2 alongRoute:(double)arg3 withTransportType:(int)arg4;
- (bool)checkDrivingArrivalForCoordinate:(struct { double x1; double x2; })arg1 coordinateOnRoute:(struct { double x1; double x2; })arg2 routePointIndex:(unsigned int)arg3 distanceFromRoute:(double)arg4 arrivalMapRegion:(id)arg5 checkArrivalRadius:(bool)arg6 checkDistanceAlongRoute:(bool)arg7 isOnRoute:(bool)arg8;
- (double)distanceBetweenStep:(id)arg1 andStep:(id)arg2;
- (id)zilchDataFromStepIndex:(unsigned long long)arg1;
- (double)approximateRoadWidthAtPointIndex:(unsigned int)arg1;
- (int)formOfWayAt:(unsigned int)arg1;
- (void)maneuverDisplayHasChanged;
- (void)setSelectedLegIndex:(unsigned long long)arg1;
- (void)notifyTrafficUpdated;
- (id)legForPointIndex:(unsigned int)arg1;
- (unsigned long long)legIndexForStepIndex:(unsigned long long)arg1;
- (unsigned long long)legIndexForPointIndex:(unsigned long long)arg1;
- (id)stepForPointIndex:(unsigned int)arg1;
- (double)distanceFromPointIndex:(unsigned long long)arg1 toPointIndex:(unsigned long long)arg2;
- (void)setCurrentDisplayStep:(unsigned long long)arg1;
- (void)setManeuverDisplaySteps:(id)arg1;
- (bool)allowsNetworkTileLoad;
- (void)_addPaths:(id)arg1 forObserver:(id)arg2;
- (void)_snapPaths:(id)arg1 completionHandler:(id)arg2;
- (void)_addSnappedPolylinePathsForSection:(id)arg1 toPaths:(id)arg2 rects:(struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; }*)arg3 rectsCount:(unsigned long long)arg4;
- (bool)_meetsMinimumPathLengthBetweenStart:(unsigned int)arg1 end:(unsigned int)arg2;
- (id)matchToRouteWithLocation:(id)arg1 trackedLocation:(id)arg2 onDate:(id)arg3 transportType:(int)arg4 useSnappedPaths:(bool)arg5 maxDistance:(double)arg6;
- (id)_mapMatcherForTransportType:(int)arg1;
- (id)getSnappedPathsForLocation:(struct { double x1; double x2; })arg1 observer:(id)arg2;
- (struct PolylineCoordinate { unsigned int x1; float x2; })coordinateAtOffset:(double)arg1 fromRouteCoordinate:(struct PolylineCoordinate { unsigned int x1; float x2; })arg2;
- (void)forEachSnappedPath:(id)arg1;
- (double)courseAtRouteCoordinateIndex:(unsigned int)arg1;
- (struct PolylineCoordinate { unsigned int x1; float x2; })_findRouteCoordinateWithOffset:(float)arg1 aPos:(const struct Matrix<float, 2, 1> { float x1[2]; }*)arg2 aCoord:(const struct PolylineCoordinate { unsigned int x1; float x2; }*)arg3 bCoord:(const struct PolylineCoordinate { unsigned int x1; float x2; }*)arg4 pointOnSegment:(const struct Matrix<float, 2, 1> { float x1[2]; }*)arg5 bounds:(const struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; }*)arg6;
- (id)routeMatchAtDistance:(double)arg1 from:(id)arg2 trackedLocation:(id)arg3 stopAtEndOfTunnel:(bool)arg4 stopAtEndOfManeuver:(bool)arg5 date:(id)arg6;
- (id)initWithRoute:(id)arg1;
- (void)getFormOfWay:(int*)arg1 roadClass:(int*)arg2 at:(unsigned int)arg3;
- (id)legForStepIndex:(unsigned long long)arg1;
- (id)legs;
- (struct { double x1; double x2; })pointAtRouteCoordinate:(struct PolylineCoordinate { unsigned int x1; float x2; })arg1;
- (unsigned long long)stepIndexForPointIndex:(unsigned long long)arg1;
- (bool)_needsCornerOffsetAt:(unsigned int)arg1;
- (struct PolylineCoordinate { unsigned int x1; float x2; })coordinateAtOffset:(double)arg1 fromRoutePoint:(unsigned long long)arg2;
- (void)updateManeuverDisplayEndpointsAtMetersPerPoint:(double)arg1 startOffsetInPoints:(double)arg2 endOffsetInPoints:(double)arg3 roadWidthInPoints:(double)arg4;
- (struct { double x1; double x2; })pointAt:(unsigned long long)arg1;
- (void*)controlPoints;
- (void)_buildPointSections;
- (void)_initializeManeuverDisplaySteps;
- (id)routeLegOfType:(long long)arg1 startStepIndex:(unsigned long long)arg2 steps:(id)arg3 startPointIndex:(unsigned long long)arg4 legPointCount:(unsigned long long)arg5;
- (id)routeNames;
- (id)advisoryNotices;
- (id)steps;
- (unsigned int*)trafficColorOffsets;
- (unsigned int*)trafficColors;
- (bool)hasExpectedTime;
- (void)setExpectedTime:(unsigned int)arg1;
- (unsigned long long)trafficColorOffsetAtIndex:(unsigned long long)arg1;
- (unsigned long long)trafficColorOffsetsCount;
- (unsigned long long)trafficColorsCount;
- (unsigned long long)stepsCount;
- (void)setAdvisoryNotices:(id)arg1;
- (id)geoRoute;
- (double)remainingTimeAlongRouteFromStepIndex:(unsigned long long)arg1 currentStepRemainingDistance:(double)arg2;
- (double)remainingDistanceAlongRouteFromStepIndex:(unsigned long long)arg1 currentStepRemainingDistance:(double)arg2;
- (double)distanceBetweenRoutePointIndex:(unsigned int)arg1 toPointIndex:(unsigned int)arg2;
- (double)distanceBetweenLocation:(struct { double x1; double x2; })arg1 nextPointIndex:(unsigned int)arg2 toPointIndex:(unsigned int)arg3;
- (id)stepAtIndex:(unsigned long long)arg1;
- (int)transportType;
- (unsigned int)expectedTime;
- (id)routeID;
- (int)routeType;
- (id)sections;
- (unsigned int)pointCount;
- (id)destination;
- (unsigned int)distance;
- (id)name;
- (void)addObserver:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)dealloc;
- (id)description;
- (void)setDestination:(id)arg1;
- (void)setOrigin:(id)arg1;
- (id)origin;
- (id)instructionsForStep:(id)arg1;
- (struct CGImage { }*)_mapKitImage;

@end
