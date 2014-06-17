/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/PhotoEditSupport.framework/PhotoEditSupport
 */

@class NSDictionary;

@interface BLRedEyeBrushTap : AutoEncodeDecodeObject  {
    int _destinationWidth;
    double _timestamp;
    NSDictionary *_eyeRepairData;
    struct CGPoint { 
        double x; 
        double y; 
    } _point;
}

@property double timestamp;
@property int destinationWidth;
@property struct CGPoint { double x1; double x2; } point;
@property(retain) NSDictionary * eyeRepairData;


- (void)setEyeRepairData:(id)arg1;
- (id)eyeRepairData;
- (void)setDestinationWidth:(int)arg1;
- (int)destinationWidth;
- (id)keysToEncode;
- (void)setTimestamp:(double)arg1;
- (double)timestamp;
- (id)init;
- (void)dealloc;
- (void)setPoint:(struct CGPoint { double x1; double x2; })arg1;
- (struct CGPoint { double x1; double x2; })point;

@end