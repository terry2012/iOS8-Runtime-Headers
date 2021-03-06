/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@class LSBundleProxy;

@interface _UIActivityBundleHelper : NSObject  {
    LSBundleProxy *_bundleProxy;
}

@property(retain) LSBundleProxy * bundleProxy;

+ (id)activityBundleHelperForExtension:(id)arg1;

- (id)localizedName;
- (id)debugDescription;
- (void)dealloc;
- (id)imageForApplicationIconFormat:(int)arg1 activityCategory:(long long)arg2;
- (double)preferredImageScale;
- (id)activityImageForApplicationBundleURL:(id)arg1 applicationIconFormat:(int)arg2 activityCategory:(long long)arg3;
- (id)bundleProxy;
- (void)setBundleProxy:(id)arg1;
- (id)initWithBundleProxy:(id)arg1;

@end
