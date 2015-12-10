//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: //com/intel/wearable/platform/timeiq/common/audit/AuditWifiStrategy.java
//

#ifndef _AuditWifiStrategy_H_
#define _AuditWifiStrategy_H_

@class ClassFactory;
@class DeviceStateData;
@class UUID;
@protocol IDeviceStateManager;
@protocol IForwarder;
@protocol ITSOAlarmManager;
#import "JBArrayList.h"

#import "JB.h"
#import "IAuditForwardStrategy.h"
#import "IDeviceStateListener.h"
#import "ITSOAlarmListener.h"
#import "JBRunnable.h"

/**
 @brief Created by slevin
 */
@interface AuditWifiStrategy : NSObject < IAuditForwardStrategy, ITSOAlarmListener, IDeviceStateListener > {
 @public
  id<IForwarder> m_forward_;
  id<ITSOAlarmManager> m_alarmManager_;
  long64 scheduledTime_;
  UUID *alarmUUID_;
  AuditWifiStrategy *m_Instance_;
  id<IDeviceStateManager> m_deviceStateManager_;
  int m_numberOfAlarmsTriggered_;
}

- (instancetype)init;

- (instancetype)initWithClassFactory:(ClassFactory *)classFactory;

- (instancetype)initWithITSOAlarmManager:(id<ITSOAlarmManager>)alarmManager
                 withIDeviceStateManager:(id<IDeviceStateManager>)deviceStateManager;

- (void)init__WithIForwarder:(id<IForwarder>)forward OBJC_METHOD_FAMILY_NONE;

- (void)onAlarmWithNSString:(NSString *)action
               withNSString:(NSString *)id_
               withNSString:(NSString *)data;

- (void)sendAudit;

- (void)forward;

- (long64)getScheduledTime;

- (void)setScheduledTimeWithLong:(long64)scheduledTime;

- (void)onDeviceStateChangeWithDeviceStateData:(DeviceStateData *)deviceStateData
                              withJavaUtilList:(ArrayList*)deviceStateTypeChanges;

- (void)copyAllFieldsTo:(AuditWifiStrategy *)other;

@end

__attribute__((always_inline)) inline void AuditWifiStrategy_init() {}

//J2OBJC_FIELD_SETTER(AuditWifiStrategy, m_forward_, id<IForwarder>)
//J2OBJC_FIELD_SETTER(AuditWifiStrategy, m_alarmManager_, id<ITSOAlarmManager>)
//J2OBJC_FIELD_SETTER(AuditWifiStrategy, alarmUUID_, UUID *)
//J2OBJC_FIELD_SETTER(AuditWifiStrategy, m_Instance_, AuditWifiStrategy *)
//J2OBJC_FIELD_SETTER(AuditWifiStrategy, m_deviceStateManager_, id<IDeviceStateManager>)

FOUNDATION_EXPORT NSString *AuditWifiStrategy_ACTION_;
J2OBJC_STATIC_FIELD_GETTER(AuditWifiStrategy, ACTION_, NSString *)

typedef AuditWifiStrategy ComIntelWearablePlatformTimeiqCommonAuditAuditWifiStrategy;

@interface AuditWifiStrategy_$1 : NSObject < Runnable > {
 @public
  AuditWifiStrategy *this$0_;
}

- (void)run;

- (instancetype)initWithAuditWifiStrategy:(AuditWifiStrategy *)outer$;

@end

__attribute__((always_inline)) inline void AuditWifiStrategy_$1_init() {}

//J2OBJC_FIELD_SETTER(AuditWifiStrategy_$1, this$0_, AuditWifiStrategy *)

#endif // _AuditWifiStrategy_H_
