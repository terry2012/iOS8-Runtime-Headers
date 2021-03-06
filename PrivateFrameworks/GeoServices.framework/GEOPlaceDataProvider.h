/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@interface GEOPlaceDataProvider : NSObject  {
    bool_isLoading;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _finishedHandler;


  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _errorHandler;

}

@property bool isLoading;
@property(copy) id finishedHandler;
@property(copy) id errorHandler;


- (void)startRequest:(id)arg1 appIdentifier:(id)arg2 finished:(id)arg3 error:(id)arg4;
- (void)providerReceivedErrorCode:(long long)arg1 userInfo:(id)arg2;
- (void)startProviderWithRequest:(id)arg1 appIdentifier:(id)arg2;
- (void)providerDidCancel;
- (void)providerReceivedResponse:(id)arg1;
- (void)requestCompleted;
- (id)finishedHandler;
- (void)cancelProviderRequest;
- (void)setFinishedHandler:(id)arg1;
- (void)setIsLoading:(bool)arg1;
- (void)cancelRequest;
- (bool)isLoading;
- (void)dealloc;
- (id)errorHandler;
- (void)setErrorHandler:(id)arg1;

@end
