/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/PassKit.framework/PassKit
 */

@class NSNumber, UIFont;

@interface PKPassFieldTemplate : NSObject  {
    NSNumber *_boxedTextAlignment;
    NSNumber *_boxedVerticalPadding;
    NSNumber *_boxedSuppressesLabel;
    NSNumber *_boxedValueCanWrap;
    NSNumber *_boxedSuppressesEmptyLabel;
    UIFont *_labelFont;
    UIFont *_valueFont;
    Class _viewSubclass;
}

@property long long textAlignment;
@property double verticalPadding;
@property(retain) UIFont * labelFont;
@property(retain) UIFont * valueFont;
@property bool suppressesLabel;
@property bool suppressesEmptyLabel;
@property bool valueCanWrap;
@property(retain) Class viewSubclass;
@property(retain) NSNumber * boxedTextAlignment;
@property(retain) NSNumber * boxedVerticalPadding;
@property(retain) NSNumber * boxedSuppressesLabel;
@property(retain) NSNumber * boxedValueCanWrap;
@property(retain) NSNumber * boxedSuppressesEmptyLabel;

+ (id)fieldTemplateWithViewSubclass:(Class)arg1;
+ (id)fieldTemplateWithVerticalPadding:(double)arg1;
+ (id)_templateByResolvingTemplate:(id)arg1 withDefault:(id)arg2;
+ (id)fieldTemplateWithTextAlignment:(long long)arg1;

- (void)setValueFont:(id)arg1;
- (void)setVerticalPadding:(double)arg1;
- (void)setValueCanWrap:(bool)arg1;
- (bool)valueCanWrap;
- (void)setSuppressesEmptyLabel:(bool)arg1;
- (bool)suppressesEmptyLabel;
- (void)setSuppressesLabel:(bool)arg1;
- (bool)suppressesLabel;
- (Class)viewSubclass;
- (id)labelFont;
- (void)setBoxedValueCanWrap:(id)arg1;
- (id)boxedValueCanWrap;
- (void)setBoxedSuppressesEmptyLabel:(id)arg1;
- (id)boxedSuppressesEmptyLabel;
- (void)setBoxedSuppressesLabel:(id)arg1;
- (id)boxedSuppressesLabel;
- (void)setBoxedVerticalPadding:(id)arg1;
- (id)boxedVerticalPadding;
- (void)setBoxedTextAlignment:(id)arg1;
- (id)boxedTextAlignment;
- (void)setViewSubclass:(Class)arg1;
- (id)valueFont;
- (double)verticalPadding;
- (void)setLabelFont:(id)arg1;
- (void)dealloc;
- (long long)textAlignment;
- (void)setTextAlignment:(long long)arg1;

@end
