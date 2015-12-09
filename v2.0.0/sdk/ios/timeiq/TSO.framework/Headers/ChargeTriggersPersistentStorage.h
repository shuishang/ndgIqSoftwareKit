//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: //com/intel/wearable/platform/timeiq/triggers/charge/ChargeTriggersPersistentStorage.java
//

#ifndef _ChargeTriggersPersistentStorage_H_
#define _ChargeTriggersPersistentStorage_H_

@class ChargeTriggerType;
#import "JBClass.h"
#import "JBHashSet.h"

#import "JB.h"
#include "ABaseTriggersPersistentStorage.h"
#include "IChargeTriggerStorage.h"

/**
 @brief Created by Yaron Abramovich on 25.5.15.
 */
@interface ChargeTriggersPersistentStorage : ABaseTriggersPersistentStorage < IChargeTriggerStorage > {
}

- (Class )getClassType;

- (Set*)getTriggersWithTypeWithChargeTriggerType:(ChargeTriggerType *)type
                                                               withInt:(int)deviceCurrentPercent;

- (instancetype)init;

@end

__attribute__((always_inline)) inline void ChargeTriggersPersistentStorage_init() {}

typedef ChargeTriggersPersistentStorage ComIntelWearablePlatformTimeiqTriggersChargeChargeTriggersPersistentStorage;

#endif // _ChargeTriggersPersistentStorage_H_
