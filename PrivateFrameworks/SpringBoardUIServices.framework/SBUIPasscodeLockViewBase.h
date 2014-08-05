/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices
 */

@class <SBFLegibilitySettingsProvider>, NSString, <SBUIPasscodeLockViewDelegate>, _UILegibilitySettings, <SBUIPasscodeLockViewDelegate_Internal>, SBUIPasscodeEntryField, UIColor;

@interface SBUIPasscodeLockViewBase : UIView <SBUIBiometricEventObserver, SBFLegibilitySettingsProviderDelegate, SBUIPasscodeLockView_Internal, SBUIPasscodeLockView> {
    <SBUIPasscodeLockViewDelegate_Internal> *_delegate;
    int _style;
    NSString *_passcode;
    bool_playsKeypadSounds;
    bool_showsEmergencyCallButton;
    bool_showsStatusField;
    bool_becameVisible;
    double _backgroundAlpha;
    UIColor *_customBackgroundColor;
    SBUIPasscodeEntryField *_entryField;
    <SBFLegibilitySettingsProvider> *_backgroundLegibilitySettingsProvider;
    double _luminanceBoost;
    double _currentBacklightLevel;
    _UILegibilitySettings *_legibilitySettings;
    bool_allowsStatusTextUpdatingOnResignFirstResponder;
    bool_mesaLockedOut;
    unsigned long long _biometricMatchMode;
    bool_deviceHasBeenUnlockedOnceSinceBoot;
    bool_shouldResetForFailedPasscodeAttempt;
    NSString *_statusText;
    NSString *_statusSubtitleText;
    unsigned long long _statusState;
}

@property int style;
@property(getter=_luminosityBoost,setter=_setLuminosityBoost:) double luminosityBoost;
@property(getter=_entryField,setter=_setEntryField:,retain) SBUIPasscodeEntryField * _entryField;
@property(getter=_statusText,copy,readonly) NSString * statusText;
@property(getter=_statusSubtitleText,copy,readonly) NSString * statusSubtitleText;
@property bool shouldResetForFailedPasscodeAttempt;
@property(getter=_statusState,setter=_setStatusState:) unsigned long long statusState;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;
@property <SBUIPasscodeLockViewDelegate> * delegate;
@property(readonly) NSString * passcode;
@property bool playsKeypadSounds;
@property bool showsStatusField;
@property bool showsEmergencyCallButton;
@property double backgroundAlpha;
@property(retain) UIColor * customBackgroundColor;
@property(retain) <SBFLegibilitySettingsProvider> * backgroundLegibilitySettingsProvider;
@property unsigned long long biometricMatchMode;


- (void)providerLegibilitySettingsChanged:(id)arg1;
- (void)setShouldResetForFailedPasscodeAttempt:(bool)arg1;
- (bool)shouldResetForFailedPasscodeAttempt;
- (void)_setEntryField:(id)arg1;
- (void)_sendDelegateKeypadKeyUp;
- (void)_sendDelegateKeypadKeyDown;
- (bool)_isBoundsPortraitOriented;
- (void)setBiometricMatchMode:(unsigned long long)arg1;
- (void)setBackgroundLegibilitySettingsProvider:(id)arg1;
- (id)backgroundLegibilitySettingsProvider;
- (void)setCustomBackgroundColor:(id)arg1;
- (id)customBackgroundColor;
- (double)backgroundAlpha;
- (bool)showsEmergencyCallButton;
- (bool)showsStatusField;
- (bool)playsKeypadSounds;
- (id)passcode;
- (void)setAllowsStatusTextUpdatingOnResignFirstResponder:(bool)arg1;
- (void)autofillForSuccessfulMesaAttemptWithCompletion:(id)arg1;
- (void)resetForFailedMesaAttemptWithStatusText:(id)arg1 andSubtitle:(id)arg2;
- (void)resetForScreenOff;
- (void)resetForFailedPasscode;
- (void)_noteDeviceHasBeenUnlockedOnceSinceBoot:(bool)arg1;
- (void)biometricEventMonitor:(id)arg1 handleBiometricEvent:(unsigned long long)arg2;
- (void)_handleBiometricEvent:(unsigned long long)arg1;
- (void)updateStatusTextForBioEvent:(unsigned long long)arg1 animated:(bool)arg2;
- (void)_notifyDelegatePasscodeEnteredViaMesa;
- (double)_luminanceBoostFromDisplayBrightness;
- (double)_luminanceBoostFromLegibility;
- (void)_screenBrightnessReallyDidChange;
- (unsigned long long)biometricMatchMode;
- (id)_statusSubtitleText;
- (id)_statusText;
- (void)_setStatusSubtitleText:(id)arg1;
- (void)_setStatusText:(id)arg1;
- (id)_defaultStatusText;
- (unsigned long long)_statusStateForLockoutState:(unsigned long long)arg1;
- (void)_setLuminosityBoost:(double)arg1;
- (double)_luminosityBoost;
- (void)_evaluateLuminance;
- (void)_luminanceBoostDidChange;
- (void)_resetStatusText;
- (id)_entryField;
- (void)updateStatusText:(id)arg1 subtitle:(id)arg2 animated:(bool)arg3;
- (void)_resetForFailedMesaAttempt;
- (void)_setStatusState:(unsigned long long)arg1;
- (unsigned long long)_statusState;
- (void)_resetForFailedPasscode:(bool)arg1;
- (void)_clearBrightnessChangeTimer;
- (void)updateStatusTextAnimated:(bool)arg1;
- (void)_noteBioMatchingEnabledDidChange;
- (void)_noteScreenBrightnessDidChange;
- (void)_updateStatusStateForLockout;
- (bool)_wantsBiometricAuthentication;
- (void)setShowsStatusField:(bool)arg1;
- (void)setShowsEmergencyCallButton:(bool)arg1;
- (void)setPlaysKeypadSounds:(bool)arg1;
- (long long)_orientation;
- (bool)resignFirstResponder;
- (bool)becomeFirstResponder;
- (void)setStyle:(int)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (int)style;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (void)dealloc;
- (void)reset;
- (void)setBackgroundAlpha:(double)arg1;
- (void)_setLegibilitySettings:(id)arg1;
- (bool)canResignFirstResponder;
- (void)willMoveToWindow:(id)arg1;
- (bool)canBecomeFirstResponder;
- (bool)isFirstResponder;
- (void)didMoveToWindow;

@end
