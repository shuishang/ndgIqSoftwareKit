//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: //com/intel/wearable/platform/timeiq/route/RouteProviderImpl.java
//

#ifndef _RouteProviderImpl_H_
#define _RouteProviderImpl_H_

@class ClassFactory;
@class MotType;
@class ResultData;
@class TSOCoordinate;
@class TransportType;
@protocol IApiUsageUtil;
@protocol IRouteProviderInner;
@protocol IUserStateManagerInternal;

#import "JB.h"
#include "IRouteProvider.h"

/**
 @brief Means to get TTL (Time To Leave) or ETA (Estimated Time of Arrival) routes and to get route segments (via TtlRouteData or EtaRouteData ).
 <BR> The preferred transport type supplied by the user will be taken into account for the route calculation, but the calculated MOT might differ from it.<BR> Routes are received from server and might be cached locally (i.e. network might be used).<BR> The cache takes into account the origin, destination and the arrival\departure time (some difference is allowed). <BR> <BR> <U>Example:</U> get TTL route from (lat1, long1) to (lat2, long2) for an event that will start in 2 hours, we prefer driving <BR> <BR> <pre> <code>IRouteProvider routeProvider = timeIQApi.getRouteProvider(); // get IRouteProvider long arrivalTime = System.currentTimeMillis() + TimeUnit.HOURS.toMillis(2);// arrival time is 2 hours from now TSOCoordinate origin = new TSOCoordinate(lat1, long1); // create origin TSOCoordinate destination = new TSOCoordinate(lat2, long2); // create destination ResultData<TtlRouteData> ttlRouteDataResultData = routeProvider.getTTL(origin, destination, arrivalTime, TransportType.CAR); // gets the TTL route from origin to destination (preferably by car)</code> </pre>
 */
@interface RouteProviderImpl : NSObject < IRouteProvider > {
 @public
  id<IRouteProviderInner> m_routeProviderInner_;
  id<IApiUsageUtil> m_apiUsageUtil_;
  id<IUserStateManagerInternal> m_userStateManager_;
}

- (instancetype)init;

- (instancetype)initWithClassFactory:(ClassFactory *)classFactory;

- (instancetype)initWithIRouteProviderInner:(id<IRouteProviderInner>)routeProviderInner
              withIUserStateManagerInternal:(id<IUserStateManagerInternal>)userStateManager
                          withIApiUsageUtil:(id<IApiUsageUtil>)apiUsageUtil;

/**
 @brief Get the TTL (Time To Leave) from the origin, in order to arrive at a certain time to the destination
 @param origin the origin location of the route
 @param destination the origin location of the route
 @param arrivalTime the desired arrival time to the destination
 @param preferredTransportType the preferred transport type (can be null for default behaviour)
 @return a TtlRouteData with the routes segments
 */
- (ResultData *)getTTLWithTSOCoordinate:(TSOCoordinate *)origin
                      withTSOCoordinate:(TSOCoordinate *)destination
                               withLong:(long64)arrivalTime
                  withTransportType:(TransportType *)preferredTransportType;

/**
 @brief Get the ETA (Estimated Time of Arrival) from the origin to the destination for a given departure time
 @param origin the origin location of the route
 @param destination the origin location of the route
 @param departureTime the desired departure time from the origin
 @param preferredTransportType the preferred transport type (can be null for default behaviour)
 @return a EtaRouteData with the routes segments
 */
- (ResultData *)getETAWithTSOCoordinate:(TSOCoordinate *)origin
                      withTSOCoordinate:(TSOCoordinate *)destination
                               withLong:(long64)departureTime
                  withTransportType:(TransportType *)preferredTransportType;

- (MotType *)getCurrentUserMot;

- (void)copyAllFieldsTo:(RouteProviderImpl *)other;

@end

__attribute__((always_inline)) inline void RouteProviderImpl_init() {}

//J2OBJC_FIELD_SETTER(RouteProviderImpl, m_routeProviderInner_, id<IRouteProviderInner>)
//J2OBJC_FIELD_SETTER(RouteProviderImpl, m_apiUsageUtil_, id<IApiUsageUtil>)
//J2OBJC_FIELD_SETTER(RouteProviderImpl, m_userStateManager_, id<IUserStateManagerInternal>)

typedef RouteProviderImpl ComIntelWearablePlatformTimeiqRouteRouteProviderImpl;

#endif // _RouteProviderImpl_H_
