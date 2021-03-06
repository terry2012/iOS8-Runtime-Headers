/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@class NSMutableArray;

@interface PLDelayedFiledSystemDeletions : NSObject  {
    NSMutableArray *_deletionInfos;
}

+ (id)filesystemDeletionQueue;
+ (id)deletionsFromChangeHubEvent:(id)arg1;
+ (void)appendDescriptionForEvent:(id)arg1 toComponents:(id)arg2;
+ (void)waitForAllDelayedDeletionsToFinish;

- (id)initWithFilesystemDeletionInfos:(id)arg1;
- (void)appendToXPCMessage:(id)arg1 managedObjectContext:(id)arg2;
- (void)deleteAllRemainingFilesAndThumbnailsWithPhotoLibrary:(id)arg1 completionHandler:(id)arg2;
- (void)addFilesystemDeletionInfo:(id)arg1;
- (id)debugDescription;
- (void)dealloc;

@end
