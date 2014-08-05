/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/FTServices.framework/FTServices
 */

@class NSData, NSNumber, NSString;

@interface IDSRelayInitiateMessage : IDSFaceTimeMessage <NSCopying> {
    NSData *_selfPushToken;
    NSNumber *_selfNatType;
    NSNumber *_selfNATIP;
    NSString *_peerID;
    NSData *_peerPushToken;
    NSNumber *_peerNatType;
    NSNumber *_peerNATIP;
    NSNumber *_relayType;
    NSData *_relayConnectionId;
    NSData *_relayTransactionIdAlloc;
    NSData *_relayTokenAllocReq;
    NSData *_selfRelayIP;
    NSNumber *_selfRelayPort;
    NSData *_peerRelayIP;
    NSNumber *_peerRelayPort;
}

@property(copy) NSData * selfPushToken;
@property(copy) NSNumber * selfNatType;
@property(copy) NSNumber * selfNATIP;
@property(copy) NSString * peerID;
@property(copy) NSData * peerPushToken;
@property(copy) NSNumber * peerNatType;
@property(copy) NSNumber * peerNATIP;
@property(copy) NSNumber * relayType;
@property(copy) NSData * relayConnectionId;
@property(copy) NSData * relayTransactionIdAlloc;
@property(copy) NSData * relayTokenAllocReq;
@property(copy) NSData * selfRelayIP;
@property(copy) NSNumber * selfRelayPort;
@property(copy) NSData * peerRelayIP;
@property(copy) NSNumber * peerRelayPort;


- (id)requiredKeys;
- (id)messageBody;
- (void)setPeerNatType:(id)arg1;
- (void)setSelfNatType:(id)arg1;
- (id)peerNatType;
- (id)selfNatType;
- (id)relayTokenAllocReq;
- (id)relayTransactionIdAlloc;
- (id)relayConnectionId;
- (void)setSelfNATIP:(id)arg1;
- (void)handleResponseDictionary:(id)arg1;
- (void)setRelayTokenAllocReq:(id)arg1;
- (void)setRelayTransactionIdAlloc:(id)arg1;
- (void)setRelayConnectionId:(id)arg1;
- (id)peerNATIP;
- (id)selfNATIP;
- (void)setSelfPushToken:(id)arg1;
- (id)selfPushToken;
- (void)setPeerRelayPort:(id)arg1;
- (void)setPeerRelayIP:(id)arg1;
- (void)setSelfRelayPort:(id)arg1;
- (void)setSelfRelayIP:(id)arg1;
- (void)setRelayType:(id)arg1;
- (id)peerRelayPort;
- (id)peerRelayIP;
- (id)selfRelayPort;
- (id)selfRelayIP;
- (id)relayType;
- (id)peerPushToken;
- (id)bagKey;
- (void)setPeerNATIP:(id)arg1;
- (void)setPeerPushToken:(id)arg1;
- (void)setPeerID:(id)arg1;
- (id)peerID;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { }*)arg1;

@end
