//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: //com/intel/wearable/platform/timeiq/sensors/replay/NullSensorsEnginePlatformImpl.java
//

#ifndef _NullSensorsEnginePlatformImpl_H_
#define _NullSensorsEnginePlatformImpl_H_

@class SDKPolicy;

#import "JB.h"
#include "ASensorsEnginePlatformAPI.h"

@interface NullSensorsEnginePlatformImpl : ASensorsEnginePlatformAPI {
}

- (void)initPlatformSensorsWithSDKPolicy:(SDKPolicy *)policy OBJC_METHOD_FAMILY_NONE;

- (instancetype)init;

@end

__attribute__((always_inline)) inline void NullSensorsEnginePlatformImpl_init() {}

typedef NullSensorsEnginePlatformImpl ComIntelWearablePlatformTimeiqSensorsReplayNullSensorsEnginePlatformImpl;

#endif // _NullSensorsEnginePlatformImpl_H_
