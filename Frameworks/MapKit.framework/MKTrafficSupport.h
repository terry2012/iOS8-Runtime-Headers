/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKTrafficSupport : NSObject  {
}

+ (id)sharedTrafficSupport;

- (struct CGImage { }*)imageForGEOIncidentType:(int)arg1 contentScale:(double)arg2;
- (struct CGImage { }*)imageForIncidentType:(long long)arg1 contentScale:(double)arg2;
- (id)localizedSubtitleForStreet:(id)arg1 crossStreet:(id)arg2;
- (id)localizedTitleForIncidentType:(long long)arg1 laneType:(long long)arg2 laneCount:(unsigned long long)arg3;
- (id)localizedTitleForGEOIncidentType:(int)arg1 laneType:(int)arg2 laneCount:(unsigned long long)arg3;
- (void)setupTrafficIncidents;
- (long long)_convertType:(int)arg1;

@end
