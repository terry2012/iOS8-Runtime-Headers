/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
 */

@class NSString, UIColor, GKColorPalette;

@interface GKTextStyle : NSObject  {
    double _UIKitFontLeading;
    bool_needsParagraphStyle;
    bool_overrideUIKitFontSize;
    GKColorPalette *_palette;
    NSString *_fontName;
    NSString *_UIKitFontTextStyleName;
    double _fontSize;
    UIColor *_color;
    long long _textAlignment;
    long long _lineBreakMode;
    double _minimumLineHeight;
    double _m34;
    double _zPosition;
    SEL _fontSizeRebaseSelector;
    SEL _fontNameRebaseSelector;
}

@property(retain) GKColorPalette * palette;
@property(readonly) NSString * fontName;
@property(readonly) NSString * UIKitFontTextStyleName;
@property(readonly) double fontSize;
@property(retain) UIColor * color;
@property long long textAlignment;
@property long long lineBreakMode;
@property double minimumLineHeight;
@property double m34;
@property double zPosition;
@property bool needsParagraphStyle;
@property bool overrideUIKitFontSize;
@property SEL fontSizeRebaseSelector;
@property SEL fontNameRebaseSelector;

+ (double)scaledValueFromHISpecLeading:(double)arg1 forFontTextStyle:(id)arg2;
+ (double)standardLeadingForFontTextStyle:(id)arg1;
+ (id)attributedString:(id)arg1 byReplayingFromBaseStyle:(id)arg2;
+ (double)bubbleTextScale;
+ (double)standardFontSize;
+ (id)textStyle;

- (id)bold;
- (id)light;
- (id)headline;
- (id)bannerTitle;
- (void)setFontNameRebaseSelector:(SEL)arg1;
- (void)setFontSizeRebaseSelector:(SEL)arg1;
- (void)setOverrideUIKitFontSize:(bool)arg1;
- (bool)overrideUIKitFontSize;
- (void)setNeedsParagraphStyle:(bool)arg1;
- (bool)needsParagraphStyle;
- (id)UIKitFontTextStyleName;
- (id)styleWithName:(id)arg1 fallback:(id)arg2 layoutMode:(int)arg3;
- (id)bubbleTextSmall;
- (id)bubbleText;
- (id)settingsFooter;
- (id)settingsHeader;
- (id)settingsLabel;
- (id)settingsBoldButton;
- (id)settingsButton;
- (id)settingsLinkText;
- (id)remoteUINickNameLabel:(int)arg1;
- (id)remoteUINickNameField:(int)arg1;
- (id)remoteUISelectField:(int)arg1;
- (id)remoteUISelectLabel:(int)arg1;
- (id)remoteUIEditLabel:(int)arg1;
- (id)remoteUIEditField:(int)arg1;
- (id)remoteUITableHeaderButton:(int)arg1;
- (id)remoteUITableFooterButton:(int)arg1;
- (id)remoteUITableHeaderSubLabel:(int)arg1;
- (id)remoteUITableHeaderLabel:(int)arg1;
- (id)remoteUIDetailLabel:(int)arg1;
- (id)remoteUILabel:(int)arg1;
- (id)remoteUISectionFooter:(int)arg1;
- (id)remoteUISectionHeader:(int)arg1;
- (id)lineHeight:(double)arg1;
- (id)lineBreakMode:(long long)arg1;
- (id)alignment:(long long)arg1 lineBreakMode:(long long)arg2;
- (id)removeButtonTitle;
- (id)tabIconCaption;
- (id)tableFooterStyle;
- (id)tableCellSubtitle;
- (id)tableCellTitle;
- (id)cellActionItem;
- (id)sectionCaptionSmall;
- (id)sectionCaption;
- (id)achievementValueText;
- (id)achievementLeaderboardPointsText;
- (id)achievementLeaderboardRank;
- (id)leaderboardRankLarge;
- (id)leaderboardRankMedium;
- (id)leaderboardRankSmall;
- (id)signInLink;
- (id)signInFieldLabel;
- (id)signInField;
- (id)signInSubtitle;
- (id)signInTitle;
- (id)bubbleHeadline;
- (id)challengeBubbleValue;
- (id)meBubbleValue;
- (id)meBubbleCaption;
- (id)segmentBubbleValue;
- (id)segmentBubbleCaption;
- (id)bubbleValue;
- (id)bubbleCaption;
- (id)bubbleValueSmall;
- (id)bubbleCaptionSmall;
- (id)detailSecondaryHeaderText;
- (id)gameDetailNameText;
- (id)thinNumberText;
- (id)multiplayerFooterText;
- (id)multiplayerHeaderText;
- (id)multiplayerStatusText;
- (id)multiplayerAddText;
- (id)multiplayerNameText;
- (id)headerViewSubText1;
- (id)composeMessage;
- (id)composeFields;
- (id)centered;
- (id)medium;
- (id)regular;
- (id)thin;
- (id)strong;
- (id)friendCaptionColor;
- (id)friendColor;
- (id)localPlayerColor;
- (id)scaled:(double)arg1;
- (id)scaledForM34:(double)arg1 zPosition:(double)arg2;
- (id)emphasizedOnDarkBackground;
- (id)emphasized;
- (id)viewBackground;
- (id)smallInfo;
- (id)small;
- (id)selectedBuyButtonTitle;
- (id)buyButtonTitle;
- (id)roundButtonTitle;
- (id)bannerMessage;
- (id)caption2;
- (id)caption1;
- (id)footnote;
- (id)header3;
- (id)header2;
- (id)header1;
- (id)header0;
- (void)applyToEditField:(id)arg1;
- (void)applyToLabel:(id)arg1;
- (id)header4;
- (void)setFontName:(id)arg1 kitTextStyleName:(id)arg2 shouldOverrideSize:(bool)arg3 rebaseSelector:(SEL)arg4;
- (void)setFontSize:(double)arg1 rebaseSelector:(SEL)arg2;
- (void)setFontName:(id)arg1 rebaseSelector:(SEL)arg2;
- (id)resolveFontAndLineSpacing:(double*)arg1;
- (void)setFontName:(id)arg1 kitTextStyleName:(id)arg2 leadingOverrideFromHISpec:(double)arg3 shouldOverrideSize:(bool)arg4 rebaseSelector:(SEL)arg5;
- (id)initEmpty;
- (void)applyScaleForMesh;
- (id)copyWithBaseClass:(Class)arg1;
- (SEL)fontNameRebaseSelector;
- (SEL)fontSizeRebaseSelector;
- (id)baseFontRebaseSelector;
- (id)replayOnBaseStyle:(id)arg1;
- (id)body;
- (id)attributes;
- (void)setZPosition:(double)arg1;
- (void)setM34:(double)arg1;
- (double)m34;
- (id)caption;
- (void)setMinimumLineHeight:(double)arg1;
- (void)setLineBreakMode:(long long)arg1;
- (double)minimumLineHeight;
- (long long)lineBreakMode;
- (double)fontSize;
- (double)zPosition;
- (id)color;
- (id)info;
- (void)setColor:(id)arg1;
- (id)fontName;
- (id)init;
- (bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copy;
- (void)dealloc;
- (id)description;
- (id)sectionHeader;
- (id)palette;
- (id)buttonTitle;
- (void)setPalette:(id)arg1;
- (long long)textAlignment;
- (void)setTextAlignment:(long long)arg1;

@end
