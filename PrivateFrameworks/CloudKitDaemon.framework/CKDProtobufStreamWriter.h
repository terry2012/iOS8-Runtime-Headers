/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class NSData, NSFileHandle, NSString, NSOutputStream, <CKDProtobufMessageSigningDelegate>, NSMutableArray, NSObject<OS_dispatch_queue>, NSInputStream;

@interface CKDProtobufStreamWriter : NSObject <NSStreamDelegate> {
    NSMutableArray *_allObjects;
    NSData *_curData;
    unsigned long long _curDataPos;
    NSInputStream *_inputStream;
    NSOutputStream *_outputStream;
    struct z_stream_s { 
        char *next_in; 
        unsigned int avail_in; 
        unsigned long long total_in; 
        char *next_out; 
        unsigned int avail_out; 
        unsigned long long total_out; 
        char *msg; 
        struct internal_state {} *state; 
        int (*zalloc)(); 
        int (*zfree)(); 
        void *opaque; 
        int data_type; 
        unsigned long long adler; 
        unsigned long long reserved; 
    } _zlibStream;
    bool_haveFlushedZlib;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    bool_shouldCompress;
    bool_haveFinishedCompression;
    bool_haveFinishedStreaming;
    unsigned long long _bufferSize;
    <CKDProtobufMessageSigningDelegate> *_signingDelegate;
    NSFileHandle *_humanLogFileHandle;
    NSFileHandle *_binaryLogFileHandle;
}

@property(readonly) NSInputStream * inputStream;
@property bool shouldCompress;
@property unsigned long long bufferSize;
@property <CKDProtobufMessageSigningDelegate> * signingDelegate;
@property(retain) NSFileHandle * humanLogFileHandle;
@property(retain) NSFileHandle * binaryLogFileHandle;
@property bool haveFinishedCompression;
@property bool haveFinishedStreaming;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;


- (void)setShouldCompress:(bool)arg1;
- (bool)_finishStreaming:(id)arg1;
- (long long)_writeDataToStream:(id)arg1;
- (void)_prepareObjectForStreaming:(id)arg1 shouldSign:(bool)arg2;
- (id)_prepareMescalSignature:(id)arg1;
- (id)binaryLogFileHandle;
- (id)humanLogFileHandle;
- (id)_dataForMessage:(id)arg1;
- (id)signingDelegate;
- (long long)_streamNextObject:(id)arg1;
- (id)_compressBodyData:(id)arg1 shouldFlush:(bool)arg2;
- (void)setHaveFinishedCompression:(bool)arg1;
- (bool)haveFinishedCompression;
- (unsigned long long)bufferSize;
- (void)_tearDownOutputStream;
- (void)setHaveFinishedStreaming:(bool)arg1;
- (bool)haveFinishedStreaming;
- (void)setBinaryLogFileHandle:(id)arg1;
- (void)setHumanLogFileHandle:(id)arg1;
- (void)setSigningDelegate:(id)arg1;
- (void)setBufferSize:(unsigned long long)arg1;
- (id)initWithCompression:(bool)arg1;
- (void)setStreamedObjects:(id)arg1;
- (id)inputStream;
- (bool)shouldCompress;
- (void)stream:(id)arg1 handleEvent:(unsigned long long)arg2;
- (void)open;
- (void)dealloc;
- (void).cxx_destruct;

@end
