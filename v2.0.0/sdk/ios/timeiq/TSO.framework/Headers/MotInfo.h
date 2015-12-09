//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: //com/intel/wearable/platform/timeiq/dbobjects/places/mot/MotInfo.java
//

#ifndef _MotInfo_H_
#define _MotInfo_H_

@class Mot;
#import "JBHashtable.h"

#import "JB.h"
#include "IMappable.h"
#include "ATSOSyncDbObject.h"
#import "JBSerializable.h"

#define MotInfo_serialVersionUID 5744659394217522394LL

@interface MotInfo : ATSOSyncDbObject < Serializable, IMappable > {
 @public
  Mot *m_currentMot_;
  double m_currentMotConfidence_;
  long64 m_timestamp_;
}

- (instancetype)init;

- (instancetype)initWithMot:(Mot *)value;

- (instancetype)initWithMot:(Mot *)value
                       withLong:(long64)timestamp;

- (instancetype)initWithMot:(Mot *)value
                     withDouble:(double)confidence
                       withLong:(long64)timestamp;

- (void)setMotWithMot:(Mot *)value;

- (void)setMotWithMot:(Mot *)value
                 withLong:(long64)timestamp;

- (Mot *)getMot;

- (void)setTimestampWithLong:(long64)timestamp;

- (long64)getTimestamp;

- (void)setCurrentMotConfidnceWithDouble:(double)confidence;

- (double)getCurrentMotConfidnce;

- (NSString *)description;

- (NSUInteger)hash;

- (boolean)isEqual:(id)obj;

- (void)initObjectFromMapWithJavaUtilMap:(HashMap*)objMap OBJC_METHOD_FAMILY_NONE;

- (HashMap*)objectToMap;

- (void)copyAllFieldsTo:(MotInfo *)other;

@end

__attribute__((always_inline)) inline void MotInfo_init() {}

//J2OBJC_FIELD_SETTER(MotInfo, m_currentMot_, Mot *)

J2OBJC_STATIC_FIELD_GETTER(MotInfo, serialVersionUID, long64)

FOUNDATION_EXPORT NSString *MotInfo_CURRENT_MOT_FIELD_;
J2OBJC_STATIC_FIELD_GETTER(MotInfo, CURRENT_MOT_FIELD_, NSString *)

FOUNDATION_EXPORT NSString *MotInfo_CURRENT_MOT_CONF_FIELD_;
J2OBJC_STATIC_FIELD_GETTER(MotInfo, CURRENT_MOT_CONF_FIELD_, NSString *)

FOUNDATION_EXPORT NSString *MotInfo_TIMESTAMP_FIELD_;
J2OBJC_STATIC_FIELD_GETTER(MotInfo, TIMESTAMP_FIELD_, NSString *)

typedef MotInfo ComIntelWearablePlatformTimeiqDbobjectsPlacesMotMotInfo;

#endif // _MotInfo_H_
