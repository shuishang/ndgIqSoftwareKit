//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: //com/intel/wearable/platform/timeiq/events/audit/TSOEventAuditObj.java
//

#ifndef _TSOEventAuditObj_H_
#define _TSOEventAuditObj_H_

@class EventTriggerType;
#import "NSNumber+JavaAPI.h"
#import "NSNumber+JavaAPI.h"
@class MessageType;
@class MotType;
@class RecurrenceDetails;
@class RouteDataType;
@class TSOEventChangeType;
@class TSOEventType;
@class TSOPlace;
@class TransportType;
@class UpdateAlertResultType;
@class UserActionType;
@protocol ITSOEvent;
#import "JBArrayList.h"
#import "JBHashtable.h"

#import "JB.h"
#include "IMappable.h"

/**
 @brief Created by slevin on 27/08/2015.
 */
@interface TSOEventAuditObj : NSObject < IMappable > {
 @public
  NSString *eventId_;
  NSString *innerEventId_;
  TSOPlace *location_;
  long64 arrivalTime_;
  long64 duration_;
  long64 lastUpdateTime_;
  TSOEventType *eventType_;
  NSString *calendarId_;
  NSString *subject_;
  NSString *description__;
  long64 reminderTimeBeforeTTL_;
  long64 generalAlarmTime_;
  boolean disableTTLAlerts_;
  boolean alertOnEventStart_;
  boolean alertOnEventEnd_;
  TransportType *preferredTransportType_;
  TSOEventChangeType *eventChangeType_;
  NSString *writeCalendarId_;
  NSString *tsoAlertId_;
  Long *calculatedNotificationTime_;
  NSString *calcNotificationTimeStr_;
  Long *actualNotificationTime_;
  MessageType *messageType_;
  UserActionType *userActionType_;
  long64 userChoiceSnoozeTime_;
  RouteDataType *ttlRouteDataType_;
  MotType *ttlMotType_;
  Long *ttlRouteDurationInMin_;
  Long *ttlArrivalTime_;
  NSString *ttlArrivalTimeStr_;
  Long *ttlDepartureTime_;
  NSString *ttlDepartureTimeStr_;
  EventTriggerType *eventTriggerType_;
  UpdateAlertResultType *ttlResultType_;
  JBBoolean *addToCalendar_;
  RecurrenceDetails *recurrenceDetails_;
  JBBoolean *isFromBe_;
  NSString *meetingLocationField_;
  ArrayList* attendees_;
  NSString *organizerEmail_;
  JBBoolean *organizer_;
  JBBoolean *allDayEvent_;
  JBBoolean *recurrent_;
  NSString *meetingId_;
}

- (instancetype)initWithITSOEvent:(id<ITSOEvent>)tsoEvent;

- (instancetype)initWithNSString:(NSString *)outerId
                   withITSOEvent:(id<ITSOEvent>)tsoEvent;

- (instancetype)initWithNSString:(NSString *)eventId;

- (void)initObjectFromMapWithJavaUtilMap:(HashMap*)map OBJC_METHOD_FAMILY_NONE;

- (HashMap*)objectToMap;

- (NSString *)getEventId;

- (void)setEventIdWithNSString:(NSString *)eventId;

- (NSString *)getInnerEventId;

- (void)setInnerEventIdWithNSString:(NSString *)innerEventId;

- (TSOPlace *)getLocation;

- (void)setLocationWithTSOPlace:(TSOPlace *)location;

- (long64)getArrivalTime;

- (void)setArrivalTimeWithLong:(long64)arrivalTime;

- (long64)getDuration;

- (void)setDurationWithLong:(long64)duration;

- (long64)getLastUpdateTime;

- (void)setLastUpdateTimeWithLong:(long64)lastUpdateTime;

- (TSOEventType *)getEventType;

- (void)setEventTypeWithTSOEventType:(TSOEventType *)eventType;

- (NSString *)getCalendarId;

- (void)setCalendarIdWithNSString:(NSString *)calendarId;

- (NSString *)getSubject;

- (void)setSubjectWithNSString:(NSString *)subject;

- (NSString *)getDescription;

- (void)setDescriptionWithNSString:(NSString *)description_;

- (long64)getReminderTimeBeforeTTL;

- (void)setReminderTimeBeforeTTLWithLong:(long64)reminderTimeBeforeTTL;

- (long64)getGeneralAlarmTime;

- (void)setGeneralAlarmTimeWithLong:(long64)generalAlarmTime;

- (boolean)isDisableTTLAlerts;

- (void)setDisableTTLAlertsWithBoolean:(boolean)disableTTLAlerts;

- (boolean)isAlertOnEventStart;

- (void)setAlertOnEventStartWithBoolean:(boolean)alertOnEventStart;

- (boolean)isAlertOnEventEnd;

- (void)setAlertOnEventEndWithBoolean:(boolean)alertOnEventEnd;

- (TransportType *)getPreferredTransportType;

- (void)setPreferredTransportTypeWithTransportType:(TransportType *)preferredTransportType;

- (TSOEventChangeType *)getEventChangeType;

- (void)setEventChangeTypeWithTSOEventChangeType:(TSOEventChangeType *)eventChangeType;

- (NSString *)getWriteCalendarId;

- (void)setWriteCalendarIdWithNSString:(NSString *)writeCalendarId;

- (NSString *)getTsoAlertId;

- (void)setTsoAlertIdWithNSString:(NSString *)tsoAlertId;

- (Long *)getCalculatedNotificationTime;

- (void)setCalculatedNotificationTimeWithLong:(Long *)calculatedNotificationTime;

- (NSString *)getCalcNotificationTimeStr;

- (void)setCalcNotificationTimeStrWithNSString:(NSString *)calcNotificationTimeStr;

- (Long *)getActualNotificationTime;

- (void)setActualNotificationTimeWithLong:(Long *)actualNotificationTime;

- (MessageType *)getMessageType;

- (void)setMessageTypeWithMessageType:(MessageType *)messageType;

- (UserActionType *)getUserActionType;

- (void)setUserActionTypeWithUserActionType:(UserActionType *)userActionType;

- (long64)getUserChoiceSnoozeTime;

- (void)setUserChoiceSnoozeTimeWithLong:(long64)userChoiceSnoozeTime;

- (RouteDataType *)getTtlRouteDataType;

- (void)setTtlRouteDataTypeWithRouteDataType:(RouteDataType *)ttlRouteDataType;

- (MotType *)getTtlMotType;

- (void)setTtlMotTypeWithMotType:(MotType *)ttlMotType;

- (Long *)getTtlRouteDurationInMin;

- (void)setTtlRouteDurationInMinWithLong:(Long *)ttlRouteDurationInMin;

- (Long *)getTtlArrivalTime;

- (void)setTtlArrivalTimeWithLong:(Long *)ttlArrivalTime;

- (NSString *)getTtlArrivalTimeStr;

- (void)setTtlArrivalTimeStrWithNSString:(NSString *)ttlArrivalTimeStr;

- (Long *)getTtlDepartureTime;

- (void)setTtlDepartureTimeWithLong:(Long *)ttlDepartureTime;

- (NSString *)getTtlDepartureTimeStr;

- (void)setTtlDepartureTimeStrWithNSString:(NSString *)ttlDepartureTimeStr;

- (EventTriggerType *)getEventTriggerType;

- (void)setEventTriggerTypeWithEventTriggerType:(EventTriggerType *)eventTriggerType;

- (UpdateAlertResultType *)getTtlResultType;

- (void)setTtlResultTypeWithUpdateAlertResultType:(UpdateAlertResultType *)ttlResultType;

- (JBBoolean *)getAddToCalendar;

- (void)setAddToCalendarWithJBBoolean:(JBBoolean *)addToCalendar;

- (RecurrenceDetails *)getRecurrenceDetails;

- (void)setRecurrenceDetailsWithRecurrenceDetails:(RecurrenceDetails *)recurrenceDetails;

- (JBBoolean *)getIsFromBe;

- (void)setIsFromBeWithJBBoolean:(JBBoolean *)isFromBe;

- (NSString *)getMeetingLocationField;

- (void)setMeetingLocationFieldWithNSString:(NSString *)meetingLocationField;

- (ArrayList*)getAttendees;

- (void)setAttendeesWithJavaUtilList:(ArrayList*)attendees;

- (NSString *)getOrganizerEmail;

- (void)setOrganizerEmailWithNSString:(NSString *)organizerEmail;

- (JBBoolean *)getOrganizer;

- (void)setOrganizerWithJBBoolean:(JBBoolean *)organizer;

- (JBBoolean *)getAllDayEvent;

- (void)setAllDayEventWithJBBoolean:(JBBoolean *)allDayEvent;

- (JBBoolean *)getRecurrent;

- (void)setRecurrentWithJBBoolean:(JBBoolean *)recurrent;

- (NSString *)getMeetingId;

- (void)setMeetingIdWithNSString:(NSString *)meetingId;

- (void)copyAllFieldsTo:(TSOEventAuditObj *)other;

@end

__attribute__((always_inline)) inline void TSOEventAuditObj_init() {}

//J2OBJC_FIELD_SETTER(TSOEventAuditObj, eventId_, NSString *)
//J2OBJC_FIELD_SETTER(TSOEventAuditObj, innerEventId_, NSString *)
//J2OBJC_FIELD_SETTER(TSOEventAuditObj, location_, TSOPlace *)
//J2OBJC_FIELD_SETTER(TSOEventAuditObj, eventType_, TSOEventType *)
//J2OBJC_FIELD_SETTER(TSOEventAuditObj, calendarId_, NSString *)
//J2OBJC_FIELD_SETTER(TSOEventAuditObj, subject_, NSString *)
//J2OBJC_FIELD_SETTER(TSOEventAuditObj, description__, NSString *)
//J2OBJC_FIELD_SETTER(TSOEventAuditObj, preferredTransportType_, TransportType *)
//J2OBJC_FIELD_SETTER(TSOEventAuditObj, eventChangeType_, TSOEventChangeType *)
//J2OBJC_FIELD_SETTER(TSOEventAuditObj, writeCalendarId_, NSString *)
//J2OBJC_FIELD_SETTER(TSOEventAuditObj, tsoAlertId_, NSString *)
//J2OBJC_FIELD_SETTER(TSOEventAuditObj, calculatedNotificationTime_, Long *)
//J2OBJC_FIELD_SETTER(TSOEventAuditObj, calcNotificationTimeStr_, NSString *)
//J2OBJC_FIELD_SETTER(TSOEventAuditObj, actualNotificationTime_, Long *)
//J2OBJC_FIELD_SETTER(TSOEventAuditObj, messageType_, MessageType *)
//J2OBJC_FIELD_SETTER(TSOEventAuditObj, userActionType_, UserActionType *)
//J2OBJC_FIELD_SETTER(TSOEventAuditObj, ttlRouteDataType_, RouteDataType *)
//J2OBJC_FIELD_SETTER(TSOEventAuditObj, ttlMotType_, MotType *)
//J2OBJC_FIELD_SETTER(TSOEventAuditObj, ttlRouteDurationInMin_, Long *)
//J2OBJC_FIELD_SETTER(TSOEventAuditObj, ttlArrivalTime_, Long *)
//J2OBJC_FIELD_SETTER(TSOEventAuditObj, ttlArrivalTimeStr_, NSString *)
//J2OBJC_FIELD_SETTER(TSOEventAuditObj, ttlDepartureTime_, Long *)
//J2OBJC_FIELD_SETTER(TSOEventAuditObj, ttlDepartureTimeStr_, NSString *)
//J2OBJC_FIELD_SETTER(TSOEventAuditObj, eventTriggerType_, EventTriggerType *)
//J2OBJC_FIELD_SETTER(TSOEventAuditObj, ttlResultType_, UpdateAlertResultType *)
//J2OBJC_FIELD_SETTER(TSOEventAuditObj, addToCalendar_, JBBoolean *)
//J2OBJC_FIELD_SETTER(TSOEventAuditObj, recurrenceDetails_, RecurrenceDetails *)
//J2OBJC_FIELD_SETTER(TSOEventAuditObj, isFromBe_, JBBoolean *)
//J2OBJC_FIELD_SETTER(TSOEventAuditObj, meetingLocationField_, NSString *)
//J2OBJC_FIELD_SETTER(TSOEventAuditObj, attendees_, ArrayList*)
//J2OBJC_FIELD_SETTER(TSOEventAuditObj, organizerEmail_, NSString *)
//J2OBJC_FIELD_SETTER(TSOEventAuditObj, organizer_, JBBoolean *)
//J2OBJC_FIELD_SETTER(TSOEventAuditObj, allDayEvent_, JBBoolean *)
//J2OBJC_FIELD_SETTER(TSOEventAuditObj, recurrent_, JBBoolean *)
//J2OBJC_FIELD_SETTER(TSOEventAuditObj, meetingId_, NSString *)

typedef TSOEventAuditObj ComIntelWearablePlatformTimeiqEventsAuditTSOEventAuditObj;

#endif // _TSOEventAuditObj_H_
