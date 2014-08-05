/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class BRFieldCKInfo, NSString, NSSet, NSData, NSNumber;

@interface BRCVersion : NSObject <NSCopying, NSSecureCoding> {
    BRFieldCKInfo *_ckInfo;
    long long _mtime;
    NSString *_originalPOSIXName;
    long long _size;
    long long _thumbnailSize;
    NSData *_thumbnailSignature;
    NSData *_contentSignature;
    NSData *_xattrSignature;
    NSData *_quarantineInfo;
    NSSet *_conflictLoserEtags;
    NSData *_lazyXattr;
    NSNumber *_lastEditorDeviceKey;
    NSString *_lastEditorDeviceName;
}

@property(retain) BRFieldCKInfo * ckInfo;
@property long long mtime;
@property(retain) NSString * originalPOSIXName;
@property long long size;
@property long long thumbnailSize;
@property(retain) NSSet * conflictLoserEtags;
@property(readonly) bool isPackage;
@property(readonly) bool hasThumbnail;
@property(retain) NSData * xattrSignature;
@property(retain) NSData * lazyXattr;
@property(retain) NSData * quarantineInfo;
@property(retain) NSData * contentSignature;
@property(retain) NSData * thumbnailSignature;
@property(retain) NSNumber * lastEditorDeviceKey;
@property(retain) NSString * lastEditorDeviceName;

+ (bool)supportsSecureCoding;

- (void)setQuarantineInfo:(id)arg1;
- (id)quarantineInfo;
- (void)setLastEditorDeviceName:(id)arg1;
- (id)lastEditorDeviceName;
- (void)setLastEditorDeviceKey:(id)arg1;
- (id)lastEditorDeviceKey;
- (void)setContentSignature:(id)arg1;
- (id)contentSignature;
- (void)setThumbnailSignature:(id)arg1;
- (id)thumbnailSignature;
- (void)setThumbnailSize:(long long)arg1;
- (void)setOriginalPOSIXName:(id)arg1;
- (void)setMtime:(long long)arg1;
- (id)additionNameForItemID:(id)arg1 container:(id)arg2;
- (id)initFromResultSet:(id)arg1 pos:(int)arg2 container:(id)arg3;
- (id)displayNameWithoutExtension:(bool)arg1;
- (id)lastEditorDeviceNameWithDB:(id)arg1;
- (id)descriptionWithContext:(id)arg1;
- (void)setLazyXattr:(id)arg1;
- (id)lazyXattr;
- (void)setXattrSignature:(id)arg1;
- (id)xattrSignature;
- (void)setCkInfo:(id)arg1;
- (id)ckInfo;
- (unsigned long long)diffAgainst:(id)arg1;
- (bool)check:(id)arg1 logToFile:(struct __sFILE { char *x1; int x2; int x3; short x4; short x5; struct __sbuf { char *x_6_1_1; int x_6_1_2; } x6; int x7; void *x8; int (*x9)(); int (*x10)(); int (*x11)(); int (*x12)(); struct __sbuf { char *x_13_1_1; int x_13_1_2; } x13; struct __sFILEX {} *x14; int x15; unsigned char x16[3]; unsigned char x17[1]; struct __sbuf { char *x_18_1_1; int x_18_1_2; } x18; int x19; long long x20; }*)arg2;
- (long long)mtime;
- (void)setConflictLoserEtags:(id)arg1;
- (id)conflictLoserEtags;
- (id)initWithVersion:(id)arg1;
- (void)setSize:(long long)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)hasThumbnail;
- (long long)size;
- (id)originalPOSIXName;
- (bool)isPackage;
- (long long)thumbnailSize;

@end
