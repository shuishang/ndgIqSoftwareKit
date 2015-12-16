//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: //com/intel/wearable/platform/timeiq/routeprovider/audit/dataobjects/routing/RouteErrorDataObj.java
//

#ifndef _RouteErrorDataObj_H_
#define _RouteErrorDataObj_H_

#import "NSNumber+JavaAPI.h"
@class RouteErrorType;
#import "JBHashtable.h"

#import "JB.h"
#import "IMappable.h"

@interface RouteErrorDataObj : NSObject < IMappable > {
 @public
  RouteErrorType *errorCode_;
  NSString *errorMessage_;
}

/**
 @brief Constructor
 @param errorCode
 @param errorMessage
 */
- (instancetype)initWithRouteErrorType:(RouteErrorType *)errorCode
                              withNSString:(NSString *)errorMessage;

- (instancetype)init;

- (void)setErrorCodeWithRouteErrorType:(RouteErrorType *)errorCode;

- (void)setErrorMessageWithNSString:(NSString *)errorMessage;

- (NSUInteger)hash;

- (boolean)isEqual:(id)obj;

- (NSString *)description;

- (Integer *)getErrorEnum;

- (NSString *)getErrorMessage;

- (void)initObjectFromMapWithJavaUtilMap:(HashMap*)map OBJC_METHOD_FAMILY_NONE;

- (HashMap*)objectToMap;

- (void)copyAllFieldsTo:(RouteErrorDataObj *)other;

@end

__attribute__((always_inline)) inline void RouteErrorDataObj_init() {}

//J2OBJC_FIELD_SETTER(RouteErrorDataObj, errorCode_, RouteErrorType *)
//J2OBJC_FIELD_SETTER(RouteErrorDataObj, errorMessage_, NSString *)

typedef RouteErrorDataObj ComIntelWearablePlatformTimeiqRouteproviderAuditDataobjectsRoutingRouteErrorDataObj;

#endif // _RouteErrorDataObj_H_