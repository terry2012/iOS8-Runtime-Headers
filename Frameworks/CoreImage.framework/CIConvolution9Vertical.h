/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@class CIImage, CIVector, NSNumber;

@interface CIConvolution9Vertical : CIFilter  {
    CIImage *inputImage;
    CIVector *inputWeights;
    NSNumber *inputBias;
}

@property(retain) CIImage * inputImage;
@property(retain) CIVector * inputWeights;
@property(retain) NSNumber * inputBias;

+ (id)customAttributes;

- (void)setInputBias:(id)arg1;
- (id)inputBias;
- (void)setInputWeights:(id)arg1;
- (id)inputWeights;
- (bool)_isIdentity;
- (void)setInputImage:(id)arg1;
- (id)inputImage;
- (id)outputImage;

@end
