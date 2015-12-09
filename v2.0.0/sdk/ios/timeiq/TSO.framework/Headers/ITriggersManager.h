//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: //com/intel/wearable/platform/timeiq/triggers/ITriggersManager.java
//

#ifndef _ITriggersManager_H_
#define _ITriggersManager_H_

#import "JBEnumSet.h"
@class Result;
@protocol ITrigger;
@protocol ITriggerListener;
#import "JBHashSet.h"

#import "JB.h"

/**
 @brief Created by mleib on 26/04/2015.
 */
@protocol ITriggersManager < NSObject >

- (Result *)addTriggerWithITrigger:(id<ITrigger>)trigger
                      withNSString:(NSString *)listenerId;

- (void)addTriggerListenerWithNSString:(NSString *)listenerId
                  withITriggerListener:(id<ITriggerListener>)triggerListener;

- (boolean)removeTriggerWithNSString:(NSString *)triggerId;

- (id<ITrigger>)getTriggerWithNSString:(NSString *)triggerId;

- (Set*)getTriggersWithNSString:(NSString *)listenerId
                              withEnumSet:(EnumSet *)triggerStatuses;

- (void)removeAllTriggersWithNSString:(NSString *)listenerId;

- (void)onDestroy;

@end

__attribute__((always_inline)) inline void ITriggersManager_init() {}

#define ComIntelWearablePlatformTimeiqTriggersITriggersManager ITriggersManager

#endif // _ITriggersManager_H_
