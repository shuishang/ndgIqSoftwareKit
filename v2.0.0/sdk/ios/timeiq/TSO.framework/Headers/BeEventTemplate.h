//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: //com/intel/wearable/platform/timeiq/extended_events/templates/BeEventTemplate.java
//

#ifndef _BeEventTemplate_H_
#define _BeEventTemplate_H_

@class TSOPlace;
#import "JBHashtable.h"

#import "JB.h"
#import "IMappable.h"

/**
 @brief Created by smoradof on 7/29/2015.
 */
@interface BeEventTemplate : NSObject < IMappable > {
 @public
  TSOPlace *mLocation_;
  long64 mArrivalTime_;
  long64 mDuration_;
  NSString *mSubject_;
  NSString *mDescription_;
  long64 mReminderTimeBeforeTTL_;
  boolean mIsActive_;
  NSString *mUiControllerId_;
}

- (instancetype)init;

- (instancetype)initWithTSOPlace:(TSOPlace *)location
                        withLong:(long64)arrivalTime
                        withLong:(long64)duration
                    withNSString:(NSString *)subject
                    withNSString:(NSString *)description_
                        withLong:(long64)reminderTimeBeforeTTL
                     withBoolean:(boolean)isActive
                    withNSString:(NSString *)uiControllerId;

- (BeEventTemplate *)clone;

- (TSOPlace *)getLocation;

- (long64)getArrivalTime;

- (long64)getDuration;

- (NSString *)getSubject;

- (NSString *)getDescription;

- (long64)getReminderTimeBeforeTTL;

- (boolean)isActive;

- (void)setLocationWithTSOPlace:(TSOPlace *)location;

- (void)setArrivalTimeWithLong:(long64)arrivalTime;

- (void)setDurationWithLong:(long64)duration;

- (void)setSubjectWithNSString:(NSString *)subject;

- (void)setDescriptionWithNSString:(NSString *)description_;

- (void)setReminderTimeBeforeTTLWithLong:(long64)reminderTimeBeforeTTL;

- (void)setIsActiveWithBoolean:(boolean)isActive;

- (NSString *)getUiControllerId;

- (void)setUiControllerIdWithNSString:(NSString *)uiControllerId;

- (void)initObjectFromMapWithJavaUtilMap:(HashMap*)stringObjectMap OBJC_METHOD_FAMILY_NONE;

- (HashMap*)objectToMap;

- (NSString *)description;

- (void)copyAllFieldsTo:(BeEventTemplate *)other;

@end

__attribute__((always_inline)) inline void BeEventTemplate_init() {}

//J2OBJC_FIELD_SETTER(BeEventTemplate, mLocation_, TSOPlace *)
//J2OBJC_FIELD_SETTER(BeEventTemplate, mSubject_, NSString *)
//J2OBJC_FIELD_SETTER(BeEventTemplate, mDescription_, NSString *)
//J2OBJC_FIELD_SETTER(BeEventTemplate, mUiControllerId_, NSString *)

FOUNDATION_EXPORT NSString *BeEventTemplate_LOCATION_FIELD_;
J2OBJC_STATIC_FIELD_GETTER(BeEventTemplate, LOCATION_FIELD_, NSString *)

FOUNDATION_EXPORT NSString *BeEventTemplate_ARRIVE_TIME_FIELD_;
J2OBJC_STATIC_FIELD_GETTER(BeEventTemplate, ARRIVE_TIME_FIELD_, NSString *)

FOUNDATION_EXPORT NSString *BeEventTemplate_DURATION_FIELD_;
J2OBJC_STATIC_FIELD_GETTER(BeEventTemplate, DURATION_FIELD_, NSString *)

FOUNDATION_EXPORT NSString *BeEventTemplate_SUBJECT_FIELD_;
J2OBJC_STATIC_FIELD_GETTER(BeEventTemplate, SUBJECT_FIELD_, NSString *)

FOUNDATION_EXPORT NSString *BeEventTemplate_DESCRIPTION_FIELD_;
J2OBJC_STATIC_FIELD_GETTER(BeEventTemplate, DESCRIPTION_FIELD_, NSString *)

FOUNDATION_EXPORT NSString *BeEventTemplate_REMINDER_TIME_BEFORE_TTL_FIELD_;
J2OBJC_STATIC_FIELD_GETTER(BeEventTemplate, REMINDER_TIME_BEFORE_TTL_FIELD_, NSString *)

FOUNDATION_EXPORT NSString *BeEventTemplate_IS_ACTIVE_FIELD_;
J2OBJC_STATIC_FIELD_GETTER(BeEventTemplate, IS_ACTIVE_FIELD_, NSString *)

FOUNDATION_EXPORT NSString *BeEventTemplate_UI_CONTROLLER_ID_FIELD_;
J2OBJC_STATIC_FIELD_GETTER(BeEventTemplate, UI_CONTROLLER_ID_FIELD_, NSString *)

typedef BeEventTemplate ComIntelWearablePlatformTimeiqExtended_eventsTemplatesBeEventTemplate;

#endif // _BeEventTemplate_H_
