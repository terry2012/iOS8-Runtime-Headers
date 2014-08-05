/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/CFNetwork.framework/CFNetwork
 */

@class NSURLCredentialStorage, NSString, NSArray, NSURL, NSHTTPCookieStorage, NSDictionary, NSURLCache;

@interface NSURLSessionConfiguration : NSObject <NSSecureCoding, NSCopying> {
    bool_allowsCellularAccess;
    bool_discretionary;
    bool_sessionSendsLaunchEvents;
    bool_HTTPShouldUsePipelining;
    bool_HTTPShouldSetCookies;
    bool__requiresPowerPluggedIn;
    bool__allowsExpensiveAccess;
    bool__allowsPowerNapScheduling;
    bool__preventsIdleSleepOnceConnected;
    bool__sessionSendsLaunchOnDemandEvents;
    bool__collectsTimingData;
    bool__shouldSkipPreferredClientCertificateLookup;
    bool__allowsRetryForBackgroundDataTasks;
    bool__respectsAllowsCellularAccessForDiscretionaryTasks;
    bool__infersDiscretionaryFromOriginatingClient;
    bool_backgroundSession;
    bool__phskip_credStorageSet;
    bool__phskip_urlCacheSet;
    bool__phskip_cookieStorageSet;
    bool__phskip_hstsStorageSet;
    bool_skip_download_unlink;
    bool__requiresClientToOpenFiles;
    bool__forcesNewConnections;
    bool__supportsAVAssetDownloads;
    bool__proxySession;
    bool__disallowsSPDY;
    bool__preventsIdleSleep;
    bool__usePipeliningHeuristics;
    int _TLSMinimumSupportedProtocol;
    int _TLSMaximumSupportedProtocol;
    NSString *_identifier;
    unsigned long long _requestCachePolicy;
    double _timeoutIntervalForRequest;
    double _timeoutIntervalForResource;
    unsigned long long _networkServiceType;
    NSString *_sharedContainerIdentifier;
    NSDictionary *_connectionProxyDictionary;
    unsigned long long _HTTPCookieAcceptPolicy;
    NSDictionary *_HTTPAdditionalHeaders;
    long long _HTTPMaximumConnectionsPerHost;
    NSArray *_protocolClasses;
    NSURL *__directoryForDownloadedFiles;
    NSString *__sourceApplicationBundleIdentifier;
    NSString *__sourceApplicationSecondaryIdentifier;
    unsigned long long __TCPAdaptiveReadTimeout;
    unsigned long long __TCPAdaptiveWriteTimeout;
    NSString *__ledBellyServiceIdentifier;
    double __connectionCachePurgeTimeout;
    double __connectionCacheCellPurgeTimeout;
    NSString *__connectionPoolName;
    NSString *_disposition;
    NSURLCredentialStorage *__phskip_credStorage;
    NSURLCache *__phskip_urlCache;
    NSHTTPCookieStorage *__phskip_cookieStorage;
    struct _CFHSTSPolicy { } *__phskip_hstsStorage;
    long long _pipeliningHighWatermark;
    long long _pipeliningLowWatermark;
    long long _numPriorityLevels;
    long long _numFastLanes;
    long long _minimumFastLanePriority;
    NSString *__tcpConnectionPoolName;
    NSDictionary *__socketStreamProperties;
    NSArray *__contentDispHeadEncFallback;
}

@property(copy) NSString * identifier;
@property unsigned long long requestCachePolicy;
@property double timeoutIntervalForRequest;
@property double timeoutIntervalForResource;
@property unsigned long long networkServiceType;
@property bool allowsCellularAccess;
@property(getter=isDiscretionary) bool discretionary;
@property(copy) NSString * sharedContainerIdentifier;
@property bool sessionSendsLaunchEvents;
@property(copy) NSDictionary * connectionProxyDictionary;
@property int TLSMinimumSupportedProtocol;
@property int TLSMaximumSupportedProtocol;
@property bool HTTPShouldUsePipelining;
@property bool HTTPShouldSetCookies;
@property unsigned long long HTTPCookieAcceptPolicy;
@property(copy) NSDictionary * HTTPAdditionalHeaders;
@property long long HTTPMaximumConnectionsPerHost;
@property(retain) NSHTTPCookieStorage * HTTPCookieStorage;
@property(retain) NSURLCredentialStorage * URLCredentialStorage;
@property(retain) NSURLCache * URLCache;
@property(copy) NSArray * protocolClasses;
@property bool _requiresPowerPluggedIn;
@property(copy) NSURL * _directoryForDownloadedFiles;
@property(copy) NSString * _sourceApplicationBundleIdentifier;
@property(copy) NSString * _sourceApplicationSecondaryIdentifier;
@property unsigned long long _TCPAdaptiveReadTimeout;
@property unsigned long long _TCPAdaptiveWriteTimeout;
@property bool _allowsExpensiveAccess;
@property bool _allowsPowerNapScheduling;
@property bool _preventsIdleSleepOnceConnected;
@property bool _sessionSendsLaunchOnDemandEvents;
@property bool _collectsTimingData;
@property bool _shouldSkipPreferredClientCertificateLookup;
@property(copy) NSString * _ledBellyServiceIdentifier;
@property double _connectionCachePurgeTimeout;
@property double _connectionCacheCellPurgeTimeout;
@property bool _allowsRetryForBackgroundDataTasks;
@property bool _respectsAllowsCellularAccessForDiscretionaryTasks;
@property bool _infersDiscretionaryFromOriginatingClient;
@property(copy) NSString * _connectionPoolName;
@property(getter=isBackgroundSession) bool backgroundSession;
@property NSString * disposition;
@property(retain) NSURLCredentialStorage * _phskip_credStorage;
@property bool _phskip_credStorageSet;
@property(retain) NSURLCache * _phskip_urlCache;
@property bool _phskip_urlCacheSet;
@property(retain) NSHTTPCookieStorage * _phskip_cookieStorage;
@property bool _phskip_cookieStorageSet;
@property(retain) struct _CFHSTSPolicy { }* _phskip_hstsStorage;
@property bool _phskip_hstsStorageSet;
@property long long pipeliningHighWatermark;
@property long long pipeliningLowWatermark;
@property long long numPriorityLevels;
@property long long numFastLanes;
@property long long minimumFastLanePriority;
@property bool skip_download_unlink;
@property bool _requiresClientToOpenFiles;
@property(copy) NSString * _tcpConnectionPoolName;
@property bool _forcesNewConnections;
@property(copy) NSDictionary * _socketStreamProperties;
@property bool _supportsAVAssetDownloads;
@property(getter=_isProxySession) bool _proxySession;
@property bool _disallowsSPDY;
@property bool _preventsIdleSleep;
@property bool _usePipeliningHeuristics;
@property(copy) NSArray * _contentDispHeadEncFallback;

+ (id)backgroundSessionConfiguration:(id)arg1;
+ (id)_proxySessionConfigurationWithIdentifier:(id)arg1;
+ (id)_AVBackgroundSessionConfigurationWithIdentifier:(id)arg1;
+ (id)ephemeralSessionConfiguration;
+ (id)backgroundSessionConfigurationWithIdentifier:(id)arg1;
+ (id)sessionConfigurationForSharedSession;
+ (id)defaultSessionConfiguration;
+ (id)_defaultProtocolClasses;
+ (bool)supportsSecureCoding;

- (void)setIdentifier:(id)arg1;
- (id)identifier;
- (bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)set_disallowsSPDY:(bool)arg1;
- (id)sourceApplicationBundleIdentifier;
- (void)setSourceApplicationBundleIdentifier:(id)arg1;
- (id)initWithDisposition:(id)arg1;
- (void)setHSTSPolicy:(struct _CFHSTSPolicy { }*)arg1;
- (void)setHTTPCookieStorage:(id)arg1;
- (void)setURLCache:(id)arg1;
- (void)setURLCredentialStorage:(id)arg1;
- (void)set_preventsIdleSleepOnceConnected:(bool)arg1;
- (void)set_contentDispHeadEncFallback:(id)arg1;
- (id)_contentDispHeadEncFallback;
- (void)set_socketStreamProperties:(id)arg1;
- (void)set_tcpConnectionPoolName:(id)arg1;
- (long long)minimumFastLanePriority;
- (long long)numFastLanes;
- (long long)numPriorityLevels;
- (long long)pipeliningLowWatermark;
- (long long)pipeliningHighWatermark;
- (void)set_connectionPoolName:(id)arg1;
- (id)_connectionPoolName;
- (double)_connectionCacheCellPurgeTimeout;
- (double)_connectionCachePurgeTimeout;
- (void)set_TCPAdaptiveWriteTimeout:(unsigned long long)arg1;
- (void)set_TCPAdaptiveReadTimeout:(unsigned long long)arg1;
- (void)set_sourceApplicationSecondaryIdentifier:(id)arg1;
- (void)set_sourceApplicationBundleIdentifier:(id)arg1;
- (void)set_directoryForDownloadedFiles:(id)arg1;
- (long long)HTTPMaximumConnectionsPerHost;
- (id)connectionProxyDictionary;
- (int)TLSMaximumSupportedProtocol;
- (int)TLSMinimumSupportedProtocol;
- (void)set_usePipeliningHeuristics:(bool)arg1;
- (bool)_usePipeliningHeuristics;
- (void)set_preventsIdleSleep:(bool)arg1;
- (bool)_preventsIdleSleep;
- (void)set_proxySession:(bool)arg1;
- (void)set_supportsAVAssetDownloads:(bool)arg1;
- (bool)_supportsAVAssetDownloads;
- (void)set_forcesNewConnections:(bool)arg1;
- (void)set_requiresClientToOpenFiles:(bool)arg1;
- (void)set_infersDiscretionaryFromOriginatingClient:(bool)arg1;
- (bool)_infersDiscretionaryFromOriginatingClient;
- (void)set_respectsAllowsCellularAccessForDiscretionaryTasks:(bool)arg1;
- (bool)_respectsAllowsCellularAccessForDiscretionaryTasks;
- (void)set_allowsRetryForBackgroundDataTasks:(bool)arg1;
- (bool)_allowsRetryForBackgroundDataTasks;
- (void)set_collectsTimingData:(bool)arg1;
- (void)set_sessionSendsLaunchOnDemandEvents:(bool)arg1;
- (bool)_sessionSendsLaunchOnDemandEvents;
- (void)set_allowsPowerNapScheduling:(bool)arg1;
- (void)set_requiresPowerPluggedIn:(bool)arg1;
- (bool)sessionSendsLaunchEvents;
- (void)setSharedContainerIdentifier:(id)arg1;
- (id)_phskip_credStorage;
- (bool)_phskip_credStorageSet;
- (id)_phskip_urlCache;
- (bool)_phskip_urlCacheSet;
- (id)_phskip_cookieStorage;
- (bool)_phskip_cookieStorageSet;
- (struct _CFHSTSPolicy { }*)_phskip_hstsStorage;
- (bool)_phskip_hstsStorageSet;
- (void)setSkip_download_unlink:(bool)arg1;
- (void)setMinimumFastLanePriority:(long long)arg1;
- (void)setPipeliningLowWatermark:(long long)arg1;
- (void)setPipeliningHighWatermark:(long long)arg1;
- (void)setNumPriorityLevels:(long long)arg1;
- (void)setNumFastLanes:(long long)arg1;
- (void)set_allowsExpensiveAccess:(bool)arg1;
- (void)setProtocolClasses:(id)arg1;
- (void)set_phskip_urlCacheSet:(bool)arg1;
- (void)set_phskip_urlCache:(id)arg1;
- (void)set_phskip_credStorageSet:(bool)arg1;
- (void)set_phskip_credStorage:(id)arg1;
- (void)set_phskip_cookieStorageSet:(bool)arg1;
- (void)set_phskip_cookieStorage:(id)arg1;
- (void)set_phskip_hstsStorage:(struct _CFHSTSPolicy { }*)arg1;
- (void)set_phskip_hstsStorageSet:(bool)arg1;
- (void)setHTTPCookieAcceptPolicy:(unsigned long long)arg1;
- (void)setHTTPShouldSetCookies:(bool)arg1;
- (void)setTLSMaximumSupportedProtocol:(int)arg1;
- (void)setTLSMinimumSupportedProtocol:(int)arg1;
- (void)setConnectionProxyDictionary:(id)arg1;
- (void)setSessionSendsLaunchEvents:(bool)arg1;
- (void)setTimeoutIntervalForResource:(double)arg1;
- (void)setTimeoutIntervalForRequest:(double)arg1;
- (void)setRequestCachePolicy:(unsigned long long)arg1;
- (void)setBackgroundSession:(bool)arg1;
- (void)setDisposition:(id)arg1;
- (bool)_forcesNewConnections;
- (bool)_preventsIdleSleepOnceConnected;
- (id)_sourceApplicationSecondaryIdentifier;
- (id)_sourceApplicationBundleIdentifier;
- (id)_tcpConnectionPoolName;
- (bool)_allowsPowerNapScheduling;
- (unsigned long long)_TCPAdaptiveWriteTimeout;
- (unsigned long long)_TCPAdaptiveReadTimeout;
- (bool)_allowsExpensiveAccess;
- (id)_socketStreamProperties;
- (bool)_requiresPowerPluggedIn;
- (void)set_shouldSkipPreferredClientCertificateLookup:(bool)arg1;
- (double)timeoutIntervalForRequest;
- (unsigned long long)requestCachePolicy;
- (void)set_connectionCacheCellPurgeTimeout:(double)arg1;
- (void)set_connectionCachePurgeTimeout:(double)arg1;
- (void)setHTTPMaximumConnectionsPerHost:(long long)arg1;
- (void)setHTTPShouldUsePipelining:(bool)arg1;
- (bool)HTTPShouldUsePipelining;
- (void)setAllowsCellularAccess:(bool)arg1;
- (void)setNetworkServiceType:(unsigned long long)arg1;
- (bool)allowsCellularAccess;
- (unsigned long long)networkServiceType;
- (bool)_shouldSkipPreferredClientCertificateLookup;
- (bool)_disallowsSPDY;
- (void)set_ledBellyServiceIdentifier:(id)arg1;
- (id)_ledBellyServiceIdentifier;
- (struct OpaqueCFHTTPCookieStorage { }*)_copyCFCookieStorage;
- (void*)_copyAttribute:(struct __CFString { }*)arg1;
- (bool)isBackgroundSession;
- (id)disposition;
- (void)setDiscretionary:(bool)arg1;
- (bool)isDiscretionary;
- (unsigned long long)HTTPCookieAcceptPolicy;
- (bool)HTTPShouldSetCookies;
- (id)sharedContainerIdentifier;
- (void)setHTTPAdditionalHeaders:(id)arg1;
- (id)HTTPAdditionalHeaders;
- (bool)_isProxySession;
- (bool)_collectsTimingData;
- (bool)skip_download_unlink;
- (id)_directoryForDownloadedFiles;
- (bool)_requiresClientToOpenFiles;
- (double)timeoutIntervalForResource;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)protocolClasses;
- (id)URLCredentialStorage;
- (id)HTTPCookieStorage;
- (id)URLCache;
- (struct _CFHSTSPolicy { }*)copyHSTSPolicy;
- (struct HTTPConnectionCacheLimits { int x1; int x2; int x3; int x4; int x5; int x6; int x7; int x8; int x9; int x10; })getConnectionCacheLimits;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { }*)arg1;

@end
