/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/CameraKit.framework/CameraKit
 */

@class CALayer, CAReplicatorLayer;

@interface CAMTimelapseShutterRingView : UIView  {
    bool_animating;
    CALayer *__smallTickLayer;
    CALayer *__largeTickLayer;
    CAReplicatorLayer *__smallTickReplicatorLayer;
    CAReplicatorLayer *__largeTickReplicatorLayer;
    CALayer *__timerHandLayer;
    CALayer *__timerHandParentLayer;
}

@property(getter=isAnimating) bool animating;
@property(readonly) CALayer * _smallTickLayer;
@property(readonly) CALayer * _largeTickLayer;
@property(readonly) CAReplicatorLayer * _smallTickReplicatorLayer;
@property(readonly) CAReplicatorLayer * _largeTickReplicatorLayer;
@property(readonly) CALayer * _timerHandLayer;
@property(readonly) CALayer * _timerHandParentLayer;


- (id)_timerHandParentLayer;
- (id)_timerHandLayer;
- (id)_largeTickReplicatorLayer;
- (id)_smallTickReplicatorLayer;
- (id)_largeTickLayer;
- (id)_smallTickLayer;
- (double)_rotationZFromTransform:(struct CATransform3D { double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; double x16; })arg1;
- (bool)_shouldUseAnimations;
- (void)_addStopAnimations;
- (void)_addStartAnimations;
- (void)_removeStopAnimations;
- (void)_removeStartAnimations;
- (void)layoutSublayersOfLayer:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void).cxx_destruct;
- (void)_startAnimating;
- (void)_stopAnimating;
- (void)setAnimating:(bool)arg1;
- (bool)isAnimating;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;

@end
