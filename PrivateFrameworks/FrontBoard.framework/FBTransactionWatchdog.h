/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
 */

@class FBTransaction;

@interface FBTransactionWatchdog : BSWatchdog  {
    FBTransaction *_transaction;
}

@property(retain,readonly) FBTransaction * transaction;


- (id)initWithTransaction:(id)arg1;
- (void)_dumpDebugInfo;
- (id)transaction;
- (void)_watchdogTimerFired;
- (void)invalidate;
- (void)dealloc;

@end
