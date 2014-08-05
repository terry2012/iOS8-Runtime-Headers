/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class AVWeakReference, NSString, NSArray, AVCaptureDeviceControlRequestQueue, NSDictionary, NSMutableDictionary, NSMutableArray, NSObject<OS_dispatch_queue>, AVCaptureDeviceFormat;

@interface AVCaptureFigVideoDevice : AVCaptureDevice  {
    NSObject<OS_dispatch_queue> *_fcsQueue;
    struct OpaqueFigCaptureSource { } *_fcs;
    NSDictionary *_fcsAttributes;
    NSObject<OS_dispatch_queue> *_devicePropsQueue;
    NSString *_fcsUID;
    long long _position;
    NSString *_localizedName;
    NSArray *_formats;
    AVCaptureDeviceFormat *_activeFormat;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    } _activeMinFrameDuration;
    bool_activeMinFrameDurationSetByClient;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    } _activeMaxFrameDuration;
    bool_activeMaxFrameDurationSetByClient;
    bool_cachesFigCaptureSourceConfigurationChanges;
    long long _focusMode;
    struct CGPoint { 
        double x; 
        double y; 
    } _focusPointOfInterest;
    float _lensPositionKVO;
    bool_adjustingFocus;
    long long _autoFocusRangeRestriction;
    bool_smoothAutoFocusEnabled;
    long long _exposureMode;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    } _exposureDurationKVO;
    float _ISOKVO;
    float _exposureTargetBias;
    float _exposureTargetOffsetKVO;
    struct CGPoint { 
        double x; 
        double y; 
    } _exposurePointOfInterest;
    bool_adjustingExposure;
    bool_waitingForExposureAdjustmentBeforeLocking;
    long long _wbMode;
    struct { 
        float redGain; 
        float greenGain; 
        float blueGain; 
    } _deviceWhiteBalanceGainsKVO;
    struct { 
        float redGain; 
        float greenGain; 
        float blueGain; 
    } _grayWorldDeviceWhiteBalanceGainsKVO;
    bool_adjustingWB;
    unsigned long long _wbCalibrationCount;
    struct { float x1; float x2; } *_wbCalibrationTemperatures;
    double **_wbCalibrationMatrices;
    double _wbLastTargetMix;
    double _wbSeedMix;
    double _wbSeedScale;
    bool_providesStortorgetMetadata;
    bool_automaticallyAdjustsImageControlMode;
    AVCaptureDeviceControlRequestQueue *_manualFocusControlRequests;
    AVCaptureDeviceControlRequestQueue *_manualExposureControlRequests;
    AVCaptureDeviceControlRequestQueue *_biasedExposureControlRequests;
    AVCaptureDeviceControlRequestQueue *_manualWhiteBalanceControlRequests;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    } _lastCustomExposureDuration;
    float _lastCustomExposureISO;
    long long _imageControlMode;
    long long _flashMode;
    bool_flashActive;
    bool_flashAvailable;
    long long _torchMode;
    bool_torchActive;
    float _torchLevel;
    bool_torchAvailable;
    bool_isConnected;
    bool_subjectMonitoringEnabled;
    bool_faceDetectionDrivenImageProcessingEnabled;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    } _faceRectangle;
    int _faceRectangleAngle;
    bool_automaticallyEnablesLowLightBoostWhenAvailable;
    bool_lowLightBoostEnabled;
    bool_highDynamicRangeSceneDetectionEnabled;
    bool_automaticallyAdjustsVideoFeature1;
    bool_videoFeature1Enabled;
    bool_sceneIsHighDynamicRange;
    float _saturation;
    float _contrast;
    long long _videoZoomDownscaleStageHint;
    long long _videoZoomUpscaleStageHint;
    float _videoZoomFactor;
    float _videoZoomRampTarget;
    int _videoZoomRampCounter;
    float _videoZoomRampAcceleration;
    bool_videoZoomDrawOverlay;
    AVWeakReference *_weakReference;
    NSMutableArray *_captureSourceSupportedMetadata;
    NSDictionary *_fdSopF;
    bool_edSopF;
    bool_ecSopF;
    bool_smSopF;
    NSArray *_availableBoxedMetadataFormatDescriptions;
    NSDictionary *_sessionPresetCompressionSettings;
    NSDictionary *_h264EncoderLimitations;
    NSObject<OS_dispatch_queue> *_observedHighFrequencyPropertiesQueue;
    NSMutableDictionary *_observedHighFrequencyPropertyCounts;
    NSMutableDictionary *_propertyToFigCaptureSourcePropertyMap;
}

+ (bool)_cameraAccessIsEnabled;
+ (id)_newFigCaptureSources;
+ (id)_devices;
+ (id)alloc;
+ (void)initialize;
+ (bool)automaticallyNotifiesObserversForKey:(id)arg1;

- (void)setVideoFeature1Enabled:(bool)arg1;
- (void)setAutomaticallyEnablesLowLightBoostWhenAvailable:(bool)arg1;
- (void)setImageControlMode:(long long)arg1;
- (void)setVideoZoomRampAcceleration:(float)arg1;
- (void)setVideoZoomFactor:(double)arg1;
- (bool)automaticallyEnablesLowLightBoostWhenAvailable;
- (long long)imageControlMode;
- (float)videoZoomRampAcceleration;
- (double)videoZoomFactor;
- (id)deviceFormatForSessionPreset:(id)arg1 videoFormat:(int)arg2;
- (bool)isSISSupported;
- (void)setVideoZoomUpscaleStageHint:(long long)arg1;
- (long long)videoZoomUpscaleStageHint;
- (void)setVideoZoomDownscaleStageHint:(long long)arg1;
- (long long)videoZoomDownscaleStageHint;
- (void)setVideoZoomDrawOverlay:(bool)arg1;
- (bool)videoZoomDrawOverlay;
- (void)_drainManualControlRequestQueue:(id)arg1;
- (void)_setLowLightBoostEnabled:(bool)arg1;
- (void)_setVideoZoomFactor:(double)arg1;
- (void)_setHighDynamicRangeScene:(bool)arg1;
- (void)_setImageControlMode:(long long)arg1;
- (void)_setTorchLevel:(float)arg1;
- (void)_setTorchAvailable:(bool)arg1;
- (void)_setTorchActive:(bool)arg1;
- (void)_setFlashAvailable:(bool)arg1;
- (void)_setAdjustingWhiteBalance:(bool)arg1;
- (void)_setAdjustingExposure:(bool)arg1;
- (void)_setAdjustingFocus:(bool)arg1;
- (id)_faceDetectionConfigurationDictionary;
- (int)_setFaceDetectionFeatureEnabled:(bool)arg1 enabledState:(bool*)arg2;
- (id)_supportedOptionalFaceDetectionFeaturesDictionary;
- (int)_setTorchMode:(long long)arg1 withLevel:(float)arg2;
- (void)_setFlashActive:(bool)arg1;
- (struct { float x1; float x2; float x3; })_deviceWhiteBalanceGainsForChromaticityValues:(struct { float x1; float x2; })arg1 temperature:(float)arg2;
- (struct { float x1; float x2; })_chromaticityValuesForDeviceWhiteBalanceGains:(struct { float x1; float x2; float x3; })arg1 atMix:(double)arg2;
- (double)_predictedMixForGains:(struct { float x1; float x2; float x3; })arg1;
- (bool)_ensureWhiteBalanceCalibrationUnpacked;
- (int)_setWhiteBalanceWithMode:(long long)arg1 gains:(struct { float x1; float x2; float x3; })arg2 requestID:(int)arg3;
- (int)_setExposureWithMode:(long long)arg1 duration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2 ISO:(float)arg3 requestID:(int)arg4 newMaxFrameDuration:(struct { long long x1; int x2; unsigned int x3; long long x4; }*)arg5;
- (void)_handleManualControlCompletionForRequestQueue:(id)arg1 withPayload:(id)arg2;
- (bool)_hasKeyValueObserversForHighFrequencyProperty:(id)arg1;
- (int)_setFocusWithMode:(long long)arg1 lensPosition:(float)arg2 requestID:(int)arg3;
- (int)_setActiveVideoMinFrameDurationInternal:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (int)_setActiveVideoMaxFrameDurationInternal:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)_performBlockOnMainThread:(id)arg1;
- (void)_drainManualControlRequestQueues;
- (int)_setFigCaptureSourceProperty:(struct __CFString { }*)arg1 withValue:(id)arg2;
- (void)_updateFigCaptureSourceObserverCounts;
- (void)removeObserver:(id)arg1 forKeyPath:(id)arg2 context:(void*)arg3;
- (void)_decrementObserverCountForHighFrequencyProperty:(id)arg1;
- (void)_incrementObserverCountForHighFrequencyProperty:(id)arg1;
- (id)_copyFormatsArray;
- (id)_copyFigCaptureSourceProperty:(struct __CFString { }*)arg1;
- (void)_setFigCaptureSource:(struct OpaqueFigCaptureSource { }*)arg1;
- (id)_initWithFigCaptureSource:(struct OpaqueFigCaptureSource { }*)arg1;
- (void)_handleNotification:(struct __CFString { }*)arg1 payload:(id)arg2;
- (struct OpaqueFigCaptureSource { }*)figCaptureSource;
- (struct { int x1; int x2; })maxH264VideoDimensions;
- (struct { int x1; int x2; })maxH264PhotoDimensions;
- (id)AVVideoSettingsForSessionPreset:(id)arg1;
- (id)availableBoxedMetadataFormatDescriptions;
- (bool)bitSortFields;
- (bool)attributedIntegerList;
- (bool)testViewProvider;
- (void)setBitSortFields:(bool)arg1;
- (void)setAttributedIntegerList:(bool)arg1;
- (void)setTestViewProvider:(bool)arg1;
- (id)supportedMetadataObjectIdentifiers;
- (bool)isLowLightBoostEnabled;
- (bool)isLowLightBoostSupported;
- (bool)isRawStillImageCaptureSupported;
- (bool)isHDRSupported;
- (void)cancelVideoZoomRamp;
- (bool)isRampingVideoZoom;
- (void)rampToVideoZoomFactor:(double)arg1 withRate:(float)arg2;
- (void)setSaturation:(float)arg1;
- (float)saturation;
- (bool)isVideoFeature1Enabled;
- (void)setAutomaticallyAdjustsVideoFeature1:(bool)arg1;
- (bool)automaticallyAdjustsVideoFeature1;
- (void)setAutomaticallyAdjustsImageControlMode:(bool)arg1;
- (bool)automaticallyAdjustsImageControlMode;
- (bool)isImageControlModeSupported:(long long)arg1;
- (struct { float x1; float x2; float x3; })deviceWhiteBalanceGainsForTemperatureAndTintValues:(struct { float x1; float x2; })arg1;
- (struct { float x1; float x2; })temperatureAndTintValuesForDeviceWhiteBalanceGains:(struct { float x1; float x2; float x3; })arg1;
- (struct { float x1; float x2; float x3; })deviceWhiteBalanceGainsForChromaticityValues:(struct { float x1; float x2; })arg1;
- (struct { float x1; float x2; })chromaticityValuesForDeviceWhiteBalanceGains:(struct { float x1; float x2; float x3; })arg1;
- (void)setWhiteBalanceModeLockedWithDeviceWhiteBalanceGains:(struct { float x1; float x2; float x3; })arg1 completionHandler:(id)arg2;
- (float)maxWhiteBalanceGain;
- (struct { float x1; float x2; float x3; })grayWorldDeviceWhiteBalanceGains;
- (struct { float x1; float x2; float x3; })deviceWhiteBalanceGains;
- (bool)isAdjustingWhiteBalance;
- (void)setWhiteBalanceMode:(long long)arg1;
- (long long)whiteBalanceMode;
- (bool)isWhiteBalanceModeSupported:(long long)arg1;
- (bool)isAdjustingExposure;
- (void)setExposureTargetBias:(float)arg1 completionHandler:(id)arg2;
- (float)maxExposureTargetBias;
- (float)minExposureTargetBias;
- (float)exposureTargetBias;
- (float)exposureTargetOffset;
- (void)setExposureModeCustomWithDuration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 ISO:(float)arg2 completionHandler:(id)arg3;
- (float)ISODigitalThreshold;
- (float)ISO;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })exposureDuration;
- (void)setExposurePointOfInterest:(struct CGPoint { double x1; double x2; })arg1;
- (struct CGPoint { double x1; double x2; })exposurePointOfInterest;
- (bool)isExposurePointOfInterestSupported;
- (void)setExposureMode:(long long)arg1;
- (long long)exposureMode;
- (bool)isExposureModeSupported:(long long)arg1;
- (float)lensAperture;
- (void)setFocusModeLockedWithLensPosition:(float)arg1 completionHandler:(id)arg2;
- (float)lensPosition;
- (void)setSmoothAutoFocusEnabled:(bool)arg1;
- (bool)isSmoothAutoFocusEnabled;
- (bool)isSmoothAutoFocusSupported;
- (void)setAutoFocusRangeRestriction:(long long)arg1;
- (long long)autoFocusRangeRestriction;
- (bool)isAutoFocusRangeRestrictionSupported;
- (void)setFocusPointOfInterest:(struct CGPoint { double x1; double x2; })arg1;
- (bool)isAdjustingFocus;
- (struct CGPoint { double x1; double x2; })focusPointOfInterest;
- (bool)isFocusPointOfInterestSupported;
- (void)setFocusMode:(long long)arg1;
- (long long)focusMode;
- (bool)isFocusModeSupported:(long long)arg1;
- (bool)setTorchModeOnWithLevel:(float)arg1 error:(id*)arg2;
- (void)setTorchMode:(long long)arg1;
- (long long)torchMode;
- (bool)isTorchActive;
- (bool)isTorchAvailable;
- (bool)isTorchModeSupported:(long long)arg1;
- (float)torchLevel;
- (bool)hasTorch;
- (void)setFlashMode:(long long)arg1;
- (long long)flashMode;
- (bool)isFlashModeSupported:(long long)arg1;
- (bool)isFlashActive;
- (bool)isFlashAvailable;
- (bool)hasFlash;
- (void)unlockForConfiguration;
- (bool)lockForConfiguration:(id*)arg1;
- (bool)isLockedForConfiguration;
- (struct OpaqueCMClock { }*)deviceClock;
- (bool)isActiveVideoMaxFrameDurationSet;
- (void)setActiveVideoMaxFrameDuration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setActiveVideoMinFrameDuration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setActiveFormat:(id)arg1;
- (id)formats;
- (bool)isInUseByAnotherApplication;
- (bool)isMachineReadableCodeDetectionSupported;
- (void)_setStillImageStabilizationAutomaticallyEnabled:(bool)arg1;
- (void)_setVideoFeature1Enabled:(bool)arg1;
- (bool)cachesFigCaptureSourceConfigurationChanges;
- (void)setCachesFigCaptureSourceConfigurationChanges:(bool)arg1;
- (bool)isHighDynamicRangeScene;
- (void)setHighDynamicRangeSceneDetectionEnabled:(bool)arg1;
- (bool)isHighDynamicRangeSceneDetectionEnabled;
- (bool)isHighDynamicRangeSceneDetectionSupported;
- (void)setProvidesStortorgetMetadata:(bool)arg1;
- (bool)providesStortorgetMetadata;
- (int)faceRectangleAngle;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })faceRectangle;
- (void)setFaceDetectionDrivenImageProcessingEnabled:(bool)arg1;
- (bool)isFaceDetectionDrivenImageProcessingEnabled;
- (bool)isFaceDetectionDuringVideoPreviewSupported;
- (bool)isFaceDetectionSupported;
- (void)setSubjectAreaChangeMonitoringEnabled:(bool)arg1;
- (bool)isSubjectAreaChangeMonitoringEnabled;
- (bool)supportsAVCaptureSessionPreset:(id)arg1;
- (bool)hasMediaType:(id)arg1;
- (id)modelID;
- (bool)isCircularTestSupported;
- (bool)isECNotificationSupported;
- (bool)isEndianQualificationSupported;
- (bool)isActiveVideoMinFrameDurationSet;
- (void)_setActiveVideoMaxFrameDuration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })activeVideoMaxFrameDuration;
- (void)_setActiveVideoMinFrameDuration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })activeVideoMinFrameDuration;
- (bool)isVideoStabilizationSupported;
- (id)activeFormat;
- (void)removeObserver:(id)arg1 forKeyPath:(id)arg2;
- (void)addObserver:(id)arg1 forKeyPath:(id)arg2 options:(unsigned long long)arg3 context:(void*)arg4;
- (id)localizedName;
- (id)uniqueID;
- (bool)isConnected;
- (id)init;
- (void)dealloc;
- (long long)position;
- (float)contrast;
- (void)setContrast:(float)arg1;

@end
