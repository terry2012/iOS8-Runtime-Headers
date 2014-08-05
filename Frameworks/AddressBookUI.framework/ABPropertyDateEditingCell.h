/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@class NSString, UIDatePicker, UIViewController;

@interface ABPropertyDateEditingCell : ABPropertySimpleEditingCell <UITextFieldDelegate, ABPickerControllerDelegate> {
    UIDatePicker *_datePicker;
    UIViewController *_contentViewController;
}

@property(retain) UIDatePicker * datePicker;
@property(retain) UIViewController * contentViewController;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;


- (bool)_shouldUseYearlessPickerForDateComponents:(id)arg1;
- (void)dateChanged:(id)arg1;
- (void)localeUpdated:(id)arg1;
- (void)labelButtonClicked:(id)arg1;
- (void)picker:(id)arg1 didPickItem:(id)arg2;
- (void)pickerDidCancel:(id)arg1;
- (void)setDatePicker:(id)arg1;
- (id)datePicker;
- (void)dealloc;
- (void)setContentViewController:(id)arg1;
- (bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 replacementString:(id)arg3;
- (bool)textFieldShouldBeginEditing:(id)arg1;
- (id)contentViewController;
- (void)prepareForReuse;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
