/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/FTServices.framework/FTServices
 */

@class NSData, NSString, NSNumber;

@interface IDSRejectMessage : IDSFaceTimeMessage <NSCopying> {
    NSData *_selfPushToken;
    NSData *_peerPushToken;
    NSString *_peerID;
    NSNumber *_reason;
}

@property(copy) NSData * peerPushToken;
@property(copy) NSData * selfPushToken;
@property(copy) NSString * peerID;
@property(copy) NSNumber * reason;


- (id)requiredKeys;
- (id)messageBody;
- (void)setSelfPushToken:(id)arg1;
- (id)selfPushToken;
- (id)peerPushToken;
- (id)bagKey;
- (void)setPeerPushToken:(id)arg1;
- (void)setPeerID:(id)arg1;
- (id)peerID;
- (void)setReason:(id)arg1;
- (id)reason;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { }*)arg1;

@end
