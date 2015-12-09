//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: //com/intel/wearable/platform/timeiq/sensors/datatypes/PlacesActivityType.java
//

#ifndef _PlacesActivityType_H_
#define _PlacesActivityType_H_

#import "NSNumber+JavaAPI.h"
#import "JBHashtable.h"

#import "JB.h"
#include "IMappable.h"
#import "JBSerializable.h"

/**
 @brief Created by aeirew on 23/12/2014.
 */
@interface PlacesActivityType : NSObject < Serializable, IMappable > {
 @public
  int m_confidence_;
  int m_type_;
  NSString *m_nameFromType_;
}

- (instancetype)init;

- (instancetype)initWithInt:(int)confidence
                    withInt:(int)type
               withNSString:(NSString *)nameFromType;

- (int)getConfidence;

- (void)setConfidenceWithInteger:(Integer *)confidence;

- (int)getType;

- (void)setTypeWithInteger:(Integer *)type;

- (NSString *)getNameFromType;

- (void)setNameFromTypeWithNSString:(NSString *)nameFromType;

- (void)initObjectFromMapWithJavaUtilMap:(HashMap*)stringObjectMap OBJC_METHOD_FAMILY_NONE;

- (HashMap*)objectToMap;

- (boolean)isEqual:(id)o;

- (NSUInteger)hash;

- (void)copyAllFieldsTo:(PlacesActivityType *)other;

@end

__attribute__((always_inline)) inline void PlacesActivityType_init() {}

//J2OBJC_FIELD_SETTER(PlacesActivityType, m_nameFromType_, NSString *)

FOUNDATION_EXPORT NSString *PlacesActivityType_CONFIDENCE_FIELD_;
J2OBJC_STATIC_FIELD_GETTER(PlacesActivityType, CONFIDENCE_FIELD_, NSString *)

FOUNDATION_EXPORT NSString *PlacesActivityType_TYPE_FIELD_;
J2OBJC_STATIC_FIELD_GETTER(PlacesActivityType, TYPE_FIELD_, NSString *)

FOUNDATION_EXPORT NSString *PlacesActivityType_NAME_FROM_TYPE_FIELD_;
J2OBJC_STATIC_FIELD_GETTER(PlacesActivityType, NAME_FROM_TYPE_FIELD_, NSString *)

typedef PlacesActivityType ComIntelWearablePlatformTimeiqSensorsDatatypesPlacesActivityType;

#endif // _PlacesActivityType_H_
