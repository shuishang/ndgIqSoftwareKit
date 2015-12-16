//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: //com/intel/wearable/platform/timeiq/triggers/place/PlaceDataHelper.java
//

#ifndef _PlaceDataHelper_H_
#define _PlaceDataHelper_H_

#import "JBArrayList.h"
@class PlaceTriggerType;
@class VisitedPlaces;
@protocol IBaseTriggersStorage;
#import "JBHashSet.h"

#import "JB.h"

/**
 @brief Created by yaronabr on 21-May-15.
 */
@interface PlaceDataHelper : NSObject {
}

+ (Set*)getTriggersWithTypeAndPlaceWithIBaseTriggersStorage:(id<IBaseTriggersStorage>)storage
                                                     withPlaceTriggerType:(PlaceTriggerType *)type
                                                            withVisitedPlaces:(VisitedPlaces *)placeList
                                                        withArrayList:(ArrayList *)data;

- (instancetype)init;

@end

__attribute__((always_inline)) inline void PlaceDataHelper_init() {}

typedef PlaceDataHelper ComIntelWearablePlatformTimeiqTriggersPlacePlaceDataHelper;

#endif // _PlaceDataHelper_H_