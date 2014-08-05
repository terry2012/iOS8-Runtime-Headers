/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/IMDaemonCore.framework/IMDaemonCore
 */

@class IMMessageItem, NSString, NSRecursiveLock, NSArray, IMDService, NSMutableDictionary, NSDictionary, IMDServiceSession, IMDAccount;

@interface IMDChat : NSObject  {
    NSRecursiveLock *_lock;
    NSString *_accountID;
    NSString *_serviceName;
    NSDictionary *_properties;
    NSString *_chatIdentifier;
    NSString *_guid;
    NSString *_groupID;
    NSString *_roomName;
    NSString *_displayName;
    NSString *_lastAddressedLocalHandle;
    NSArray *_participants;
    IMMessageItem *_lastMessage;
    NSMutableDictionary *_chatInfo;
    long long _state;
    unsigned char _style;
    unsigned long long _unreadCount;
    long long _rowID;
    bool_isArchived;
}

@property(copy) NSString * guid;
@property(copy) NSString * chatIdentifier;
@property(copy) NSString * accountID;
@property(copy) NSString * serviceName;
@property(copy) NSArray * participants;
@property unsigned char style;
@property long long state;
@property unsigned long long unreadCount;
@property long long rowID;
@property(copy) NSString * roomName;
@property(copy) NSString * displayName;
@property(copy) NSString * groupID;
@property(retain,readonly) IMDServiceSession * serviceSession;
@property(retain,readonly) IMDAccount * account;
@property(retain,readonly) IMDService * service;
@property(retain) NSDictionary * properties;
@property(retain) IMMessageItem * lastMessage;
@property(copy) NSString * lastAddressedLocalHandle;
@property(retain,readonly) NSDictionary * dictionaryRepresentation;
@property(retain,readonly) NSDictionary * chatProperties;
@property(readonly) bool isArchived;


- (void)updateDisplayName:(id)arg1;
- (void)updateLastAddressedHandle:(id)arg1;
- (void)updateGroupID:(id)arg1;
- (void)updateProperties:(id)arg1;
- (void)_updateLastMessage:(id)arg1;
- (id)chatProperties;
- (id)serviceSession;
- (void)removeParticipant:(id)arg1;
- (void)_setRowID:(long long)arg1;
- (void)_setUnreadCount:(unsigned long long)arg1;
- (id)initWithAccountID:(id)arg1 service:(id)arg2 guid:(id)arg3 groupID:(id)arg4 chatIdentifier:(id)arg5 participants:(id)arg6 roomName:(id)arg7 displayName:(id)arg8 lastAddressedLocalHandle:(id)arg9 properties:(id)arg10 state:(long long)arg11 style:(unsigned char)arg12;
- (id)lastAddressedLocalHandle;
- (void)storeAndBroadcastChatChanges;
- (void)setLastMessage:(id)arg1;
- (id)copyDictionaryRepresentation:(bool)arg1;
- (void)removeParticipants:(id)arg1;
- (void)addParticipants:(id)arg1;
- (void)_updateCachedParticipants;
- (void)setChatIdentifier:(id)arg1;
- (void)setLastAddressedLocalHandle:(id)arg1;
- (void)setParticipants:(id)arg1;
- (void)addParticipant:(id)arg1;
- (id)chatIdentifier;
- (id)lastMessage;
- (id)participants;
- (unsigned long long)unreadCount;
- (void)setServiceName:(id)arg1;
- (long long)rowID;
- (void)setGroupID:(id)arg1;
- (id)groupID;
- (void)setProperties:(id)arg1;
- (void)setDisplayName:(id)arg1;
- (id)account;
- (void)setRoomName:(id)arg1;
- (void)setAccountID:(id)arg1;
- (id)accountID;
- (void)setGuid:(id)arg1;
- (id)guid;
- (id)roomName;
- (void)setStyle:(unsigned char)arg1;
- (id)service;
- (unsigned char)style;
- (id)properties;
- (void)setState:(long long)arg1;
- (long long)state;
- (void)dealloc;
- (id)description;
- (id)serviceName;
- (id)displayName;
- (id)dictionaryRepresentation;
- (bool)isArchived;

@end
