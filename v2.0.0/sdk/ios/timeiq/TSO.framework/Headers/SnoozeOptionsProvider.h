//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: //com/intel/wearable/platform/timeiq/reminders/SnoozeOptionsProvider.java
//

#ifndef _SnoozeOptionsProvider_H_
#define _SnoozeOptionsProvider_H_

@class CallReminder;
@class ChargeMethod;
@class DoReminder;
@class MotType;
@class PlaceID;
@class SnoozeOption;
@class SnoozeTimeRange;
@class VisitedPlaces;
@protocol IDeviceStateManager;
@protocol IPlaceRepoModule;
@protocol IReminder;
@protocol ITSOLogger;
@protocol ITSOTimeUtil;
@protocol ITrigger;
@protocol IUserStateManagerModule;
#import "JBArrayList.h"

#import "JB.h"
#import "ISnoozeOptionsProvider.h"

/**
 @brief Created by gilsharo on 6/23/15.
 */
@interface SnoozeOptionsProvider : NSObject < ISnoozeOptionsProvider > {
 @public
  id<IUserStateManagerModule> m_userStateManager_;
  id<ITSOLogger> m_logger_;
  id<ITSOTimeUtil> m_timeUtil_;
  id<IDeviceStateManager> m_deviceStateManager_;
  id<IPlaceRepoModule> m_placesRepo_;
}

- (instancetype)init;

- (instancetype)initWithITSOLogger:(id<ITSOLogger>)logger
                  withITSOTimeUtil:(id<ITSOTimeUtil>)timeUtil
       withIUserStateManagerModule:(id<IUserStateManagerModule>)userStateManager
           withIDeviceStateManager:(id<IDeviceStateManager>)deviceStateManager
              withIPlaceRepoModule:(id<IPlaceRepoModule>)placesRepo;

- (ArrayList*)getSnoozeOptionsWithIReminder:(id<IReminder>)reminder;

- (void)addDoReminderSnoozeOptionsWithDoReminder:(DoReminder *)reminder
                                withJavaUtilList:(ArrayList*)options
                                 withMotType:(MotType *)mot
                               withVisitedPlaces:(VisitedPlaces *)vips
                                        withLong:(long64)now;

- (void)addCallReminderSnoozeOptionsWithCallReminder:(CallReminder *)reminder
                                    withJavaUtilList:(ArrayList*)options
                                     withMotType:(MotType *)mot
                                   withVisitedPlaces:(VisitedPlaces *)vips
                                             withInt:(int)batteryLevel
                                withChargeMethod:(ChargeMethod *)chargeMethod
                                            withLong:(long64)now;

- (void)addFromWorkWithJavaUtilList:(ArrayList*)options
                  withVisitedPlaces:(VisitedPlaces *)vips;

- (void)addFromPlaceWithPlaceID:(PlaceID *)placeId
               withJavaUtilList:(ArrayList*)options
              withVisitedPlaces:(VisitedPlaces *)vips;

- (void)addLeaveHereWithJavaUtilList:(ArrayList*)options
                     withMotType:(MotType *)mot
                   withVisitedPlaces:(VisitedPlaces *)vips;

- (void)addNextTimeHomeWithJavaUtilList:(ArrayList*)options
                      withVisitedPlaces:(VisitedPlaces *)vips
                           withITrigger:(id<ITrigger>)trigger;

- (void)addFromHomeWithJavaUtilList:(ArrayList*)options
                  withVisitedPlaces:(VisitedPlaces *)vips;

- (void)addWhenChargingWithJavaUtilList:(ArrayList*)options
                                withInt:(int)batteryLevel
                   withChargeMethod:(ChargeMethod *)chargeMethod;

- (void)addNextDriveWithJavaUtilList:(ArrayList*)options
                     withMotType:(MotType *)mot;

- (void)addFromTheCarWithJavaUtilList:(ArrayList*)options
                      withMotType:(MotType *)mot;

- (void)addTimeRangeWithJavaUtilList:(ArrayList*)options
                            withLong:(long64)now;

- (void)addInXMinuesWithJavaUtilList:(ArrayList*)options
                             withInt:(int)minutes;

- (id<ITrigger>)getSnoozeTriggerWithIReminder:(id<IReminder>)reminder
                             withSnoozeOption:(SnoozeOption *)snoozeOption;

- (long64)getSnoozeTimeForTimeRangeWithSnoozeTimeRange:(SnoozeTimeRange *)timeRange;

- (PlaceID *)getVisitedPlaceIdWithVisitedPlaces:(VisitedPlaces *)vips;

- (PlaceID *)getHomeId;

- (PlaceID *)getWorkId;

- (void)copyAllFieldsTo:(SnoozeOptionsProvider *)other;

@end

FOUNDATION_EXPORT BOOL SnoozeOptionsProvider_initialized;
J2OBJC_STATIC_INIT(SnoozeOptionsProvider)

//J2OBJC_FIELD_SETTER(SnoozeOptionsProvider, m_userStateManager_, id<IUserStateManagerModule>)
//J2OBJC_FIELD_SETTER(SnoozeOptionsProvider, m_logger_, id<ITSOLogger>)
//J2OBJC_FIELD_SETTER(SnoozeOptionsProvider, m_timeUtil_, id<ITSOTimeUtil>)
//J2OBJC_FIELD_SETTER(SnoozeOptionsProvider, m_deviceStateManager_, id<IDeviceStateManager>)
//J2OBJC_FIELD_SETTER(SnoozeOptionsProvider, m_placesRepo_, id<IPlaceRepoModule>)

FOUNDATION_EXPORT NSString *SnoozeOptionsProvider_TAG_;
J2OBJC_STATIC_FIELD_GETTER(SnoozeOptionsProvider, TAG_, NSString *)

typedef SnoozeOptionsProvider ComIntelWearablePlatformTimeiqRemindersSnoozeOptionsProvider;

#endif // _SnoozeOptionsProvider_H_
