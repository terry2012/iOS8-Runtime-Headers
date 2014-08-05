/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@class NSMutableArray, NSDate;

@interface PKCatalog : NSObject <NSSecureCoding> {
    NSMutableArray *_groups;
    NSDate *_timestamp;
}

@property(retain) NSMutableArray * groups;
@property(retain) NSDate * timestamp;

+ (id)catalogWithContentsOfURL:(id)arg1;
+ (bool)supportsSecureCoding;

- (void)shuffle:(int)arg1;
- (id)allGroupIDs;
- (bool)isNewerThanCatalog:(id)arg1;
- (bool)isEquivalentToCatalog:(id)arg1;
- (id)timestamp;
- (id)groups;
- (void)setGroups:(id)arg1;
- (void)setTimestamp:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (id)description;
- (void)writeToURL:(id)arg1 atomically:(bool)arg2;

@end
