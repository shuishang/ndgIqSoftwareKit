//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: //com/intel/wearable/platform/timeiq/api/TimeIQApi.java
//

#ifndef _TimeIQApi_H_
#define _TimeIQApi_H_

@protocol IAuthCredentialsProvider;
@protocol ICalendarDetailsProvider;
@protocol IEventsEngine;
@protocol IMessageHandler;
@protocol IPlaceRepo;
@protocol IRemindersManager;
@protocol IRouteProvider;
@protocol IUserStateManager;

#import "JB.h"

/**
 @brief A facade for using the TimeIQ SDK
 */
@interface TimeIQApi : NSObject {
}

/**
 @brief Init TimeIQ and starts its engines.
 <BR> This should be called only after registration to identity was successful. <BR> Should be called from both the app and from the service
 @param context The application context
 @param authCredentialsProvider The authentication provider (created by the user)
 @param cloudServerURL The URL for the cloud server
 @return true if the initialization was successful and false otherwise
 */
- (boolean)init__WithIAuthCredentialsProvider:(id<IAuthCredentialsProvider>)authCredentialsProvider
                                  withNSString:(NSString *)cloudServerURL OBJC_METHOD_FAMILY_NONE;

/**
 @brief Checks whether the TimeIQ SDK is initialized
 @return true if the TimeIQ SDK is initialized and false otherwise
 */
- (boolean)isInitialized;

/**
 @brief Should be called when the application is destroyed
 */
- (void)onDestroy;

/**
 @brief Get the IMessageHandler, which is the main communication channel between the SDK and its users
 @return the IMessageHandler from the SDK
 */
- (id<IMessageHandler>)getMessageHandler;

/**
 @brief Get the IPlaceRepo, which is used for adding and getting locations from the SDK
 @return the IPlaceRepo from the SDK
 */
- (id<IPlaceRepo>)getPlacesRepo;

/**
 @brief Get the IRemindersManager, which is used for adding, snoozing ,ending and removing reminders from the SDK
 @return the IRemindersManager from the SDK
 */
- (id<IRemindersManager>)getRemindersManager;

/**
 @brief Get the IEventsEngine, which is used for adding, getting, updating and removing events from the SDK
 @return the IEventsEngine from the SDK
 */
- (id<IEventsEngine>)getEventsEngine;

/**
 @brief Get the ICalendarDetailsProvider, which is used for getting the available calendars, and getting and setting the readable (viewable) and writable (main) calendars in the SDK.
 <BR> These calendars are used by the IEventsEngine
 @return the ICalendarDetailsProvider from the SDK
 */
- (id<ICalendarDetailsProvider>)getCalendarsDetailsProvider;

/**
 @brief Get the IRouteProvider, which is used to get TTL (Time To Leave) or ETA (Estimated Time of Arrival) from the SDK
 @return the IRouteProvider from the SDK
 */
- (id<IRouteProvider>)getRouteProvider;

/**
 @brief Get the IUserStateManager, which is used to get the UserState from the SDK
 @return the IUserStateManager from the SDK
 */
- (id<IUserStateManager>)getUserStateManager;

- (instancetype)init;

@end

__attribute__((always_inline)) inline void TimeIQApi_init() {}

typedef TimeIQApi ComIntelWearablePlatformTimeiqApiTimeIQApi;

#endif // _TimeIQApi_H_
