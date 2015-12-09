//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: //com/intel/wearable/platform/timeiq/places/modules/placesmodule/ClusteringParameters.java
//

#ifndef _ClusteringParameters_H_
#define _ClusteringParameters_H_

#import "JB.h"

@interface ClusteringParameters : NSObject {
 @public
  double eps_;
  int minPoints_;
}

- (instancetype)init;

- (instancetype)initWithDouble:(double)eps
                       withInt:(int)minPoints;

- (double)getEps;

- (int)getMinPoint;

- (void)copyAllFieldsTo:(ClusteringParameters *)other;

@end

__attribute__((always_inline)) inline void ClusteringParameters_init() {}

typedef ClusteringParameters ComIntelWearablePlatformTimeiqPlacesModulesPlacesmoduleClusteringParameters;

#endif // _ClusteringParameters_H_
