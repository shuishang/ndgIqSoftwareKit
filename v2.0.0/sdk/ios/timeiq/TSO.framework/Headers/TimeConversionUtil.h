//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: //com/intel/wearable/platform/timeiq/common/utils/time/TimeConversionUtil.java
//

#ifndef _TimeConversionUtil_H_
#define _TimeConversionUtil_H_

#import "JBCalendar.h"

#import "JB.h"

/**
 @brief Created by smoradof on 9/8/2015.
 */
@interface TimeConversionUtil : NSObject {
}

+ (long64)getModuloDayOfMonthWithLong:(long64)timeInMillis;

+ (long64)getModuloHoursOfDayWithLong:(long64)timeInMillis;

+ (long64)getModuloMinutesWithLong:(long64)timeInMillis;

+ (long64)getModuloSecondsWithLong:(long64)timeInMillis;

+ (long64)getModuloMillisecondsWithLong:(long64)timeInMillis;

+ (long64)getTimeAtStartOfDayWithLong:(long64)timeInMillis;

+ (Calendar *)getCalendarWithLong:(long64)timeInMillis;

- (instancetype)init;

@end

__attribute__((always_inline)) inline void TimeConversionUtil_init() {}

typedef TimeConversionUtil ComIntelWearablePlatformTimeiqCommonUtilsTimeTimeConversionUtil;

#endif // _TimeConversionUtil_H_
