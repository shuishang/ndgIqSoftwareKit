//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: //com/intel/wearable/platform/timeiq/protocol/response/TSORetCodeResponse.java
//

#ifndef _TSORetCodeResponse_H_
#define _TSORetCodeResponse_H_

@class RetCode;
#import "JBHashtable.h"

#import "JB.h"
#include "IMappable.h"

/**
 @brief Created by dshlezin on 7/19/2015.
 */
@interface TSORetCodeResponse : NSObject < IMappable > {
 @public
  RetCode *retCode_;
}

- (RetCode *)getRetCode;

- (void)setRetCodeWithRetCode:(RetCode *)retCode;

- (void)initObjectFromMapWithJavaUtilMap:(HashMap*)map OBJC_METHOD_FAMILY_NONE;

- (HashMap*)objectToMap;

- (NSUInteger)hash;

- (boolean)isEqual:(id)obj;

- (instancetype)init;

- (void)copyAllFieldsTo:(TSORetCodeResponse *)other;

@end

__attribute__((always_inline)) inline void TSORetCodeResponse_init() {}

//J2OBJC_FIELD_SETTER(TSORetCodeResponse, retCode_, RetCode *)

FOUNDATION_EXPORT NSString *TSORetCodeResponse_RET_CODE_FIELD_;
J2OBJC_STATIC_FIELD_GETTER(TSORetCodeResponse, RET_CODE_FIELD_, NSString *)

typedef TSORetCodeResponse ComIntelWearablePlatformTimeiqProtocolResponseTSORetCodeResponse;

#endif // _TSORetCodeResponse_H_
