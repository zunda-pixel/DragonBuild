//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class MTMaterialView;
@protocol SBFolderBackgroundViewDelegate;

@interface SBFolderBackgroundView : UIView
{
    UIView *_tintView;
    MTMaterialView *_blurView;
    double _continuousCornerRadius;
    id <SBFolderBackgroundViewDelegate> _delegate;
    NSUInteger _effect;
    NSUInteger _currentEffect;
}

+ (double)cornerRadiusToInsetContent;
+ (CGSize)folderBackgroundSize;
+ (void)warmupIfNecessary;
@property(nonatomic) NSUInteger currentEffect; // @synthesize currentEffect=_currentEffect;
@property(nonatomic) NSUInteger effect; // @synthesize effect=_effect;
@property(nonatomic) __weak id <SBFolderBackgroundViewDelegate> delegate; // @synthesize delegate=_delegate;
// - (void).cxx_destruct;
- (id)_tintViewBackgroundColorAtFullAlpha;
- (BOOL)_hasLowQualityBackground;
- (void)updateTintEffectColor;
- (void)_updateCurrentEffect;
@property(readonly, nonatomic) NSUInteger concreteEffect;
- (void)_reduceTransparencyChanged;
- (void)_setContinuousCornerRadius:(double)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(CGRect)arg1;

@end

