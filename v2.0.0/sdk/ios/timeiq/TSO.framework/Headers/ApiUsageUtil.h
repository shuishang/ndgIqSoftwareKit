//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: //com/intel/wearable/platform/timeiq/common/utils/apiUsageAudit/ApiUsageUtil.java
//

#ifndef _ApiUsageUtil_H_
#define _ApiUsageUtil_H_

@class Result;
@class ResultCode;
@class ResultData;
@protocol IAuditManager;
@protocol ITSOTimeUtil;

#import "JB.h"
#include "IApiUsageUtil.h"

#define ApiUsageUtil_CALLING_METHOD_SLOT 5

/**
 @brief Created by stzour on 04/11/2015.
 */
@interface ApiUsageUtil : NSObject < IApiUsageUtil > {
 @public
  id<ITSOTimeUtil> timeUtil_;
  id<IAuditManager> auditManager_;
}

- (instancetype)init;

- (instancetype)initWithITSOTimeUtil:(id<ITSOTimeUtil>)timeUtil
                   withIAuditManager:(id<IAuditManager>)auditManager;

- (void)sendAuditWithResult:(Result *)result;

- (void)sendAuditWithResultData:(ResultData *)resultData;

- (void)sendToAuditWithResultCode:(ResultCode *)resultCode
                         withNSString:(NSString *)resultMessage;

- (NSString *)getCallingMethodName;

- (NSString *)getTimeStrWithLong:(long64)time;

- (void)copyAllFieldsTo:(ApiUsageUtil *)other;

@end

__attribute__((always_inline)) inline void ApiUsageUtil_init() {}

//J2OBJC_FIELD_SETTER(ApiUsageUtil, timeUtil_, id<ITSOTimeUtil>)
//J2OBJC_FIELD_SETTER(ApiUsageUtil, auditManager_, id<IAuditManager>)

J2OBJC_STATIC_FIELD_GETTER(ApiUsageUtil, CALLING_METHOD_SLOT, int)

typedef ApiUsageUtil ComIntelWearablePlatformTimeiqCommonUtilsApiUsageAuditApiUsageUtil;

#endif // _ApiUsageUtil_H_
