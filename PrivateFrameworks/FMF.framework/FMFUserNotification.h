/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/FMF.framework/FMF
 */

@interface FMFUserNotification : NSObject  {
}

+ (void)upselliCloudAlert;
+ (void)notLoggedIntoiCloudAlert;
+ (void)showForbiddenRegionAlert;
+ (void)showShareMyLocationiCloudSettingsOffAlert;
+ (void)showShareMyLocationSystemServiceOffAlert;
+ (void)showLocationServicesSwitchOffAlert;
+ (void)showMaxFollowersLimitReachedAlert;
+ (bool)displayiCloudUserNotificationWithTitleLocKey:(id)arg1 messageLocKey:(id)arg2 switchString:(id)arg3 doNotSwitch:(id)arg4;
+ (void)displayUserNotificationWithTitleLocKey:(id)arg1 messageLocKey:(id)arg2;
+ (bool)shouldDisplayAlerts;
+ (void)show5XXDuringStopOfferAlert;
+ (void)showNetworkOfflineDuringStopOfferAlert;
+ (bool)showSwitchMeDeviceAlertUsingCurrentMeDeviceName:(id)arg1;
+ (void)show5XXDuringStartOfferAlert;
+ (void)showActiveDeviceChangedAlert;
+ (void)showGenericErrorAlert;
+ (void)showNetworkOfflineDuringOfferAlert;
+ (void)showRestrictedAlert;


@end
