//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: //com/intel/wearable/platform/timeiq/sensors/datatypes/bluetooth/BluetoothDeviceSensorData.java
//

#ifndef _BluetoothDeviceSensorData_H_
#define _BluetoothDeviceSensorData_H_

@class BluetoothDeviceInfo;
#import "JBVector.h"
#import "JBHashtable.h"

#import "JB.h"
#include "BaseSensorData.h"

/**
 @brief Created by orencoh2 on 18/12/14.
 */
@interface BluetoothDeviceSensorData : BaseSensorData {
 @public
  BluetoothDeviceInfo *m_deviceInfo_;
  Vector *m_pairedDevices_;
}

- (instancetype)init;

- (instancetype)initWithNSString:(NSString *)summary
                        withLong:(long64)timeStamp
         withBluetoothDeviceInfo:(BluetoothDeviceInfo *)scanDevice
              withVector:(Vector *)pairedDevices;

- (BluetoothDeviceInfo *)getDeviceInfo;

- (void)initObjectFromMapWithJavaUtilMap:(HashMap*)stringObjectMap OBJC_METHOD_FAMILY_NONE;

- (HashMap*)objectToMap;

- (boolean)isEqual:(id)o;

- (NSUInteger)hash;

- (void)copyAllFieldsTo:(BluetoothDeviceSensorData *)other;

@end

__attribute__((always_inline)) inline void BluetoothDeviceSensorData_init() {}

//J2OBJC_FIELD_SETTER(BluetoothDeviceSensorData, m_deviceInfo_, BluetoothDeviceInfo *)
//J2OBJC_FIELD_SETTER(BluetoothDeviceSensorData, m_pairedDevices_, Vector *)

FOUNDATION_EXPORT NSString *BluetoothDeviceSensorData_DEVICE_INFO_FIELD_;
J2OBJC_STATIC_FIELD_GETTER(BluetoothDeviceSensorData, DEVICE_INFO_FIELD_, NSString *)

FOUNDATION_EXPORT NSString *BluetoothDeviceSensorData_PAIRED_DEVICES_FIELD_;
J2OBJC_STATIC_FIELD_GETTER(BluetoothDeviceSensorData, PAIRED_DEVICES_FIELD_, NSString *)

typedef BluetoothDeviceSensorData ComIntelWearablePlatformTimeiqSensorsDatatypesBluetoothBluetoothDeviceSensorData;

#endif // _BluetoothDeviceSensorData_H_
