/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSURL, NSObject<OS_dispatch_semaphore>, AVAudioMix, AVCustomVideoCompositorSession, AVMetadataItemFilter, AVAsset, AVVideoComposition, NSString, AVAssetTrack, NSArray, NSObject<OS_dispatch_queue>, AVWeakReference, NSError;

@interface AVAssetExportSessionInternal : NSObject  {
    AVWeakReference *weakReference;
    NSObject<OS_dispatch_queue> *readWriteQueue;
    struct OpaqueFigRemaker { } *remaker;
    long long status;
    NSError *error;
    float progress;
    AVAsset *asset;
    AVAssetTrack *firstVideoTrack;
    NSString *preset;
    NSString *preset16x9;
    NSURL *outputURL;
    NSString *outputFileType;
    NSString *actualOutputFileType;
    NSString *audioTimePitchAlgorithm;
    AVAudioMix *audioMix;
    AVVideoComposition *videoComposition;
    void *figVideoCompositor;
    AVCustomVideoCompositorSession *customVideoCompositorSession;
    NSArray *metadata;
    AVMetadataItemFilter *metadataItemFilter;
    struct { 
        struct { 
            long long value; 
            int timescale; 
            unsigned int flags; 
            long long epoch; 
        } start; 
        struct { 
            long long value; 
            int timescale; 
            unsigned int flags; 
            long long epoch; 
        } duration; 
    } timeRange;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    } minVideoFrameDuration;
    boolcanUseFastFrameRateConversion;
    NSString *videoFrameRateConversionAlgorithm;
    boolwaitingForFastFrameRateResponse;
    NSObject<OS_dispatch_semaphore> *canUseFastFrameRateConversionSemaphore;
    long long maxFileSize;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id handler;

    booloptimizeForNetworkUse;
    booluseMultiPass;
    NSURL *directoryForTemporaryFiles;
    booloutputFileCreatedByRemaker;
    long long compatibleFileTypesDispatchOncePredicate;
    NSArray *compatibleFileTypes;
    NSObject<OS_dispatch_queue> *remakerNotificationSerializationQueue;
}



@end
