/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/usr/lib/libAWDSupportFramework.dylib
 */

@class NSData, NSString;

@interface AWDWifiAssociation : PBCodable <NSCopying> {
    unsigned long long _timestamp;
    NSData *_bssidOui;
    int _channel;
    int _deauthReason;
    NSData *_deauthSourceOui;
    unsigned int _error;
    NSString *_security;
    int _signal;
    struct { 
        unsigned int timestamp : 1; 
        unsigned int channel : 1; 
        unsigned int deauthReason : 1; 
        unsigned int error : 1; 
        unsigned int signal : 1; 
    } _has;
}

@property bool hasTimestamp;
@property unsigned long long timestamp;
@property bool hasError;
@property unsigned int error;
@property bool hasChannel;
@property int channel;
@property bool hasSignal;
@property int signal;
@property(readonly) bool hasBssidOui;
@property(retain) NSData * bssidOui;
@property(readonly) bool hasSecurity;
@property(retain) NSString * security;
@property bool hasDeauthReason;
@property int deauthReason;
@property(readonly) bool hasDeauthSourceOui;
@property(retain) NSData * deauthSourceOui;


- (id)deauthSourceOui;
- (int)deauthReason;
- (id)security;
- (id)bssidOui;
- (bool)hasDeauthSourceOui;
- (bool)hasDeauthReason;
- (void)setHasDeauthReason:(bool)arg1;
- (void)setDeauthReason:(int)arg1;
- (bool)hasSecurity;
- (bool)hasBssidOui;
- (bool)hasSignal;
- (void)setHasSignal:(bool)arg1;
- (void)setDeauthSourceOui:(id)arg1;
- (void)setSecurity:(id)arg1;
- (void)setBssidOui:(id)arg1;
- (int)channel;
- (bool)hasChannel;
- (void)setHasChannel:(bool)arg1;
- (void)setChannel:(int)arg1;
- (void)setHasError:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setSignal:(int)arg1;
- (bool)hasTimestamp;
- (void)copyTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;
- (bool)hasError;
- (unsigned long long)timestamp;
- (void)setTimestamp:(unsigned long long)arg1;
- (bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)setError:(unsigned int)arg1;
- (unsigned int)error;
- (void)dealloc;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (int)signal;

@end
