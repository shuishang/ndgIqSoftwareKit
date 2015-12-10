//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: //com/intel/wearable/platform/timeiq/route/BasicRouteProviderStub.java
//

#ifndef _BasicRouteProviderStub_H_
#define _BasicRouteProviderStub_H_

@class ClassFactory;
#import "NSNumber+JavaAPI.h"
#import "NSNumber+JavaAPI.h"
@class MotType;
@class ResultData;
@class TSOCoordinate;
@protocol ITSOTimeUtil;
@protocol ITimeUtil_ISO8601;

#import "JB.h"
#import "IBasicRouteProvider.h"

#define BasicRouteProviderStub_CAR_SPEED_KM_H 60.0
#define BasicRouteProviderStub_WALK_SPEED_KM_H 5.0

/**
 @brief Created by slevin
 */
@interface BasicRouteProviderStub : NSObject < IBasicRouteProvider > {
 @public
  ResultData *m_routeResult_;
  id<ITSOTimeUtil> m_timeUtil_;
  id<ITimeUtil_ISO8601> m_timeUtil_ISO8601_;
}

- (instancetype)init;

- (instancetype)initWithClassFactory:(ClassFactory *)classFactory;

- (instancetype)initWithITSOTimeUtil:(id<ITSOTimeUtil>)timeUtil
               withITimeUtil_ISO8601:(id<ITimeUtil_ISO8601>)timeUtil_ISO8601;

- (void)setRouteResultWithResultData:(ResultData *)routeResult;

- (ResultData *)getTTLWithTSOCoordinate:(TSOCoordinate *)origin
                      withTSOCoordinate:(TSOCoordinate *)destination
                           withNSString:(NSString *)arrivalTime
                        withMotType:(MotType *)motType
                    withJBBoolean:(JBBoolean *)prioritize
                              withFloat:(float)originCacheRadiusThreshold
                              withFloat:(float)destinationCacheRadiusThreshold
                               withLong:(long64)timeCacheThresholdMillis;

- (ResultData *)getETAWithTSOCoordinate:(TSOCoordinate *)origin
                      withTSOCoordinate:(TSOCoordinate *)destination
                           withNSString:(NSString *)departureTime
                        withMotType:(MotType *)motType
                    withJBBoolean:(JBBoolean *)prioritize
                              withFloat:(float)originCacheRadiusThreshold
                              withFloat:(float)destinationCacheRadiusThreshold
                               withLong:(long64)timeCacheThresholdMillis;

- (ResultData *)getETAWithTSOCoordinate:(TSOCoordinate *)origin
                      withTSOCoordinate:(TSOCoordinate *)destination
                           withNSString:(NSString *)departureTime
                        withMotType:(MotType *)motType
                    withJBBoolean:(JBBoolean *)prioritize;

- (ResultData *)getTTLWithTSOCoordinate:(TSOCoordinate *)origin
                      withTSOCoordinate:(TSOCoordinate *)destination
                           withNSString:(NSString *)arrivalTime
                        withMotType:(MotType *)motType
                    withJBBoolean:(JBBoolean *)prioritize;

+ (Integer *)getTravelTimeWithTSOCoordinate:(TSOCoordinate *)origin
                                  withTSOCoordinate:(TSOCoordinate *)destination
                                    withMotType:(MotType *)motType;

- (void)copyAllFieldsTo:(BasicRouteProviderStub *)other;

@end

__attribute__((always_inline)) inline void BasicRouteProviderStub_init() {}

//J2OBJC_FIELD_SETTER(BasicRouteProviderStub, m_routeResult_, ResultData *)
//J2OBJC_FIELD_SETTER(BasicRouteProviderStub, m_timeUtil_, id<ITSOTimeUtil>)
//J2OBJC_FIELD_SETTER(BasicRouteProviderStub, m_timeUtil_ISO8601_, id<ITimeUtil_ISO8601>)

J2OBJC_STATIC_FIELD_GETTER(BasicRouteProviderStub, CAR_SPEED_KM_H, double)

J2OBJC_STATIC_FIELD_GETTER(BasicRouteProviderStub, WALK_SPEED_KM_H, double)

typedef BasicRouteProviderStub ComIntelWearablePlatformTimeiqRouteBasicRouteProviderStub;

#endif // _BasicRouteProviderStub_H_
