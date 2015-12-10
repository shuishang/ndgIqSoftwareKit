//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: //com/intel/wearable/platform/timeiq/ttlAlerts/nextNotificationCalculator/NextNotificationCalculatorDebug.java
//

#ifndef _NextNotificationCalculatorDebug_H_
#define _NextNotificationCalculatorDebug_H_

@class ResultCode;
@class ResultData;
@class TSOAlertInner;
@protocol ITSOAlertsRepository;
@protocol ITSOTimeUtil;

#import "JB.h"
#import "INextNotificationCalculator.h"

/**
 @brief Created by smoradof on 1/19/15.
 */
@interface NextNotificationCalculatorDebug : NSObject < INextNotificationCalculator > {
 @public
  id<ITSOTimeUtil> m_timeUtil_;
  id<ITSOAlertsRepository> m_alertsRepository_;
  long64 m_nextNotificationDelay_;
  ResultCode *m_nextNotificationResultCode_;
  ResultCode *m_notificationFallbackResultCode_;
}

- (instancetype)init;

- (instancetype)initWithITSOTimeUtil:(id<ITSOTimeUtil>)timeUtil
            withITSOAlertsRepository:(id<ITSOAlertsRepository>)alertsRepository;

- (ResultData *)calcNextNotificationTimeWithTSOAlertInner:(TSOAlertInner *)tsoAlertInner
                                           withResultData:(ResultData *)routeData;

- (ResultData *)calcNotificationFallbackTimeWithTSOAlertInner:(TSOAlertInner *)tsoAlertInner;

- (void)setNextAlertDelayWithLong:(long64)delay;

- (void)setNextNotificationResultCodeWithResultCode:(ResultCode *)resultCode;

- (void)setNotificationFallbackResultCodeWithResultCode:(ResultCode *)resultCode;

- (void)copyAllFieldsTo:(NextNotificationCalculatorDebug *)other;

@end

__attribute__((always_inline)) inline void NextNotificationCalculatorDebug_init() {}

//J2OBJC_FIELD_SETTER(NextNotificationCalculatorDebug, m_timeUtil_, id<ITSOTimeUtil>)
//J2OBJC_FIELD_SETTER(NextNotificationCalculatorDebug, m_alertsRepository_, id<ITSOAlertsRepository>)
//J2OBJC_FIELD_SETTER(NextNotificationCalculatorDebug, m_nextNotificationResultCode_, ResultCode *)
//J2OBJC_FIELD_SETTER(NextNotificationCalculatorDebug, m_notificationFallbackResultCode_, ResultCode *)

typedef NextNotificationCalculatorDebug ComIntelWearablePlatformTimeiqTtlAlertsNextNotificationCalculatorNextNotificationCalculatorDebug;

#endif // _NextNotificationCalculatorDebug_H_
