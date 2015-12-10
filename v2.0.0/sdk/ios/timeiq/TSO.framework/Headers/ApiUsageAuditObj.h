//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: //com/intel/wearable/platform/timeiq/common/utils/apiUsageAudit/ApiUsageAuditObj.java
//

#ifndef _ApiUsageAuditObj_H_
#define _ApiUsageAuditObj_H_

@class ResultCode;
#import "JBHashtable.h"

#import "JB.h"
#import "IMappable.h"

/**
 @brief Created by stzour on 04/11/2015.
 */
@interface ApiUsageAuditObj : NSObject < IMappable > {
 @public
  long64 timeStamp_;
  NSString *timeStampStr_;
  NSString *apiFunctionName_;
  ResultCode *resultCode_;
  NSString *resultMessage_;
}

- (instancetype)init;

- (instancetype)initWithLong:(long64)timeStamp
                withNSString:(NSString *)timeStampStr
                withNSString:(NSString *)apiFunctionName
          withResultCode:(ResultCode *)resultCode
                withNSString:(NSString *)resultMessage;

- (ResultCode *)getResultCode;

- (void)setResultCodeWithResultCode:(ResultCode *)resultCode;

- (long64)getTimeStamp;

- (void)setTimeStampWithLong:(long64)timeStamp;

- (NSString *)getTimeStampStr;

- (void)setTimeStampStrWithNSString:(NSString *)timeStampStr;

- (NSString *)getApiFunctionName;

- (void)setApiFunctionNameWithNSString:(NSString *)apiFunctionName;

- (NSString *)getResultMessage;

- (void)setResultMessageWithNSString:(NSString *)resultMessage;

- (boolean)isEqual:(id)o;

- (NSUInteger)hash;

- (void)initObjectFromMapWithJavaUtilMap:(HashMap*)map OBJC_METHOD_FAMILY_NONE;

- (HashMap*)objectToMap;

- (void)copyAllFieldsTo:(ApiUsageAuditObj *)other;

@end

__attribute__((always_inline)) inline void ApiUsageAuditObj_init() {}

//J2OBJC_FIELD_SETTER(ApiUsageAuditObj, timeStampStr_, NSString *)
//J2OBJC_FIELD_SETTER(ApiUsageAuditObj, apiFunctionName_, NSString *)
//J2OBJC_FIELD_SETTER(ApiUsageAuditObj, resultCode_, ResultCode *)
//J2OBJC_FIELD_SETTER(ApiUsageAuditObj, resultMessage_, NSString *)

typedef ApiUsageAuditObj ComIntelWearablePlatformTimeiqCommonUtilsApiUsageAuditApiUsageAuditObj;

#endif // _ApiUsageAuditObj_H_
