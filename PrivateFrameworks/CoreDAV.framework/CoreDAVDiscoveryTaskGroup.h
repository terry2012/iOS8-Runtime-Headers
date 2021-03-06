/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

@class NSString, NSArray, <CoreDAVAccountInfoProvider>, <CoreDAVDiscoveryTaskGroupDelegate>, NSMutableArray;

@interface CoreDAVDiscoveryTaskGroup : CoreDAVTaskGroup <CoreDAVOptionsTaskDelegate, CoreDAVPropFindTaskDelegate> {
    NSString *_requiredComplianceClass;
    NSArray *_httpPorts;
    NSArray *_httpsPorts;
    NSString *_httpServiceString;
    NSString *_httpsServiceString;
    NSString *_wellKnownPath;
    NSArray *_potentialContextPaths;
    NSMutableArray *_discoveries;
    bool_didReceiveAuthenticationError;
    bool_shouldBailEarly;
    <CoreDAVAccountInfoProvider> *_discoveredAccountInfo;
}

@property <CoreDAVDiscoveryTaskGroupDelegate> * delegate;
@property bool didReceiveAuthenticationError;
@property bool shouldBailEarly;
@property(retain) <CoreDAVAccountInfoProvider> * discoveredAccountInfo;
@property(retain) NSString * wellKnownPath;
@property(retain) NSArray * potentialContextPaths;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;


- (void)setPotentialContextPaths:(id)arg1;
- (void)setWellKnownPath:(id)arg1;
- (bool)didReceiveAuthenticationError;
- (id)cleanedStringsFromResponseHeaders:(id)arg1 forHeader:(id)arg2;
- (id)initWithAccountInfoProvider:(id)arg1 taskManager:(id)arg2 httpPorts:(id)arg3 httpsPorts:(id)arg4 httpServiceString:(id)arg5 httpsServiceString:(id)arg6 wellKnownPaths:(id)arg7 requiredComplianceClass:(id)arg8;
- (void)optionsTask:(id)arg1 error:(id)arg2;
- (void)addToDiscoveryArray:(id*)arg1 discovery:(id)arg2;
- (void)setShouldBailEarly:(bool)arg1;
- (id)discoveredAccountInfo;
- (void)setDiscoveredAccountInfo:(id)arg1;
- (bool)shouldBailEarly;
- (void)getDiscoveryStatus:(id)arg1 priorFailed:(id*)arg2 subsequentFailed:(id*)arg3 priorIncomplete:(id*)arg4 subsequentIncomplete:(id*)arg5 priorSuccess:(id*)arg6 subsequentSuccess:(id*)arg7;
- (void)startOptionsTask:(id)arg1;
- (void)completeOptionsTask:(id)arg1 error:(id)arg2;
- (void)setDidReceiveAuthenticationError:(bool)arg1;
- (void)srvLookupTask:(id)arg1 error:(id)arg2;
- (id)extractPrincipalURLFromPropFindTask:(id)arg1 error:(id*)arg2;
- (void)propFindTaskFinished:(id)arg1;
- (void)noteDefinitiveAuthFailureFromTask:(id)arg1;
- (void)startWellKnownFallbackHeadTask:(id)arg1 withURL:(id)arg2;
- (id)propFindProperties;
- (void)completeDiscovery:(id)arg1 error:(id)arg2;
- (id)potentialContextPaths;
- (id)allDiscoveryPaths:(id)arg1;
- (void)startPropfindTask:(id)arg1;
- (id)setupDiscoveries:(id)arg1 withSchemes:(id)arg2;
- (void)startWellKnownLocationTask:(id)arg1 withURL:(id)arg2;
- (id)allDiscoveryPorts:(id)arg1 withScheme:(id)arg2;
- (id)wellKnownPath;
- (void)startSRVLookup:(id)arg1 serviceString:(id)arg2;
- (id)initWithAccountInfoProvider:(id)arg1 taskManager:(id)arg2 httpPorts:(id)arg3 httpsPorts:(id)arg4 httpServiceString:(id)arg5 httpsServiceString:(id)arg6 wellKnownPath:(id)arg7 potentialContextPaths:(id)arg8 requiredComplianceClass:(id)arg9;
- (void)syncAway;
- (void)cancelTaskGroup;
- (void)startTaskGroup;
- (void)task:(id)arg1 didFinishWithError:(id)arg2;
- (void)taskGroupWillCancelWithError:(id)arg1;
- (id)initWithAccountInfoProvider:(id)arg1 taskManager:(id)arg2;
- (void)dealloc;

@end
