/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/MIME.framework/MIME
 */

@class NSString, NSConditionLock, NSError, NSMutableArray;

@interface MFFuture : NSObject <MFFuture> {
    NSConditionLock *_stateLock;
    id _result;
    NSError *_error;
    NSMutableArray *_completionBlocks;
}

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;
@property(getter=isFinished,readonly) bool finished;
@property(getter=isCancelled,readonly) bool cancelled;

+ (id)future;

- (id)resultWithTimeout:(double)arg1 error:(id*)arg2;
- (bool)isCancelled;
- (bool)finishWithError:(id)arg1;
- (bool)finishWithResult:(id)arg1;
- (void)addFailureBlock:(id)arg1;
- (void)addSuccessBlock:(id)arg1;
- (id)result:(id*)arg1;
- (void)_addCompletionBlock:(id)arg1;
- (bool)finishWithResult:(id)arg1 error:(id)arg2;
- (void)didCancel;
- (void)_flushCompletionBlocks;
- (bool)_nts_isFinished;
- (id)resultBeforeDate:(id)arg1 error:(id*)arg2;
- (id)init;
- (bool)cancel;
- (void)dealloc;
- (bool)isFinished;

@end
