/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class NSString, UIImage, SUScriptCanvasContext;

@interface SUScriptSegmentedControlItem : SUScriptObject  {
    SUScriptCanvasContext *_canvas;
    NSString *_identifier;
    UIImage *_image;
    NSString *_imageURLString;
    NSString *_title;
    id _userInfo;
}

@property(readonly) UIImage * image;
@property(retain) SUScriptCanvasContext * canvas;
@property(retain) NSString * identifier;
@property(retain) NSString * imageURL;
@property(retain) NSString * title;
@property(retain) id userInfo;

+ (id)webScriptNameForKeyName:(id)arg1;
+ (void)initialize;

- (void)_setImage:(id)arg1;
- (id)initWithPageSection:(id)arg1;
- (id)newPageSection;
- (void)_reloadUserInterface;
- (id)_segmentedControl;
- (id)_className;
- (id)scriptAttributeKeys;
- (id)canvas;
- (void)setCanvas:(id)arg1;
- (void)setImageURL:(id)arg1;
- (id)imageURL;
- (void)setIdentifier:(id)arg1;
- (id)identifier;
- (void)setUserInfo:(id)arg1;
- (id)attributeKeys;
- (void)setTitle:(id)arg1;
- (id)title;
- (id)image;
- (id)userInfo;
- (void)dealloc;

@end
