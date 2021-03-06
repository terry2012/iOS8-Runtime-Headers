/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
 */

@interface WebDatabaseManager : NSObject  {
}

+ (void)didFinishLastTransaction;
+ (void)willBeginFirstTransaction;
+ (void)endBackgroundTask;
+ (void)startBackgroundTask;
+ (void)scheduleEmptyDatabaseRemoval;
+ (id)sharedWebDatabaseManager;
+ (void)removeEmptyDatabaseFiles;

- (bool)deleteDatabase:(id)arg1 withOrigin:(id)arg2;
- (bool)deleteOrigin:(id)arg1;
- (void)deleteAllDatabases;
- (id)detailsForDatabase:(id)arg1 withOrigin:(id)arg2;
- (id)databasesWithOrigin:(id)arg1;
- (id)origins;
- (id)init;

@end
