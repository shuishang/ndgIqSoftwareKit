//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: //com/intel/wearable/platform/timeiq/dbobjects/places/ManualPlace.java
//

#ifndef _ManualPlace_H_
#define _ManualPlace_H_

@class Coord;
@class ManualPlaceSource;
@class PlaceID;
@class SemanticKey;
#import "JBHashtable.h"

#import "JB.h"
#import "ATSOSemanticPlace.h"

@interface ManualPlace : ATSOSemanticPlace {
 @public
  ManualPlaceSource *manualPlaceSource_;
}

/**
 @brief Constructor
 */
- (instancetype)init;

- (instancetype)initWithManualPlace:(ManualPlace *)other;

/**
 @brief Constructor
 @param userId
 @param location
 @param address
 @param placeDescription
 @param semanticKey
 @param manualPlaceSource
 */
- (instancetype)initWithNSString:(NSString *)userId
                       withCoord:(Coord *)location
                    withNSString:(NSString *)address
                    withNSString:(NSString *)placeDescription
                 withSemanticKey:(SemanticKey *)semanticKey
       withManualPlaceSource:(ManualPlaceSource *)manualPlaceSource;

/**
 @brief Constructor
 @param objectId
 @param userId
 @param center
 @param address
 @param placeDescription
 @param semanticKey
 @param manualPlaceSource
 */
- (instancetype)initWithNSString:(NSString *)objectId
                    withNSString:(NSString *)userId
                       withCoord:(Coord *)center
                    withNSString:(NSString *)address
                    withNSString:(NSString *)placeDescription
                 withSemanticKey:(SemanticKey *)semanticKey
       withManualPlaceSource:(ManualPlaceSource *)manualPlaceSource;

/**
 @brief Constructor
 @param objectId
 @param userId
 @param modificationTimeInNano
 @param center
 @param address
 @param placeDescription
 @param semanticKey
 @param manualPlaceSource
 */
- (instancetype)initWithNSString:(NSString *)objectId
                    withNSString:(NSString *)userId
                        withLong:(long64)modificationTimeInNano
                       withCoord:(Coord *)center
                    withNSString:(NSString *)address
                    withNSString:(NSString *)placeDescription
                 withSemanticKey:(SemanticKey *)semanticKey
       withManualPlaceSource:(ManualPlaceSource *)manualPlaceSource;

- (NSString *)description;

- (void)setManualPlaceSourceWithManualPlaceSource:(ManualPlaceSource *)manualPlaceSource;

- (ManualPlaceSource *)getManualPlaceSource;

- (void)initObjectFromMapWithJavaUtilMap:(HashMap*)map OBJC_METHOD_FAMILY_NONE;

- (HashMap*)objectToMap;

- (boolean)isEqual:(id)o;

- (NSUInteger)hash;

- (PlaceID *)getPlaceID;

- (void)copyAllFieldsTo:(ManualPlace *)other;

@end

__attribute__((always_inline)) inline void ManualPlace_init() {}

//J2OBJC_FIELD_SETTER(ManualPlace, manualPlaceSource_, ManualPlaceSource *)

FOUNDATION_EXPORT NSString *ManualPlace_MANUAL_PLACE_SOURCE_FIELD_;
J2OBJC_STATIC_FIELD_GETTER(ManualPlace, MANUAL_PLACE_SOURCE_FIELD_, NSString *)

typedef ManualPlace ComIntelWearablePlatformTimeiqDbobjectsPlacesManualPlace;

#endif // _ManualPlace_H_
