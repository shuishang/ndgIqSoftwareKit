//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: //com/intel/wearable/platform/timeiq/reminders/phoneBasedReminder/notificationReminder/NotificationRemindersMemoryStorage.java
//

#ifndef _NotificationRemindersMemoryStorage_H_
#define _NotificationRemindersMemoryStorage_H_

#import "JB.h"
#import "ARemindersMemoryStorage.h"
#import "INotificationRemindersStorage.h"

/**
 @brief Created by mleib on 30/04/2015.
 */
@interface NotificationRemindersMemoryStorage : ARemindersMemoryStorage < INotificationRemindersStorage > {
}

- (instancetype)init;

@end

__attribute__((always_inline)) inline void NotificationRemindersMemoryStorage_init() {}

typedef NotificationRemindersMemoryStorage ComIntelWearablePlatformTimeiqRemindersPhoneBasedReminderNotificationReminderNotificationRemindersMemoryStorage;

#endif // _NotificationRemindersMemoryStorage_H_