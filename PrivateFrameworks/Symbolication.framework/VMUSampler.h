/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
 */

@class NSString, NSMapTable, VMUTaskMemoryCache, NSConditionLock, VMUProcessDescription, NSMutableArray;

@interface VMUSampler : NSObject  {
    unsigned long long _options;
    int _pid;
    unsigned int _task;
    bool_needTaskPortDealloc;
    bool_recordThreadStates;
    bool_taskIs64Bit;
    NSString *_processName;
    VMUProcessDescription *_processDescription;
    struct _CSTypeRef { 
        unsigned long long _opaque_1; 
        unsigned long long _opaque_2; 
    } _symbolicator;
    VMUTaskMemoryCache *_memCache;
    struct sampling_context_t { } *_samplingContext;
    unsigned int _mainThread;
    NSMapTable *_lastThreadBacktraceMap;
    unsigned int _numberOfCopiedBacktraces;
    unsigned int *_previousThreadList;
    unsigned int _previousThreadCount;
    unsigned int _maxPreviousThreadCount;
    double _tbRate;
    double _tbInterval;
    NSConditionLock *_stateLock;
    double _interval;
    double _timeLimit;
    unsigned int _sampleLimit;
    bool_sampling;
    unsigned int _samplingThreadPort;
    unsigned int _numberOfSamples;
    NSMutableArray *_samples;
    bool_stacksFixed;
    id _delegate;
    double _timeSpentSamplingWithoutCFI;
    double _timeSpentSamplingWithCFI;
    unsigned int _dispatchThreadSoftLimit;
    unsigned int _dispatchThreadSoftLimitCount;
    unsigned int _dispatchThreadHardLimit;
    unsigned int _dispatchThreadHardLimitCount;
}

+ (id)sampleAllThreadsOfTask:(unsigned int)arg1 symbolicate:(bool)arg2;
+ (id)sampleAllThreadsOfTask:(unsigned int)arg1;
+ (id)sampleAllThreadsOfPID:(int)arg1;
+ (void)initialize;

- (void)writeOutput:(id)arg1 append:(bool)arg2;
- (id)createOutput;
- (void)sampleForDuration:(unsigned int)arg1 interval:(unsigned int)arg2;
- (void)preloadSymbols;
- (id)dispatchQueueNameForSerialNumber:(unsigned long long)arg1;
- (id)threadNameForThread:(unsigned int)arg1;
- (void)flushData;
- (id)samples;
- (struct _CSTypeRef { unsigned long long x1; unsigned long long x2; })symbolicator;
- (bool)shouldOutputSignature;
- (void)setShouldOutputSignature:(bool)arg1;
- (void)setRecordThreadStates:(bool)arg1;
- (unsigned int)sampleLimit;
- (void)setSampleLimit:(unsigned int)arg1;
- (double)samplingInterval;
- (id)sampleThread:(unsigned int)arg1;
- (id)initWithPID:(int)arg1 options:(unsigned long long)arg2;
- (id)stopSamplingAndReturnCallNode;
- (void)stopSampling;
- (void)setSamplingInterval:(double)arg1;
- (id)dispatchQueueNameForSerialNumber:(unsigned long long)arg1 returnedConcurrentFlag:(bool*)arg2 returnedThreadId:(unsigned long long*)arg3;
- (id)threadNameForThread:(unsigned int)arg1 returnedThreadId:(unsigned long long*)arg2 returnedDispatchQueueSerialNum:(unsigned long long*)arg3;
- (void)_runSamplingThread;
- (void)_fixupStacks:(id)arg1;
- (id)initWithTask:(unsigned int)arg1 options:(unsigned long long)arg2;
- (id)sampleAllThreadsOnce;
- (id)initWithPID:(int)arg1;
- (void)_makeTimeshare;
- (unsigned long long)recordSampleTo:(id)arg1 beginTime:(double)arg2 endTime:(double)arg3 thread:(unsigned int)arg4;
- (void)initializeSamplingContext:(bool)arg1;
- (void)_makeHighPriority;
- (void)_checkDispatchThreadLimits;
- (id)initWithPID:(int)arg1 orTask:(unsigned int)arg2 options:(unsigned long long)arg3;
- (void)forceStop;
- (bool)waitUntilDone;
- (id)outputString;
- (double)timeLimit;
- (void)setTimeLimit:(double)arg1;
- (int)pid;
- (bool)stop;
- (void)setDelegate:(id)arg1;
- (bool)start;
- (id)delegate;
- (id)initWithTask:(unsigned int)arg1;
- (void)finalize;
- (void)dealloc;
- (unsigned int)mainThread;
- (unsigned int)sampleCount;

@end
