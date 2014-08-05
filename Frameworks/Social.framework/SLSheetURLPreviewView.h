/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/Social.framework/Social
 */

@class SLURLPreviewGenerator, UIImageView, UIImage, UIView;

@interface SLSheetURLPreviewView : SLSheetImagePreviewView  {
    UIImage *_shadowImage;
    SLURLPreviewGenerator *_webPreviewGenerator;
    UIView *_placeholderPreviewView;
    UIImageView *_placeholderGlyphView;
}


- (void)_generateAutomaticPreviewForURL:(id)arg1;
- (bool)generatePreviewImageFromAttachments;
- (void)ensurePlaceholderPreviewImage;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setImage:(id)arg1;
- (id)init;
- (void).cxx_destruct;
- (void)layoutSubviews;

@end
