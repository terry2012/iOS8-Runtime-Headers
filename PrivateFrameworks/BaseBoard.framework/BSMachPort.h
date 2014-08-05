/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
 */

@class NSString;

@interface BSMachPort : NSObject <NSCopying, BSXPCCoding> {
    unsigned int _port;
    unsigned long long _sendRights;
    unsigned long long _recvRights;
    bool_invalidated;
    unsigned int _portNumber;
    NSString *_debugDescription;
}

@property(readonly) unsigned int port;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;

+ (id)wrapSendRight:(unsigned int)arg1;
+ (id)bootstrapLookUpPortWithName:(id)arg1;
+ (id)taskNamePortForPID:(int)arg1;
+ (id)createReceiveRight;
+ (id)createSendRight;

- (id)initWithSendRight:(unsigned int)arg1;
- (id)initWithPort:(unsigned int)arg1 withRights:(id)arg2;
- (bool)isUsable;
- (void)_addRight:(int)arg1;
- (id)initWithSendRight:(unsigned int)arg1 assumeOwnership:(bool)arg2;
- (id)initWithRight:(int)arg1;
- (id)initWithXPCDictionary:(id)arg1;
- (void)encodeWithXPCDictionary:(id)arg1;
- (unsigned int)port;
- (void)invalidate;
- (void)dealloc;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;

@end
