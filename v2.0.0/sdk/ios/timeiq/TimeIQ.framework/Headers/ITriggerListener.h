//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: //com/intel/wearable/platform/timeiq/triggers/ITriggerListener.java
//

#ifndef _ITriggerListener_H_
#define _ITriggerListener_H_

#import "JBHashSet.h"

#import "JB.h"

/**
 @brief Created by mleib on 29/04/2015.
 */
@protocol ITriggerListener < NSObject >

- (void)onTriggerWithJavaUtilCollection:(Set*)triggers;

@end

__attribute__((always_inline)) inline void ITriggerListener_init() {}

#define ComIntelWearablePlatformTimeiqTriggersITriggerListener ITriggerListener

#endif // _ITriggerListener_H_