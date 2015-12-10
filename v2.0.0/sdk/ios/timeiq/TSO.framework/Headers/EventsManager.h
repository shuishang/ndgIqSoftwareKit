//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: //com/intel/wearable/platform/timeiq/events/EventsManager.java
//

#ifndef _EventsManager_H_
#define _EventsManager_H_

@class EventTriggerType;
@class EventsAudit;
@class EventsManager_EventsAlertsData;
@class EventsPersistenceUtil;
@class EventsPriorityQueue;
@class MotType;
@class ResultData;
@class TSOAlert;
@class TSOAlertTriggeredResult;
@class TSOAlertUpdatedResult;
@class TSOCoordinate;
@class TSOEventChangeType;
@class TSOEventType;
@class TransportType;
@protocol IEventUpdateListener;
@protocol ILocationProvider;
@protocol IRouteData;
@protocol IRouteProviderInner;
@protocol ITSOAlarmManager;
@protocol ITSOAlertsEngine;
@protocol ITSOEvent;
@protocol ITSOLogger;
@protocol ITSOTimeUtil;
@protocol IUserStateManagerModule;
#import "JBArrayList.h"
#import "JBHashtable.h"
#import "JBHashSet.h"

#import "JB.h"
#import "ITSOAlarmListener.h"
#import "ATSOBaseDBObject.h"
#import "ITSOAlertListener.h"
#import "JBCallable.h"

#define EventsManager_MIN_DELAY 5000LL

@interface EventsManager : NSObject < ITSOAlertListener, ITSOAlarmListener > {
 @public
  id<ITSOAlertsEngine> ttlProvider_;
  EventsPersistenceUtil *eventsPersistence_;
  Set* listeners_;
  EventsManager_EventsAlertsData *alertsData_;
  EventsPriorityQueue *events_;
  EventsAudit *auditManager_;
  id<IRouteProviderInner> routeProvider_;
  id<IUserStateManagerModule> userStateManager_;
  id<ITSOAlarmManager> alarmManager_;
  id<ITSOTimeUtil> timerUtil_;
  id<ILocationProvider> locationProvider_;
}

- (instancetype)init;

- (instancetype)initWithEventsPersistenceUtil:(EventsPersistenceUtil *)eventsPersistenceUtil
                      withIRouteProviderInner:(id<IRouteProviderInner>)routeProvider
                              withEventsAudit:(EventsAudit *)eventsAuditManager
                         withITSOAlertsEngine:(id<ITSOAlertsEngine>)ttlProvider
                             withITSOTimeUtil:(id<ITSOTimeUtil>)timeUtil
                  withIUserStateManagerModule:(id<IUserStateManagerModule>)userStateManager
                         withITSOAlarmManager:(id<ITSOAlarmManager>)alarmManager
                        withILocationProvider:(id<ILocationProvider>)locationProvider
                               withITSOLogger:(id<ITSOLogger>)tsoLogger;

- (ArrayList*)getEventsWithTSOEventType:(TSOEventType *)type;

- (boolean)pushChangesWithITSOEvent:(id<ITSOEvent>)event
          withTSOEventChangeType:(TSOEventChangeType *)changeType;

- (void)auditUpdateTTLWithTSOAlertUpdatedResult:(TSOAlertUpdatedResult *)result;

- (boolean)addToQueueWithITSOEvent:(id<ITSOEvent>)newEvent;

- (void)registerAlarmsWithITSOEvent:(id<ITSOEvent>)newEvent;

- (boolean)removeFromQueueWithNSString:(NSString *)eventId
                   withTSOEventType:(TSOEventType *)eventType;

- (void)unregisterAlertsWithNSString:(NSString *)eventId;

- (void)unregisterGeneralAlarmWithNSString:(NSString *)eventId;

- (void)unregisterStartEventAlarmWithNSString:(NSString *)eventId;

- (void)unregisterEndEventAlarmWithNSString:(NSString *)eventId;

- (boolean)updateQueueWithITSOEvent:(id<ITSOEvent>)changedEvent;

- (void)registerForTtlWithITSOEvent:(id<ITSOEvent>)event;

- (void)registerGeneralAlarmWithITSOEvent:(id<ITSOEvent>)newEvent;

- (void)registerEventStartWithITSOEvent:(id<ITSOEvent>)newEvent;

- (void)registerEventEndWithITSOEvent:(id<ITSOEvent>)newEvent;

- (long64)calcGeneralAlarmDelayWithITSOEvent:(id<ITSOEvent>)event;

- (void)unregisterTtlWithNSString:(NSString *)eventId;

- (void)onAlertTriggeredWithTSOAlertTriggeredResult:(TSOAlertTriggeredResult *)result;

- (void)triggerAlertWithITSOEvent:(id<ITSOEvent>)event
         withEventTriggerType:(EventTriggerType *)eventTriggerType
                   withIRouteData:(id<IRouteData>)routeData;

- (id<ITSOEvent>)getActualEventWithITSOEvent:(id<ITSOEvent>)event;

- (void)cancelPendingAlertsWithNSString:(NSString *)eventId
               withEventTriggerType:(EventTriggerType *)eventTriggerType;

- (void)onAlertUpdatedWithTSOAlertUpdatedResult:(TSOAlertUpdatedResult *)result;

- (void)registerListenerWithIEventUpdateListener:(id<IEventUpdateListener>)listener;

- (void)onAlarmWithNSString:(NSString *)action
               withNSString:(NSString *)id_
               withNSString:(NSString *)data;

- (ResultData *)calcEtaDataWithTSOCoordinate:(TSOCoordinate *)locationCoordinate
                       withTransportType:(TransportType *)preferredTransportType;

- (ResultData *)getRecommendedMotWithTSOCoordinate:(TSOCoordinate *)userLocationCoords
                                 withTSOCoordinate:(TSOCoordinate *)eventLocationCoords
                                          withLong:(long64)currentTimeMillis
                                   withMotType:(MotType *)currentUserMot
                             withTransportType:(TransportType *)preferredTransportType;

- (ResultData *)getETAWithTSOCoordinate:(TSOCoordinate *)userLocationCoords
                      withTSOCoordinate:(TSOCoordinate *)eventLocationCoords
                               withLong:(long64)currentTimeMillis
                        withMotType:(MotType *)currentUserMot
                        withMotType:(MotType *)motType;

- (boolean)containsWithNSString:(NSString *)eventId;

- (void)copyAllFieldsTo:(EventsManager *)other;

@end

__attribute__((always_inline)) inline void EventsManager_init() {}

//J2OBJC_FIELD_SETTER(EventsManager, ttlProvider_, id<ITSOAlertsEngine>)
//J2OBJC_FIELD_SETTER(EventsManager, eventsPersistence_, EventsPersistenceUtil *)
//J2OBJC_FIELD_SETTER(EventsManager, listeners_, Set*)
//J2OBJC_FIELD_SETTER(EventsManager, alertsData_, EventsManager_EventsAlertsData *)
//J2OBJC_FIELD_SETTER(EventsManager, events_, EventsPriorityQueue *)
//J2OBJC_FIELD_SETTER(EventsManager, auditManager_, EventsAudit *)
//J2OBJC_FIELD_SETTER(EventsManager, routeProvider_, id<IRouteProviderInner>)
//J2OBJC_FIELD_SETTER(EventsManager, userStateManager_, id<IUserStateManagerModule>)
//J2OBJC_FIELD_SETTER(EventsManager, alarmManager_, id<ITSOAlarmManager>)
//J2OBJC_FIELD_SETTER(EventsManager, timerUtil_, id<ITSOTimeUtil>)
//J2OBJC_FIELD_SETTER(EventsManager, locationProvider_, id<ILocationProvider>)

FOUNDATION_EXPORT NSString *EventsManager_TAG_;
J2OBJC_STATIC_FIELD_GETTER(EventsManager, TAG_, NSString *)

FOUNDATION_EXPORT NSString *EventsManager_ALARM_ACTION_;
J2OBJC_STATIC_FIELD_GETTER(EventsManager, ALARM_ACTION_, NSString *)

FOUNDATION_EXPORT NSString *EventsManager_EVENT_START_ALARM_ACTION_;
J2OBJC_STATIC_FIELD_GETTER(EventsManager, EVENT_START_ALARM_ACTION_, NSString *)

FOUNDATION_EXPORT NSString *EventsManager_EVENT_END_ALARM_ACTION_;
J2OBJC_STATIC_FIELD_GETTER(EventsManager, EVENT_END_ALARM_ACTION_, NSString *)

FOUNDATION_EXPORT NSString *EventsManager_EVENT_START_ALARM_POSTFIX_;
J2OBJC_STATIC_FIELD_GETTER(EventsManager, EVENT_START_ALARM_POSTFIX_, NSString *)

FOUNDATION_EXPORT NSString *EventsManager_EVENT_END_ALARM_POSTFIX_;
J2OBJC_STATIC_FIELD_GETTER(EventsManager, EVENT_END_ALARM_POSTFIX_, NSString *)

J2OBJC_STATIC_FIELD_GETTER(EventsManager, MIN_DELAY, long64)

FOUNDATION_EXPORT id<ITSOLogger> EventsManager_logger_;
J2OBJC_STATIC_FIELD_GETTER(EventsManager, logger_, id<ITSOLogger>)
//J2OBJC_STATIC_FIELD_SETTER(EventsManager, logger_, id<ITSOLogger>)

typedef EventsManager ComIntelWearablePlatformTimeiqEventsEventsManager;

@interface EventsManager_TriggeredEventDBObject : ATSOBaseDBObject {
}

- (instancetype)init;

- (instancetype)initWithNSString:(NSString *)id_;

- (void)setObjectIdWithNSString:(NSString *)s;

- (NSString *)getId;

@end

__attribute__((always_inline)) inline void EventsManager_TriggeredEventDBObject_init() {}

@interface EventsManager_EventsAlertsData : NSObject {
 @public
  EventsManager *this$0_;
  HashMap* eventIdToAlert_;
  HashMap* alertIdToEvent_;
  HashMap* alertIdToTtl_;
  Set* eventsTriggered_;
}

- (void)loadFromPersistence;

- (void)markAsTriggeredWithNSString:(NSString *)eventId;

- (boolean)wasEventTriggeredWithNSString:(NSString *)eventId;

- (void)updateTtlWithNSString:(NSString *)alertId
    withTSOAlertUpdatedResult:(TSOAlertUpdatedResult *)ttl;

- (void)addTtlAlertWithITSOEvent:(id<ITSOEvent>)event
                    withTSOAlert:(TSOAlert *)alert;

- (TSOAlertUpdatedResult *)getLastTTLForAlertWithNSString:(NSString *)alertId;

- (void)removeByAlertIdWithNSString:(NSString *)alertId;

- (id<ITSOEvent>)getEventByAlertIdWithNSString:(NSString *)alertId;

- (TSOAlertUpdatedResult *)getLastTTLForEventWithNSString:(NSString *)eventId;

- (TSOAlert *)getAlertByEventIdWithNSString:(NSString *)eventId;

- (Set*)getEventsTriggered;

- (HashMap*)getAlertIdToEvent;

- (void)setAlertIdToEventWithJavaUtilMap:(HashMap*)alertIdToEvent;

- (HashMap*)getAlertIdToTtl;

- (void)setAlertIdToTtlWithJavaUtilMap:(HashMap*)alertIdToTtl;

- (HashMap*)getEventIdToAlert;

- (void)setEventIdToAlertWithJavaUtilMap:(HashMap*)eventIdToAlert;

- (void)removeTriggeredInfoWithNSString:(NSString *)eventId;

- (instancetype)initWithEventsManager:(EventsManager *)outer$;

- (void)copyAllFieldsTo:(EventsManager_EventsAlertsData *)other;

@end

__attribute__((always_inline)) inline void EventsManager_EventsAlertsData_init() {}

//J2OBJC_FIELD_SETTER(EventsManager_EventsAlertsData, this$0_, EventsManager *)
//J2OBJC_FIELD_SETTER(EventsManager_EventsAlertsData, eventIdToAlert_, HashMap*)
//J2OBJC_FIELD_SETTER(EventsManager_EventsAlertsData, alertIdToEvent_, HashMap*)
//J2OBJC_FIELD_SETTER(EventsManager_EventsAlertsData, alertIdToTtl_, HashMap*)
//J2OBJC_FIELD_SETTER(EventsManager_EventsAlertsData, eventsTriggered_, Set*)

@interface EventsManager_$1 : NSObject < Callable > {
 @public
  EventsManager *this$0_;
  TSOCoordinate *val$userLocationCoords_;
  TSOCoordinate *val$eventLocationCoords_;
  TransportType *val$preferredTransportType_;
  MotType *val$currentUserMot_;
}

- (ResultData *)call;

- (instancetype)initWithEventsManager:(EventsManager *)outer$
                    withTSOCoordinate:(TSOCoordinate *)capture$0
                    withTSOCoordinate:(TSOCoordinate *)capture$1
                withTransportType:(TransportType *)capture$2
                      withMotType:(MotType *)capture$3;

@end

__attribute__((always_inline)) inline void EventsManager_$1_init() {}

//J2OBJC_FIELD_SETTER(EventsManager_$1, this$0_, EventsManager *)
//J2OBJC_FIELD_SETTER(EventsManager_$1, val$userLocationCoords_, TSOCoordinate *)
//J2OBJC_FIELD_SETTER(EventsManager_$1, val$eventLocationCoords_, TSOCoordinate *)
//J2OBJC_FIELD_SETTER(EventsManager_$1, val$preferredTransportType_, TransportType *)
//J2OBJC_FIELD_SETTER(EventsManager_$1, val$currentUserMot_, MotType *)

@interface EventsManager_$2 : NSObject < Callable > {
 @public
  EventsManager *this$0_;
  TSOCoordinate *val$userLocationCoords_;
  TSOCoordinate *val$eventLocationCoords_;
  long64 val$currentTimeMillis_;
  MotType *val$currentUserMot_;
  MotType *val$motType_;
}

- (ResultData *)call;

- (instancetype)initWithEventsManager:(EventsManager *)outer$
                    withTSOCoordinate:(TSOCoordinate *)capture$0
                    withTSOCoordinate:(TSOCoordinate *)capture$1
                             withLong:(long64)capture$2
                      withMotType:(MotType *)capture$3
                      withMotType:(MotType *)capture$4;

@end

__attribute__((always_inline)) inline void EventsManager_$2_init() {}

//J2OBJC_FIELD_SETTER(EventsManager_$2, this$0_, EventsManager *)
//J2OBJC_FIELD_SETTER(EventsManager_$2, val$userLocationCoords_, TSOCoordinate *)
//J2OBJC_FIELD_SETTER(EventsManager_$2, val$eventLocationCoords_, TSOCoordinate *)
//J2OBJC_FIELD_SETTER(EventsManager_$2, val$currentUserMot_, MotType *)
//J2OBJC_FIELD_SETTER(EventsManager_$2, val$motType_, MotType *)

#endif // _EventsManager_H_
