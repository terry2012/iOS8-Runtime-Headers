/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
 */

@class UIImage, NSMutableSet, SBFColorBoxes;

@interface SBFStaticWallpaperView : SBFWallpaperView  {
    NSMutableSet *_mappedBackdropKeys;
    UIImage *_image;
    UIImage *_treatedImage;
    bool_treatWallpaper;
    SBFColorBoxes *_colorBoxes;
}

@property(retain) SBFColorBoxes * colorBoxes;

+ (bool)_allowsRasterization;
+ (bool)_allowsParallax;

- (void)_cacheTreatedImage;
- (id)_newTreatedImage;
- (void)_resetColorBoxes;
- (id)_untintedImageForBackdropParameters:(struct { long long x1; long long x2; long long x3; })arg1;
- (id)_mappedImageKeyForParameters:(struct { long long x1; long long x2; long long x3; })arg1 includingTint:(bool)arg2;
- (void)_removeMappedBlurs;
- (id)_treatedImageKey;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 wallpaperImage:(id)arg2 treatWallpaper:(bool)arg3;
- (id)_wallpaperImageForAnalysis;
- (void)_setupContentView;
- (void)setColorBoxes:(id)arg1;
- (id)_createColorBoxes;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 wallpaperImage:(id)arg2;
- (id)wallpaperImage;
- (bool)isDisplayingWallpaper:(id)arg1 forVariant:(long long)arg2 options:(id)arg3;
- (double)contrastInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)_displayedImage;
- (id)_imageForBackdropParameters:(struct { long long x1; long long x2; long long x3; })arg1 includeTint:(bool)arg2;
- (id)_blurredImage;
- (id)_averageColorInContentViewRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 smudgeRadius:(double)arg2;
- (double)contrastInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 contrastWithinBoxes:(double*)arg2 contrastBetweenBoxes:(double*)arg3;
- (id)colorBoxes;
- (unsigned long long)_colorBoxSize;
- (id)_computeAverageColor;
- (void)setCropRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 zoomScale:(double)arg2;
- (double)cropZoomScale;
- (struct CGSize { double x1; double x2; })_imageSize;
- (void)setContentsRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setContentView:(id)arg1;
- (void)dealloc;
- (void)settings:(id)arg1 changedValueForKey:(id)arg2;
- (float)_zoomScale;

@end
