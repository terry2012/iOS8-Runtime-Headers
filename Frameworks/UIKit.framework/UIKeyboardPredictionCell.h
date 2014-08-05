/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIMorphingLabel, TIKeyboardCandidate, UIView, UIKBKeyView;

@interface UIKeyboardPredictionCell : UIView  {
    UIMorphingLabel *m_label;
    UIView *m_maskView;
    UIKBKeyView *m_activeKeyView;
    UIKBKeyView *m_enabledKeyView;
    boolm_lightKeyboard;
    struct CGSize { 
        double width; 
        double height; 
    } m_keyViewSize;
    bool_isAutocorrection;
    bool_isTypedString;
    bool_isCenter;
    bool_isLongCandidate;
    int _state;
    TIKeyboardCandidate *_prediction;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    } _collapsedFrame;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    } _baseFrame;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    } _activeFrame;
}

@property(retain,readonly) TIKeyboardCandidate * prediction;
@property int state;
@property struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } collapsedFrame;
@property struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } baseFrame;
@property struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } activeFrame;
@property bool isAutocorrection;
@property bool isTypedString;
@property bool isCenter;
@property bool isLongCandidate;

+ (id)initKeyViewWithSize:(struct CGSize { double x1; double x2; })arg1 state:(int)arg2 needsBackground:(bool)arg3;

- (id)label;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })visibleRect;
- (void)setState:(int)arg1;
- (int)state;
- (void)dealloc;
- (void)setIsCenter:(bool)arg1;
- (bool)isCenter;
- (void)setIsTypedString:(bool)arg1;
- (void)setIsAutocorrection:(bool)arg1;
- (void)setActiveFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)prediction;
- (void)setText:(id)arg1 prediction:(id)arg2 active:(bool)arg3;
- (void)setBaseFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setCollapsedFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)scrollLabelWithText:(id)arg1 force:(bool)arg2;
- (void)setState:(int)arg1 withText:(id)arg2;
- (void)setCellAttributes;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })collapsedFrame;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })activeFrame;
- (bool)isTypedString;
- (bool)isAutocorrection;
- (bool)isLongCandidate;
- (void)setIsLongCandidate:(bool)arg1;
- (void)setVisibleRect;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })baseFrame;
- (void)updateBackgroundWithRenderConfig:(id)arg1;
- (void)touchMoved:(double)arg1;
- (id)textColor;

@end
