//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: //com/intel/wearable/platform/timeiq/triggers/time/TimeTriggersManager.java
//

#ifndef _TimeTriggersManager_H_
#define _TimeTriggersManager_H_

@class TimeTriggerInner;
@protocol IManagersListener;
@protocol ITSOAlarmManager;
@protocol ITSOTimeUtil;
@protocol ITimeTriggerStorage;
@protocol ITriggerLifeCycleListener;

#import "JB.h"
#import "ITSOAlarmListener.h"
#import "ABaseTriggersManager.h"
#import "ITimeTriggersManager.h"

/**
 @brief Created by mleib on 26/04/2015.
 */
@interface TimeTriggersManager : ABaseTriggersManager < ITimeTriggersManager, ITSOAlarmListener > {
 @public
  id<ITSOAlarmManager> m_alarmManager_;
  id<ITSOTimeUtil> m_timeUtils_;
}

- (instancetype)init;

- (instancetype)initWithITimeTriggerStorage:(id<ITimeTriggerStorage>)timeTriggerStorage
                       withITSOAlarmManager:(id<ITSOAlarmManager>)alarmManager
                           withITSOTimeUtil:(id<ITSOTimeUtil>)timeUtils;

- (void)startWithIManagersListener:(id<IManagersListener>)triggerListener
     withITriggerLifeCycleListener:(id<ITriggerLifeCycleListener>)triggerLifeCycleListener;

- (void)registerTriggersFromStorage;

/**
 @brief should only be used internally
 @param trigger
 @return 
 */
- (boolean)onTriggerAddedWithITriggerInner:(TimeTriggerInner *)trigger;

- (void)cancelTriggerWithITriggerInner:(TimeTriggerInner *)trigger;

- (void)onTriggerSetAsTriggeredWithITriggerInner:(TimeTriggerInner *)trigger;

- (void)onAlarmWithNSString:(NSString *)action
               withNSString:(NSString *)id_
               withNSString:(NSString *)data;

- (void)onDestroy;

- (void)copyAllFieldsTo:(TimeTriggersManager *)other;

@end

__attribute__((always_inline)) inline void TimeTriggersManager_init() {}

//J2OBJC_FIELD_SETTER(TimeTriggersManager, m_alarmManager_, id<ITSOAlarmManager>)
//J2OBJC_FIELD_SETTER(TimeTriggersManager, m_timeUtils_, id<ITSOTimeUtil>)

FOUNDATION_EXPORT NSString *TimeTriggersManager_TIME_TRIGGER_ACTION_;
J2OBJC_STATIC_FIELD_GETTER(TimeTriggersManager, TIME_TRIGGER_ACTION_, NSString *)

typedef TimeTriggersManager ComIntelWearablePlatformTimeiqTriggersTimeTimeTriggersManager;

#endif // _TimeTriggersManager_H_
