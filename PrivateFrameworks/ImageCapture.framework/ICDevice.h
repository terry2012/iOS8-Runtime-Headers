/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
 */

@class NSString, <ICDeviceDelegate>, DeviceManager;

@interface ICDevice : NSObject  {
    void *_deviceProperties;
}

@property <ICDeviceDelegate> * delegate;
@property(copy) NSString * name;
@property(copy) NSString * productKind;
@property(readonly) struct CGImage { }* icon;
@property(copy) NSString * transportType;
@property(copy) NSString * UUIDString;
@property bool hasOpenSession;
@property int usbLocationID;
@property int usbProductID;
@property int usbVendorID;
@property DeviceManager * deviceManager;
@property bool autoOpenSession;
@property bool openSessionPending;
@property bool closeSessionPending;


- (void)handleImageCaptureEventNotification:(id)arg1;
- (void)handleCommandCompletionNotification:(id)arg1;
- (void)requestCloseSession;
- (void)requestOpenSession;
- (void)setCloseSessionPending:(bool)arg1;
- (bool)closeSessionPending;
- (void)setOpenSessionPending:(bool)arg1;
- (bool)openSessionPending;
- (void)setAutoOpenSession:(bool)arg1;
- (bool)autoOpenSession;
- (void)setHasOpenSession:(bool)arg1;
- (bool)hasOpenSession;
- (void)setUsbVendorID:(int)arg1;
- (int)usbVendorID;
- (void)setUsbProductID:(int)arg1;
- (int)usbProductID;
- (void)setUsbLocationID:(int)arg1;
- (int)usbLocationID;
- (id)productKind;
- (void)setDeviceManager:(id)arg1;
- (id)deviceManager;
- (void)setUUIDString:(id)arg1;
- (void)setProductKind:(id)arg1;
- (void)setTransportType:(id)arg1;
- (id)transportType;
- (struct CGImage { }*)icon;
- (void)setName:(id)arg1;
- (id)init;
- (void)setDelegate:(id)arg1;
- (id)name;
- (id)UUIDString;
- (id)delegate;
- (void)finalize;
- (void)dealloc;
- (id)description;
- (id)valueForUndefinedKey:(id)arg1;
- (bool)isCameraDevice;

@end
