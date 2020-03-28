//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSArray, NSDictionary, NSURL, RBSProcessIdentity;
@protocol FBProcessWatchdogProviding;

@interface FBProcessExecutionContext : NSObject <NSCopying, NSMutableCopying>
{
    RBSProcessIdentity *_identity;
    NSArray *_arguments;
    NSDictionary *_environment;
    NSURL *_standardOutputURL;
    NSURL *_standardErrorURL;
    BOOL _waitForDebugger;
    BOOL _disableASLR;
    BOOL _checkForLeaks;
    long long _launchIntent;
    unsigned int _launchAssertionFlags;
    id <FBProcessWatchdogProviding> _watchdogProvider;
    double _watchdogExtension;
}

@property(nonatomic) double watchdogExtension; // @synthesize watchdogExtension=_watchdogExtension;
@property(retain, nonatomic) id <FBProcessWatchdogProviding> watchdogProvider; // @synthesize watchdogProvider=_watchdogProvider;
@property(nonatomic) unsigned int launchAssertionFlags; // @synthesize launchAssertionFlags=_launchAssertionFlags;
@property(nonatomic) long long launchIntent; // @synthesize launchIntent=_launchIntent;
@property(nonatomic) BOOL checkForLeaks; // @synthesize checkForLeaks=_checkForLeaks;
@property(nonatomic) BOOL disableASLR; // @synthesize disableASLR=_disableASLR;
@property(nonatomic) BOOL waitForDebugger; // @synthesize waitForDebugger=_waitForDebugger;
@property(retain, nonatomic) NSURL *standardErrorURL; // @synthesize standardErrorURL=_standardErrorURL;
@property(retain, nonatomic) NSURL *standardOutputURL; // @synthesize standardOutputURL=_standardOutputURL;
@property(copy, nonatomic) NSDictionary *environment; // @synthesize environment=_environment;
@property(copy, nonatomic) NSArray *arguments; // @synthesize arguments=_arguments;
@property(copy, nonatomic) RBSProcessIdentity *identity; // @synthesize identity=_identity;
// - (void).cxx_destruct;
- (id)mutableCopyWithZone:(NSZone )arg1;
- (id)copyWithZone:(NSZone )arg1;
- (unsigned int)_launchAssertionFlags;
- (id)_initWithExecutionContext:(id)arg1;
- (id)initWithIdentity:(id)arg1;

@end

