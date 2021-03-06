/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
 */

@interface RCAVController : AVController {
    BOOL _audioRouteNeedsReactivationFromSuspension;
    BOOL _hasInitializedRouteControllerSettings;
    BOOL _resetVoiceMemoSettingsEnabledValue;
}

+ (void)_controllerConnectionInvalidatedNotification:(id)arg1;
+ (void)recreateSharedAVInstance;
+ (id)sharedController;

- (void)_deactivateAudioCategoryIfSuspended;
- (void)_reactivateAudioCategoryFromSuspension;
- (void)_switchBackToOutputRouteCategoryIgnoringApplicationState:(BOOL)arg1;
- (void)initializeOutputRouteCategory;
- (void)switchBackToOutputRouteCategory;

@end
