/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
 */

@class <SFAirDropDiscoveryActionSheetDelegate>, <SFAirDropDiscoveryControllerDelegate>, NSString, UIActionSheet;

@interface SFAirDropDiscoveryController : NSObject <UIActionSheetDelegate> {
    UIActionSheet *_actionSheet;
    id _actionSheetDelegate;
    struct __SFOperation { } *_controller;
    id _delegate;
    long long _discoverableMode;
    bool_isLegacyDevice;
    bool_isLegacyModeEnabled;
    bool_isLegacyModeSettable;
    bool_isVisible;
}

@property <SFAirDropDiscoveryActionSheetDelegate> * actionSheetDelegate;
@property(copy,readonly) NSString * debugDescription;
@property <SFAirDropDiscoveryControllerDelegate> * delegate;
@property(copy,readonly) NSString * description;
@property long long discoverableMode;
@property(readonly) unsigned long long hash;
@property(getter=isLegacyDevice,readonly) bool legacyDevice;
@property(getter=isLegacyModeEnabled) bool legacyModeEnabled;
@property(getter=isLegacyModeSettable,readonly) bool legacyModeSettable;
@property(readonly) Class superclass;
@property(getter=isVisible,readonly) bool visible;

- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)actionSheet:(id)arg1 didDismissWithButtonIndex:(long long)arg2;
- (void)actionSheet:(id)arg1 willDismissWithButtonIndex:(long long)arg2;
- (id)actionSheetDelegate;
- (void)dealloc;
- (id)delegate;
- (long long)discoverableMode;
- (id)discoverableModeActionSheet;
- (id)discoverableModeToString:(long long)arg1;
- (void)handleOperationCallback:(struct __SFOperation { }*)arg1 event:(long long)arg2 withResults:(id)arg3;
- (id)init;
- (bool)isLegacyDevice;
- (bool)isLegacyModeEnabled;
- (bool)isLegacyModeSettable;
- (bool)isVisible;
- (long long)operationDiscoverableModeToInteger:(id)arg1;
- (void)setActionSheetDelegate:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDiscoverableMode:(long long)arg1;
- (void)setLegacyModeEnabled:(bool)arg1;

@end