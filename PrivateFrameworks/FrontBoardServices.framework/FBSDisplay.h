/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
 */

@class CADisplay, NSString;

@interface FBSDisplay : NSObject <BSXPCCoding, NSCopying, NSSecureCoding> {
    unsigned int _seed;
    CADisplay *_caDisplay;
    unsigned long long _type;
    long long _tags;
}

@property(retain,readonly) CADisplay * caDisplay;
@property(readonly) double scale;
@property(readonly) double orientation;
@property(readonly) unsigned long long type;
@property(readonly) long long tags;
@property unsigned int seed;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;

+ (id)_CADisplayForId:(unsigned int)arg1;
+ (bool)supportsSecureCoding;

- (double)orientation;
- (unsigned int)seed;
- (void)setConnected:(bool)arg1;
- (bool)isConnected;
- (id)initWithXPCDictionary:(id)arg1;
- (void)encodeWithXPCDictionary:(id)arg1;
- (void)setSeed:(unsigned int)arg1;
- (id)_nameForDisplayType;
- (id)initWithCADisplay:(id)arg1;
- (bool)isExternal;
- (bool)isHiddenDisplay;
- (bool)isMusicOnlyDisplay;
- (bool)isiPodOnlyDisplay;
- (bool)isAirPlayDisplay;
- (bool)isCarDisplay;
- (long long)tags;
- (bool)isMainDisplay;
- (unsigned long long)_typeFromTags:(unsigned long long)arg1;
- (id)initWithCADisplay:(id)arg1 isMainDisplay:(bool)arg2 seed:(unsigned int)arg3 tags:(long long)arg4;
- (id)initWithCADisplay:(id)arg1 isMainDisplay:(bool)arg2;
- (id)caDisplay;
- (bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (unsigned long long)type;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (double)scale;
- (id)_screen;

@end
