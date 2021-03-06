/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
 */

@class NSString, NSArray;

@interface VMUProcInfo : NSObject  {
    unsigned int _task;
    bool_needTaskPortDealloc;
    NSString *_name;
    NSArray *_arguments;
    NSArray *_envVars;
    NSString *_procTableName;
    NSString *_realAppName;
    NSString *_requestedAppName;
    NSString *_firstArg;
    int _pid;
    int _ppid;
    struct timeval { 
        long long tv_sec; 
        int tv_usec; 
    } _startTime;
}

+ (int)processParentId:(int)arg1;
+ (bool)isProcessRunning:(int)arg1;
+ (id)getProcessIds;

- (long long)compareByUserAppName:(id)arg1;
- (long long)compareByName:(id)arg1;
- (bool)signal:(int)arg1;
- (bool)isNative;
- (bool)isMachO;
- (int)ppid;
- (id)valueForEnvVar:(id)arg1;
- (bool)isCFM;
- (id)requestedAppName;
- (id)firstArgument;
- (id)envVars;
- (id)procTableName;
- (id)_infoFromCommandLine:(int)arg1;
- (id)userAppName;
- (id)realAppName;
- (id)initWithPid:(int)arg1;
- (bool)isApp;
- (int)cpuType;
- (int)pid;
- (id)arguments;
- (void)update;
- (bool)isRunning;
- (id)init;
- (long long)compare:(id)arg1;
- (bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)name;
- (unsigned int)task;
- (struct timeval { long long x1; int x2; })startTime;
- (id)initWithTask:(unsigned int)arg1;
- (void)finalize;
- (void)dealloc;
- (id)description;
- (bool)terminate;

@end
