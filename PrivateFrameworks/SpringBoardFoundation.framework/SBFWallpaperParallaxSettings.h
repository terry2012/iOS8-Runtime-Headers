/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
 */

@interface SBFWallpaperParallaxSettings : SBFParallaxSettings  {
    double _overhangX;
    double _overhangY;
    double _perspectiveTransform;
}

@property double overhangX;
@property double overhangY;
@property double perspectiveTransform;

+ (struct CGSize { double x1; double x2; })_requiredOverhangSizeForCurrentDevice;
+ (struct CGSize { double x1; double x2; })overhangSizeForCurrentDevice;
+ (struct CGSize { double x1; double x2; })minimumWallpaperSizeForCurrentDevice;
+ (struct CGSize { double x1; double x2; })bestWallpaperSizeForParallaxFactor:(double)arg1;
+ (id)settingsControllerModule;

- (double)overhangY;
- (double)overhangX;
- (void)setOverhangY:(double)arg1;
- (void)setOverhangX:(double)arg1;
- (void)setPerspectiveTransform:(double)arg1;
- (double)perspectiveTransform;
- (void)setDefaultValues;

@end
