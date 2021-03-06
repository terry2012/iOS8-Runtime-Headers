/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class NSObject<MFDeviceDriver>, MFDeviceContext, NSDictionary, NSMutableArray, MFObjectTable;

@interface MFGraphicsDevice : NSObject  {
    MFDeviceContext *m_currentDC;
    NSMutableArray *m_savedDC;
    NSObject<MFDeviceDriver> *m_deviceDriver;
    MFObjectTable *m_objectTable;
    MFObjectTable *m_stockObjects;
    NSDictionary *m_colorMap;
    NSDictionary *m_fillMap;
}


- (int)plgBlt:(struct CGPoint { double x1; double x2; }*)arg1 :(id)arg2 :(int)arg3 :(int)arg4 :(int)arg5 :(int)arg6 :(id)arg7 :(int)arg8 :(int)arg9 :(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; }*)arg10 :(unsigned int)arg11;
- (int)maskBlt:(int)arg1 :(int)arg2 :(int)arg3 :(int)arg4 :(id)arg5 :(int)arg6 :(int)arg7 :(id)arg8 :(int)arg9 :(int)arg10 :(unsigned int)arg11 :(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; }*)arg12 :(unsigned int)arg13;
- (int)stretchBlt:(int)arg1 :(int)arg2 :(int)arg3 :(int)arg4 :(id)arg5 :(int)arg6 :(int)arg7 :(int)arg8 :(int)arg9 :(unsigned int)arg10 :(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; }*)arg11 :(unsigned int)arg12 usePaletteForBilevel:(bool)arg13;
- (int)stretchBlt:(int)arg1 :(int)arg2 :(int)arg3 :(int)arg4 :(id)arg5 :(int)arg6 :(int)arg7 :(int)arg8 :(int)arg9 :(unsigned int)arg10 :(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; }*)arg11 :(unsigned int)arg12;
- (int)bitBlt:(int)arg1 :(int)arg2 :(int)arg3 :(int)arg4 :(id)arg5 :(int)arg6 :(int)arg7 :(unsigned int)arg8 :(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; }*)arg9 :(unsigned int)arg10;
- (int)patBlt:(int)arg1 :(int)arg2 :(int)arg3 :(int)arg4 :(unsigned int)arg5;
- (id)createBitmap:(unsigned int)arg1 :(unsigned int)arg2 :(unsigned int)arg3 :(unsigned int)arg4 :(const char *)arg5 :(unsigned int)arg6;
- (id)createDIBitmap:(const char *)arg1 :(unsigned int)arg2 :(const char *)arg3 :(unsigned int)arg4 :(int)arg5;
- (id)createDIBitmap:(const char *)arg1 :(unsigned int)arg2 :(int)arg3;
- (int)frameRegion:(unsigned int)arg1 :(unsigned int)arg2 :(int)arg3 :(int)arg4;
- (int)frameRegionWithRects:(id)arg1 :(unsigned int)arg2 :(int)arg3 :(int)arg4;
- (int)fillRgn:(unsigned int)arg1 :(unsigned int)arg2;
- (int)fillRgnWithRects:(id)arg1 :(unsigned int)arg2;
- (int)invertRgn:(unsigned int)arg1;
- (int)invertRgnWithRects:(id)arg1;
- (int)paintRgn:(unsigned int)arg1;
- (int)paintRgnWithRects:(id)arg1;
- (int)selectClipRegion:(unsigned int)arg1 :(int)arg2;
- (int)selectClipRegionWithRects:(id)arg1 :(int)arg2;
- (int)selectClipPath:(int)arg1;
- (int)strokeAndFillPath:(bool)arg1 :(bool)arg2;
- (int)endPath;
- (int)widenPath;
- (int)beginPath;
- (int)abortPath;
- (int)setRop2:(int)arg1;
- (int)createPatternBrush:(id)arg1 :(unsigned int)arg2 usePaletteForBilevel:(bool)arg3;
- (int)createPalette:(id)arg1 :(unsigned int)arg2;
- (int)resizePalette:(unsigned int)arg1 :(unsigned int)arg2;
- (int)setPaletteEntries:(unsigned int)arg1 :(id)arg2 :(unsigned int)arg3;
- (id)createColorWithRGBBytes:(unsigned char)arg1 :(unsigned char)arg2 :(unsigned char)arg3 :(unsigned char)arg4;
- (int)createPen:(int)arg1 :(int)arg2 :(id)arg3 :(double*)arg4 :(unsigned int)arg5;
- (int)createFontIndirectW:(int)arg1 :(int)arg2 :(int)arg3 :(int)arg4 :(int)arg5 :(bool)arg6 :(bool)arg7 :(bool)arg8 :(int)arg9 :(int)arg10 :(unsigned char)arg11 :(int)arg12 :(int)arg13 :(int)arg14 :(id)arg15 :(id)arg16 :(id)arg17 :(unsigned int)arg18 :(unsigned int)arg19 :(unsigned int)arg20 :(unsigned int)arg21 :(unsigned int)arg22 :(unsigned int)arg23;
- (int)createFontIndirect:(int)arg1 :(int)arg2 :(int)arg3 :(int)arg4 :(int)arg5 :(bool)arg6 :(bool)arg7 :(bool)arg8 :(int)arg9 :(int)arg10 :(unsigned char)arg11 :(int)arg12 :(int)arg13 :(int)arg14 :(id)arg15;
- (int)createBrush:(int)arg1 :(id)arg2 :(int)arg3 :(unsigned int)arg4;
- (int)createRegion:(id)arg1;
- (int)getStockObject:(unsigned int)arg1;
- (int)selectObject:(int)arg1;
- (int)realizePalette;
- (int)roundRect:(int)arg1 :(int)arg2 :(int)arg3 :(int)arg4 :(double)arg5 :(double)arg6;
- (int)closeCurrentPath:(bool)arg1;
- (int)bezier:(int)arg1 :(int)arg2 :(int)arg3 :(int)arg4 :(int)arg5 :(int)arg6 :(int)arg7 :(int)arg8;
- (int)bezierTo:(int)arg1 :(int)arg2 :(int)arg3 :(int)arg4 :(int)arg5 :(int)arg6;
- (int)chord:(int)arg1 :(int)arg2 :(int)arg3 :(int)arg4 :(int)arg5 :(int)arg6 :(int)arg7 :(int)arg8;
- (int)arcTo:(int)arg1 :(int)arg2 :(int)arg3 :(int)arg4 :(int)arg5 :(int)arg6 :(int)arg7 :(int)arg8;
- (int)angleArc:(int)arg1 :(int)arg2 :(unsigned int)arg3 :(double)arg4 :(double)arg5;
- (int)pie:(int)arg1 :(int)arg2 :(int)arg3 :(int)arg4 :(int)arg5 :(int)arg6 :(int)arg7 :(int)arg8;
- (int)arc:(int)arg1 :(int)arg2 :(int)arg3 :(int)arg4 :(int)arg5 :(int)arg6 :(int)arg7 :(int)arg8;
- (int)polyPolyline:(struct CGPoint { double x1; double x2; }*)arg1 :(int*)arg2 :(int)arg3;
- (int)polyline:(struct CGPoint { double x1; double x2; }*)arg1 :(int)arg2;
- (int)polyPolygon:(struct CGPoint { double x1; double x2; }*)arg1 :(int*)arg2 :(int)arg3;
- (int)polygon:(struct CGPoint { double x1; double x2; }*)arg1 :(int)arg2;
- (int)lineTo:(double)arg1 :(double)arg2;
- (int)moveTo:(double)arg1 :(double)arg2;
- (int)restoreDC:(int)arg1;
- (int)saveDC;
- (int)ellipse:(int)arg1 :(int)arg2 :(int)arg3 :(int)arg4;
- (int)rectangle:(int)arg1 :(int)arg2 :(int)arg3 :(int)arg4;
- (int)extTextOutEncoded:(int)arg1 :(int)arg2 :(id)arg3 :(int)arg4 :(int)arg5 :(int)arg6 :(int)arg7 :(int)arg8 :(int*)arg9 :(int)arg10;
- (int)textOutEncoded:(int)arg1 :(int)arg2 :(id)arg3;
- (int)setTextAlign:(bool)arg1 :(int)arg2 :(int)arg3 :(int)arg4;
- (int)setTextJustification:(int)arg1 :(int)arg2;
- (int)setStretchBltMode:(int)arg1;
- (int)setBrushOrg:(double)arg1 :(double)arg2;
- (int)description:(id)arg1;
- (int)comment:(id)arg1;
- (void)setColorMap:(id)arg1 fillMap:(id)arg2;
- (id)getCurrentFont;
- (int)setMetaRgn;
- (int)intersectClipRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (int)excludeClipRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (int)modifyWorldTransform:(const struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; }*)arg1 :(int)arg2;
- (int)scaleWindowExt:(int)arg1 :(int)arg2 :(int)arg3 :(int)arg4;
- (int)scaleViewportExt:(int)arg1 :(int)arg2 :(int)arg3 :(int)arg4;
- (int)setViewportOrg:(int)arg1 :(int)arg2;
- (int)offsetViewportOrg:(int)arg1 :(int)arg2;
- (int)offsetWindowOrg:(int)arg1 :(int)arg2;
- (int)setViewportExt:(int)arg1 :(int)arg2;
- (int)setWindowOrg:(int)arg1 :(int)arg2;
- (int)setWindowExt:(int)arg1 :(int)arg2;
- (id)recolor:(unsigned char)arg1 :(unsigned char)arg2 :(unsigned char)arg3 fill:(bool)arg4;
- (void)createStockObjects;
- (int)setPolyFillMode:(int)arg1;
- (int)setArcDirection:(int)arg1;
- (int)setViewBox:(double)arg1 :(double)arg2 :(double)arg3 :(double)arg4;
- (int)extTextOut:(int)arg1 :(int)arg2 :(id)arg3 :(int)arg4 :(int)arg5 :(int)arg6 :(int)arg7 :(int)arg8 :(int*)arg9 :(int)arg10;
- (int)textOut:(int)arg1 :(int)arg2 :(id)arg3;
- (int)setTextCharExtra:(int)arg1;
- (int)setTextColour:(id)arg1;
- (int)setBkMode:(int)arg1;
- (int)setBkColour:(id)arg1;
- (id)recolor:(id)arg1 fill:(bool)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })getCanvas;
- (id)initWithCanvas:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (int)setWorldTransform:(const struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; }*)arg1;
- (int)setMapMode:(int)arg1;
- (int)deleteObject:(int)arg1;
- (void)done;
- (void)dealloc;
- (int)setMiterLimit:(double)arg1;

@end
