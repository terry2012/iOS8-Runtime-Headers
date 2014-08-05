/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/BluetoothManager.framework/BluetoothManager
 */

@class NSMutableDictionary;

@interface BluetoothManager : NSObject  {
    struct BTLocalDeviceImpl { } *_localDevice;
    struct BTSessionImpl { } *_session;
    int _available;
    bool_audioConnected;
    bool_scanningEnabled;
    bool_scanningInProgress;
    unsigned int _scanningServiceMask;
    struct BTDiscoveryAgentImpl { } *_discoveryAgent;
    struct BTPairingAgentImpl { } *_pairingAgent;
    struct BTAccessoryManagerImpl { } *_accessoryManager;
    NSMutableDictionary *_btAddrDict;
    NSMutableDictionary *_btDeviceDict;
}

+ (int)lastInitError;
+ (id)sharedInstance;

- (void)setDiscoverable:(bool)arg1;
- (void)enableTestMode;
- (bool)audioConnected;
- (id)connectedDevices;
- (id)connectingDevices;
- (void)setConnectable:(bool)arg1;
- (bool)connectable;
- (bool)isDiscoverable;
- (bool)deviceScanningInProgress;
- (bool)deviceScanningEnabled;
- (bool)wasDeviceDiscovered:(id)arg1;
- (bool)isAnyoneAdvertising;
- (bool)isAnyoneScanning;
- (void)setAudioConnected:(bool)arg1;
- (void)_advertisingChanged;
- (void)_discoveryStateChanged;
- (void)_connectabilityChanged;
- (void)_connectedStatusChanged;
- (void)_powerChanged;
- (bool)_onlySensorsConnected;
- (void)postNotificationName:(id)arg1 object:(id)arg2 error:(id)arg3;
- (void)cancelPairing;
- (bool)devicePairingEnabled;
- (void)setDevicePairingEnabled:(bool)arg1;
- (void)_removeDevice:(id)arg1;
- (id)addDeviceIfNeeded:(struct BTDeviceImpl { }*)arg1;
- (void)_restartScan;
- (void)_setScanState:(int)arg1;
- (void)scanForServices:(unsigned int)arg1;
- (void)_scanForServices:(unsigned int)arg1 withMode:(int)arg2;
- (bool)setPowered:(bool)arg1;
- (void)setDeviceScanningEnabled:(bool)arg1;
- (bool)powered;
- (int)powerState;
- (void)_postNotificationWithArray:(id)arg1;
- (void)_postNotification:(id)arg1;
- (void)_cleanup:(bool)arg1;
- (bool)_setup:(struct BTSessionImpl { }*)arg1;
- (bool)_attach:(id)arg1;
- (bool)available;
- (bool)isServiceSupported:(unsigned int)arg1;
- (bool)connected;
- (void)endVoiceCommand:(id)arg1;
- (void)startVoiceCommand:(id)arg1;
- (void)unpairDevice:(id)arg1;
- (void)acceptSSP:(long long)arg1 forDevice:(id)arg2;
- (void)setPincode:(id)arg1 forDevice:(id)arg2;
- (void)connectDevice:(id)arg1 withServices:(unsigned int)arg2;
- (void)connectDevice:(id)arg1;
- (struct BTAccessoryManagerImpl { }*)_accessoryManager;
- (void)scanForConnectableDevices:(unsigned int)arg1;
- (id)pairedDevices;
- (void)showPowerPrompt;
- (void)resetDeviceScanning;
- (bool)enabled;
- (bool)setEnabled:(bool)arg1;
- (id)init;
- (void)postNotificationName:(id)arg1 object:(id)arg2;
- (void)dealloc;
- (void)postNotification:(id)arg1;
- (id)localAddress;

@end
