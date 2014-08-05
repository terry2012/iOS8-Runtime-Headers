/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class NSURL, NSArray, AVWeakReferencingDelegateStorage;

@interface AVCaptureFileOutputDelegateWrapper : NSObject  {
    bool_recording;
    bool_paused;
    long long _settingsID;
    NSURL *_outputFileURL;
    NSArray *_metadata;
    AVWeakReferencingDelegateStorage *_delegateStorage;
    NSArray *_connections;
}

@property(readonly) long long settingsID;
@property(readonly) NSURL * outputFileURL;
@property(retain) NSArray * metadata;
@property(readonly) AVWeakReferencingDelegateStorage * delegateStorage;
@property(readonly) NSArray * connections;
@property(getter=isRecording) bool recording;
@property(getter=isPaused) bool paused;

+ (id)wrapperWithURL:(id)arg1 delegate:(id)arg2 settingsID:(long long)arg3 connections:(id)arg4;

- (long long)settingsID;
- (bool)isRecording;
- (void)setPaused:(bool)arg1;
- (bool)isPaused;
- (void)setRecording:(bool)arg1;
- (id)initWithURL:(id)arg1 delegate:(id)arg2 settingsID:(long long)arg3 connections:(id)arg4;
- (id)outputFileURL;
- (id)connections;
- (id)delegateStorage;
- (void)setMetadata:(id)arg1;
- (id)metadata;
- (void)dealloc;

@end
