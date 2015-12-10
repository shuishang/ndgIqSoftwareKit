//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: //com/intel/wearable/platform/timeiq/sensors/engine/SensorStateManager.java
//

#ifndef _SensorStateManager_H_
#define _SensorStateManager_H_

@class AbstractHWSensor;
@class BaseSensorData;
@class ReceiverSensorsRequest;
@class SensorType;
@protocol ISensorDataReceiver;
@protocol IWakeLock;
#import "JBExecutorService.h"
#import "JBFuture.h"
#import "JBHashSet.h"

#import "JB.h"
#import "IHWSensorListener.h"
#import "JBRunnable.h"

/**
 */
@interface SensorStateManager : NSObject < IHWSensorListener > {
 @public
  Set* m_receivers_;
  id<ExecutorService> m_executor_;
  id<IWakeLock> m_wakeLock_;
}

- (instancetype)init;

+ (void)init__ OBJC_METHOD_FAMILY_NONE;

+ (void)dispose;

+ (SensorStateManager *)getInstance;

- (void)registerReceiverOnSpecificSensorsWithISensorDataReceiver:(id<ISensorDataReceiver>)receiver
                                      withReceiverSensorsRequest:(ReceiverSensorsRequest *)request;

- (void)unregisterReceiverFromAllSensorsWithISensorDataReceiver:(id<ISensorDataReceiver>)sensorDataReceiver;

- (void)registerSensorListenerWithAbstractHWSensor:(AbstractHWSensor *)sensor;

- (void)unRegisterSensorListenerWithAbstractHWSensor:(AbstractHWSensor *)sensor;

- (id<Future>)onSensorDataReceivedWithBaseSensorData:(BaseSensorData *)data;

- (void)resetReceivers;

- (void)updateOnNewPolicyWithSensorType:(SensorType *)sensorType
                                   withLong:(long64)sampleInterval;

- (Set*)getReceivers;

- (void)unRegisterReceiverFromSpecificSensorWithISensorDataReceiver:(id<ISensorDataReceiver>)sensorDataReceiver
                                                 withSensorType:(SensorType *)sensorType;

- (void)copyAllFieldsTo:(SensorStateManager *)other;

@end

FOUNDATION_EXPORT BOOL SensorStateManager_initialized;
J2OBJC_STATIC_INIT(SensorStateManager)

//J2OBJC_FIELD_SETTER(SensorStateManager, m_receivers_, Set*)
//J2OBJC_FIELD_SETTER(SensorStateManager, m_executor_, id<ExecutorService>)
//J2OBJC_FIELD_SETTER(SensorStateManager, m_wakeLock_, id<IWakeLock>)

FOUNDATION_EXPORT SensorStateManager *SensorStateManager_s_instance_;
J2OBJC_STATIC_FIELD_GETTER(SensorStateManager, s_instance_, SensorStateManager *)
//J2OBJC_STATIC_FIELD_SETTER(SensorStateManager, s_instance_, SensorStateManager *)

FOUNDATION_EXPORT NSString *SensorStateManager_TAG_;
J2OBJC_STATIC_FIELD_GETTER(SensorStateManager, TAG_, NSString *)

typedef SensorStateManager ComIntelWearablePlatformTimeiqSensorsEngineSensorStateManager;

@interface SensorStateManager_SensorDataRunnable : NSObject < Runnable > {
 @public
  SensorStateManager *this$0_;
  BaseSensorData *data_;
}

- (instancetype)initWithSensorStateManager:(SensorStateManager *)outer$
                        withBaseSensorData:(BaseSensorData *)data;

- (void)run;

- (void)copyAllFieldsTo:(SensorStateManager_SensorDataRunnable *)other;

@end

__attribute__((always_inline)) inline void SensorStateManager_SensorDataRunnable_init() {}

//J2OBJC_FIELD_SETTER(SensorStateManager_SensorDataRunnable, this$0_, SensorStateManager *)
//J2OBJC_FIELD_SETTER(SensorStateManager_SensorDataRunnable, data_, BaseSensorData *)

#endif // _SensorStateManager_H_
