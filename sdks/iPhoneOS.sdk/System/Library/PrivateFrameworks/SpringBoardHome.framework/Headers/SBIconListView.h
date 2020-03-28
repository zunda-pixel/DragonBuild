//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <SpringBoardHome/BSDescriptionProviding-Protocol.h>
#import <SpringBoardHome/SBIconListModelObserver-Protocol.h>

@class NSArray, NSMapTable, NSMutableArray, NSString, SBFolderIconImageCache, SBHIconImageCache, SBIconListModel, SBIconListViewDraggingDestinationDelegate, SBIconListViewIconLocationTransitionHandler, _UILegibilitySettings;
@protocol SBIconListLayout, SBIconListLayoutDelegate, SBIconListLayoutProvider, SBIconListViewDragDelegate, SBIconViewProviding;

@interface SBIconListView : UIView <SBIconListModelObserver, BSDescriptionProviding>
{
    NSMutableArray *_removedIcons;
    BOOL _needsLayout;
    BOOL _inLayout;
    BOOL _rotating;
    BOOL _purged;
    BOOL _ignoreNextWindowChange;
    BOOL _performingSpecialIconAnimations;
    NSMapTable *_iconViews;
    NSMapTable *_specialIconAnimations;
    SBIconListViewDraggingDestinationDelegate *_draggingDelegate;
    struct __CFRunLoopObserver _layoutRunLoopObserver;
    NSUInteger _predictedIconViewCount;
    BOOL _editing;
    BOOL _layoutReversed;
    BOOL _pausesIconsForScrolling;
    BOOL _iconsNeedLayout;
    BOOL _wantsFastIconReordering;
    BOOL _occluded;
    BOOL _alignsIconsOnPixelBoundaries;
    id <SBIconListLayoutProvider> _layoutProvider;
    long long _orientation;
    double _statusBarHeight;
    NSUInteger _userInterfaceLayoutDirectionHandling;
    NSUInteger _iconViewConfigurationOptions;
    _UILegibilitySettings *_legibilitySettings;
    id <SBIconListLayoutDelegate> _layoutDelegate;
    SBIconListModel *_model;
    id <SBIconViewProviding> _iconViewProvider;
    NSString *_iconLocation;
    double _iconContentScale;
    id <SBIconListViewDragDelegate> _dragDelegate;
    SBFolderIconImageCache *_folderIconImageCache;
    SBHIconImageCache *_iconImageCache;
    SBIconListViewIconLocationTransitionHandler *_currentIconLocationTransitionHandler;
    _NSRange _visibleColumnRange;
    struct SBIconListPredictedVisibleColumn _predictedVisibleColumn;
}

+ (void)getLayoutMetrics:(struct SBIconListLayoutMetrics )arg1 forBounds:(CGRect)arg2 insets:(UIEdgeInsets)arg3 orientation:(long long)arg4 numberOfColumns:(NSUInteger)arg5 numberOfRows:(NSUInteger)arg6 iconSize:(CGSize)arg7 iconContentScale:(double)arg8 options:(NSUInteger)arg9;
+ (CGRect)defaultFrameForOrientation:(long long)arg1;
+ (NSUInteger)defaultIconViewConfigurationOptions;
+ (long long)rotationAnchor;
@property(retain, nonatomic) SBIconListViewIconLocationTransitionHandler *currentIconLocationTransitionHandler; // @synthesize currentIconLocationTransitionHandler=_currentIconLocationTransitionHandler;
@property(nonatomic) BOOL alignsIconsOnPixelBoundaries; // @synthesize alignsIconsOnPixelBoundaries=_alignsIconsOnPixelBoundaries;
@property(retain, nonatomic) SBHIconImageCache *iconImageCache; // @synthesize iconImageCache=_iconImageCache;
@property(retain, nonatomic) SBFolderIconImageCache *folderIconImageCache; // @synthesize folderIconImageCache=_folderIconImageCache;
@property(nonatomic, getter=isOccluded) BOOL occluded; // @synthesize occluded=_occluded;
@property(nonatomic) BOOL wantsFastIconReordering; // @synthesize wantsFastIconReordering=_wantsFastIconReordering;
@property(nonatomic) __weak id <SBIconListViewDragDelegate> dragDelegate; // @synthesize dragDelegate=_dragDelegate;
@property(nonatomic) double iconContentScale; // @synthesize iconContentScale=_iconContentScale;
@property(nonatomic) BOOL iconsNeedLayout; // @synthesize iconsNeedLayout=_iconsNeedLayout;
@property(nonatomic) struct SBIconListPredictedVisibleColumn predictedVisibleColumn; // @synthesize predictedVisibleColumn=_predictedVisibleColumn;
@property(nonatomic) NSRange visibleColumnRange; // @synthesize visibleColumnRange=_visibleColumnRange;
@property(copy, nonatomic) NSString *iconLocation; // @synthesize iconLocation=_iconLocation;
@property(nonatomic) __weak id <SBIconViewProviding> iconViewProvider; // @synthesize iconViewProvider=_iconViewProvider;
@property(retain, nonatomic) SBIconListModel *model; // @synthesize model=_model;
@property(nonatomic) __weak id <SBIconListLayoutDelegate> layoutDelegate; // @synthesize layoutDelegate=_layoutDelegate;
@property(retain, nonatomic) _UILegibilitySettings *legibilitySettings; // @synthesize legibilitySettings=_legibilitySettings;
@property(nonatomic) NSUInteger iconViewConfigurationOptions; // @synthesize iconViewConfigurationOptions=_iconViewConfigurationOptions;
@property(nonatomic) NSUInteger userInterfaceLayoutDirectionHandling; // @synthesize userInterfaceLayoutDirectionHandling=_userInterfaceLayoutDirectionHandling;
@property(nonatomic) BOOL pausesIconsForScrolling; // @synthesize pausesIconsForScrolling=_pausesIconsForScrolling;
@property(nonatomic, getter=isLayoutReversed) BOOL layoutReversed; // @synthesize layoutReversed=_layoutReversed;
@property(nonatomic, getter=isPurged) BOOL purged; // @synthesize purged=_purged;
@property(nonatomic, getter=isEditing) BOOL editing; // @synthesize editing=_editing;
@property(nonatomic) double statusBarHeight; // @synthesize statusBarHeight=_statusBarHeight;
@property(nonatomic) long long orientation; // @synthesize orientation=_orientation;
@property(retain, nonatomic) id <SBIconListLayoutProvider> layoutProvider; // @synthesize layoutProvider=_layoutProvider;
// - (void).cxx_destruct;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
- (void)_teardownLayoutRunloopObserverIfNeeded;
- (void)_setupLayoutRunLoopObserver;
- (void)iconList:(id)arg1 didMoveIcon:(id)arg2;
- (void)iconList:(id)arg1 didRemoveIcon:(id)arg2;
- (void)iconList:(id)arg1 didReplaceIcon:(id)arg2 withIcon:(id)arg3;
- (void)iconList:(id)arg1 didAddIcon:(id)arg2;
- (BOOL)_allowsFocusToLeaveViaHeading:(NSUInteger)arg1;
- (void)willRotateWithTransitionCoordinator:(id)arg1;
- (void)iconLocationTransitionHandler:(id)arg1 completeTransition:(BOOL)arg2;
- (void)iconLocationTransitionHandler:(id)arg1 setProgress:(double)arg2;
@property(readonly, nonatomic, getter=isTransitioningIconLocation) BOOL transitioningIconLocation;
- (id)beginTransitionToIconLocation:(id)arg1 reason:(id)arg2;
- (void)willMoveToWindow:(id)arg1;
- (void)ignoreNextWindowChange;
- (struct SBIconCoordinate)coordinateAtPoint:(CGPoint)arg1;
- (CGPoint)fractionalCoordinateAtPoint:(CGPoint)arg1;
- (NSUInteger)rowAtPoint:(CGPoint)arg1 metrics:(const struct SBIconListLayoutMetrics )arg2;
- (NSUInteger)rowAtPoint:(CGPoint)arg1;
- (NSUInteger)columnAtPoint:(CGPoint)arg1 metrics:(const struct SBIconListLayoutMetrics )arg2 fractionOfDistanceThroughColumn:(double )arg3;
- (NSUInteger)columnAtPoint:(CGPoint)arg1 fractionOfDistanceThroughColumn:(double )arg2;
- (NSUInteger)columnAtPoint:(CGPoint)arg1;
- (CGPoint)originForIconAtCoordinate:(struct SBIconCoordinate)arg1 metrics:(const struct SBIconListLayoutMetrics )arg2;
- (CGPoint)originForIconAtCoordinate:(struct SBIconCoordinate)arg1;
@property(readonly, nonatomic) double verticalIconPadding;
@property(readonly, nonatomic) double horizontalIconPadding;
- (double)horizontalBumpForColumn:(NSUInteger)arg1 metrics:(const struct SBIconListLayoutMetrics )arg2;
@property(readonly, nonatomic) BOOL automaticallyAdjustsLayoutMetricsToFit;
- (void)getLayoutMetrics:(struct SBIconListLayoutMetrics )arg1;
- (void)addDragObserver:(id)arg1 forDropSession:(id)arg2;
- (void)setIconsLabelAlpha:(double)arg1;
- (BOOL)isDock;
- (void)enumerateVisibleIconsUsingBlock:(id /* CDUnknownBlockType */)arg1;
- (void)enumerateIconViewsUsingBlock:(id /* CDUnknownBlockType */)arg1;
- (void)enumerateIconsUsingBlock:(id /* CDUnknownBlockType */)arg1;
- (void)_updateEditingStateForIcons:(id)arg1 animated:(BOOL)arg2;
- (void)updateEditingStateAnimated:(BOOL)arg1;
- (void)hideAllIcons;
- (void)showAllIcons;
- (BOOL)_iconIsGapAdjacentAtIndex:(NSUInteger)arg1;
- (id)iconAtPoint:(CGPoint)arg1 index:(NSUInteger )arg2 proposedOrder:(long long )arg3;
- (id)iconAtPoint:(CGPoint)arg1 index:(NSUInteger )arg2;
- (void)layoutIconsIfNeeded:(double)arg1 animationType:(long long)arg2 options:(NSUInteger)arg3;
- (void)layoutIconsIfNeeded:(double)arg1;
- (void)layoutIconsNow;
- (void)setIconsNeedLayout;
- (void)didAddIconView:(id)arg1;
- (void)didAddSubview:(id)arg1;
- (void)setBounds:(CGRect)arg1;
- (void)setFrame:(CGRect)arg1;
- (BOOL)shouldReparentView:(id)arg1;
- (BOOL)isDisplayingIconView:(id)arg1;
- (NSUInteger)indexOfIcon:(id)arg1;
- (struct SBIconCoordinate)coordinateForIconAtIndex:(NSUInteger)arg1;
- (struct SBIconCoordinate)coordinateForIcon:(id)arg1;
- (void)configureIconView:(id)arg1 forIcon:(id)arg2;
- (id)makeIconView;
- (id)iconViewForIcon:(id)arg1;
@property(readonly, nonatomic) NSUInteger numberOfDisplayedIconViews;
- (id)displayedIconViewForIcon:(id)arg1;
- (CGPoint)centerForIconAtIndex:(NSUInteger)arg1 metrics:(const struct SBIconListLayoutMetrics )arg2;
- (CGPoint)centerForIconAtIndex:(NSUInteger)arg1;
- (CGPoint)centerForIconCoordinate:(struct SBIconCoordinate)arg1 metrics:(const struct SBIconListLayoutMetrics )arg2;
- (CGPoint)centerForIconCoordinate:(struct SBIconCoordinate)arg1;
- (CGPoint)centerForIcon:(id)arg1;
- (CGPoint)originForIcon:(id)arg1;
- (CGPoint)originForIconAtIndex:(NSUInteger)arg1;
- (CGSize)alignmentIconViewSize;
@property(readonly, nonatomic) CGSize alignmentIconSize;
- (void)removeAllIconAnimations;
- (void)setAlphaForAllIcons:(double)arg1;
- (id)removedIcons;
- (void)layoutAndCreateIcon:(id)arg1 atIndex:(NSUInteger)arg2;
- (void)performZoomOutSpecialIconAnimationWithIcon:(id)arg1 completionHandler:(id /* CDUnknownBlockType */)arg2;
- (void)performSpecialIconAnimation:(long long)arg1 icon:(id)arg2 completionHandler:(id /* CDUnknownBlockType */)arg3;
- (void)performSpecialIconAnimationsWithCompletionHandler:(id /* CDUnknownBlockType */)arg1;
- (void)markIcon:(id)arg1 asNeedingAnimation:(long long)arg2;
- (void)fadeInIconView:(id)arg1;
- (void)fadeInIcon:(id)arg1;
- (void)popIconView:(id)arg1;
- (void)popIcon:(id)arg1;
- (BOOL)allowsAddingIconCount:(NSUInteger)arg1;
@property(readonly, nonatomic) NSUInteger firstFreeSlotIndex;
- (BOOL)containsIcon:(id)arg1;
@property(readonly, nonatomic, getter=isFull) BOOL full;
@property(readonly, nonatomic, getter=isEmpty) BOOL empty;
@property(readonly, copy, nonatomic) NSArray *visibleIcons;
@property(readonly, copy, nonatomic) NSArray *icons;
- (NSUInteger)rowForIcon:(id)arg1;
@property(readonly, copy) NSString *description;
- (struct SBIconCoordinate)iconCoordinateForIndex:(NSUInteger)arg1 forOrientation:(long long)arg2;
- (NSUInteger)indexForCoordinate:(struct SBIconCoordinate)arg1 forOrientation:(long long)arg2;
- (UIEdgeInsets)layoutInsetsForOrientation:(long long)arg1;
@property(readonly, nonatomic) NSUInteger maximumIconCount;
@property(readonly, nonatomic) NSUInteger iconRowsForSpacingCalculation;
@property(readonly, nonatomic) NSUInteger iconsInRowForSpacingCalculation;
@property(readonly, nonatomic) NSUInteger iconColumnsForCurrentOrientation;
@property(readonly, nonatomic) NSUInteger iconRowsForCurrentOrientation;
@property(readonly, nonatomic) id <SBIconListLayout> layout;
- (long long)layoutOrientation;
@property(readonly, nonatomic) BOOL adaptsOrientationToTraitCollection;
- (CGSize)iconImageSize;
@property(readonly, nonatomic) Class baseIconViewClass;
- (void)removeAllIconViews;
- (void)removeIconView:(id)arg1;
- (BOOL)isRTL;
@property(readonly, nonatomic) long long userInterfaceLayoutDirection;
- (id)tintColor;
- (void)dealloc;
- (id)initWithModel:(id)arg1 layoutProvider:(id)arg2 iconLocation:(id)arg3 orientation:(long long)arg4 iconViewProvider:(id)arg5;

@end

