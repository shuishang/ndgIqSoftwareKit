//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: //com/intel/wearable/platform/timeiq/triggers/ITriggerLifeCycleListener.java
//

#ifndef _ITriggerLifeCycleListener_H_
#define _ITriggerLifeCycleListener_H_

@protocol ITriggerInner;

#import "JB.h"

/**
 @brief Created by mleib on 26/07/2015.
 */
@protocol ITriggerLifeCycleListener < NSObject >

- (void)onTriggerRegisteredWithITriggerInner:(id<ITriggerInner>)trigger;

- (void)onTriggerTriggeredWithITriggerInner:(id<ITriggerInner>)trigger;

- (void)onTriggerEndedWithITriggerInner:(id<ITriggerInner>)trigger;

- (void)onTriggerRemovedWithITriggerInner:(id<ITriggerInner>)trigger;

@end

__attribute__((always_inline)) inline void ITriggerLifeCycleListener_init() {}

#define ComIntelWearablePlatformTimeiqTriggersITriggerLifeCycleListener ITriggerLifeCycleListener

#endif // _ITriggerLifeCycleListener_H_
