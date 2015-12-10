//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: //com/intel/wearable/platform/timeiq/places/modules/placesmodule/semantic/WorkingHoursVisitCondition.java
//

#ifndef _WorkingHoursVisitCondition_H_
#define _WorkingHoursVisitCondition_H_

#import "JB.h"
#import "VisitTimeofDay.h"

@interface WorkingHoursVisitCondition : NSObject < VisitTimeofDay > {
}

- (boolean)isVisitTimeWithLong:(long64)time
                     withDouble:(double)longitude;

- (boolean)isLongStayWithInt:(int)stayInMinutes
                   withDouble:(double)duration;

- (boolean)isOvernightVisit;

- (instancetype)init;

@end

FOUNDATION_EXPORT BOOL WorkingHoursVisitCondition_initialized;
J2OBJC_STATIC_INIT(WorkingHoursVisitCondition)

FOUNDATION_EXPORT int WorkingHoursVisitCondition_MinDuration_;
J2OBJC_STATIC_FIELD_GETTER(WorkingHoursVisitCondition, MinDuration_, int)
//J2OBJC_STATIC_FIELD_REF_GETTER(WorkingHoursVisitCondition, MinDuration_, int)

FOUNDATION_EXPORT int WorkingHoursVisitCondition_MinStayHours_;
J2OBJC_STATIC_FIELD_GETTER(WorkingHoursVisitCondition, MinStayHours_, int)
//J2OBJC_STATIC_FIELD_REF_GETTER(WorkingHoursVisitCondition, MinStayHours_, int)

typedef WorkingHoursVisitCondition ComIntelWearablePlatformTimeiqPlacesModulesPlacesmoduleSemanticWorkingHoursVisitCondition;

#endif // _WorkingHoursVisitCondition_H_
