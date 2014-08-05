/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class NSMutableDictionary;

@interface GEOPlaceDataCacheRegister : NSObject  {
    NSMutableDictionary *_caches;
}


- (id)allCacheEntries;
- (id)cacheForProviderID:(int)arg1;
- (void)calculateFreeableSpaceWithHandler:(id)arg1;
- (void)shrinkToSize:(unsigned long long)arg1 finished:(id)arg2;
- (void)deletePhoneNumberMapping;
- (id)init;
- (void)dealloc;

@end
