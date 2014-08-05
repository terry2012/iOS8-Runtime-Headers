/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

@class NSSet, NSDictionary;

@interface CoreDAVPrincipalPropertySearchTask : CoreDAVPropertyFindBaseTask  {
    NSSet *_searchItems;
    bool_applyToPrincipalCollectionSet;
    NSDictionary *_extraAttributes;
}

@property(retain) NSSet * searchItems;
@property(retain) NSDictionary * extraAttributes;
@property bool applyToPrincipalCollectionSet;


- (bool)applyToPrincipalCollectionSet;
- (id)initWithPropertySearches:(id)arg1 propertiesToFind:(id)arg2 atURL:(id)arg3 applyToPrincipalCollectionSet:(bool)arg4 extraAttributes:(id)arg5;
- (void)setApplyToPrincipalCollectionSet:(bool)arg1;
- (id)initWithPropertiesToFind:(id)arg1 atURL:(id)arg2;
- (id)requestBody;
- (id)httpMethod;
- (void)finishCoreDAVTaskWithError:(id)arg1;
- (void)setExtraAttributes:(id)arg1;
- (id)extraAttributes;
- (void)dealloc;
- (void)setSearchItems:(id)arg1;
- (id)searchItems;

@end
