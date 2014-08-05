/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@class CKDPRecordType, NSMutableArray, CKDPRecordIdentifier;

@interface CKDPAssetUploadTokenRetrieveRequestRecordAssetUpload : PBCodable <NSCopying> {
    NSMutableArray *_assetFields;
    CKDPRecordIdentifier *_recordId;
    CKDPRecordType *_type;
}

@property(readonly) bool hasRecordId;
@property(retain) CKDPRecordIdentifier * recordId;
@property(readonly) bool hasType;
@property(retain) CKDPRecordType * type;
@property(retain) NSMutableArray * assetFields;


- (void)setAssetFields:(id)arg1;
- (id)assetFields;
- (bool)hasRecordId;
- (id)assetFieldsAtIndex:(unsigned long long)arg1;
- (void)clearAssetFields;
- (unsigned long long)assetFieldsCount;
- (void)addAssetFields:(id)arg1;
- (void)setRecordId:(id)arg1;
- (void)copyTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;
- (bool)hasType;
- (id)recordId;
- (bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)setType:(id)arg1;
- (id)type;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;

@end
