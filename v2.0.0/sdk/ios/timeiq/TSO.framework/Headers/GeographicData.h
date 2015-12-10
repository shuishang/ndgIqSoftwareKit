//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: //com/intel/wearable/platform/timeiq/api/places/datatypes/GeographicData.java
//

#ifndef _GeographicData_H_
#define _GeographicData_H_

@class DBPolygon;
@class TSOCoordinate;
#import "JBHashtable.h"

#import "JB.h"
#import "IMappable.h"

/**
 @brief Created by orencoh2 on 7/13/15.
 */
@interface GeographicData : NSObject < IMappable > {
 @public
  DBPolygon *m_signatureEnvelope_;
  TSOCoordinate *m_center_;
}

/**
 */
- (instancetype)init;

- (instancetype)initWithTSOCoordinate:(TSOCoordinate *)center;

/**
 @param envelope
 @param center
 */
- (instancetype)initWithTSOCoordinate:(TSOCoordinate *)center
                        withDBPolygon:(DBPolygon *)envelope;

/**
 @return 
 */
- (DBPolygon *)getEnvelope;

/**
 @return 
 */
- (TSOCoordinate *)getCenter;

- (boolean)isEqual:(id)o;

- (NSUInteger)hash;

- (NSString *)description;

- (void)initObjectFromMapWithJavaUtilMap:(HashMap*)map OBJC_METHOD_FAMILY_NONE;

- (HashMap*)objectToMap;

- (void)copyAllFieldsTo:(GeographicData *)other;

@end

__attribute__((always_inline)) inline void GeographicData_init() {}

//J2OBJC_FIELD_SETTER(GeographicData, m_signatureEnvelope_, DBPolygon *)
//J2OBJC_FIELD_SETTER(GeographicData, m_center_, TSOCoordinate *)

FOUNDATION_EXPORT NSString *GeographicData_SIGNATURE_ENVELOPE_FIELD_;
J2OBJC_STATIC_FIELD_GETTER(GeographicData, SIGNATURE_ENVELOPE_FIELD_, NSString *)

FOUNDATION_EXPORT NSString *GeographicData_CENTER_FIELD_;
J2OBJC_STATIC_FIELD_GETTER(GeographicData, CENTER_FIELD_, NSString *)

typedef GeographicData ComIntelWearablePlatformTimeiqApiPlacesDatatypesGeographicData;

#endif // _GeographicData_H_
