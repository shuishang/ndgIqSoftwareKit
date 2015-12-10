//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: //com/intel/wearable/platform/timeiq/sensors/datatypes/network/NetworkConsumptionData.java
//

#ifndef _NetworkConsumptionData_H_
#define _NetworkConsumptionData_H_

#import "JBHashtable.h"

#import "JB.h"
#import "BaseSensorData.h"

/**
 @brief Created by eleuchte on 20/09/2015.
 */
@interface NetworkConsumptionData : BaseSensorData {
 @public
  long64 m_transmittedDataSize_;
  long64 m_receivedDataSize_;
  long64 m_transmissionTime_;
}

- (instancetype)init;

- (instancetype)initWithNSString:(NSString *)summary
                        withLong:(long64)timeStamp
                        withLong:(long64)transmittedDataSize
                        withLong:(long64)receivedDataSize
                        withLong:(long64)transmissionTime;

- (long64)getTransmittedDataSize;

- (long64)getReceivedDataSize;

- (long64)getTransmissionTime;

- (void)initObjectFromMapWithJavaUtilMap:(HashMap*)stringObjectMap OBJC_METHOD_FAMILY_NONE;

- (HashMap*)objectToMap;

- (boolean)isEqual:(id)o;

- (NSUInteger)hash;

- (void)copyAllFieldsTo:(NetworkConsumptionData *)other;

@end

__attribute__((always_inline)) inline void NetworkConsumptionData_init() {}

FOUNDATION_EXPORT NSString *NetworkConsumptionData_TRANSMITTED_DATA_SIZE_;
J2OBJC_STATIC_FIELD_GETTER(NetworkConsumptionData, TRANSMITTED_DATA_SIZE_, NSString *)

FOUNDATION_EXPORT NSString *NetworkConsumptionData_RECEIVED_DATA_SIZE_;
J2OBJC_STATIC_FIELD_GETTER(NetworkConsumptionData, RECEIVED_DATA_SIZE_, NSString *)

FOUNDATION_EXPORT NSString *NetworkConsumptionData_TRANSMISSION_TIME_;
J2OBJC_STATIC_FIELD_GETTER(NetworkConsumptionData, TRANSMISSION_TIME_, NSString *)

typedef NetworkConsumptionData ComIntelWearablePlatformTimeiqSensorsDatatypesNetworkNetworkConsumptionData;

#endif // _NetworkConsumptionData_H_
