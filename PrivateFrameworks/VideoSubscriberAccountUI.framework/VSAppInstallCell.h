/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VideoSubscriberAccountUI.framework/VideoSubscriberAccountUI
 */

@interface VSAppInstallCell : PSTableCell {
    SKUIItemOfferButton * _installButton;
    int  _installState;
}

@property (nonatomic) int installState;

+ (id)specifierForAppWithDescription:(id)arg1 target:(id)arg2 action:(SEL)arg3;

- (void).cxx_destruct;
- (id)_createInstallButton;
- (void)_updateSubviewsWithInstallState:(int)arg1;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3;
- (int)installState;
- (void)layoutSubviews;
- (void)setInstallState:(int)arg1;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;

@end
