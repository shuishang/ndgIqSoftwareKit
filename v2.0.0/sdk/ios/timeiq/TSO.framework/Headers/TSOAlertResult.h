//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: //com/intel/wearable/platform/timeiq/internalApi/ttlAlerts/TSOAlertResult.java
//

#ifndef _TSOAlertResult_H_
#define _TSOAlertResult_H_

@class TSOAlert;
@class TtlRouteData;

#import "JB.h"

/**
 @brief Base result class for alert callbacks results
 */
@interface TSOAlertResult : NSObject {
 @public
  TSOAlert *m_alert_;
  long64 m_triggeredTime_;
  TtlRouteData *m_ttlRouteData_;
}

/**
 @brief The base result to be sent when alert is sent to ITSOAlertListener
 @param alert the alert that the user has added and to which this alert refers to
 @param triggeredTime the trigger time for the result
 @param ttlRouteData the route data that contains the route segments, the arrival time and departure time
 */
- (instancetype)initWithTSOAlert:(TSOAlert *)alert
                        withLong:(long64)triggeredTime
                withTtlRouteData:(TtlRouteData *)ttlRouteData;

/**
 @brief Get the alert that the user has added and to which this alert refers to
 @return the alert that the user has added and to which this alert refers to
 */
- (TSOAlert *)getAlert;

/**
 @brief Get the trigger time for the result
 @return the trigger time for the result in milliseconds
 */
- (long64)getTriggeredTime;

/**
 @return the route data that contains the route segments, the arrival time and departure time
 */
- (TtlRouteData *)getRouteData;

- (NSString *)description;

- (void)copyAllFieldsTo:(TSOAlertResult *)other;

@end

__attribute__((always_inline)) inline void TSOAlertResult_init() {}

//J2OBJC_FIELD_SETTER(TSOAlertResult, m_alert_, TSOAlert *)
//J2OBJC_FIELD_SETTER(TSOAlertResult, m_ttlRouteData_, TtlRouteData *)

FOUNDATION_EXPORT NSString *TSOAlertResult_PREFIX_TAG_;
J2OBJC_STATIC_FIELD_GETTER(TSOAlertResult, PREFIX_TAG_, NSString *)

typedef TSOAlertResult ComIntelWearablePlatformTimeiqInternalApiTtlAlertsTSOAlertResult;

#endif // _TSOAlertResult_H_
