/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class NSObject<OS_dispatch_queue>, NSOperationQueue, NSMapTable;

@interface MPArtworkResizeUtility : NSObject  {
    NSObject<OS_dispatch_queue> *_artworkResizingAccessQueue;
    NSOperationQueue *_artworkResizingOperationQueue;
    NSMapTable *_artworkResizingOperations;
}

@property(retain) NSObject<OS_dispatch_queue> * artworkResizingAccessQueue;
@property(retain) NSOperationQueue * artworkResizingOperationQueue;
@property(retain) NSMapTable * artworkResizingOperations;


- (void)cancelResizeImage:(id)arg1;
- (id)resizeImage:(id)arg1 scaledFittingSize:(struct CGSize { double x1; double x2; })arg2 useExactFittingSizeAsDestinationSize:(bool)arg3 saveToDestinationURL:(id)arg4 completionHandler:(id)arg5;
- (id)artworkResizingOperations;
- (id)artworkResizingAccessQueue;
- (void)setArtworkResizingOperations:(id)arg1;
- (id)artworkResizingOperationQueue;
- (void)setArtworkResizingOperationQueue:(id)arg1;
- (void)setArtworkResizingAccessQueue:(id)arg1;
- (id)init;
- (void).cxx_destruct;

@end
