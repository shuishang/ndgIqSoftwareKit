//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: //com/intel/wearable/platform/timeiq/api/triggers/BaseTrigger.java
//

#ifndef _BaseTrigger_H_
#define _BaseTrigger_H_

@class BaseTrigger_BaseTriggerBuilder;
@class TriggerStatus;
@class TriggerType;

#import "JB.h"
#import "ITrigger.h"

/**
 @brief This class is the basic class that represents triggers.
 This class should not be used "as is", the classes that should be used are it's subclasses
 */
@interface BaseTrigger : NSObject < ITrigger > {
 @public
  TriggerType *m_triggerType_;
  NSString *m_id_;
  NSString *m_tag_;
  TriggerStatus *m_status_;
  long64 m_triggeredTime_;
}

/**
 @brief Create the trigger using a builder
 @param triggerBuilder the builder that has the input parameters for the trigger
 @throws TriggerBuildException will be thrown when input is missing or invalid (see eTriggerBuildExceptionType for reasons)
 */
- (instancetype)initWithBaseTrigger_BaseTriggerBuilder:(BaseTrigger_BaseTriggerBuilder *)triggerBuilder;

/**
 @brief Create the trigger using parameters (the builder should be used in most cases)
 @param id the unique ID of the trigger
 @param triggerType the type of the trigger ( TriggerType#CHARGE for ChargeTrigger , TriggerType#PLACE for PlaceTrigger , TriggerType#TIME for TimeTrigger or TriggerType#MOT for MotTrigger )
 @param tag tag that can be used for extra data in the trigger (can be null)
 @param status the status of the trigger
 @param triggeredTime the time that the trigger was triggered, or -1 if not triggered yet
 @throws TriggerBuildException will be thrown when input is missing or invalid (see eTriggerBuildExceptionType for reasons)
 */
- (instancetype)initWithNSString:(NSString *)id_
             withTriggerType:(TriggerType *)triggerType
                    withNSString:(NSString *)tag
           withTriggerStatus:(TriggerStatus *)status
                        withLong:(long64)triggeredTime;

/**
 @return the type of the trigger ( TriggerType#CHARGE for ChargeTrigger , TriggerType#PLACE for PlaceTrigger , TriggerType#TIME for TimeTrigger or TriggerType#MOT for MotTrigger )
 */
- (TriggerType *)getTriggerType;

/**
 @return the unique ID of the trigger
 */
- (NSString *)getId;

/**
 @return tag that can be used for extra data in the trigger (can be null)
 */
- (NSString *)getTag;

- (TriggerStatus *)getStatus;

- (long64)getTriggeredTime;

- (boolean)isEqual:(id)o;

- (NSUInteger)hash;

- (void)copyAllFieldsTo:(BaseTrigger *)other;

@end

__attribute__((always_inline)) inline void BaseTrigger_init() {}

//J2OBJC_FIELD_SETTER(BaseTrigger, m_triggerType_, TriggerType *)
//J2OBJC_FIELD_SETTER(BaseTrigger, m_id_, NSString *)
//J2OBJC_FIELD_SETTER(BaseTrigger, m_tag_, NSString *)
//J2OBJC_FIELD_SETTER(BaseTrigger, m_status_, TriggerStatus *)

typedef BaseTrigger ComIntelWearablePlatformTimeiqApiTriggersBaseTrigger;

/**
 @brief Builder class that creates a BaseTrigger
 @param < T >
 */
@interface BaseTrigger_BaseTriggerBuilder : NSObject {
 @public
  TriggerType *triggerType_;
  NSString *id__;
  NSString *tag__;
  TriggerStatus *status_;
  long64 triggeredTime_;
}

/**
 @brief Create a builder for creating the trigger
 @param triggerType the type of the trigger ( TriggerType#CHARGE for ChargeTrigger , TriggerType#PLACE for PlaceTrigger , TriggerType#TIME for TimeTrigger or TriggerType#MOT for MotTrigger )
 */
- (instancetype)initWithTriggerType:(TriggerType *)triggerType;

/**
 @param newId set the unique ID of the trigger
 @return the builder
 */
- (id)setIdWithNSString:(NSString *)newId;

/**
 @param tag set the tag that can be used for extra data in the trigger
 @return the builder
 */
- (id)tagWithNSString:(NSString *)tag;

/**
 @param status set the status of the trigger by default it is created with status TriggerStatus#NA . It should not be changed. Adding a trigger with a different status will throw an exception
 @return 
 */
- (id)setStatusWithTriggerStatus:(TriggerStatus *)status;

/**
 @param triggeredTime set the time that the trigger was triggered by default it is created with triggeredTime = -1 It should not be changed. Adding a trigger with a different triggeredTime will throw an exception
 @return 
 */
- (id)setTriggeredTimeWithLong:(long64)triggeredTime;

/**
 @return the unique ID of the trigger
 */
- (NSString *)getId;

/**
 @return tag that can be used for extra data in the trigger (can be null)
 */
- (NSString *)getTag;

/**
 @return the type of the trigger ( TriggerType#CHARGE for ChargeTrigger , TriggerType#PLACE for PlaceTrigger , TriggerType#TIME for TimeTrigger or TriggerType#MOT for MotTrigger )
 */
- (TriggerType *)getTriggerType;

/**
 @return initial status is not available, it will be active after added to the reminderManager
 */
- (TriggerStatus *)getStatus;

/**
 @return the time that the trigger was triggered, or -1 if it did not triggered yet
 */
- (long64)getTriggeredTime;

- (void)copyAllFieldsTo:(BaseTrigger_BaseTriggerBuilder *)other;

@end

__attribute__((always_inline)) inline void BaseTrigger_BaseTriggerBuilder_init() {}

//J2OBJC_FIELD_SETTER(BaseTrigger_BaseTriggerBuilder, triggerType_, TriggerType *)
//J2OBJC_FIELD_SETTER(BaseTrigger_BaseTriggerBuilder, id__, NSString *)
//J2OBJC_FIELD_SETTER(BaseTrigger_BaseTriggerBuilder, tag__, NSString *)
//J2OBJC_FIELD_SETTER(BaseTrigger_BaseTriggerBuilder, status_, TriggerStatus *)

#endif // _BaseTrigger_H_
