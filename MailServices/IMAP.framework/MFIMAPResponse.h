/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/Message.framework/MailServices/IMAP.framework/IMAP
 */

@class MFIMAPFetchResult, NSString, NSDictionary, NSArray, MFIMAPResponseConsumer;

@interface MFIMAPResponse : NSObject  {
    unsigned int _responseType : 8;
    NSString *_tag;
    NSDictionary *_keyValuePairs;
    union _IMAPResponseData { 
        struct { 
            int responseCode; 
            id responseInfoAndOrUserData; 
        } basic; 
        NSArray *capabilities; 
        unsigned long long number; 
        NSArray *flags; 
        struct { 
            NSString *mailboxName; 
            NSDictionary *entries; 
        } status; 
        NSArray *searchResults; 
        struct { 
            unsigned long long mailboxAttributes; 
            id separatorAndOrMboxName; 
            NSArray *extraAttributes; 
        } list; 
        struct { 
            unsigned long long number; 
            NSArray *items; 
            unsigned long long modSeqNumber; 
        } fetch; 
        struct { 
            NSString *mailboxName; 
            NSArray *quotaRootNames; 
        } quotaRoot; 
        struct { 
            NSString *quotaRootName; 
            NSArray *quotas; 
        } quota; 
        struct { 
            NSString *uids; 
            MFIMAPFetchResult *flagsFetchResult; 
            unsigned int change : 1; 
        } uidFlags; 
        NSDictionary *serverInfo; 
        struct { 
            NSString *name; 
            NSArray *parameters; 
        } other; 
    } _data;
    MFIMAPResponseConsumer *_responseConsumer;
}

@property(retain) MFIMAPResponseConsumer * responseConsumer;


- (id)responseConsumer;
- (void)setResponseName:(id)arg1 parameters:(id)arg2;
- (id)keyValuePairs;
- (void)setQuotaRootName:(id)arg1 quotas:(id)arg2;
- (void)setMailboxName:(id)arg1 quotaRootNames:(id)arg2;
- (void)setMailboxAttributes:(unsigned long long)arg1 separator:(id)arg2 mailboxName:(id)arg3 extraAttributes:(id)arg4;
- (void)setMailboxName:(id)arg1 statusEntries:(id)arg2;
- (void)setUserData:(id)arg1 responseCode:(int)arg2 responseInfo:(id)arg3;
- (bool)isAlertResponse;
- (void)setResponseConsumer:(id)arg1;
- (id)responseName;
- (id)flagsFetchResult;
- (int)uidFlagsChange;
- (id)quotaRootName;
- (id)quotaRootNames;
- (id)statusEntries;
- (bool)isResponseWithCode:(int)arg1;
- (id)uids;
- (void)setSearchResults:(id)arg1;
- (void)setFlagsFetchResult:(id)arg1;
- (void)setUids:(id)arg1;
- (void)setUidFlagsChange:(int)arg1;
- (id)searchResults;
- (id)quotas;
- (id)mailboxName;
- (unsigned long long)mailboxAttributes;
- (id)initWithConnection:(id)arg1 responseConsumer:(id)arg2;
- (id)responseInfo;
- (id)userString;
- (id)serverInfo;
- (void)setFetchResults:(id)arg1;
- (void)setResponseType:(int)arg1;
- (id)fetchResults;
- (int)responseType;
- (bool)isUntagged;
- (id)fetchResultWithType:(int)arg1;
- (id)permanentTag;
- (void)setServerInfo:(id)arg1;
- (id)capabilities;
- (void)setCapabilities:(id)arg1;
- (int)responseCode;
- (id)parameters;
- (unsigned long long)number;
- (void)setNumber:(unsigned long long)arg1;
- (id)extraAttributes;
- (id)separator;
- (id)tag;
- (void)setFlags:(id)arg1;
- (id)initWithString:(id)arg1;
- (void)setValue:(id)arg1 forKey:(id)arg2;
- (void)dealloc;
- (id)description;
- (id)flags;
- (id)userData;
- (void)setTag:(id)arg1;

@end
