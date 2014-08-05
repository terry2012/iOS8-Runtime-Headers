/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

@class NSArray, NEConfiguration, NEConfigurationManager, NSString, NEContentFilterPlugin;

@interface NEFilterManager : NSObject  {
    bool_hasLoaded;
    NSArray *_entitlements;
    NEConfiguration *_configuration;
    NEConfigurationManager *_configurationManager;
}

@property(copy) NSString * localizedDescription;
@property(retain) NEContentFilterPlugin * pluginConfiguration;
@property(getter=isEnabled) bool enabled;
@property bool hasLoaded;
@property(retain) NSArray * entitlements;
@property(retain) NEConfiguration * configuration;
@property(readonly) NEConfigurationManager * configurationManager;

+ (id)sharedManager;

- (void)saveToPreferencesWithCompletionHandler:(id)arg1;
- (void)removeFromPreferencesWithCompletionHandler:(id)arg1;
- (id)pluginConfiguration;
- (void)setHasLoaded:(bool)arg1;
- (id)configurationManager;
- (void)setEntitlements:(id)arg1;
- (id)initFilterManager;
- (void)createEmptyConfiguration;
- (void)loadFromPreferencesWithCompletionHandler:(id)arg1;
- (bool)hasLoaded;
- (void)setPluginConfiguration:(id)arg1;
- (void)setEnabled:(bool)arg1;
- (bool)isEnabled;
- (id)entitlements;
- (id)init;
- (id)localizedDescription;
- (id)configuration;
- (void).cxx_destruct;
- (void)setLocalizedDescription:(id)arg1;
- (void)setConfiguration:(id)arg1;

@end
