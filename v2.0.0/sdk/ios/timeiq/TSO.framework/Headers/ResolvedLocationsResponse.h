//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: //com/intel/wearable/platform/timeiq/api/resolver/ResolvedLocationsResponse.java
//

#ifndef _ResolvedLocationsResponse_H_
#define _ResolvedLocationsResponse_H_

#import "JBArrayList.h"
#import "JBHashtable.h"

#import "JB.h"
#import "IMappable.h"
#import "AResolverResponse.h"

/**
 @brief ResolvedLocationsResponse is used to hold location resolver responses
 */
@interface ResolvedLocationsResponse : AResolverResponse < IMappable > {
 @public
  ArrayList* definiteResults_;
  ArrayList* plausibleResults_;
}

/**
 @brief Returns the list of locations with high certainty in the response
 @return the list of definite resolved locations in the response
 */
- (ArrayList*)getDefiniteResults;

/**
 @brief sets the list of locations with high certainty in the response
 @param definiteResults list of definite resolved locations in the response
 */
- (void)setDefiniteResultsWithJavaUtilList:(ArrayList*)definiteResults;

/**
 @brief Returns the list of locations with low certainty in the response
 @return the list of plausible resolved locations in the response
 */
- (ArrayList*)getPlausibleResults;

/**
 @brief Sets the list of locations with low certainty in the response
 @param plausibleResults list of plausible resolved locations in the response
 */
- (void)setPlausibleResultsWithJavaUtilList:(ArrayList*)plausibleResults;

- (NSString *)description;

- (boolean)isEqual:(id)o;

- (NSUInteger)hash;

- (void)initObjectFromMapWithJavaUtilMap:(HashMap*)map OBJC_METHOD_FAMILY_NONE;

- (HashMap*)objectToMap;

- (instancetype)init;

- (void)copyAllFieldsTo:(ResolvedLocationsResponse *)other;

@end

__attribute__((always_inline)) inline void ResolvedLocationsResponse_init() {}

//J2OBJC_FIELD_SETTER(ResolvedLocationsResponse, definiteResults_, ArrayList*)
//J2OBJC_FIELD_SETTER(ResolvedLocationsResponse, plausibleResults_, ArrayList*)

typedef ResolvedLocationsResponse ComIntelWearablePlatformTimeiqApiResolverResolvedLocationsResponse;

#endif // _ResolvedLocationsResponse_H_
