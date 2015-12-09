//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: //com/intel/wearable/platform/timeiq/resolver/dataobjects/ResolverSdkAuditObj.java
//

#ifndef _ResolverSdkAuditObj_H_
#define _ResolverSdkAuditObj_H_

@class FlowType;
#import "NSNumber+JavaAPI.h"
@class ResolveBusinessPhoneResponse;
@class ResolvedLocationsResponse;
@class ResolverSdkRequestAuditObj;
@class ResolverSdkResponseAuditObj;
@class ResultCode;
@class ResultData;
@class TSOPlace;
#import "JBHashtable.h"

#import "JB.h"
#include "IMappable.h"

/**
 @brief Created by stzour on 02/03/2015.
 */
@interface ResolverSdkAuditObj : NSObject < IMappable > {
 @public
  ResolverSdkRequestAuditObj *sdkRequest_;
  ResolverSdkResponseAuditObj *sdkResponse_;
}

- (instancetype)init;

- (instancetype)initWithNSString:(NSString *)searchTerm
                    withTSOPlace:(TSOPlace *)searchLocation
             withInteger:(Integer *)maxResults
                withFlowType:(FlowType *)flowType
                    withNSString:(NSString *)userId
                    withNSString:(NSString *)requestId
                  withResultData:(ResultData *)resolvedLocationResponse
                  withResultData:(ResultData *)resolvedPhoneResponse;

- (ResolverSdkRequestAuditObj *)getSdkRequest;

- (void)setSdkRequestWithResolverSdkRequestAuditObj:(ResolverSdkRequestAuditObj *)sdkRequest;

- (ResolverSdkResponseAuditObj *)getSdkResponse;

- (void)setSdkResponseWithResolverSdkResponseAuditObj:(ResolverSdkResponseAuditObj *)sdkResponse;

- (void)initObjectFromMapWithJavaUtilMap:(HashMap*)map OBJC_METHOD_FAMILY_NONE;

- (HashMap*)objectToMap;

- (boolean)isEqual:(id)o;

- (NSUInteger)hash;

- (void)copyAllFieldsTo:(ResolverSdkAuditObj *)other;

@end

__attribute__((always_inline)) inline void ResolverSdkAuditObj_init() {}

//J2OBJC_FIELD_SETTER(ResolverSdkAuditObj, sdkRequest_, ResolverSdkRequestAuditObj *)
//J2OBJC_FIELD_SETTER(ResolverSdkAuditObj, sdkResponse_, ResolverSdkResponseAuditObj *)

typedef ResolverSdkAuditObj ComIntelWearablePlatformTimeiqResolverDataobjectsResolverSdkAuditObj;

@interface ResolverSdkRequestAuditObj : NSObject < IMappable > {
 @public
  NSString *searchTerm_;
  TSOPlace *searchLocation_;
  Integer *maxResults_;
  FlowType *flowType_;
  NSString *userId_;
  NSString *requestId_;
}

- (instancetype)init;

- (instancetype)initWithNSString:(NSString *)searchTerm
                    withTSOPlace:(TSOPlace *)searchLocation
             withInteger:(Integer *)maxResults
                withFlowType:(FlowType *)flowType
                    withNSString:(NSString *)userId
                    withNSString:(NSString *)requestId;

- (NSString *)getSearchTerm;

- (void)setSearchTermWithNSString:(NSString *)searchTerm;

- (TSOPlace *)getSearchLocation;

- (void)setSearchLocationWithTSOPlace:(TSOPlace *)searchLocation;

- (Integer *)getMaxResults;

- (void)setMaxResultsWithInteger:(Integer *)maxResults;

- (FlowType *)getFlowType;

- (void)setFlowTypeWithFlowType:(FlowType *)flowType;

- (NSString *)getRequestId;

- (void)setRequestIdWithNSString:(NSString *)requestId;

- (NSString *)getUserId;

- (void)setUserIdWithNSString:(NSString *)userId;

- (void)initObjectFromMapWithJavaUtilMap:(HashMap*)map OBJC_METHOD_FAMILY_NONE;

- (HashMap*)objectToMap;

- (boolean)isEqual:(id)o;

- (NSUInteger)hash;

- (void)copyAllFieldsTo:(ResolverSdkRequestAuditObj *)other;

@end

__attribute__((always_inline)) inline void ResolverSdkRequestAuditObj_init() {}

//J2OBJC_FIELD_SETTER(ResolverSdkRequestAuditObj, searchTerm_, NSString *)
//J2OBJC_FIELD_SETTER(ResolverSdkRequestAuditObj, searchLocation_, TSOPlace *)
//J2OBJC_FIELD_SETTER(ResolverSdkRequestAuditObj, maxResults_, Integer *)
//J2OBJC_FIELD_SETTER(ResolverSdkRequestAuditObj, flowType_, FlowType *)
//J2OBJC_FIELD_SETTER(ResolverSdkRequestAuditObj, userId_, NSString *)
//J2OBJC_FIELD_SETTER(ResolverSdkRequestAuditObj, requestId_, NSString *)

typedef ResolverSdkRequestAuditObj ComIntelWearablePlatformTimeiqResolverDataobjectsResolverSdkRequestAuditObj;

@interface ResolverSdkResponseAuditObj : NSObject < IMappable > {
 @public
  ResolvedLocationsResponse *resolvedLocationResponse_;
  ResolveBusinessPhoneResponse *resolvedPhoneResponse_;
  ResultCode *resultCode_;
}

- (instancetype)init;

- (instancetype)initWithResolvedLocationsResponse:(ResolvedLocationsResponse *)resolvedLocationResponse
                 withResolveBusinessPhoneResponse:(ResolveBusinessPhoneResponse *)resolvedPhoneResponse
                               withResultCode:(ResultCode *)resultCode;

- (ResolvedLocationsResponse *)getResolvedLocationResponse;

- (void)setResolvedLocationResponseWithResolvedLocationsResponse:(ResolvedLocationsResponse *)resolvedLocationResponse;

- (ResolveBusinessPhoneResponse *)getResolvedPhoneResponse;

- (void)setResolvedPhoneResponseWithResolveBusinessPhoneResponse:(ResolveBusinessPhoneResponse *)resolvedPhoneResponse;

- (ResultCode *)getResultCode;

- (void)setResultCodeWithResultCode:(ResultCode *)resultCode;

- (void)initObjectFromMapWithJavaUtilMap:(HashMap*)map OBJC_METHOD_FAMILY_NONE;

- (HashMap*)objectToMap;

- (boolean)isEqual:(id)o;

- (NSUInteger)hash;

- (void)copyAllFieldsTo:(ResolverSdkResponseAuditObj *)other;

@end

__attribute__((always_inline)) inline void ResolverSdkResponseAuditObj_init() {}

//J2OBJC_FIELD_SETTER(ResolverSdkResponseAuditObj, resolvedLocationResponse_, ResolvedLocationsResponse *)
//J2OBJC_FIELD_SETTER(ResolverSdkResponseAuditObj, resolvedPhoneResponse_, ResolveBusinessPhoneResponse *)
//J2OBJC_FIELD_SETTER(ResolverSdkResponseAuditObj, resultCode_, ResultCode *)

typedef ResolverSdkResponseAuditObj ComIntelWearablePlatformTimeiqResolverDataobjectsResolverSdkResponseAuditObj;

#endif // _ResolverSdkAuditObj_H_
