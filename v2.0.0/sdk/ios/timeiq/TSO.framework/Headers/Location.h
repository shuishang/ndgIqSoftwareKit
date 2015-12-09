//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: //com/intel/wearable/platform/timeiq/places/modules/placesmodule/utils/Location.java
//

#ifndef _Location_H_
#define _Location_H_

@class AP;
@class Coord;
#import "JBArrayList.h"

#import "JB.h"

@interface Location : NSObject {
 @public
  double lat_;
  double lon_;
  int id__;
  long64 time_;
  long64 accuracy_;
  double speed_;
  ArrayList* aps_;
}

- (instancetype)initWithDouble:(double)lat
                    withDouble:(double)lon
                      withLong:(long64)accuracy
                    withDouble:(double)speed
                      withLong:(long64)time;

- (Coord *)getPoint;

- (void)addApWithAP:(AP *)ap;

+ (int)getCounter;

- (double)getLat;

- (double)getLon;

- (int)getId;

- (long64)getTime;

- (ArrayList*)getAps;

- (long64)getAccuracy;

- (double)getSpeed;

- (void)copyAllFieldsTo:(Location *)other;

@end

__attribute__((always_inline)) inline void Location_init() {}

//J2OBJC_FIELD_SETTER(Location, aps_, ArrayList*)

FOUNDATION_EXPORT int Location_counter_;
J2OBJC_STATIC_FIELD_GETTER(Location, counter_, int)
//J2OBJC_STATIC_FIELD_REF_GETTER(Location, counter_, int)

typedef Location ComIntelWearablePlatformTimeiqPlacesModulesPlacesmoduleUtilsLocation;

#endif // _Location_H_
