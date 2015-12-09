//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: //com/intel/wearable/platform/timeiq/triggers/IBaseTriggersStorage.java
//

#ifndef _IBaseTriggersStorage_H_
#define _IBaseTriggersStorage_H_

#import "JBEnumSet.h"
@protocol ITriggerInner;
#import "JBHashSet.h"

#import "JB.h"

/**
 @brief Created by smoradof on 5/3/2015.
 */
@protocol IBaseTriggersStorage < NSObject >

- (boolean)addTriggerWithITriggerInner:(id<ITriggerInner>)trigger;

- (boolean)removeTriggerWithITriggerInner:(id<ITriggerInner>)trigger;

- (boolean)removeTriggersWithJavaUtilCollection:(Set*)toRemove;

- (boolean)setTriggerAsTriggeredWithITriggerInner:(id<ITriggerInner>)trigger;

- (boolean)setTriggerAsEndedWithITriggerInner:(id<ITriggerInner>)trigger;

- (boolean)removeAllTriggersWithNSString:(NSString *)listenerId;

- (id)getTriggerWithNSString:(NSString *)triggerId;

- (Set*)splitToListenersWithJavaUtilCollection:(Set*)triggers;

- (Set*)getTriggersWithNSString:(NSString *)listenerId
                              withEnumSet:(EnumSet *)triggerStatuses;

/**
 @brief should not be exposed in api
 @return list of ALL triggers by statuses (from all listeners)
 */
- (Set*)getAllTriggersByStatusWithEnumSet:(EnumSet *)triggerStatuses;

/**
 @brief should not be exposed in api
 @return list of ALL triggers (from all listeners)
 */
- (Set*)getAllTriggers;

/**
 @brief should not be exposed in api
 @return true if there are no triggers written to the storage
 */
- (boolean)isEmpty;

/**
 @brief For debug only
 */
- (Set*)getAllTriggersWithNSString:(NSString *)listenerId;

@end

__attribute__((always_inline)) inline void IBaseTriggersStorage_init() {}

#define ComIntelWearablePlatformTimeiqTriggersIBaseTriggersStorage IBaseTriggersStorage

#endif // _IBaseTriggersStorage_H_
