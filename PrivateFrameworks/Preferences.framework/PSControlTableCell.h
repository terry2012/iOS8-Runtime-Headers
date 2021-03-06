/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@class UIControl;

@interface PSControlTableCell : PSTableCell  {
    UIControl *_control;
}

@property(retain) UIControl * control;


- (id)valueLabel;
- (id)controlValue;
- (void)controlChanged:(id)arg1;
- (void)setControl:(id)arg1;
- (id)newControl;
- (void)refreshCellContentsWithSpecifier:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3;
- (bool)canReload;
- (id)control;
- (void)dealloc;

@end
