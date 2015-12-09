//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: //com/intel/wearable/platform/timeiq/reminders/ARemindersMemoryStorage.java
//

#ifndef _ARemindersMemoryStorage_H_
#define _ARemindersMemoryStorage_H_

@class BaseReminderInner;
#import "JBEnumSet.h"
@class ReminderEndReason;
@protocol ITrigger;
#import "JBHashSet.h"

#import "JB.h"
#include "IRemindersStorage.h"

/**
 @brief Created by mleib on 30/04/2015.
 */
@interface ARemindersMemoryStorage : NSObject < IRemindersStorage > {
 @public
  Set* m_data_;
}

- (boolean)addReminderWithIReminderInner:(BaseReminderInner *)reminderToAdd;

- (boolean)removeReminderWithIReminderInner:(BaseReminderInner *)reminderToRemove;

- (boolean)removeRemindersWithJavaUtilCollection:(Set*)remindersToRemove;

- (boolean)removeAllReminders;

- (Set*)getRemindersOfTriggersWithJavaUtilCollection:(Set*)triggers;

- (id)getReminderWithNSString:(NSString *)reminderId;

- (Set*)getRemindersWithEnumSet:(EnumSet *)reminderStatuses;

/**
 @brief For debug only
 */
- (Set*)getAllReminders;

- (boolean)setReminderAsEndedWithIReminderInner:(BaseReminderInner *)reminder
                       withReminderEndReason:(ReminderEndReason *)reminderEndReason;

- (boolean)setReminderAsTriggeredWithIReminderInner:(BaseReminderInner *)reminder;

- (boolean)setReminderAsSnoozedWithIReminderInner:(BaseReminderInner *)reminder
                                      withITrigger:(id<ITrigger>)newTrigger;

- (boolean)updateWithBaseReminderInner:(BaseReminderInner *)reminder;

- (instancetype)init;

- (void)copyAllFieldsTo:(ARemindersMemoryStorage *)other;

@end

__attribute__((always_inline)) inline void ARemindersMemoryStorage_init() {}

//J2OBJC_FIELD_SETTER(ARemindersMemoryStorage, m_data_, Set*)

typedef ARemindersMemoryStorage ComIntelWearablePlatformTimeiqRemindersARemindersMemoryStorage;

#endif // _ARemindersMemoryStorage_H_
