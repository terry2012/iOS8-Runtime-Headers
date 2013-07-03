/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/Social.framework/Social
 */

@class UIImageView, UIActivityIndicatorView, UIImage, NSArray, NSMutableDictionary;

@interface SLSheetImagePreviewView : UIView <SLSheetPreviewView> {
    UIImage *_image;
    UIActivityIndicatorView *_activityView;
    NSMutableDictionary *_intrinsicSizes;
    BOOL _needsLayout;
    UIImageView *_imageView;
    NSArray *_principalAttachments;
    int _currentBarMetrics;
}

@property(retain) UIImage * image;
@property BOOL isTranscoding;
@property(retain) UIImageView * imageView;
@property(retain) NSArray * principalAttachments;
@property int currentBarMetrics;

+ (id)blankWebpageImage;

- (void)setPrincipalAttachments:(id)arg1;
- (void)setCurrentBarMetrics:(int)arg1;
- (void)setPreviewImage:(id)arg1 forAttachment:(id)arg2;
- (BOOL)previewDependsOnAttachment:(id)arg1;
- (struct CGSize { float x1; float x2; })sizeForBarMetrics:(int)arg1;
- (int)currentBarMetrics;
- (void)barMetricsDidChange;
- (void)setSize:(struct CGSize { float x1; float x2; })arg1 forBarMetrics:(int)arg2;
- (id)principalAttachments;
- (void)setIsTranscoding:(BOOL)arg1;
- (BOOL)isTranscoding;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)image;
- (void)setImage:(id)arg1;
- (void).cxx_destruct;
- (void)setImageView:(id)arg1;
- (id)imageView;
- (struct CGSize { float x1; float x2; })intrinsicContentSize;

@end