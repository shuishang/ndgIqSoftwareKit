//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: //com/intel/wearable/platform/timeiq/sensors/audit/ISensorRawDataAudit.java
//

#ifndef _ISensorRawDataAudit_H_
#define _ISensorRawDataAudit_H_

@class BaseSensorData;
@class eAuditLabels;

#import "JB.h"

/**
 @brief Created by eleuchte on 10/8/2015.
 */
@protocol ISensorRawDataAudit < NSObject >

- (void)auditDataWithBaseSensorData:(BaseSensorData *)data
               withEAuditLabelsEnum:(eAuditLabels *)label;

@end

__attribute__((always_inline)) inline void ISensorRawDataAudit_init() {}

#define ComIntelWearablePlatformTimeiqSensorsAuditISensorRawDataAudit ISensorRawDataAudit

#endif // _ISensorRawDataAudit_H_
