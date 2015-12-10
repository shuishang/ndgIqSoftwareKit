//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: //com/intel/wearable/platform/timeiq/route/cache/RouteProviderCacheImpl.java
//

#ifndef _RouteProviderCacheImpl_H_
#define _RouteProviderCacheImpl_H_

@class ClassFactory;
@class ETARequest;
#import "JBQueue.h";
@class MotType;
@class ResultData;
@class RouteCacheData;
@class RouteInfo;
@class TSOCoordinate;
@class TTLRequest;
@protocol ISdkDefaultPrefs;
@protocol ITSOTimeUtil;
@protocol ITimeUtil_ISO8601;

#import "JB.h"
#import "IRouteProviderCache.h"

#define RouteProviderCacheImpl_NUMBER_OF_ITEMS_TO_REMOVE_WHEN_MAXED 1

/**
 @brief Created by mleib on 30/09/2015.
 */
@interface RouteProviderCacheImpl : NSObject < IRouteProviderCache > {
 @public
  int INT_WALK_DATA_MAX_SIZE_;
  int INT_DRIVE_ETA_DATA_MAX_SIZE_;
  int INT_DRIVE_TTL_DATA_MAX_SIZE_;
  LinkedList *m_walkData_;
  LinkedList *m_driveEtaData_;
  LinkedList *m_driveTtlData_;
  id<ITimeUtil_ISO8601> m_timeUtil_ISO8601_;
  id<ITSOTimeUtil> m_tsoTimeUtil_;
}

- (instancetype)init;

- (instancetype)initWithClassFactory:(ClassFactory *)classFactory;

- (instancetype)initWithITimeUtil_ISO8601:(id<ITimeUtil_ISO8601>)timeUtil_ISO8601
                         withITSOTimeUtil:(id<ITSOTimeUtil>)tsoTimeUtil
                     withISdkDefaultPrefs:(id<ISdkDefaultPrefs>)sdkDefaultPrefs;

- (ResultData *)getRouteFromCacheWithTTLRequest:(TTLRequest *)ttlRequest
                                      withFloat:(float)originCacheRadiusThreshold
                                      withFloat:(float)destinationCacheRadiusThreshold
                                       withLong:(long64)timeCacheThresholdMillis;

- (ResultData *)getRouteFromCacheWithETARequest:(ETARequest *)etaRequest
                                      withFloat:(float)originCacheRadiusThreshold
                                      withFloat:(float)destinationCacheRadiusThreshold
                                       withLong:(long64)timeCacheThresholdMillis;

- (ResultData *)getRouteFromCacheWithTSOCoordinate:(TSOCoordinate *)origin
                                 withTSOCoordinate:(TSOCoordinate *)destination
                                      withNSString:(NSString *)time
                                   withMotType:(MotType *)motType
                                       withBoolean:(boolean)isTtl
                                         withFloat:(float)originCacheRadiusThreshold
                                         withFloat:(float)destinationCacheRadiusThreshold
                                          withLong:(long64)timeCacheThresholdMillis;

- (ResultData *)getRouteFromCacheWithLinkedList:(LinkedList *)routeCacheDataCollection
                                                 withId:(id)lock
                                      withTSOCoordinate:(TSOCoordinate *)origin
                                      withTSOCoordinate:(TSOCoordinate *)destination
                                           withNSString:(NSString *)timeAsString
                                              withFloat:(float)originCacheRadiusThreshold
                                              withFloat:(float)destinationCacheRadiusThreshold
                                               withLong:(long64)timeCacheThresholdMillis;

- (boolean)isRouteDataMatchWithRouteCacheData:(RouteCacheData *)routeCacheData
                             withTSOCoordinate:(TSOCoordinate *)origin
                             withTSOCoordinate:(TSOCoordinate *)destination
                                      withLong:(long64)time
                                     withFloat:(float)originCacheRadiusThreshold
                                     withFloat:(float)destinationCacheRadiusThreshold
                                      withLong:(long64)timeCacheThresholdMillis;

- (boolean)locationsAreCloseEnoughWithTSOCoordinate:(TSOCoordinate *)coordinate1
                                   withTSOCoordinate:(TSOCoordinate *)coordinate2
                                           withFloat:(float)radiusThreshold;

- (boolean)timesAreCloseEnoughWithLong:(long64)timeMillis1
                               withLong:(long64)timeMillis2
                               withLong:(long64)timeThresholdMillis;

- (void)changeResultCodeIfNeededWithRouteCacheData:(RouteCacheData *)routeCacheData;

- (boolean)addRouteToCacheWithTTLRequest:(TTLRequest *)ttlRequest
                           withResultData:(ResultData *)routeInfoResultData;

- (boolean)addRouteToCacheWithETARequest:(ETARequest *)etaRequest
                           withResultData:(ResultData *)routeInfoResultData;

- (boolean)dataIsValidForAddingTtlWithTTLRequest:(TTLRequest *)ttlRequest
                                   withResultData:(ResultData *)routeInfoResultData;

- (boolean)dataIsValidForAddingEtaWithETARequest:(ETARequest *)etaRequest
                                   withResultData:(ResultData *)routeInfoResultData;

- (boolean)dataIsValidForAddingWithNSString:(NSString *)time
                           withTSOCoordinate:(TSOCoordinate *)origin
                           withTSOCoordinate:(TSOCoordinate *)destination
                              withResultData:(ResultData *)routeInfoResultData;

- (void)addRouteToCacheWithMotType:(MotType *)motType
                           withBoolean:(boolean)isTtl
                    withRouteCacheData:(RouteCacheData *)routeCacheData;

- (void)cleanIfNeededWithLinkedList:(LinkedList *)cache
                                    withInt:(int)maxSize;

- (boolean)isRouteInfoExpiredWithRouteInfo:(RouteInfo *)routeInfo;

- (boolean)isExpiredWithNSString:(NSString *)expireTime;

- (void)cleanCache;

- (void)copyAllFieldsTo:(RouteProviderCacheImpl *)other;

@end

FOUNDATION_EXPORT BOOL RouteProviderCacheImpl_initialized;
J2OBJC_STATIC_INIT(RouteProviderCacheImpl)

//J2OBJC_FIELD_SETTER(RouteProviderCacheImpl, m_walkData_, LinkedList *)
//J2OBJC_FIELD_SETTER(RouteProviderCacheImpl, m_driveEtaData_, LinkedList *)
//J2OBJC_FIELD_SETTER(RouteProviderCacheImpl, m_driveTtlData_, LinkedList *)
//J2OBJC_FIELD_SETTER(RouteProviderCacheImpl, m_timeUtil_ISO8601_, id<ITimeUtil_ISO8601>)
//J2OBJC_FIELD_SETTER(RouteProviderCacheImpl, m_tsoTimeUtil_, id<ITSOTimeUtil>)

J2OBJC_STATIC_FIELD_GETTER(RouteProviderCacheImpl, NUMBER_OF_ITEMS_TO_REMOVE_WHEN_MAXED, int)

FOUNDATION_EXPORT NSString *RouteProviderCacheImpl_WALK_DATA_MAX_SIZE_;
J2OBJC_STATIC_FIELD_GETTER(RouteProviderCacheImpl, WALK_DATA_MAX_SIZE_, NSString *)

FOUNDATION_EXPORT NSString *RouteProviderCacheImpl_DRIVE_ETA_DATA_MAX_SIZE_;
J2OBJC_STATIC_FIELD_GETTER(RouteProviderCacheImpl, DRIVE_ETA_DATA_MAX_SIZE_, NSString *)

FOUNDATION_EXPORT NSString *RouteProviderCacheImpl_DRIVE_TTL_DATA_MAX_SIZE_;
J2OBJC_STATIC_FIELD_GETTER(RouteProviderCacheImpl, DRIVE_TTL_DATA_MAX_SIZE_, NSString *)

FOUNDATION_EXPORT id RouteProviderCacheImpl_m_walkLock_;
J2OBJC_STATIC_FIELD_GETTER(RouteProviderCacheImpl, m_walkLock_, id)

FOUNDATION_EXPORT id RouteProviderCacheImpl_m_driveEtaLock_;
J2OBJC_STATIC_FIELD_GETTER(RouteProviderCacheImpl, m_driveEtaLock_, id)

FOUNDATION_EXPORT id RouteProviderCacheImpl_m_driveTtlLock_;
J2OBJC_STATIC_FIELD_GETTER(RouteProviderCacheImpl, m_driveTtlLock_, id)

typedef RouteProviderCacheImpl ComIntelWearablePlatformTimeiqRouteCacheRouteProviderCacheImpl;

#endif // _RouteProviderCacheImpl_H_
