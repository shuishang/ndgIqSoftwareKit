//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: //com/intel/wearable/platform/timeiq/sensors/datatypes/wifi/AssociatedWifiSpot.java
//

#ifndef _AssociatedWifiSpot_H_
#define _AssociatedWifiSpot_H_

#import "JBHashtable.h"

#import "JB.h"
#import "IMappable.h"

/**
 @brief Created by aeirew on 24/02/2015.
 */
@interface AssociatedWifiSpot : NSObject < IMappable > {
 @public
  NSString *bssid_;
  int frequency_;
  int level_;
  long64 timestamp_;
}

- (instancetype)init;

- (instancetype)initWithNSString:(NSString *)bssid
                         withInt:(int)frequency
                         withInt:(int)level
                        withLong:(long64)timestamp;

- (NSString *)getBssid;

- (int)getFrequency;

- (int)getLevel;

- (long64)getTimestamp;

- (void)initObjectFromMapWithJavaUtilMap:(HashMap*)stringObjectMap OBJC_METHOD_FAMILY_NONE;

- (HashMap*)objectToMap;

- (boolean)isEqual:(id)o;

- (NSUInteger)hash;

- (void)copyAllFieldsTo:(AssociatedWifiSpot *)other;

@end

__attribute__((always_inline)) inline void AssociatedWifiSpot_init() {}

//J2OBJC_FIELD_SETTER(AssociatedWifiSpot, bssid_, NSString *)

FOUNDATION_EXPORT NSString *AssociatedWifiSpot_BSSID_FIELD_;
J2OBJC_STATIC_FIELD_GETTER(AssociatedWifiSpot, BSSID_FIELD_, NSString *)

FOUNDATION_EXPORT NSString *AssociatedWifiSpot_FREQUENCY_FIELD_;
J2OBJC_STATIC_FIELD_GETTER(AssociatedWifiSpot, FREQUENCY_FIELD_, NSString *)

FOUNDATION_EXPORT NSString *AssociatedWifiSpot_LEVEL_FIELD_;
J2OBJC_STATIC_FIELD_GETTER(AssociatedWifiSpot, LEVEL_FIELD_, NSString *)

FOUNDATION_EXPORT NSString *AssociatedWifiSpot_TIMESTAMP_FIELD_;
J2OBJC_STATIC_FIELD_GETTER(AssociatedWifiSpot, TIMESTAMP_FIELD_, NSString *)

typedef AssociatedWifiSpot ComIntelWearablePlatformTimeiqSensorsDatatypesWifiAssociatedWifiSpot;

#endif // _AssociatedWifiSpot_H_
