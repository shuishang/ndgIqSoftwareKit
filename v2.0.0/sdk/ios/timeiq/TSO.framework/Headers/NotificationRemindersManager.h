//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: //com/intel/wearable/platform/timeiq/reminders/phoneBasedReminder/notificationReminder/NotificationRemindersManager.java
//

#ifndef _NotificationRemindersManager_H_
#define _NotificationRemindersManager_H_

@protocol INotificationRemindersStorage;

#import "JB.h"
#include "ARemindersManager.h"
#include "INotificationRemindersManager.h"

/**
 @brief Created by mleib on 04/05/2015.
 */
@interface NotificationRemindersManager : ARemindersManager < INotificationRemindersManager > {
}

- (instancetype)init;

- (instancetype)initWithINotificationRemindersStorage:(id<INotificationRemindersStorage>)notificationRemindersStorage;

@end

__attribute__((always_inline)) inline void NotificationRemindersManager_init() {}

typedef NotificationRemindersManager ComIntelWearablePlatformTimeiqRemindersPhoneBasedReminderNotificationReminderNotificationRemindersManager;

#endif // _NotificationRemindersManager_H_
