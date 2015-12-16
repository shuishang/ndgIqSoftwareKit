//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: //com/intel/wearable/platform/timeiq/sensors/replay/AbstractHWTestLocationSensor.java
//

#ifndef _AbstractHWTestLocationSensor_H_
#define _AbstractHWTestLocationSensor_H_

@class SensorType;

#import "JB.h"
#import "ILocationAwareSensor.h"
#import "AbstractHWTestSensor.h"

/**
 @brief Created by eleuchte on 11/08/2015.
 */
@interface AbstractHWTestLocationSensor : AbstractHWTestSensor < ILocationAwareSensor > {
 @public
  boolean m_isHighAccuracySampling_;
}

- (instancetype)initWithLong:(long64)sampleIntervalInMillis
          withSensorType:(SensorType *)sensorType;

- (void)onChangeLocationAccuracySampleWithBoolean:(boolean)isHighAccuracySampling;

- (boolean)isHighAccuracySampling;

- (void)copyAllFieldsTo:(AbstractHWTestLocationSensor *)other;

@end

__attribute__((always_inline)) inline void AbstractHWTestLocationSensor_init() {}

typedef AbstractHWTestLocationSensor ComIntelWearablePlatformTimeiqSensorsReplayAbstractHWTestLocationSensor;

#endif // _AbstractHWTestLocationSensor_H_