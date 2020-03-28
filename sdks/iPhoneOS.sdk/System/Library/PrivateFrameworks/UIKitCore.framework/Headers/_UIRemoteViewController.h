//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>
typedef struct {
	unsigned val[8];
} SCD_Struct_UI40;
#import <UIKitCore/_UIRemoteViewController_ViewControllerOperatorInterface-Protocol.h>

@class BKSTouchDeliveryPolicyAssertion, FBSDisplayIdentity, NSArray, NSError, NSString, UIAlertController, UIDimmingView, UIView, _UIAsyncInvocation, _UIRemoteView, _UIRemoteViewService, _UISizeTrackingView, _UITextEffectsRemoteView, _UITextServiceSession, _UIViewServiceInterface;
@protocol BSInvalidatable;

@interface _UIRemoteViewController : UIViewController <_UIRemoteViewController_ViewControllerOperatorInterface>
{
    int __automatic_invalidation_retainCount;
    BOOL __automatic_invalidation_invalidated;
    NSString *_serviceBundleIdentifier;
    _UIViewServiceInterface *_serviceInterface;
    _UIRemoteViewService *_remoteViewService;
    id _serviceViewControllerProxy;
    id _serviceViewControllerControlMessageProxy;
    NSArray *_serviceViewControllerSupportedInterfaceOrientations;
    unsigned int _serviceAccessibilityServerPort;
    NSUInteger _serviceRegisteredScrollToTopViewCount;
    int _applicationDeactivationReason;
    BOOL _systemAppIsLocked;
    BOOL _observesLockNotifications;
    id _viewControllerOperatorProxy;
    _UIAsyncInvocation *_viewControllerOperatorHalfDisconnectionInvocation;
    id _textEffectsOperatorProxy;
    _UIAsyncInvocation *_textEffectsOperatorHalfDisconnectionInvocation;
    _UISizeTrackingView *_sizeTrackingView;
    _UIRemoteView *_serviceViewControllerRemoteView;
    _UITextEffectsRemoteView *_fullScreenTextEffectsRemoteView;
    _UITextEffectsRemoteView *_textEffectsAboveStatusBarRemoteView;
    _UITextEffectsRemoteView *_remoteKeyboardRemoteView;
    UIView *_fullScreenTextEffectsSnapshotView;
    BOOL _snapshotTextEffectsAfterRotation;
    FBSDisplayIdentity *_serviceScreenDisplayIdentity;
    _UIAsyncInvocation *_terminationInvocation;
//     struct os_unfair_lock_s _terminationErrorLock;
    NSError *_terminationError;
    _UITextServiceSession *_textServiceSession;
    UIDimmingView *_hostedDimmingView;
    UIView *_touchGrabbingView;
    long long _preferredStatusBarStyle;
    int _preferredStatusBarVisibility;
    long long _preferredStatusBarUpdateAnimation;
    id <BSInvalidatable> _eventFocusDeferralToken;
    BOOL _isFocusDeferred;
    NSString *_deferredDisplayUUID;
    unsigned int _deferredContextID;
    BOOL _focusWasDeferredBeforeDeactivation;
    BOOL _focusWasDeferredBeforeResignKey;
    id /* CDUnknownBlockType */ _contextDidAttachFocusDeferralAction;
    id /* CDUnknownBlockType */ _contextDidDetachFocusDeferralAction;
    NSArray *_allowedNotifications;
    NSArray *_sizeTrackingConstraints;
    BOOL _sizeTrackingViewShouldTranslateAutoResizeMaskIntoConstraints;
    int _sizeTrackingViewAutoResizeMask;
    CGSize _serviceScreenSize;
    BOOL _alreadySentFence;
    UIView *_viewServiceTouchInterdictionView;
    UIAlertController *_proxiedEditAlertController;
    long long _proxiedEditAlertToken;
    long long _preferredAdaptivityStyle;
    NSUInteger _preferredScreenEdgesDeferringSystemGestures;
    BOOL _prefersHomeIndicatorAutoHidden;
    BOOL _isUnderlappingStatusBar;
    BOOL __shouldUpdateRemoteTextEffectsWindow;
    long long _preferredUserInterfaceStyle;
    BOOL _isUpdatingSize;
    BOOL _isUpdatingSizeInHost;
    BOOL _serviceViewShouldShareTouchesWithHost;
    BKSTouchDeliveryPolicyAssertion *_touchDeliveryPolicyAssertion;
}

+ (BOOL)_shouldForwardViewWillTransitionToSize;
+ (BOOL)_shouldSendLegacyMethodsFromViewWillTransitionToSize;
+ (BOOL)__shouldAllowHostProcessToTakeFocus;
+ (BOOL)__shouldHostRemoteTextEffectsWindow;
+ (id)_requestViewController:(id)arg1 traitCollection:(id)arg2 fromServiceWithBundleIdentifier:(id)arg3 service:(id)arg4 connectionHandler:(id /* CDUnknownBlockType */)arg5;
+ (id)requestViewControllerWithService:(id)arg1 traitCollection:(id)arg2 connectionHandler:(id /* CDUnknownBlockType */)arg3;
+ (id)requestViewControllerWithService:(id)arg1 connectionHandler:(id /* CDUnknownBlockType */)arg2;
+ (id)requestViewController:(id)arg1 traitCollection:(id)arg2 fromServiceWithBundleIdentifier:(id)arg3 connectionHandler:(id /* CDUnknownBlockType */)arg4;
+ (id)requestViewController:(id)arg1 fromServiceWithBundleIdentifier:(id)arg2 connectionHandler:(id /* CDUnknownBlockType */)arg3;
+ (id)exportedInterface;
+ (id)serviceViewControllerInterface;
+ (BOOL)shouldPropagateAppearanceCustomizations;
@property(nonatomic) BOOL serviceViewShouldShareTouchesWithHost; // @synthesize serviceViewShouldShareTouchesWithHost=_serviceViewShouldShareTouchesWithHost;
@property(nonatomic, setter=_setIsUpdatingSizeInHost:) BOOL _isUpdatingSizeInHost; // @synthesize _isUpdatingSizeInHost;
@property(nonatomic, setter=_setIsUpdatingSize:) BOOL _isUpdatingSize; // @synthesize _isUpdatingSize;
@property(retain, nonatomic, setter=_setTouchDeliveryPolicyAssertion:) BKSTouchDeliveryPolicyAssertion *_touchDeliveryPolicyAssertion; // @synthesize _touchDeliveryPolicyAssertion;
// - (void).cxx_destruct;
- (void)__handleFocusMovementAction:(id)arg1;
- (void)__trampolineButtonPressData:(id)arg1 canceled:(BOOL)arg2;
- (id)_cancelTouchesForCurrentEventInHostedContent;
- (void)_prepareTouchDeliveryPolicy;
- (void)_noteWindowState:(BOOL)arg1;
- (void)updateTouchInterdictionViewLayout;
- (void)__setInterdictServiceViewTouches:(BOOL)arg1;
- (BOOL)__interdictServiceViewTouches;
- (void)restoreStateForSession:(id)arg1 anchor:(id)arg2;
- (void)saveStateForSession:(id)arg1 anchor:(id)arg2;
- (void)__showEditAlertViewWithToken:(long long)arg1 canUndo:(BOOL)arg2 canRedo:(BOOL)arg3;
- (void)_endNoPresentingViewControllerAlertController:(id)arg1;
- (void)_cancelProxiedEditAlertViewAnimated:(BOOL)arg1;
- (void)__dismissTextServiceSessionAnimated:(BOOL)arg1;
- (void)__showServiceForText:(id)arg1 type:(long long)arg2 fromRectValue:(id)arg3 replyHandler:(id /* CDUnknownBlockType */)arg4;
- (void)__showServiceForText:(id)arg1 selectedTextRangeValue:(id)arg2 type:(long long)arg3 fromRectValue:(id)arg4 replyHandler:(id /* CDUnknownBlockType */)arg5;
- (void)__showServiceForType:(long long)arg1 withContext:(id)arg2 replyHandler:(id /* CDUnknownBlockType */)arg3;
- (void)_initializeAccessibilityPortInformation;
- (void)_updateTintColor;
- (void)_appearanceInvocationsDidChange:(id)arg1;
- (BOOL)shouldPropagateAppearanceCustomizations;
- (id)_appearanceSource;
- (void)__viewServiceCompleteInteractiveSheetTransitionInHost:(BOOL)arg1 offset:(double)arg2 duration:(double)arg3 timingCurve:(id)arg4;
- (void)__viewServiceUpdateInteractiveSheetTransitionInHostWithProgress:(double)arg1 offset:(double)arg2;
- (void)__viewServiceStartInteractiveSheetTransitionInHostWithProgress:(double)arg1 offset:(double)arg2;
- (void)_setSheetConfiguration:(id)arg1;
- (id)_sheetPresentationController;
- (void)viewDidInvalidateIntrinsicContentSize;
- (CGSize)intrinsicContentSizeForServiceSize:(CGSize)arg1;
- (void)__viewServiceInstrinsicContentSizeDidChange:(CGSize)arg1 fence:(id)arg2;
- (void)__viewServicePreferredContentSizeDidChange:(CGSize)arg1 fence:(id)arg2;
- (void)__viewServicePopoverDidSetUseToolbarShine:(BOOL)arg1;
- (void)__viewServicePopoverDidChangeContentSize:(CGSize)arg1 animated:(BOOL)arg2 fence:(id)arg3 withReplyHandler:(id /* CDUnknownBlockType */)arg4;
- (void)__viewServiceDidChangeKeyWindow:(BOOL)arg1;
- (void)__viewServiceDidPromoteFirstResponder;
- (void)dimmingViewWasTapped:(id)arg1;
- (void)__setViewServiceIsDisplayingPopover:(BOOL)arg1;
- (void)__setSupportedInterfaceOrientations:(id)arg1;
- (void)willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2;
- (void)_traitCollectionDidChange:(id)arg1;
- (void)__viewServiceDidUpdatePreferredUserInterfaceStyle:(long long)arg1;
- (long long)preferredUserInterfaceStyle;
- (void)__viewServiceDidUpdatePrefersHomeIndicatorAutoHidden:(BOOL)arg1;
- (BOOL)prefersHomeIndicatorAutoHidden;
- (void)__viewServiceDidUpdatePreferredScreenEdgesDeferringSystemGestures:(long long)arg1;
- (NSUInteger)preferredScreenEdgesDeferringSystemGestures;
- (void)__viewServiceDidUpdatePreferredWhitePointAdaptationStyle:(long long)arg1 animationSettings:(id)arg2;
- (void)__viewServiceDidUpdatePreferredStatusBarStyle:(long long)arg1 preferredStatusBarVisibility:(int)arg2 updateAnimation:(long long)arg3 currentAnimationSettings:(id)arg4;
- (long long)preferredStatusBarUpdateAnimation;
- (long long)preferredWhitePointAdaptivityStyle;
- (int)_preferredStatusBarVisibility;
- (long long)preferredStatusBarStyle;
- (BOOL)_requiresKeyboardWindowWhenFirstResponder;
- (void)_didResignContentViewControllerOfPopover:(id)arg1;
- (void)_willBecomeContentViewControllerOfPopover:(id)arg1;
- (void)_didRotateFromInterfaceOrientation:(long long)arg1 forwardToChildControllers:(BOOL)arg2 skipSelf:(BOOL)arg3;
- (void)_willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2 forwardToChildControllers:(BOOL)arg3 skipSelf:(BOOL)arg4;
- (void)_willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2 forwardToChildControllers:(BOOL)arg3 skipSelf:(BOOL)arg4;
- (void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)_updateUnderflowProperties;
- (BOOL)_needsUnderflowPropertyUpdate;
- (BOOL)_ignoreAppSupportedOrientations;
- (NSUInteger)supportedInterfaceOrientations;
- (BOOL)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (void)didMoveToParentViewController:(id)arg1;
- (void)viewDidMoveToWindow:(id)arg1 shouldAppearOrDisappear:(BOOL)arg2;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (BOOL)_shouldDeferEventsForFocusOnScreen:(id)arg1;
- (void)_setDeferred:(BOOL)arg1 forDisplayUUID:(id)arg2;
- (id)_clientDeferralTarget;
- (id)_hostDeferralPredicate;
- (void)__willChangeToIdiom:(long long)arg1 onScreen:(id)arg2;
- (void)__updateDeferralPropertiesForScreen:(id)arg1;
- (void)_screenIDChanged:(id)arg1;
- (void)_screenDidDisconnect:(id)arg1;
- (void)_screenDidUpdate:(id)arg1;
- (void)_screenDidConnect:(id)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)_firstResponderDidChange:(id)arg1;
- (BOOL)canBecomeFirstResponder;
- (BOOL)_serviceHasScrollToTopView;
- (void)_scrollToTopFromTouchAtViewLocation:(CGPoint)arg1 resultHandler:(id /* CDUnknownBlockType */)arg2;
- (void)__viewServiceDidUnregisterScrollToTopView;
- (void)__viewServiceDidRegisterScrollToTopView;
- (void)dealloc;
- (void)_terminateUnconditionallyThen:(id /* CDUnknownBlockType */)arg1;
- (id)disconnect;
- (id)_terminateWithError:(id)arg1;
- (void)_setContentOverlayInsets:(UIEdgeInsets)arg1 andLeftMargin:(double)arg2 rightMargin:(double)arg3;
- (void)_updateTouchGrabbingView;
- (void)_uirvc_windowBecameKey:(id)arg1;
- (void)_uirvc_windowResignedKey:(id)arg1;
- (void)_updateLockStatusHostingVisibility;
- (void)setObservesLockNotifications:(BOOL)arg1;
- (BOOL)observesLockNotifications;
- (void)_systemApplicationDidUnlock:(id)arg1;
- (void)_systemApplicationWillLock:(id)arg1;
- (void)_applicationWillAddDeactivationReason:(id)arg1;
- (void)_applicationWillDeactivate:(id)arg1;
- (void)_applicationDidBecomeActive:(id)arg1;
- (void)_removeTextEffectsRemoteViews;
- (void)_snapshotAndRemoveTextEffectsRemoteView;
- (void)_restoreTextEffectsRemoteView;
- (id)textEffectsWindowForServiceScreen;
- (void)_applicationDidFinishSuspendSnapshot:(id)arg1;
- (void)_windowDidDetachContext:(id)arg1;
- (void)_hostSceneDidEnterBackground:(id)arg1;
- (void)_hostDidEnterBackground:(id)arg1;
- (void)_configureFocusDeferralForEnteringBackground;
- (void)_sceneDidEnterBackground:(id)arg1;
- (void)_applicationDidEnterBackground:(id)arg1;
- (void)_windowDidAttachContext:(id)arg1;
- (void)_hostSceneWillEnterForeground:(id)arg1;
- (void)_hostWillEnterForeground:(id)arg1;
- (void)_configureFocusDeferralForEnteringForeground;
- (void)_sceneWillEnterForeground:(id)arg1;
- (void)_applicationWillEnterForeground:(id)arg1;
- (void)_statusBarHeightDidChange:(id)arg1;
- (void)_statusBarOrientationDidChange:(id)arg1;
- (long long)__getPreferredInterfaceOrientation;
@property(nonatomic, setter=_setShouldUpdateRemoteTextEffectsWindow:) BOOL _shouldUpdateRemoteTextEffectsWindow;
- (BOOL)__shouldRemoteViewControllerFenceOperations;
- (id)_addAutoAllowedNotifications:(id)arg1;
- (id)forbiddenNotifications;
- (id)allowedNotifications;
- (void)setAllowedNotifications:(id)arg1;
- (void)_setSecurityModeForViewsLayer;
- (BOOL)inheritsSecurity;
- (void)setInheritsSecurity:(BOOL)arg1;
@property(readonly, nonatomic) SCD_Struct_UI40 serviceAuditToken;
@property(readonly, nonatomic) int serviceProcessIdentifier;
@property(readonly, nonatomic) NSString *serviceBundleIdentifier;
- (void)synchronizeAnimationsInActions:(id /* CDUnknownBlockType */)arg1;
- (id)_fenceForSynchronizedDrawing;
- (void)loadView;
- (void)_awakeWithConnectionInfo:(id)arg1;
- (id)_initWithViewServiceBundleIdentifier:(id)arg1;
- (id)serviceViewControllerProxyWithErrorHandler:(id /* CDUnknownBlockType */)arg1;
- (id)serviceViewControllerProxy;
- (void)viewServiceDidTerminateWithError:(id)arg1;
- (id)autorelease;
- (BOOL)_isDeallocating;
- (BOOL)_tryRetain;
- (NSUInteger)retainCount;
- (oneway void)release;
- (id)retain;
- (int)__automatic_invalidation_logic;

@end

