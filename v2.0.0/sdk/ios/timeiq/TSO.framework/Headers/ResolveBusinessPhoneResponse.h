//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: //com/intel/wearable/platform/timeiq/api/resolver/ResolveBusinessPhoneResponse.java
//

#ifndef _ResolveBusinessPhoneResponse_H_
#define _ResolveBusinessPhoneResponse_H_

@class ResolvedLocation;
#import "JBHashtable.h"

#import "JB.h"
#import "IMappable.h"
#import "AResolverResponse.h"

/**
 @brief ResolveBusinessPhoneResponse used to hold resolver results of business locations when the search term is a phone number
 */
@interface ResolveBusinessPhoneResponse : AResolverResponse < IMappable > {
 @public
  ResolvedLocation *businessLocation_;
}

/**
 @brief Constructor.
 Creates a ResolveBusinessPhoneResponse
 */
- (instancetype)init;

/**
 @brief Constructor.
 Creates a ResolveBusinessPhoneResponse holding a resolved location
 @param resolvedLocation
 */
- (instancetype)initWithResolvedLocation:(ResolvedLocation *)resolvedLocation;

/**
 @brief Returns the resolved location of a business location
 @return resolved location of a business location
 */
- (ResolvedLocation *)getBusinessLocation;

/**
 @brief Sets the resolved location of a business location
 @param businessLocation resolved location of a business location
 */
- (void)setBusinessLocationWithResolvedLocation:(ResolvedLocation *)businessLocation;

- (void)initObjectFromMapWithJavaUtilMap:(HashMap*)map OBJC_METHOD_FAMILY_NONE;

- (HashMap*)objectToMap;

- (boolean)isEqual:(id)o;

- (NSUInteger)hash;

- (void)copyAllFieldsTo:(ResolveBusinessPhoneResponse *)other;

@end

__attribute__((always_inline)) inline void ResolveBusinessPhoneResponse_init() {}

//J2OBJC_FIELD_SETTER(ResolveBusinessPhoneResponse, businessLocation_, ResolvedLocation *)

typedef ResolveBusinessPhoneResponse ComIntelWearablePlatformTimeiqApiResolverResolveBusinessPhoneResponse;

#endif // _ResolveBusinessPhoneResponse_H_
