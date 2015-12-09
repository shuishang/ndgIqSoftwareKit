//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: //com/intel/wearable/platform/timeiq/ttlAlerts/TSOAlertsProviderStub.java
//

#ifndef _TSOAlertsProviderStub_H_
#define _TSOAlertsProviderStub_H_

#import "NSNumber+JavaAPI.h"
#import "JBVector.h"
@class MotType;
@class RouteDataType;
@class TSOAlert;
@class TSOCoordinate;
@class TriggeredAlertResultType;
@protocol ISegmentedRouteProvider;
@protocol ITSOAlertListener;
@protocol ITSOLogger;
@protocol ITSOTimeUtil;
#import "JBArrayList.h"

#import "JB.h"
#include "ITSOAlertProvider.h"

/**
 @brief A stub for use in tests outside ttl-alerts-lib module.
 (which is why this class is in lib and not in tests...) tests can use it to call triggerAlert or triggerAllAlerts to make all triggers jump immediately it can also set some of the trigger's result params the route segments are stub as well.
 */
@interface TSOAlertsProviderStub : NSObject < ITSOAlertProvider > {
 @public
  TSOCoordinate *USER_LOCATION_;
  id<ITSOTimeUtil> m_timeUtil_;
  id<ISegmentedRouteProvider> m_segmentedRouteProvider_;
  id<ITSOLogger> m_logger_;
  id<ITSOAlertListener> m_listener_;
  Vector *m_alertsList_;
  TSOCoordinate *m_userLocation_;
  TriggeredAlertResultType *m_resultType_;
  boolean m_isDone_;
  ArrayList* m_segments_;
  MotType *m_userMot_;
  RouteDataType *m_routeType_;
  double m_aerialDistance_;
}

- (instancetype)init;

- (instancetype)initWithITSOTimeUtil:(id<ITSOTimeUtil>)timeUtil
         withISegmentedRouteProvider:(id<ISegmentedRouteProvider>)segmentedRouteProviderImplDebug
                      withITSOLogger:(id<ITSOLogger>)tsoLogger;

- (void)init__WithITSOAlertListener:(id<ITSOAlertListener>)listener OBJC_METHOD_FAMILY_NONE;

- (void)addAlertWithTSOAlert:(TSOAlert *)tsoAlert;

- (ArrayList*)getAllAlerts;

- (TSOAlert *)getAlertWithIdWithNSString:(NSString *)alertId;

- (boolean)removeAlertWithNSString:(NSString *)alertId;

- (boolean)removeAllAlerts;

- (void)onDestroy;

- (Long *)getNextReminderTimeDiffWithNSString:(NSString *)alertId;

- (void)triggerAllAlerts;

- (void)triggerAlertWithNSString:(NSString *)alertId;

- (void)updateAllAlerts;

- (void)updateAlertWithNSString:(NSString *)alertId;

- (double)getAerialDistanceInMetersWithJavaUtilList:(ArrayList*)routeSegments;

- (void)setUserLocationWithTSOCoordinate:(TSOCoordinate *)userLocation;

- (void)setUserMotWithMotType:(MotType *)mot;

- (void)setResultTypeWithTriggeredAlertResultType:(TriggeredAlertResultType *)resultType;

- (void)setIsDoneWithBoolean:(boolean)isDone;

- (void)setRouteSegmentsWithJavaUtilList:(ArrayList*)segments;

- (void)setRouteTypeWithRouteDataType:(RouteDataType *)routeType;

- (void)setRouteAerialDistanceWithDouble:(double)aerialDistance;

- (void)copyAllFieldsTo:(TSOAlertsProviderStub *)other;

@end

FOUNDATION_EXPORT BOOL TSOAlertsProviderStub_initialized;
J2OBJC_STATIC_INIT(TSOAlertsProviderStub)

//J2OBJC_FIELD_SETTER(TSOAlertsProviderStub, USER_LOCATION_, TSOCoordinate *)
//J2OBJC_FIELD_SETTER(TSOAlertsProviderStub, m_timeUtil_, id<ITSOTimeUtil>)
//J2OBJC_FIELD_SETTER(TSOAlertsProviderStub, m_segmentedRouteProvider_, id<ISegmentedRouteProvider>)
//J2OBJC_FIELD_SETTER(TSOAlertsProviderStub, m_logger_, id<ITSOLogger>)
//J2OBJC_FIELD_SETTER(TSOAlertsProviderStub, m_listener_, id<ITSOAlertListener>)
//J2OBJC_FIELD_SETTER(TSOAlertsProviderStub, m_alertsList_, Vector *)
//J2OBJC_FIELD_SETTER(TSOAlertsProviderStub, m_userLocation_, TSOCoordinate *)
//J2OBJC_FIELD_SETTER(TSOAlertsProviderStub, m_resultType_, TriggeredAlertResultType *)
//J2OBJC_FIELD_SETTER(TSOAlertsProviderStub, m_segments_, ArrayList*)
//J2OBJC_FIELD_SETTER(TSOAlertsProviderStub, m_userMot_, MotType *)
//J2OBJC_FIELD_SETTER(TSOAlertsProviderStub, m_routeType_, RouteDataType *)

FOUNDATION_EXPORT NSString *TSOAlertsProviderStub_TAG_;
J2OBJC_STATIC_FIELD_GETTER(TSOAlertsProviderStub, TAG_, NSString *)

FOUNDATION_EXPORT MotType *TSOAlertsProviderStub_ROUTE_MOT_;
J2OBJC_STATIC_FIELD_GETTER(TSOAlertsProviderStub, ROUTE_MOT_, MotType *)

typedef TSOAlertsProviderStub ComIntelWearablePlatformTimeiqTtlAlertsTSOAlertsProviderStub;

#endif // _TSOAlertsProviderStub_H_
