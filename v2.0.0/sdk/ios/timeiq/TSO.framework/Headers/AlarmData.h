//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: //com/intel/wearable/platform/timeiq/platform/java/common/timer/AlarmData.java
//

#ifndef _AlarmData_H_
#define _AlarmData_H_

@class Timer;
@protocol ITSOAlarmListener;

#import "JB.h"

/**
 @brief Created by smoradof on 3/1/15.
 */
@interface AlarmData : NSObject {
 @public
  id<ITSOAlarmListener> m_listener_;
  NSString *m_action_;
  NSString *m_intentId_;
  NSString *m_data_;
  long64 m_alarmTime_;
  Timer *m_timer_;
}

- (instancetype)init;

- (void)copyAllFieldsTo:(AlarmData *)other;

@end

__attribute__((always_inline)) inline void AlarmData_init() {}

//J2OBJC_FIELD_SETTER(AlarmData, m_listener_, id<ITSOAlarmListener>)
//J2OBJC_FIELD_SETTER(AlarmData, m_action_, NSString *)
//J2OBJC_FIELD_SETTER(AlarmData, m_intentId_, NSString *)
//J2OBJC_FIELD_SETTER(AlarmData, m_data_, NSString *)
//J2OBJC_FIELD_SETTER(AlarmData, m_timer_, Timer *)

typedef AlarmData ComIntelWearablePlatformTimeiqPlatformJavaCommonTimerAlarmData;

#endif // _AlarmData_H_
