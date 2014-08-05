/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
 */

@class NSString, NSDate;

@interface MSASComment : NSObject  {
    bool_isLike;
    bool_isCaption;
    bool_isBatchComment;
    bool_isDeletable;
    bool_isMine;
    int _ID;
    NSString *_GUID;
    NSDate *_timestamp;
    NSDate *_clientTimestamp;
    NSString *_personID;
    NSString *_firstName;
    NSString *_lastName;
    NSString *_fullName;
    NSString *_email;
    NSString *_content;
}

@property(retain) NSString * GUID;
@property int ID;
@property(retain) NSDate * timestamp;
@property(retain) NSDate * clientTimestamp;
@property(retain) NSString * email;
@property(retain) NSString * personID;
@property(retain) NSString * fullName;
@property(retain) NSString * firstName;
@property(retain) NSString * lastName;
@property bool isDeletable;
@property bool isMine;
@property bool isLike;
@property bool isCaption;
@property bool isBatchComment;
@property(retain) NSString * content;

+ (id)MSASPCommentFromProtocolDictionary:(id)arg1;
+ (id)comment;
+ (bool)supportsSecureCoding;

- (void)setIsBatchComment:(bool)arg1;
- (void)setIsCaption:(bool)arg1;
- (void)setClientTimestamp:(id)arg1;
- (bool)isBatchComment;
- (bool)isCaption;
- (id)clientTimestamp;
- (void)setIsMine:(bool)arg1;
- (bool)isMine;
- (void)setIsDeletable:(bool)arg1;
- (bool)isDeletable;
- (void)setFullName:(id)arg1;
- (void)setGUID:(id)arg1;
- (id)personID;
- (void)setEmail:(id)arg1;
- (void)setID:(int)arg1;
- (void)setPersonID:(id)arg1;
- (bool)isLike;
- (void)setIsLike:(bool)arg1;
- (void)setContent:(id)arg1;
- (id)timestamp;
- (void)setLastName:(id)arg1;
- (void)setFirstName:(id)arg1;
- (id)lastName;
- (id)firstName;
- (id)fullName;
- (void)setTimestamp:(id)arg1;
- (id)email;
- (id)GUID;
- (int)ID;
- (id)content;
- (id)init;
- (bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void).cxx_destruct;
- (id)description;

@end
