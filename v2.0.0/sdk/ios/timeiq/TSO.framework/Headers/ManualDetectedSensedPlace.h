//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: //com/intel/wearable/platform/timeiq/places/modules/visitinplacemodule/ManualDetectedSensedPlace.java
//

#ifndef _ManualDetectedSensedPlace_H_
#define _ManualDetectedSensedPlace_H_

@class DetectedPlace;
@class TSOCoordinate;

#import "JB.h"
#include "ClusterSensedPlace.h"

/**
 @brief Created by ylempert on 14-May-15.
 */
@interface ManualDetectedSensedPlace : ClusterSensedPlace {
 @public
  TSOCoordinate *center_;
}

- (instancetype)initWithDetectedPlace:(DetectedPlace *)cluster
                         withNSString:(NSString *)placeId;

- (void)copyAllFieldsTo:(ManualDetectedSensedPlace *)other;

@end

__attribute__((always_inline)) inline void ManualDetectedSensedPlace_init() {}

//J2OBJC_FIELD_SETTER(ManualDetectedSensedPlace, center_, TSOCoordinate *)

typedef ManualDetectedSensedPlace ComIntelWearablePlatformTimeiqPlacesModulesVisitinplacemoduleManualDetectedSensedPlace;

#endif // _ManualDetectedSensedPlace_H_
