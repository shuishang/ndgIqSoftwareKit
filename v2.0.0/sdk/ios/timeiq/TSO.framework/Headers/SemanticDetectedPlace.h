//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: //com/intel/wearable/platform/timeiq/dbobjects/places/SemanticDetectedPlace.java
//

#ifndef _SemanticDetectedPlace_H_
#define _SemanticDetectedPlace_H_

@class Coord;
@class DBPolygon;
@class DetectedPlace;
@class ManualPlace;
@class ManualPlaceSource;
@class PlaceID;
@class SemanticDetectedPlace_SemanticPlaceKey;
@class SemanticKey;
#import "JBArrayList.h"
#import "JBHashtable.h"

#import "JB.h"
#include "ATSOSemanticPlace.h"

@interface SemanticDetectedPlace : ATSOSemanticPlace {
 @public
  double matchDistance_;
  NSString *detectedPlaceId_;
  NSString *manualPlaceId_;
  DBPolygon *envelope_;
  ArrayList* refpoint_;
  ManualPlaceSource *manualPlaceSource_;
  SemanticDetectedPlace_SemanticPlaceKey *key_;
  double distanceBetweenManualCenterAndDetectedCenter_;
}

/**
 @brief Constructor
 */
- (instancetype)init;

/**
 @brief Constructor
 @param detectedPlace
 @param matchDistance
 */
- (instancetype)initWithDetectedPlace:(DetectedPlace *)detectedPlace
                           withDouble:(double)matchDistance;

/**
 @brief Constructor
 @param manualPlace
 @param detectedPlace
 @param matchDistance
 @param distanceBetweenManualCenterAndDetectedCenter
 */
- (instancetype)initWithManualPlace:(ManualPlace *)manualPlace
                  withDetectedPlace:(DetectedPlace *)detectedPlace
                         withDouble:(double)matchDistance
                         withDouble:(double)distanceBetweenManualCenterAndDetectedCenter;

+ (SemanticKey *)chooseSemanticKeyWithManualPlace:(ManualPlace *)mp
                                withDetectedPlace:(DetectedPlace *)dp;

+ (NSString *)chooseUserIdWithManualPlace:(ManualPlace *)mp
                        withDetectedPlace:(DetectedPlace *)dp;

+ (Coord *)chooseCoordWithManualPlace:(ManualPlace *)mp
                    withDetectedPlace:(DetectedPlace *)dp;

+ (NSString *)chooseAddressWithManualPlace:(ManualPlace *)mp
                         withDetectedPlace:(DetectedPlace *)dp;

- (NSString *)description;

- (boolean)isEqual:(id)obj;

- (void)initObjectFromMapWithJavaUtilMap:(HashMap*)map OBJC_METHOD_FAMILY_NONE;

- (HashMap*)objectToMap;

- (SemanticDetectedPlace_SemanticPlaceKey *)getSemanticPlaceKey;

- (ArrayList*)getRefPointList;

- (DBPolygon *)getEnvelope;

- (void)setEnvelopeWithDBPolygon:(DBPolygon *)envelope;

- (double)getMatchDistance;

- (void)setMatchDistanceWithDouble:(double)matchDistance;

- (NSString *)getDetectedPlaceId;

- (void)setDetectedPlaceIdWithNSString:(NSString *)detectedPlaceId;

- (NSString *)getManualPlaceId;

- (void)setManualPlaceIdWithNSString:(NSString *)manualPlaceId;

- (ManualPlaceSource *)getManualPlaceSource;

- (void)setManualPlaceSourceWithManualPlaceSource:(ManualPlaceSource *)manualPlaceSource;

- (double)getDistanceBetweenManualCenterAndDetectedCenter;

- (PlaceID *)getPlaceID;

- (void)copyAllFieldsTo:(SemanticDetectedPlace *)other;

@end

__attribute__((always_inline)) inline void SemanticDetectedPlace_init() {}

//J2OBJC_FIELD_SETTER(SemanticDetectedPlace, detectedPlaceId_, NSString *)
//J2OBJC_FIELD_SETTER(SemanticDetectedPlace, manualPlaceId_, NSString *)
//J2OBJC_FIELD_SETTER(SemanticDetectedPlace, envelope_, DBPolygon *)
//J2OBJC_FIELD_SETTER(SemanticDetectedPlace, refpoint_, ArrayList*)
//J2OBJC_FIELD_SETTER(SemanticDetectedPlace, manualPlaceSource_, ManualPlaceSource *)
//J2OBJC_FIELD_SETTER(SemanticDetectedPlace, key_, SemanticDetectedPlace_SemanticPlaceKey *)

FOUNDATION_EXPORT NSString *SemanticDetectedPlace_MATCH_DISTANCE_;
J2OBJC_STATIC_FIELD_GETTER(SemanticDetectedPlace, MATCH_DISTANCE_, NSString *)

FOUNDATION_EXPORT NSString *SemanticDetectedPlace_DETECTED_PLACE_ID_;
J2OBJC_STATIC_FIELD_GETTER(SemanticDetectedPlace, DETECTED_PLACE_ID_, NSString *)

FOUNDATION_EXPORT NSString *SemanticDetectedPlace_MANUAL_PLACE_ID_;
J2OBJC_STATIC_FIELD_GETTER(SemanticDetectedPlace, MANUAL_PLACE_ID_, NSString *)

FOUNDATION_EXPORT NSString *SemanticDetectedPlace_ENVELOPE_;
J2OBJC_STATIC_FIELD_GETTER(SemanticDetectedPlace, ENVELOPE_, NSString *)

FOUNDATION_EXPORT NSString *SemanticDetectedPlace_REF_POINT_LIST_FIELD_;
J2OBJC_STATIC_FIELD_GETTER(SemanticDetectedPlace, REF_POINT_LIST_FIELD_, NSString *)

FOUNDATION_EXPORT NSString *SemanticDetectedPlace_MANUAL_PLACE_SOURCE_FIELD_;
J2OBJC_STATIC_FIELD_GETTER(SemanticDetectedPlace, MANUAL_PLACE_SOURCE_FIELD_, NSString *)

typedef SemanticDetectedPlace ComIntelWearablePlatformTimeiqDbobjectsPlacesSemanticDetectedPlace;

/**
 @brief This object represents the minimal data that describes an actual SemanticDetectedPlace (used to override the equals/hashCode methods if the object IDs don't matter)
 */
@interface SemanticDetectedPlace_SemanticPlaceKey : NSObject {
 @public
  SemanticKey *semanticKey_;
  NSString *description__;
  NSString *address_;
  Coord *center_;
  DBPolygon *polygon_;
}

/**
 @brief Constructor
 @param polygon
 @param center
 @param semanticKey
 @param description
 @param address
 */
- (instancetype)initWithDBPolygon:(DBPolygon *)polygon
                        withCoord:(Coord *)center
                  withSemanticKey:(SemanticKey *)semanticKey
                     withNSString:(NSString *)description_
                     withNSString:(NSString *)address;

- (boolean)isEqual:(id)o;

- (NSUInteger)hash;

- (void)copyAllFieldsTo:(SemanticDetectedPlace_SemanticPlaceKey *)other;

@end

__attribute__((always_inline)) inline void SemanticDetectedPlace_SemanticPlaceKey_init() {}

//J2OBJC_FIELD_SETTER(SemanticDetectedPlace_SemanticPlaceKey, semanticKey_, SemanticKey *)
//J2OBJC_FIELD_SETTER(SemanticDetectedPlace_SemanticPlaceKey, description__, NSString *)
//J2OBJC_FIELD_SETTER(SemanticDetectedPlace_SemanticPlaceKey, address_, NSString *)
//J2OBJC_FIELD_SETTER(SemanticDetectedPlace_SemanticPlaceKey, center_, Coord *)
//J2OBJC_FIELD_SETTER(SemanticDetectedPlace_SemanticPlaceKey, polygon_, DBPolygon *)

#endif // _SemanticDetectedPlace_H_
