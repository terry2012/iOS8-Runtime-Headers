/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSString, SALocation, NSArray;

@interface SAAnswerSearch : SADomainCommand  {
}

@property(retain) SALocation * address;
@property(copy) NSString * attribute;
@property(copy) NSString * miscQuestion;
@property(copy) NSString * placeAttribute;
@property(copy) NSArray * product;
@property(copy) NSString * timeQuestion;
@property(copy) NSString * verbType;

+ (id)searchWithDictionary:(id)arg1 context:(id)arg2;
+ (id)search;

- (void)setVerbType:(id)arg1;
- (id)verbType;
- (void)setTimeQuestion:(id)arg1;
- (id)timeQuestion;
- (void)setProduct:(id)arg1;
- (id)product;
- (void)setPlaceAttribute:(id)arg1;
- (id)placeAttribute;
- (void)setMiscQuestion:(id)arg1;
- (id)miscQuestion;
- (void)setAttribute:(id)arg1;
- (bool)requiresResponse;
- (id)encodedClassName;
- (void)setAddress:(id)arg1;
- (id)attribute;
- (id)groupIdentifier;
- (id)address;

@end
