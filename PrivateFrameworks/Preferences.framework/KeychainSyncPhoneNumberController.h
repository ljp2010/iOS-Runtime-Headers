/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@class <KeychainSyncViewControllerDelegate>, KeychainSyncPhoneSettingsFragment, UIAlertView, UILabel;

@interface KeychainSyncPhoneNumberController : PSKeychainSyncViewController <KeychainSyncPhoneSettingsFragmentDelegate, UIAlertViewDelegate, KeychainSyncViewController> {
    UILabel *_footerLabel;
    UIAlertView *_invalidPhoneNumberAlert;
    KeychainSyncPhoneSettingsFragment *_phoneSettingsFragment;
}

@property <KeychainSyncViewControllerDelegate> * delegate;

- (void)alertView:(id)arg1 didDismissWithButtonIndex:(int)arg2;
- (void)controllerDone;
- (void)dealloc;
- (void)loadView;
- (void)nextPressed;
- (void)phoneSettingsFragment:(id)arg1 didChangePhoneNumber:(id)arg2 countryInfo:(id)arg3;
- (void)reloadSpecifiers;
- (id)specifiers;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;

@end