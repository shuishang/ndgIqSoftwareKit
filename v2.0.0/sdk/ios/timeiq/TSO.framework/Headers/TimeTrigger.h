//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: //com/intel/wearable/platform/timeiq/api/triggers/time/TimeTrigger.java
//

#ifndef _TimeTrigger_H_
#define _TimeTrigger_H_

@class TimeTrigger_TimeTriggerBuilder;
@class TriggerStatus;

#import "JB.h"
#import "BaseTrigger.h"

/**
 @brief This class represents a trigger for a specific pre-defined time
 */
@interface TimeTrigger : BaseTrigger {
 @public
  long64 m_triggerTime_;
  boolean m_isExact_;
}

/**
 @brief Create the TimeTrigger using a builder
 @param builder the builder that has the input parameters for the trigger
 @throws TriggerBuildException will be thrown when input is missing or invalid (see eTriggerBuildExceptionType for reasons)
 */
- (instancetype)initWithTimeTrigger_TimeTriggerBuilder:(TimeTrigger_TimeTriggerBuilder *)builder;

/**
 @brief Create the TimeTrigger using parameters (the builder should be used in most cases)
 @param id the unique ID of the trigger
 @param tag tag that can be used for extra data in the trigger (can be null)
 @param triggerTime the time that the trigger will be triggered
 @param isExact does the trigger time needs to be exact (exact time will be more accurate on the expense of performance)
 @param status the status of the trigger
 @param triggeredTime the time that the trigger was triggered, or -1 if not triggered yet
 @throws TriggerBuildException will be thrown when input is missing or invalid (see eTriggerBuildExceptionType for reasons)
 */
- (instancetype)initWithNSString:(NSString *)id_
                    withNSString:(NSString *)tag
                        withLong:(long64)triggerTime
                     withBoolean:(boolean)isExact
           withTriggerStatus:(TriggerStatus *)status
                        withLong:(long64)triggeredTime;

/**
 @return the time that the trigger will be triggered
 */
- (long64)getTriggerTime;

/**
 @return whether or not the triggering time is exact
 */
- (boolean)isExact;

- (boolean)isEqual:(id)o;

- (NSUInteger)hash;

- (void)copyAllFieldsTo:(TimeTrigger *)other;

@end

__attribute__((always_inline)) inline void TimeTrigger_init() {}

typedef TimeTrigger ComIntelWearablePlatformTimeiqApiTriggersTimeTimeTrigger;

/**
 @brief Builder class that creates a TimeTrigger
 */
@interface TimeTrigger_TimeTriggerBuilder : BaseTrigger_BaseTriggerBuilder {
 @public
  long64 triggerTime_;
  boolean isExact__;
}

/**
 @brief Create a builder for creating the TimeTrigger
 @param triggerTime the time that the trigger will be triggered
 */
- (instancetype)initWithLong:(long64)triggerTime;

/**
 @param isExact does the trigger time needs to be exact (exact time will be more accurate on the expense of performance)
 @return the builder
 */
- (TimeTrigger_TimeTriggerBuilder *)isExactWithBoolean:(boolean)isExact;

/**
 @brief Create the TimeTrigger
 @return the TimeTrigger
 @throws TriggerBuildException will be thrown when input is missing or invalid (see eTriggerBuildExceptionType for reasons)
 */
- (TimeTrigger *)build;

- (void)copyAllFieldsTo:(TimeTrigger_TimeTriggerBuilder *)other;

@end

__attribute__((always_inline)) inline void TimeTrigger_TimeTriggerBuilder_init() {}

#endif // _TimeTrigger_H_
