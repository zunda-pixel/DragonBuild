//
//  INGetRideStatusIntent.h
//  Intents
//
//  Copyright © 2016 Apple. All rights reserved.
//

#import <Intents/INIntent.h>
#import <Intents/INIntentResolutionResult.h>

NS_ASSUME_NONNULL_BEGIN

API_AVAILABLE(ios(10.0), watchos(3.2))
API_UNAVAILABLE(macosx)
@interface INGetRideStatusIntent : INIntent

- (instancetype)init NS_DESIGNATED_INITIALIZER;

@end

@class INGetRideStatusIntentResponse;

@protocol INGetRideStatusIntentResponseObserver;

/*!
 @brief Protocol to declare support for handling an INGetRideStatusIntent 
 @abstract By implementing this protocol, a class can provide logic for resolving, confirming and handling the intent.
 @discussion The minimum requirement for an implementing class is that it should be able to handle the intent. The resolution and confirmation methods are optional. The handling method is always called last, after resolving and confirming the intent.
 */

API_AVAILABLE(ios(10.0), watchos(3.2))
API_UNAVAILABLE(macosx)
@protocol INGetRideStatusIntentHandling <NSObject>

@required

/*!
 @brief handling method

 @abstract Execute the task represented by the INGetRideStatusIntent that's passed in
 @discussion Called to actually execute the intent. The app must return a response for this intent.

 @param  getRideStatusIntent The input intent
 @param  completion The response handling block takes a INGetRideStatusIntentResponse containing the details of the result of having executed the intent

 @see  INGetRideStatusIntentResponse
 */

- (void)handleGetRideStatus:(INGetRideStatusIntent *)intent
                 completion:(void (^)(INGetRideStatusIntentResponse *response))completion NS_SWIFT_NAME(handle(getRideStatus:completion:));

- (void)startSendingUpdatesForGetRideStatus:(INGetRideStatusIntent *)intent
                                 toObserver:(id<INGetRideStatusIntentResponseObserver>)observer NS_SWIFT_NAME(startSendingUpdates(forGetRideStatus:to:));

- (void)stopSendingUpdatesForGetRideStatus:(INGetRideStatusIntent *)intent NS_SWIFT_NAME(stopSendingUpdates(forGetRideStatus:));

@optional

/*!
 @brief Confirmation method
 @abstract Validate that this intent is ready for the next step (i.e. handling)
 @discussion Called prior to asking the app to handle the intent. The app should return a response object that contains additional information about the intent, which may be relevant for the system to show the user prior to handling. If unimplemented, the system will assume the intent is valid following resolution, and will assume there is no additional information relevant to this intent.

 @param  getRideStatusIntent The input intent
 @param  completion The response block contains an INGetRideStatusIntentResponse containing additional details about the intent that may be relevant for the system to show the user prior to handling.

 @see INGetRideStatusIntentResponse

 */

- (void)confirmGetRideStatus:(INGetRideStatusIntent *)intent
                  completion:(void (^)(INGetRideStatusIntentResponse *response))completion NS_SWIFT_NAME(confirm(getRideStatus:completion:));

/*!
 @brief Resolution methods
 @abstract Determine if this intent is ready for the next step (confirmation)
 @discussion Called to make sure the app extension is capable of handling this intent in its current form. This method is for validating if the intent needs any further fleshing out.

 @param  getRideStatusIntent The input intent
 @param  completion The response block contains an INIntentResolutionResult for the parameter being resolved

 @see INIntentResolutionResult

 */

@end

API_AVAILABLE(ios(10.0), watchos(3.2))
API_UNAVAILABLE(macosx)
@protocol INGetRideStatusIntentResponseObserver <NSObject>

- (void)getRideStatusResponseDidUpdate:(INGetRideStatusIntentResponse *)response NS_SWIFT_NAME(didUpdate(getRideStatus:));

@end

NS_ASSUME_NONNULL_END
