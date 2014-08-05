/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class OISFUDataRepresentation<SFUZipArchiveDataRepresentation>, OISFUCryptoKey;

@interface OISFUZipEntry : OISFUDataRepresentation  {
    OISFUDataRepresentation<SFUZipArchiveDataRepresentation> *mArchiveDataRepresentation;
    int mCompressionMethod;
    unsigned long long mCompressedSize;
    unsigned long long mUncompressedSize;
    unsigned long long mOffset;
    unsigned int mCrc;
    unsigned long long mDataOffset;
    boolmHasDataOffset;
    unsigned long long mEncodedLength;
    boolmHasEncodedLength;
    OISFUCryptoKey *mCryptoKey;
}


- (void)setDataLength:(long long)arg1;
- (void)setCryptoKey:(id)arg1;
- (void)readZip64ExtraField:(const char *)arg1 size:(unsigned long long)arg2;
- (unsigned int)crc;
- (unsigned long long)backingFileDataOffset;
- (id)backingFilePath;
- (void)copyToFile:(id)arg1;
- (long long)encodedLength;
- (id)initWithDataRepresentation:(id)arg1 compressionMethod:(int)arg2 compressedSize:(unsigned long long)arg3 uncompressedSize:(unsigned long long)arg4 offset:(unsigned long long)arg5 crc:(unsigned int)arg6;
- (id)initFromCentralFileHeader:(const char *)arg1 dataRepresentation:(id)arg2;
- (bool)isBackedByFile;
- (unsigned long long)calculateEncodedLength;
- (unsigned long long)dataOffset;
- (void)setCompressionFlags:(unsigned short)arg1;
- (long long)dataLength;
- (id)inputStream;
- (bool)isEncrypted;
- (bool)isCompressed;
- (bool)isReadable;
- (id)data;
- (void)dealloc;

@end
