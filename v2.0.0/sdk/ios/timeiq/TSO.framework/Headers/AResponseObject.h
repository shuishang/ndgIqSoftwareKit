//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: //com/intel/wearable/platform/timeiq/routeprovider/response/AResponseObject.java
//

#ifndef _AResponseObject_H_
#define _AResponseObject_H_

@class RouteError;

#import "JB.h"

@interface AResponseObject : NSObject {
 @public
  RouteError *error_;
}

- (RouteError *)getError;

- (void)setErrorWithRouteError:(RouteError *)error;

- (NSString *)description;

- (NSUInteger)hash;

- (boolean)isEqual:(id)obj;

- (instancetype)init;

- (void)copyAllFieldsTo:(AResponseObject *)other;

@end

__attribute__((always_inline)) inline void AResponseObject_init() {}

//J2OBJC_FIELD_SETTER(AResponseObject, error_, RouteError *)

typedef AResponseObject ComIntelWearablePlatformTimeiqRouteproviderResponseAResponseObject;

#endif // _AResponseObject_H_
