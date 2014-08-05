/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@class NSMapTable;

@interface CKDGetAuthTokensForPutURLRequest : CKDURLRequest  {
    NSMapTable *_MMCSItemsByRecordIDs;
    NSMapTable *_recordIDsByRequestIDs;
}

@property(readonly) NSMapTable * MMCSItemsByRecordIDs;
@property(retain) NSMapTable * recordIDsByRequestIDs;


- (id)recordIDsByRequestIDs;
- (id)MMCSItemsByRecordIDs;
- (void)setRecordIDsByRequestIDs:(id)arg1;
- (id)initWithMMCSItems:(id)arg1;
- (id)requestOperationClasses;
- (id)requestDidParseProtobufObject:(id)arg1;
- (id)requestOperations;
- (int)operationType;
- (void).cxx_destruct;

@end
