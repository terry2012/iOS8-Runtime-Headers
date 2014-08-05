/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/usr/lib/libAWDSupportFramework.dylib
 */

@class NSString, NSMutableArray;

@interface AWDCaptiveSession : PBCodable <NSCopying> {
    unsigned long long _timestamp;
    NSString *_appTriggeredPassiveSymptom;
    NSString *_autoLoginCarrierID;
    unsigned int _autoLoginType;
    unsigned int _durationNetworkNotCaptive;
    unsigned int _durationOnNetwork;
    NSString *_handlerCNP;
    NSMutableArray *_installedCNPDisplayIDs;
    unsigned int _passiveCaptivityCorrectDetection;
    unsigned int _passiveCaptivityIncorrectDetection;
    unsigned int _passiveCaptivitySymptom;
    unsigned int _result;
    unsigned int _websheetProbeCount;
    unsigned int _websheetScrapeResult;
    bool_autoLoginFailed;
    bool_detectedNotCaptiveHandledByCNP;
    bool_handlerCNPTriggeredLogOff;
    bool_isDetectedCaptive;
    bool_passiveCaptivityDetected;
    bool_websheetScraped;
    bool_wisprDetected;
    struct { 
        unsigned int timestamp : 1; 
        unsigned int autoLoginType : 1; 
        unsigned int durationNetworkNotCaptive : 1; 
        unsigned int durationOnNetwork : 1; 
        unsigned int passiveCaptivityCorrectDetection : 1; 
        unsigned int passiveCaptivityIncorrectDetection : 1; 
        unsigned int passiveCaptivitySymptom : 1; 
        unsigned int result : 1; 
        unsigned int websheetProbeCount : 1; 
        unsigned int websheetScrapeResult : 1; 
        unsigned int autoLoginFailed : 1; 
        unsigned int detectedNotCaptiveHandledByCNP : 1; 
        unsigned int handlerCNPTriggeredLogOff : 1; 
        unsigned int isDetectedCaptive : 1; 
        unsigned int passiveCaptivityDetected : 1; 
        unsigned int websheetScraped : 1; 
        unsigned int wisprDetected : 1; 
    } _has;
}

@property bool hasTimestamp;
@property unsigned long long timestamp;
@property bool hasResult;
@property unsigned int result;
@property bool hasWebsheetProbeCount;
@property unsigned int websheetProbeCount;
@property bool hasWebsheetScraped;
@property bool websheetScraped;
@property bool hasWebsheetScrapeResult;
@property unsigned int websheetScrapeResult;
@property(retain) NSMutableArray * installedCNPDisplayIDs;
@property(readonly) bool hasHandlerCNP;
@property(retain) NSString * handlerCNP;
@property bool hasDetectedNotCaptiveHandledByCNP;
@property bool detectedNotCaptiveHandledByCNP;
@property bool hasAutoLoginType;
@property unsigned int autoLoginType;
@property bool hasAutoLoginFailed;
@property bool autoLoginFailed;
@property(readonly) bool hasAutoLoginCarrierID;
@property(retain) NSString * autoLoginCarrierID;
@property bool hasWisprDetected;
@property bool wisprDetected;
@property bool hasPassiveCaptivityDetected;
@property bool passiveCaptivityDetected;
@property bool hasPassiveCaptivityCorrectDetection;
@property unsigned int passiveCaptivityCorrectDetection;
@property bool hasPassiveCaptivityIncorrectDetection;
@property unsigned int passiveCaptivityIncorrectDetection;
@property bool hasHandlerCNPTriggeredLogOff;
@property bool handlerCNPTriggeredLogOff;
@property bool hasIsDetectedCaptive;
@property bool isDetectedCaptive;
@property bool hasDurationOnNetwork;
@property unsigned int durationOnNetwork;
@property bool hasDurationNetworkNotCaptive;
@property unsigned int durationNetworkNotCaptive;
@property bool hasPassiveCaptivitySymptom;
@property unsigned int passiveCaptivitySymptom;
@property(readonly) bool hasAppTriggeredPassiveSymptom;
@property(retain) NSString * appTriggeredPassiveSymptom;


- (bool)hasResult;
- (id)appTriggeredPassiveSymptom;
- (unsigned int)passiveCaptivitySymptom;
- (unsigned int)durationNetworkNotCaptive;
- (unsigned int)durationOnNetwork;
- (bool)isDetectedCaptive;
- (bool)handlerCNPTriggeredLogOff;
- (unsigned int)passiveCaptivityIncorrectDetection;
- (unsigned int)passiveCaptivityCorrectDetection;
- (bool)passiveCaptivityDetected;
- (bool)wisprDetected;
- (id)autoLoginCarrierID;
- (bool)autoLoginFailed;
- (unsigned int)autoLoginType;
- (bool)detectedNotCaptiveHandledByCNP;
- (id)handlerCNP;
- (id)installedCNPDisplayIDs;
- (unsigned int)websheetScrapeResult;
- (bool)websheetScraped;
- (unsigned int)websheetProbeCount;
- (bool)hasAppTriggeredPassiveSymptom;
- (bool)hasPassiveCaptivitySymptom;
- (void)setHasPassiveCaptivitySymptom:(bool)arg1;
- (void)setPassiveCaptivitySymptom:(unsigned int)arg1;
- (bool)hasDurationNetworkNotCaptive;
- (void)setHasDurationNetworkNotCaptive:(bool)arg1;
- (void)setDurationNetworkNotCaptive:(unsigned int)arg1;
- (bool)hasDurationOnNetwork;
- (void)setHasDurationOnNetwork:(bool)arg1;
- (void)setDurationOnNetwork:(unsigned int)arg1;
- (bool)hasIsDetectedCaptive;
- (void)setHasIsDetectedCaptive:(bool)arg1;
- (void)setIsDetectedCaptive:(bool)arg1;
- (bool)hasHandlerCNPTriggeredLogOff;
- (void)setHasHandlerCNPTriggeredLogOff:(bool)arg1;
- (void)setHandlerCNPTriggeredLogOff:(bool)arg1;
- (bool)hasPassiveCaptivityIncorrectDetection;
- (void)setHasPassiveCaptivityIncorrectDetection:(bool)arg1;
- (void)setPassiveCaptivityIncorrectDetection:(unsigned int)arg1;
- (bool)hasPassiveCaptivityCorrectDetection;
- (void)setHasPassiveCaptivityCorrectDetection:(bool)arg1;
- (void)setPassiveCaptivityCorrectDetection:(unsigned int)arg1;
- (bool)hasPassiveCaptivityDetected;
- (void)setHasPassiveCaptivityDetected:(bool)arg1;
- (void)setPassiveCaptivityDetected:(bool)arg1;
- (bool)hasWisprDetected;
- (void)setHasWisprDetected:(bool)arg1;
- (void)setWisprDetected:(bool)arg1;
- (bool)hasAutoLoginCarrierID;
- (bool)hasAutoLoginFailed;
- (void)setHasAutoLoginFailed:(bool)arg1;
- (void)setAutoLoginFailed:(bool)arg1;
- (bool)hasAutoLoginType;
- (void)setHasAutoLoginType:(bool)arg1;
- (void)setAutoLoginType:(unsigned int)arg1;
- (bool)hasDetectedNotCaptiveHandledByCNP;
- (void)setHasDetectedNotCaptiveHandledByCNP:(bool)arg1;
- (void)setDetectedNotCaptiveHandledByCNP:(bool)arg1;
- (bool)hasHandlerCNP;
- (bool)hasWebsheetScrapeResult;
- (void)setHasWebsheetScrapeResult:(bool)arg1;
- (void)setWebsheetScrapeResult:(unsigned int)arg1;
- (bool)hasWebsheetScraped;
- (void)setHasWebsheetScraped:(bool)arg1;
- (void)setWebsheetScraped:(bool)arg1;
- (bool)hasWebsheetProbeCount;
- (void)setHasWebsheetProbeCount:(bool)arg1;
- (void)setWebsheetProbeCount:(unsigned int)arg1;
- (id)installedCNPDisplayIDsAtIndex:(unsigned long long)arg1;
- (void)clearInstalledCNPDisplayIDs;
- (unsigned long long)installedCNPDisplayIDsCount;
- (void)addInstalledCNPDisplayIDs:(id)arg1;
- (void)setAppTriggeredPassiveSymptom:(id)arg1;
- (void)setAutoLoginCarrierID:(id)arg1;
- (void)setHandlerCNP:(id)arg1;
- (void)setInstalledCNPDisplayIDs:(id)arg1;
- (void)setHasResult:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setResult:(unsigned int)arg1;
- (bool)hasTimestamp;
- (void)copyTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;
- (unsigned int)result;
- (unsigned long long)timestamp;
- (void)setTimestamp:(unsigned long long)arg1;
- (bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)dealloc;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;

@end
