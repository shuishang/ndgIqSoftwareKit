//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: //com/intel/wearable/platform/timeiq/places/modules/placesmodule/geometry/Mat.java
//

#ifndef _Mat_H_
#define _Mat_H_

@class Cluster;
#import "NSArray+JavaAPI.h"

#import "JB.h"
#import "IMat.h"

#define Mat_EARTH_RADIUS 6378100.0
#define Mat_REZOLUTION 50.0

@interface Mat : NSObject < IMat > {
 @public
  Array *mat_;
  int height_;
  int width_;
}

/**
 @brief Constructor
 @param height
 @param width
 */
- (instancetype)initWithInt:(int)height
                    withInt:(int)width;

- (void)setZeros;

- (Array *)geyArray;

- (void)getValueWithInt:(int)i
                withInt:(int)j;

- (void)clusterToGridWithCluster:(Cluster *)cluster;

- (void)setWithInt:(int)row
           withInt:(int)col
        withDouble:(double)val;

- (double)getWithInt:(int)row
              withInt:(int)col;

- (int)colLength;

- (int)rowLength;

- (id<IMat>)timesWithIMat:(id<IMat>)matToMult;

- (id<IMat>)minusWithIMat:(id<IMat>)matToMinus;

- (id<IMat>)inv;

- (double)det;

- (id<IMat>)transpose;

- (Mat *)fromIMatWithIMat:(id<IMat>)m;

- (void)copyAllFieldsTo:(Mat *)other;

@end

__attribute__((always_inline)) inline void Mat_init() {}

//J2OBJC_FIELD_SETTER(Mat, mat_, Array *)

J2OBJC_STATIC_FIELD_GETTER(Mat, EARTH_RADIUS, double)

J2OBJC_STATIC_FIELD_GETTER(Mat, REZOLUTION, double)

FOUNDATION_EXPORT double Mat_DELTA_THETA_;
J2OBJC_STATIC_FIELD_GETTER(Mat, DELTA_THETA_, double)
//J2OBJC_STATIC_FIELD_REF_GETTER(Mat, DELTA_THETA_, double)

typedef Mat ComIntelWearablePlatformTimeiqPlacesModulesPlacesmoduleGeometryMat;

#endif // _Mat_H_