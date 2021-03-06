/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

@class NSString, NSObject<OS_dispatch_group>, GKThreadsafeDictionary, NSError;

@interface GKDispatchGroup : NSObject  {
    NSString *_name;
    NSObject<OS_dispatch_group> *_group;
    GKThreadsafeDictionary *_values;
    NSError *_error;
    id result;
    int _sequence;
    bool_loggingEnabled;
    id _result;
}

@property(retain) NSError * error;
@property(retain) id result;
@property(getter=isLoggingEnabled) bool loggingEnabled;
@property NSObject<OS_dispatch_group> * group;

+ (id)backgroundConcurrentQueue;
+ (id)defaultConcurrentQueue;
+ (id)dispatchGroup;
+ (id)dispatchGroupWithName:(id)arg1;
+ (id)mainQueue;

- (void)setResult:(id)arg1;
- (void)leave;
- (void)join:(id)arg1 queue:(id)arg2 block:(id)arg3;
- (void)setLoggingEnabled:(bool)arg1;
- (bool)isLoggingEnabled;
- (void)waitWithTimeout:(double)arg1;
- (void)enter;
- (void)_waitWithDispatchTimeout:(unsigned long long)arg1;
- (void)notifyOnQueue:(id)arg1 block:(id)arg2;
- (void)notifyOnMainQueueWithBlock:(id)arg1;
- (id)group;
- (id)result;
- (id)_values;
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;
- (id)objectForKeyedSubscript:(id)arg1;
- (id)init;
- (void)setGroup:(id)arg1;
- (id)initWithName:(id)arg1;
- (id)allValues;
- (void)wait;
- (void)setError:(id)arg1;
- (id)error;
- (void)dealloc;
- (id)description;
- (void)perform:(id)arg1;

@end
