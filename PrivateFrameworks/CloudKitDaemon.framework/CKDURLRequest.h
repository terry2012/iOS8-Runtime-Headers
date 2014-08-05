/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSDictionary, NSFileHandle, NSURLRequest, NSMutableData, <CKDAccountInfoProvider>, NSMutableArray, NSString, NSError, NSArray, NSMutableDictionary, NSInputStream, CKDProtobufStreamWriter, NSData, NSOperationQueue, NSRunLoop, NSURLSessionDataTask, NSHTTPURLResponse, <CKDResponseBodyParser>, NSURLSessionConfiguration, CKDProtocolTranslator, NSDate, NSURL, CKDClientContext;

@interface CKDURLRequest : NSObject <CKDURLSessionTaskDelegate, CKDProtobufMessageSigningDelegate, CKDFlowControllable> {
    <CKDAccountInfoProvider> *_accountInfoProvider;
    double _timeoutInterval;
    long long _responseStatusCode;
    NSRunLoop *_runLoopToFireOn;
    NSString *_requestUUID;
    bool_didSendRequest;
    bool_didFinishLoading;
    bool_finished;
    bool_didRetryAuth;
    bool_didRetrySignature;
    <CKDResponseBodyParser> *_responseBodyParser;
    bool_allowAutomaticRedirects;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _requestProgressBlock;


  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _responseProgressBlock;


  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _completionBlock;

    NSMutableDictionary *_overriddenHeaders;
    NSMutableArray *_redirectHistory;
    NSData *_fakeResponseData;
    bool_haveParsedFakeResponseData;
    CKDProtobufStreamWriter *_streamWriter;
    struct CC_SHA256state_st { 
        unsigned int count[2]; 
        unsigned int hash[8]; 
        unsigned int wbuf[16]; 
    } _mescalTxSignature;
    struct CC_SHA256state_st { 
        unsigned int count[2]; 
        unsigned int hash[8]; 
        unsigned int wbuf[16]; 
    } _mescalRxSignature;
    NSMutableData *_receivedMescalData;
    bool_usesBackgroundSession;
    bool_allowsCellularAccess;
    bool_cancelled;
    bool_haveCachedServerType;
    bool_haveCachedPartitionType;
    NSDictionary *_requestProperties;
    CKDClientContext *_context;
    long long _databaseScope;
    CKDProtocolTranslator *_translator;
    NSString *_sourceApplicationBundleIdentifier;
    NSString *_sourceApplicationSecondaryIdentifier;
    NSArray *_requestOperations;
    NSString *_flowControlKey;
    NSString *_hardwareIDOverride;
    NSError *_error;
    NSOperationQueue *_delegateQueue;
    NSURLSessionConfiguration *_sessionConfiguration;
    NSURLSessionDataTask *_urlSessionTask;
    NSURLRequest *_request;
    NSHTTPURLResponse *_response;
    NSFileHandle *_responseFileHandle;
    NSFileHandle *_requestFileHandle;
    NSFileHandle *_binaryResponseFileHandle;
    NSFileHandle *_binaryRequestFileHandle;
    NSString *_responseLogFilePath;
    NSString *_requestLogFilePath;
    NSString *_binaryResponseLogFilePath;
    NSString *_binaryRequestLogFilePath;
    NSString *_deviceID;
    unsigned long long _numDownloadedElements;
    long long _cachedServerType;
    long long _cachedPartitionType;
    NSDate *_dateRequestWentOut;
}

@property(retain) <CKDAccountInfoProvider> * accountInfoProvider;
@property double timeoutInterval;
@property(retain) CKDClientContext * context;
@property long long databaseScope;
@property(retain) CKDProtocolTranslator * translator;
@property bool allowAutomaticRedirects;
@property(retain) NSDictionary * requestProperties;
@property bool usesBackgroundSession;
@property bool allowsCellularAccess;
@property(retain) NSString * sourceApplicationBundleIdentifier;
@property(retain) NSString * sourceApplicationSecondaryIdentifier;
@property(readonly) CKDProtobufStreamWriter * streamWriter;
@property(copy) id requestProgressBlock;
@property(copy) id responseProgressBlock;
@property(copy) id completionBlock;
@property(retain) <CKDResponseBodyParser> * responseBodyParser;
@property(readonly) NSString * httpMethod;
@property(readonly) NSDictionary * additionalHeaderValues;
@property(readonly) bool hasRequestBody;
@property(readonly) NSInputStream * requestBodyStream;
@property(readonly) NSArray * requestOperations;
@property(readonly) NSArray * requestOperationClasses;
@property(readonly) int isolationLevel;
@property(readonly) int operationType;
@property(readonly) NSString * path;
@property(readonly) long long serverType;
@property(readonly) long long partitionType;
@property(readonly) NSURL * url;
@property(readonly) bool shouldCompressBody;
@property(readonly) NSString * acceptContentType;
@property(readonly) NSString * requestContentType;
@property(readonly) NSString * protobufOperationName;
@property(retain) NSString * flowControlKey;
@property(readonly) NSString * sectionID;
@property(retain) NSString * hardwareIDOverride;
@property(readonly) bool isFinished;
@property(retain) NSError * error;
@property(readonly) NSDictionary * responseHeaders;
@property(readonly) long long responseStatusCode;
@property(readonly) NSURL * lastRedirectURL;
@property(readonly) NSString * requestUUID;
@property(retain) NSOperationQueue * delegateQueue;
@property(retain) NSURLSessionConfiguration * sessionConfiguration;
@property(retain) NSURLSessionDataTask * urlSessionTask;
@property(retain) NSURLRequest * request;
@property(retain) NSHTTPURLResponse * response;
@property(retain) NSFileHandle * responseFileHandle;
@property(retain) NSFileHandle * requestFileHandle;
@property(retain) NSFileHandle * binaryResponseFileHandle;
@property(retain) NSFileHandle * binaryRequestFileHandle;
@property(retain) NSString * responseLogFilePath;
@property(retain) NSString * requestLogFilePath;
@property(retain) NSString * binaryResponseLogFilePath;
@property(retain) NSString * binaryRequestLogFilePath;
@property(copy) NSString * deviceID;
@property unsigned long long numDownloadedElements;
@property(getter=isCancelled) bool cancelled;
@property bool haveCachedServerType;
@property bool haveCachedPartitionType;
@property long long cachedServerType;
@property long long cachedPartitionType;
@property(retain) NSDate * dateRequestWentOut;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;

+ (id)_sharedCookieStorage;
+ (id)_logQueue;

- (void)setCachedPartitionType:(long long)arg1;
- (long long)cachedPartitionType;
- (void)setCachedServerType:(long long)arg1;
- (long long)cachedServerType;
- (void)setHaveCachedPartitionType:(bool)arg1;
- (bool)haveCachedPartitionType;
- (void)setHaveCachedServerType:(bool)arg1;
- (bool)haveCachedServerType;
- (void)setNumDownloadedElements:(unsigned long long)arg1;
- (id)binaryRequestFileHandle;
- (id)binaryResponseFileHandle;
- (id)requestFileHandle;
- (id)responseFileHandle;
- (id)translator;
- (bool)expectsSingleObject;
- (void)generateSignature:(id)arg1;
- (void)URLSessionTask:(id)arg1 conditionalRequirementsChanged:(bool)arg2;
- (void)URLSessionTaskIsWaitingForConnection:(id)arg1;
- (id)URLSessionTask:(id)arg1 requestForEstablishedConnection:(id)arg2;
- (void)URLSessionDataTask:(id)arg1 didReceiveData:(id)arg2;
- (void)URLSessionDataTask:(id)arg1 didReceiveResponse:(id)arg2 completionHandler:(id)arg3;
- (void)URLSessionTask:(id)arg1 didCompleteWithError:(id)arg2;
- (void)URLSessionTask:(id)arg1 didSendBodyData:(long long)arg2 totalBytesSent:(long long)arg3 totalBytesExpectedToSend:(long long)arg4;
- (void)URLSessionTask:(id)arg1 needNewBodyStream:(id)arg2;
- (void)URLSessionTask:(id)arg1 willPerformHTTPRedirection:(id)arg2 newRequest:(id)arg3 completionHandler:(id)arg4;
- (void)updateSignatureWithTransmittedBytes:(id)arg1;
- (id)_errorFromHTTPResponse:(id)arg1;
- (id)_binaryResponseFileHandle;
- (id)defaultParserForContentType:(id)arg1;
- (void)_logHTTPResponse:(id)arg1;
- (void)_addResponseHeadersToReceivedSignature:(id)arg1;
- (id)dateRequestWentOut;
- (void)_flushRequestResponseLogs;
- (void)setSessionConfiguration:(id)arg1;
- (void)setDateRequestWentOut:(id)arg1;
- (void)setUrlSessionTask:(id)arg1;
- (void)_populateURLSessionConfiguration;
- (void)_loadRequest:(id)arg1;
- (id)_versionHeader;
- (id)acceptContentType;
- (id)requestContentType;
- (bool)hasRequestBody;
- (id)zoneIDsToLock;
- (void)_performRequest;
- (void)_acquireZoneGates;
- (bool)requiresTokenRegistration;
- (void)_registerPushTokens;
- (bool)requiresDeviceID;
- (void)_fetchDeviceID;
- (void)setTranslator:(id)arg1;
- (bool)allowsAuthedAccount;
- (void)_fetchContainerScopedUserID;
- (void)_setupMescal;
- (bool)requiresConfiguration;
- (void)_setupConfiguration;
- (bool)requiresAppPartitionURL;
- (void)_setupPublicDatabaseURL;
- (bool)allowsAnonymousAccount;
- (id)_binaryRequestFileHandle;
- (bool)shouldCompressBody;
- (id)protobufOperationName;
- (long long)partitionType;
- (long long)serverType;
- (id)requestOperationClasses;
- (void)requestDidParsePlaintextObject:(id)arg1;
- (void)requestDidParsePlistObject:(id)arg1;
- (long long)_handlePlistResult:(id)arg1;
- (void)requestDidParseJSONObject:(id)arg1;
- (long long)_handleServerJSONResult:(id)arg1;
- (void)requestDidParseNodeFailure:(id)arg1;
- (id)requestDidParseProtobufObject:(id)arg1;
- (long long)_handleServerProtobufResult:(id)arg1 rawData:(id)arg2;
- (void)updateSignatureWithReceivedBytes:(id)arg1;
- (void)_logParsedObject:(id)arg1;
- (Class)expectedResponseClass;
- (void)_handleMescalSignatureResponse:(id)arg1 withCompletionHandler:(id)arg2;
- (void)_handleAuthFailure;
- (void)tearDownResourcesAndReleaseTheZoneLocks;
- (id)streamWriter;
- (id)operationRequestWithType:(int)arg1;
- (void)_addRequestHeadersToTransmittedSignature:(id)arg1;
- (bool)requiresSignature;
- (int)isolationLevel;
- (id)hardwareIDOverride;
- (bool)includeContainerInfo;
- (id)requestOperations;
- (void)setBinaryResponseFileHandle:(id)arg1;
- (void)setBinaryRequestFileHandle:(id)arg1;
- (void)setResponseFileHandle:(id)arg1;
- (void)setRequestFileHandle:(id)arg1;
- (id)binaryResponseLogFilePath;
- (id)responseLogFilePath;
- (id)binaryRequestLogFilePath;
- (id)requestLogFilePath;
- (id)_responseFileHandle;
- (id)_requestFileHandle;
- (void)setBinaryRequestLogFilePath:(id)arg1;
- (void)setBinaryResponseLogFilePath:(id)arg1;
- (void)setRequestLogFilePath:(id)arg1;
- (void)setResponseLogFilePath:(id)arg1;
- (void)_makeTrafficFileHandleWithPrefix:(id)arg1 outPath:(id*)arg2 outHandle:(id*)arg3;
- (id)sessionConfiguration;
- (id)urlSessionTask;
- (void)setFlowControlKey:(id)arg1;
- (void)setHardwareIDOverride:(id)arg1;
- (void)inheritParentSectionID:(id)arg1;
- (id)requestUUID;
- (id)flowControlKey;
- (void)performRequest;
- (bool)usesBackgroundSession;
- (void)setUsesBackgroundSession:(bool)arg1;
- (void)overrideRequestHeader:(id)arg1 withValue:(id)arg2;
- (unsigned long long)numDownloadedElements;
- (void)_handleBadPasswordResponse;
- (bool)allowAutomaticRedirects;
- (bool)shouldLogResponseBody;
- (id)responseProgressBlock;
- (id)requestProgressBlock;
- (void)setResponseProgressBlock:(id)arg1;
- (void)setRequestProgressBlock:(id)arg1;
- (void)reportStatusWithError:(id)arg1;
- (bool)validate:(id*)arg1;
- (void)setResponseBodyParser:(id)arg1;
- (void)tearDownResources;
- (id)requestBodyStream;
- (id)lastRedirectURL;
- (id)responseHeaders;
- (void)setAllowAutomaticRedirects:(bool)arg1;
- (long long)responseStatusCode;
- (id)additionalHeaderValues;
- (id)httpMethod;
- (id)responseBodyParser;
- (id)accountInfoProvider;
- (void)setAccountInfoProvider:(id)arg1;
- (long long)databaseScope;
- (void)setDatabaseScope:(long long)arg1;
- (id)sectionID;
- (void)setSourceApplicationSecondaryIdentifier:(id)arg1;
- (id)sourceApplicationSecondaryIdentifier;
- (id)ckShortDescription;
- (id)CKPropertiesDescription;
- (void)setRequestProperties:(id)arg1;
- (void)_logRequest:(id)arg1;
- (id)requestProperties;
- (void)setDeviceID:(id)arg1;
- (id)deviceID;
- (void)setRequest:(id)arg1;
- (bool)markAsFinished;
- (id)context;
- (void)setContext:(id)arg1;
- (id)path;
- (id)url;
- (int)operationType;
- (bool)isCancelled;
- (void)finishWithError:(id)arg1;
- (id)init;
- (id)sourceApplicationBundleIdentifier;
- (void)setSourceApplicationBundleIdentifier:(id)arg1;
- (void)setAllowsCellularAccess:(bool)arg1;
- (void)setTimeoutInterval:(double)arg1;
- (bool)allowsCellularAccess;
- (double)timeoutInterval;
- (unsigned long long)cachePolicy;
- (void)setDelegateQueue:(id)arg1;
- (id)delegateQueue;
- (id)request;
- (void)setResponse:(id)arg1;
- (void)setError:(id)arg1;
- (id)error;
- (id)response;
- (void)cancel;
- (void)dealloc;
- (void).cxx_destruct;
- (id)description;
- (void)setCompletionBlock:(id)arg1;
- (id)completionBlock;
- (bool)isFinished;
- (void)setCancelled:(bool)arg1;

@end
