//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: //com/intel/wearable/platform/timeiq/dbobjects/places/wifi/PlaceRefPoint.java
//

#ifndef _PlaceRefPoint_H_
#define _PlaceRefPoint_H_

#import "JBArrayList.h"
#import "JBHashtable.h"

#import "JB.h"
#include "IMappable.h"

/**
 @brief Created by ylempert on 07-Oct-15.
 */
@interface PlaceRefPoint : NSObject < IMappable > {
 @public
  ArrayList* aplist_;
}

- (ArrayList*)getAplist;

- (void)setAplistWithJavaUtilList:(ArrayList*)aplist;

- (void)initObjectFromMapWithJavaUtilMap:(HashMap*)objMap OBJC_METHOD_FAMILY_NONE;

- (HashMap*)objectToMap;

- (instancetype)init;

- (void)copyAllFieldsTo:(PlaceRefPoint *)other;

@end

__attribute__((always_inline)) inline void PlaceRefPoint_init() {}

//J2OBJC_FIELD_SETTER(PlaceRefPoint, aplist_, ArrayList*)

FOUNDATION_EXPORT NSString *PlaceRefPoint_AP_FIELD_;
J2OBJC_STATIC_FIELD_GETTER(PlaceRefPoint, AP_FIELD_, NSString *)

typedef PlaceRefPoint ComIntelWearablePlatformTimeiqDbobjectsPlacesWifiPlaceRefPoint;

#endif // _PlaceRefPoint_H_
