/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/FTServices.framework/FTServices
 */

@class NSData, NSString, NSNumber;

@interface IDSRelayUpdateMessage : IDSFaceTimeMessage <NSCopying> {
    NSData *_selfPushToken;
    NSData *_selfRelayBlob;
    NSString *_peerID;
    NSData *_peerPushToken;
    NSNumber *_relayType;
    NSData *_relayConnectionID;
    NSData *_relayTransactionIDAlloc;
    NSData *_relayTokenAllocRes;
    NSData *_selfRelayIP;
    NSNumber *_selfRelayPort;
    NSData *_selfRelayNATIP;
    NSNumber *_selfRelayNATPort;
    NSData *_peerRelayIP;
    NSNumber *_peerRelayPort;
}

@property(copy) NSData * selfPushToken;
@property(copy) NSData * selfRelayBlob;
@property(copy) NSString * peerID;
@property(copy) NSData * peerPushToken;
@property(copy) NSNumber * relayType;
@property(copy) NSData * relayConnectionID;
@property(copy) NSData * relayTransactionIDAlloc;
@property(copy) NSData * relayTokenAllocRes;
@property(copy) NSData * selfRelayIP;
@property(copy) NSNumber * selfRelayPort;
@property(copy) NSData * selfRelayNATIP;
@property(copy) NSNumber * selfRelayNATPort;
@property(copy) NSData * peerRelayIP;
@property(copy) NSNumber * peerRelayPort;


- (id)requiredKeys;
- (id)messageBody;
- (void)setSelfRelayNATPort:(id)arg1;
- (void)setSelfRelayNATIP:(id)arg1;
- (void)setRelayTokenAllocRes:(id)arg1;
- (void)setRelayTransactionIDAlloc:(id)arg1;
- (void)setSelfRelayBlob:(id)arg1;
- (void)setSelfPushToken:(id)arg1;
- (id)selfRelayBlob;
- (id)selfRelayNATPort;
- (id)selfRelayNATIP;
- (id)relayTokenAllocRes;
- (id)relayTransactionIDAlloc;
- (id)selfPushToken;
- (void)setPeerRelayPort:(id)arg1;
- (void)setPeerRelayIP:(id)arg1;
- (void)setSelfRelayPort:(id)arg1;
- (void)setSelfRelayIP:(id)arg1;
- (void)setRelayConnectionID:(id)arg1;
- (void)setRelayType:(id)arg1;
- (id)peerRelayPort;
- (id)peerRelayIP;
- (id)selfRelayPort;
- (id)selfRelayIP;
- (id)relayConnectionID;
- (id)relayType;
- (id)peerPushToken;
- (id)bagKey;
- (void)setPeerPushToken:(id)arg1;
- (void)setPeerID:(id)arg1;
- (id)peerID;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { }*)arg1;

@end
