/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
 */

@class BSMachSendRight;

@interface FBProcessCPUStatistics : NSObject  {
    BSMachSendRight *_taskNamePort;
    struct FBProcessTimes { 
        double beginUserCPUElapsedTime; 
        double beginSystemCPUElapsedTime; 
        double beginIdleCPUElapsedTime; 
        double beginApplicationCPUElapsedTime; 
    } _times;
}

@property(readonly) double totalElapsedTime;
@property(readonly) double totalElapsedUserTime;
@property(readonly) double totalElapsedSystemTime;
@property(readonly) double totalElapsedIdleTime;


- (id)descriptionForCrashReport;
- (double)totalElapsedIdleTime;
- (double)totalElapsedSystemTime;
- (double)totalElapsedUserTime;
- (void)_hostwideUserElapsedCPUTime:(double*)arg1 systemElapsedCPUTime:(double*)arg2 idleElapsedCPUTime:(double*)arg3;
- (void)_getApplicationCPUTimesForUser:(double*)arg1 system:(double*)arg2 idle:(double*)arg3;
- (double)_elapsedCPUTime;
- (id)initWithTaskNamePort:(id)arg1;
- (double)totalElapsedTime;
- (void)update;
- (void)dealloc;

@end
