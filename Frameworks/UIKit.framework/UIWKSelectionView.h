/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIWebSelectionHandle, UIView<UIWKInteractionViewProtocol>;

@interface UIWKSelectionView : UIWebSelectionView  {
    UIView<UIWKInteractionViewProtocol> *_interactionView;
    UIWebSelectionHandle *_handle;
    bool_selectionIsBlock;
    bool_thresholdIsValid;
    bool_usingGesture;
    struct CGPoint { 
        double x; 
        double y; 
    } _lastTouchPoint;
}


- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })visibleRect;
- (void)updateFrameAndHandlesWithAnimation:(bool)arg1 showHandles:(bool)arg2;
- (void)updateRangedSelectionData;
- (double)handleOffsetForPoint:(struct CGPoint { double x1; double x2; })arg1 handlePosition:(int)arg2;
- (void)switchToBlockModeForHandle:(id)arg1 withPoint:(struct CGPoint { double x1; double x2; })arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })unobscuredRect;
- (void)blockSelectionChangedWithTouch:(long long)arg1 withFlags:(long long)arg2 growThreshold:(double)arg3 shrinkThreshold:(double)arg4;
- (void)selectionChangedWithTouchAt:(struct CGPoint { double x1; double x2; })arg1 withSelectionTouch:(long long)arg2 withFlags:(long long)arg3;
- (void)selectionCreationEndedWithPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)selectionCreationUpdatedWithPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)selectionCreationStartedWithPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)setSelectionMode:(bool)arg1;
- (void)touchChanged:(id)arg1 forHandleInText:(id)arg2;
- (void)touchChanged:(id)arg1 forHandle:(id)arg2;
- (bool)isHorizontalWritingMode;
- (bool)shouldSwitchToBlockModeForHandle:(id)arg1;
- (void)switchToTextModeForHandle:(id)arg1;
- (bool)shouldContractForActiveHandle;
- (bool)shouldExpandForActiveHandle;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })fetchSelectionBoundingRect;
- (void)setHandleCenters;
- (void)showCopyCalloutWithAnimation:(bool)arg1;
- (void)updateTextRangeViewSelectionRects;
- (void)onAfterScrollOrZoomShowingSelection:(bool)arg1;
- (void)onBeforeScrollOrZoomHidingSelection:(bool)arg1;
- (bool)updateRectForCalloutBar:(id)arg1 inWindow:(id)arg2;
- (id)tintView;
- (void)endSelectionCreationWithPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)updateSelectionCreationWithPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)startSelectionCreationWithPoint:(struct CGPoint { double x1; double x2; })arg1;
- (id)selectionRects;
- (id)scroller;
- (void)showControls;
- (void)clearSelection;
- (id)initWithView:(id)arg1;
- (void)selectionChanged;
- (void)updateSelectionRects;

@end
