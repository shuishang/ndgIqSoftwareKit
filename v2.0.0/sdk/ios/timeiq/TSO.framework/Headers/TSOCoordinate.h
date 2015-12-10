//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: //com/intel/wearable/platform/timeiq/api/common/protocol/datatypes/location/TSOCoordinate.java
//

#ifndef _TSOCoordinate_H_
#define _TSOCoordinate_H_

#import "JBHashtable.h"

#import "JB.h"
#import "IMappable.h"
#import "JBSerializable.h"

/**
 @brief Created by bnagar on 18/8/14.
 */
@interface TSOCoordinate : NSObject < Serializable, IMappable > {
 @public
  double latitude_;
  double longitude_;
}

- (instancetype)init;

- (instancetype)initWithDouble:(double)latitude
                    withDouble:(double)longitude;

- (double)getLatitude;

- (double)getLongitude;

/**
 @brief calculates the distance in meters between this location and the otherLocation
 @param otherLocation
 @return 
 */
- (NSString *)description;

- (boolean)isEqual:(id)o;

- (NSUInteger)hash;

- (void)initObjectFromMapWithJavaUtilMap:(HashMap*)map OBJC_METHOD_FAMILY_NONE;

- (HashMap*)objectToMap;

- (void)copyAllFieldsTo:(TSOCoordinate *)other;

@end

__attribute__((always_inline)) inline void TSOCoordinate_init() {}

FOUNDATION_EXPORT NSString *TSOCoordinate_LATITUDE_KEY_;
J2OBJC_STATIC_FIELD_GETTER(TSOCoordinate, LATITUDE_KEY_, NSString *)

FOUNDATION_EXPORT NSString *TSOCoordinate_LONGITUDE_KEY_;
J2OBJC_STATIC_FIELD_GETTER(TSOCoordinate, LONGITUDE_KEY_, NSString *)

typedef TSOCoordinate ComIntelWearablePlatformTimeiqApiCommonProtocolDatatypesLocationTSOCoordinate;

#endif // _TSOCoordinate_H_
