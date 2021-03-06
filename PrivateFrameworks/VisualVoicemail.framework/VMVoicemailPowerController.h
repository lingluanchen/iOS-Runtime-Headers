/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VisualVoicemail.framework/VisualVoicemail
 */

@interface VMVoicemailPowerController : NSObject {
    BCBatteryDeviceController * _controller;
}

@property (nonatomic, retain) BCBatteryDeviceController *controller;
@property (getter=isDeviceCharging, nonatomic, readonly) BOOL deviceCharging;

+ (id)sharedController;

- (void).cxx_destruct;
- (id)controller;
- (void)dealloc;
- (id)init;
- (BOOL)isDeviceCharging;
- (void)setController:(id)arg1;

@end
