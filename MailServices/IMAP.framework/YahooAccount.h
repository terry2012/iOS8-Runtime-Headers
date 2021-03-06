/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/Message.framework/MailServices/IMAP.framework/IMAP
 */

@class NSString, NSMutableDictionary, NSRecursiveLock;

@interface YahooAccount : IMAPAccount  {
    NSRecursiveLock *_cookieLock;
    double _timeLastEncounteredAuthenticationError;
    NSString *_temporaryPassword;
    NSString *_signature;
    NSMutableDictionary *_incorrectPasswordAttemptDates;
}

+ (id)credentialKeyForCookieName:(id)arg1;
+ (id)_credentialKeysForCookieNames;
+ (id)allCookieNames;
+ (id)emailAddressWithUsername:(id)arg1;
+ (unsigned int)deliveryAccountPortNumber;
+ (bool)deliveryAccountUsesSSL;
+ (id)deliveryAccountHostname;
+ (id)emailAddressHostPart;
+ (bool)getConfigurationFromServerForEmail:(id)arg1;
+ (bool)usernameIsEmailAddress;
+ (bool)primaryDeliveryAccountIsDynamic;
+ (bool)isSSLEditable;
+ (bool)isPredefinedAccountType;
+ (id)newAccountWithDictionary:(id)arg1;
+ (bool)usesSSL;
+ (id)accountTypeIdentifier;
+ (id)displayedAccountTypeString;
+ (id)hostname;

- (id)XYMPKISignature;
- (void)cookiesExpired;
- (id)cookieForKey:(id)arg1;
- (id)_securityToken;
- (void)removeCookie:(id)arg1;
- (id)_fetchCookieForKey:(id)arg1 usingToken:(id)arg2 error:(id*)arg3;
- (void)setCookie:(id)arg1 forKey:(id)arg2;
- (int)_ParsePWTokenResponse:(id)arg1 error:(id*)arg2;
- (id)_yahooParameterForKey:(id)arg1;
- (bool)_shouldAttemptToFetchSecurityTokenWithPassword:(id)arg1;
- (id)cookieForKey:(id)arg1 error:(id*)arg2;
- (id)_fetchSecurityToken:(id)arg1 error:(id*)arg2;
- (id)_securityToken:(id*)arg1;
- (void)setXYMPKISignature:(id)arg1;
- (void)_setSecurityToken:(id)arg1;
- (unsigned long long)minUID;
- (id)iconString;
- (id)connectionForStore:(id)arg1 delegate:(id)arg2 options:(int)arg3;
- (id)saveSentFolder;
- (id)URLForMessage:(id)arg1;
- (bool)derivesDeliveryAccountInfoFromMailAccount;
- (id)transferDisabledMailboxUids;
- (id)_defaultSpecialMailboxNameForType:(int)arg1;
- (id)statisticsKind;
- (id)_deliveryAccountCreateIfNeeded:(bool)arg1;
- (id)initWithLibrary:(id)arg1 persistentAccount:(id)arg2;
- (bool)shouldDisplayHostnameInErrorMessages;
- (bool)fetchTokensIfNecessary:(id*)arg1;
- (unsigned long long)credentialAccessibility;
- (unsigned int)portNumber;
- (id)preferredAuthScheme;
- (id)displayUsername;
- (id)emailAddresses;
- (void)setPassword:(id)arg1;
- (id)hostname;
- (id)password;
- (void)dealloc;
- (Class)connectionClass;

@end
