//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSArray, NSString, SBAppLayout, SBBestAppSuggestion, SBLayoutStateTransitionContext, SBSwitcherTransitionRequest;
@protocol SBSwitcherContentViewControlling;

@protocol SBSwitcherContentViewControllerDelegate <NSObject>
- (void)switcherContentController:(id <SBSwitcherContentViewControlling>)arg1 setContentOrientation:(long long)arg2;
- (void)switcherContentController:(id <SBSwitcherContentViewControlling>)arg1 deletedAppLayout:(SBAppLayout *)arg2 forReason:(long long)arg3;
- (void)switcherContentController:(id <SBSwitcherContentViewControlling>)arg1 performTransitionWithRequest:(SBSwitcherTransitionRequest *)arg2 gestureInitiated:(BOOL)arg3;

@optional
- (NSArray *)windowsToExcludeForCrossfadeSnapshotForSwitcherContentController:(id <SBSwitcherContentViewControlling>)arg1;
- (void)switcherContentController:(id <SBSwitcherContentViewControlling>)arg1 reopenHiddenAppLayoutsWithBundleIdentifier:(NSString *)arg2;
- (void)cancelActiveGestureForSwitcherContentController:(id <SBSwitcherContentViewControlling>)arg1;
- (void)switcherContentController:(id <SBSwitcherContentViewControlling>)arg1 setCacheAsynchronousRenderingSurfaces:(BOOL)arg2;
- (BOOL)switcherContentController:(id <SBSwitcherContentViewControlling>)arg1 shouldResignActiveForStartOfTransition:(SBLayoutStateTransitionContext *)arg2;
- (void)switcherContentControllerEndTethering:(id <SBSwitcherContentViewControlling>)arg1;
- (void)switcherContentControllerBeginTethering:(id <SBSwitcherContentViewControlling>)arg1;
- (void)switcherContentController:(id <SBSwitcherContentViewControlling>)arg1 setContainerStatusBarHidden:(BOOL)arg2 animationDuration:(double)arg3;
- (void)switcherContentController:(id <SBSwitcherContentViewControlling>)arg1 handlePlusButtonActionForBundleIdentifier:(NSString *)arg2;
- (void)switcherContentController:(id <SBSwitcherContentViewControlling>)arg1 setWallpaperStyle:(long long)arg2;
- (void)switcherContentController:(id <SBSwitcherContentViewControlling>)arg1 setWallpaperScale:(double)arg2 withAnimationMode:(long long)arg3 completion:(void (^)(BOOL, BOOL))arg4;
- (void)switcherContentController:(id <SBSwitcherContentViewControlling>)arg1 setBackdropBlurType:(long long)arg2;
- (void)switcherContentController:(id <SBSwitcherContentViewControlling>)arg1 setBackdropBlurProgress:(double)arg2 withAnimationMode:(long long)arg3 completion:(void (^)(BOOL, BOOL))arg4;
- (void)switcherContentController:(id <SBSwitcherContentViewControlling>)arg1 setDimmingAlpha:(double)arg2 withAnimationMode:(long long)arg3 completion:(void (^)(BOOL, BOOL))arg4;
- (void)switcherContentController:(id <SBSwitcherContentViewControlling>)arg1 setHomeScreenAlpha:(double)arg2 withAnimationMode:(long long)arg3 completion:(void (^)(BOOL, BOOL))arg4;
- (void)switcherContentController:(id <SBSwitcherContentViewControlling>)arg1 setHomeScreenScale:(double)arg2 withAnimationMode:(long long)arg3 completion:(void (^)(BOOL, BOOL))arg4;
- (void)updateWindowVisibilityForSwitcherContentController:(id <SBSwitcherContentViewControlling>)arg1;
- (void)updateUserInteractionEnabledForSwitcherContentController:(id <SBSwitcherContentViewControlling>)arg1;
- (void)switcherContentController:(id <SBSwitcherContentViewControlling>)arg1 activatedBestAppSuggestion:(SBBestAppSuggestion *)arg2;
- (void)switcherContentController:(id <SBSwitcherContentViewControlling>)arg1 bringAppLayoutToFront:(SBAppLayout *)arg2;
@end

