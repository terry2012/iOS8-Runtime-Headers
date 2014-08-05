/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSArray, NSMutableArray, <_UIAlertControllerTextFieldViewControllerContaining>;

@interface _UIAlertControllerTextFieldViewController : UITableViewController  {
    NSMutableArray *textFieldViews;
    NSMutableArray *textFields;
    bool_textFieldsCanBecomeFirstResponder;
    <_UIAlertControllerTextFieldViewControllerContaining> *_container;
}

@property <_UIAlertControllerTextFieldViewControllerContaining> * container;
@property bool textFieldsCanBecomeFirstResponder;
@property(readonly) NSArray * textFields;


- (void)setContainer:(id)arg1;
- (id)container;
- (void)dealloc;
- (double)_bottomMarginForTextFields;
- (long long)numberOfTextFields;
- (void)_updatePreferredContentSize;
- (void)_returnKeyPressedInTextField:(id)arg1;
- (bool)textFieldsCanBecomeFirstResponder;
- (void)removeAllTextFields;
- (void)setTextFieldsCanBecomeFirstResponder:(bool)arg1;
- (id)textFields;
- (id)addTextFieldWithPlaceholder:(id)arg1 isSecure:(bool)arg2;
- (void)viewWillAppear:(bool)arg1;
- (id)initWithStyle:(long long)arg1;
- (id)textFieldAtIndex:(long long)arg1;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;

@end
