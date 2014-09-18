/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CameraKit.framework/CameraKit
 */

@class CALayer, CAReplicatorLayer;

@interface CAMTimelapseShutterRingView : UIView {
    CALayer *__largeTickLayer;
    CAReplicatorLayer *__largeTickReplicatorLayer;
    CALayer *__smallTickLayer;
    CAReplicatorLayer *__smallTickReplicatorLayer;
    CALayer *__timerHandLayer;
    CALayer *__timerHandParentLayer;
    bool_animating;
}

@property(readonly) CALayer * _largeTickLayer;
@property(readonly) CAReplicatorLayer * _largeTickReplicatorLayer;
@property(readonly) CALayer * _smallTickLayer;
@property(readonly) CAReplicatorLayer * _smallTickReplicatorLayer;
@property(readonly) CALayer * _timerHandLayer;
@property(readonly) CALayer * _timerHandParentLayer;
@property(getter=isAnimating) bool animating;

- (void).cxx_destruct;
- (void)_addStartAnimations;
- (void)_addStopAnimations;
- (id)_largeTickLayer;
- (id)_largeTickReplicatorLayer;
- (void)_removeStartAnimations;
- (void)_removeStopAnimations;
- (double)_rotationZFromTransform:(struct CATransform3D { double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; double x16; })arg1;
- (bool)_shouldUseAnimations;
- (id)_smallTickLayer;
- (id)_smallTickReplicatorLayer;
- (void)_startAnimating;
- (void)_stopAnimating;
- (id)_timerHandLayer;
- (id)_timerHandParentLayer;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isAnimating;
- (void)layoutSublayersOfLayer:(id)arg1;
- (void)setAnimating:(bool)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;

@end