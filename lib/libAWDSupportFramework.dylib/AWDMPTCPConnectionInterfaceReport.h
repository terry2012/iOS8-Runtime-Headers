/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/usr/lib/libAWDSupportFramework.dylib
 */

@class NSString;

@interface AWDMPTCPConnectionInterfaceReport : PBCodable <NSCopying> {
    struct { 
        int *list; 
        unsigned long long count; 
        unsigned long long size; 
    } _postConnectSubflowFailureErrors;
    long long _dataInKB;
    long long _dataOutKB;
    unsigned long long _timestamp;
    NSString *_interfaceName;
    int _secondaryFlowFailureCount;
    int _secondaryFlowSuccessCount;
    bool_postConnectTcpFallbackCount;
    struct { 
        unsigned int dataInKB : 1; 
        unsigned int dataOutKB : 1; 
        unsigned int timestamp : 1; 
        unsigned int secondaryFlowFailureCount : 1; 
        unsigned int secondaryFlowSuccessCount : 1; 
        unsigned int postConnectTcpFallbackCount : 1; 
    } _has;
}

@property bool hasTimestamp;
@property unsigned long long timestamp;
@property(readonly) bool hasInterfaceName;
@property(retain) NSString * interfaceName;
@property(readonly) unsigned long long postConnectSubflowFailureErrorsCount;
@property(readonly) int* postConnectSubflowFailureErrors;
@property bool hasDataInKB;
@property long long dataInKB;
@property bool hasDataOutKB;
@property long long dataOutKB;
@property bool hasSecondaryFlowSuccessCount;
@property int secondaryFlowSuccessCount;
@property bool hasSecondaryFlowFailureCount;
@property int secondaryFlowFailureCount;
@property bool hasPostConnectTcpFallbackCount;
@property bool postConnectTcpFallbackCount;


- (bool)postConnectTcpFallbackCount;
- (int)secondaryFlowFailureCount;
- (int)secondaryFlowSuccessCount;
- (long long)dataOutKB;
- (long long)dataInKB;
- (id)interfaceName;
- (bool)hasPostConnectTcpFallbackCount;
- (void)setHasPostConnectTcpFallbackCount:(bool)arg1;
- (void)setPostConnectTcpFallbackCount:(bool)arg1;
- (bool)hasSecondaryFlowFailureCount;
- (void)setHasSecondaryFlowFailureCount:(bool)arg1;
- (void)setSecondaryFlowFailureCount:(int)arg1;
- (bool)hasSecondaryFlowSuccessCount;
- (void)setHasSecondaryFlowSuccessCount:(bool)arg1;
- (void)setSecondaryFlowSuccessCount:(int)arg1;
- (bool)hasDataOutKB;
- (void)setHasDataOutKB:(bool)arg1;
- (void)setDataOutKB:(long long)arg1;
- (bool)hasDataInKB;
- (void)setHasDataInKB:(bool)arg1;
- (void)setDataInKB:(long long)arg1;
- (void)setPostConnectSubflowFailureErrors:(int*)arg1 count:(unsigned long long)arg2;
- (int*)postConnectSubflowFailureErrors;
- (bool)hasInterfaceName;
- (void)addPostConnectSubflowFailureErrors:(int)arg1;
- (int)postConnectSubflowFailureErrorsAtIndex:(unsigned long long)arg1;
- (void)clearPostConnectSubflowFailureErrors;
- (unsigned long long)postConnectSubflowFailureErrorsCount;
- (void)setInterfaceName:(id)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (bool)hasTimestamp;
- (void)copyTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;
- (unsigned long long)timestamp;
- (void)setTimestamp:(unsigned long long)arg1;
- (bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)dealloc;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;

@end
