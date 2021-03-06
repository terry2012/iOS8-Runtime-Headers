/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

@class NSArray;

@interface NEDNSSettings : NSObject <NEConfigurationValidating, NEPrettyDescription, NEConfigurationLegacySupport, NSSecureCoding, NSCopying> {
    NSArray *_servers;
    NSArray *_searchDomains;
}

@property(readonly) NSArray * servers;
@property(readonly) NSArray * searchDomains;

+ (bool)supportsSecureCoding;

- (id)initWithServers:(id)arg1 andSearchDomains:(id)arg2;
- (id)searchDomains;
- (id)servers;
- (id)initFromLegacyDictionary:(id)arg1;
- (id)copyLegacyDictionary;
- (id)descriptionWithIndent:(int)arg1;
- (bool)checkValidityAndCollectErrors:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;

@end
