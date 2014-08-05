/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSString, UIImage, NSData;

@interface UIKBRenderer : NSObject  {
    struct CGContext { } *_cachingContext;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _cachingContextCompletion;

    bool_opaque;
    bool_containsRGBContent;
    struct CGContext { } *_ctx;
    double _scale;
    long long _renderFlags;
    NSString *_cacheKey;
    UIImage *_renderedImage;
    struct CGSize { 
        double width; 
        double height; 
    } _size;
}

@property(readonly) struct CGContext { }* context;
@property(readonly) NSData * contextData;
@property(readonly) struct CGSize { double x1; double x2; } size;
@property(readonly) double scale;
@property(readonly) bool opaque;
@property(readonly) long long renderFlags;
@property(readonly) UIImage * renderedImage;
@property(readonly) bool containsRGBContent;
@property(retain) NSString * cacheKey;

+ (struct CGContext { }*)imageContextWithSize:(struct CGSize { double x1; double x2; })arg1 scale:(double)arg2 opaque:(bool)arg3 invert:(bool)arg4;
+ (void)clearInternalCaches;
+ (id)rendererWithContext:(struct CGContext { }*)arg1 withSize:(struct CGSize { double x1; double x2; })arg2 withScale:(double)arg3 opaque:(bool)arg4 renderFlags:(long long)arg5;

- (struct CGContext { }*)context;
- (void)dealloc;
- (struct CGSize { double x1; double x2; })size;
- (double)scale;
- (id)pathForSplitGeometry:(id)arg1;
- (id)pathForFlickPopupGeometries:(id)arg1;
- (id)pathForFlickGeometry:(id)arg1;
- (id)pathForRenderGeometry:(id)arg1;
- (void)addPathForSplitGeometry:(id)arg1;
- (void)addPathForFlickGeometry:(id)arg1;
- (void)addPathForFlickPopupGeometries:(id)arg1;
- (void)drawShiftPath:(bool)arg1 weight:(double)arg2 transform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg3 color:(struct CGColor { }*)arg4;
- (void)drawPath:(struct CGPath { }*)arg1 weight:(double)arg2 transform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg3 color:(struct CGColor { }*)arg4 fill:(bool)arg5;
- (struct CGPath { }*)_deleteGlyphPaths;
- (struct CGPath { }*)_thinShiftGlyphPath;
- (struct CGPath { }*)_thickShiftGlyphPath;
- (bool)_drawKeyString:(id)arg1 inRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 withStyle:(id)arg3;
- (bool)_drawSingleSymbol:(id)arg1 inRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 withStyle:(id)arg3;
- (void)_drawKeyImage:(id)arg1 inRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 withStyle:(id)arg3 force1xImages:(bool)arg4;
- (void)_renderVariantsFromKeyContents:(id)arg1 withTraits:(id)arg2;
- (bool)renderKeyPathContents:(id)arg1 withTraits:(id)arg2;
- (bool)renderKeyImageContents:(id)arg1 withTraits:(id)arg2;
- (bool)renderKeyStringContents:(id)arg1 withTraits:(id)arg2;
- (void)renderBackgroundTraits:(id)arg1 allowCaching:(bool)arg2;
- (void)_completeCacheImageWithTraitsIfNecessary:(id)arg1;
- (struct CGContext { }*)_contextForCacheImageSize:(struct CGSize { double x1; double x2; })arg1;
- (void)_drawLinearGradient:(id)arg1 inRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)addPathForRenderGeometry:(id)arg1;
- (void)addRoundRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 radius:(double)arg2 corners:(unsigned long long)arg3;
- (void)addPathForTraits:(id)arg1 displayRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg2;
- (struct CGColor { }*)_validColorForColor:(struct CGColor { }*)arg1;
- (void)ensureContext;
- (id)initWithContext:(struct CGContext { }*)arg1 withSize:(struct CGSize { double x1; double x2; })arg2 withScale:(double)arg3 opaque:(bool)arg4 renderFlags:(long long)arg5;
- (void)renderShadowEffect:(id)arg1 withTraits:(id)arg2;
- (void)renderEdgeEffect:(id)arg1 withTraits:(id)arg2;
- (bool)containsRGBContent;
- (long long)renderFlags;
- (void)setCacheKey:(id)arg1;
- (id)contextData;
- (id)renderedImage;
- (bool)loadCachedImageForHashString:(id)arg1;
- (id)cacheKey;
- (void)renderBackgroundTraits:(id)arg1;
- (bool)opaque;
- (void)renderKeyContents:(id)arg1 withTraits:(id)arg2;

@end
