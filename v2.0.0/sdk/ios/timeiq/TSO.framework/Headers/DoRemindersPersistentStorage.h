//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: //com/intel/wearable/platform/timeiq/reminders/doReminder/DoRemindersPersistentStorage.java
//

#ifndef _DoRemindersPersistentStorage_H_
#define _DoRemindersPersistentStorage_H_

#import "JBClass.h"

#import "JB.h"
#include "ABaseRemindersPersistentStorage.h"
#include "IDoRemindersStorage.h"

/**
 @brief Created by Yaron Abramovich on 25.5.15.
 */
@interface DoRemindersPersistentStorage : ABaseRemindersPersistentStorage < IDoRemindersStorage > {
}

- (Class )getReminderClass;

- (instancetype)init;

@end

__attribute__((always_inline)) inline void DoRemindersPersistentStorage_init() {}

typedef DoRemindersPersistentStorage ComIntelWearablePlatformTimeiqRemindersDoReminderDoRemindersPersistentStorage;

#endif // _DoRemindersPersistentStorage_H_
