//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: //com/intel/wearable/platform/timeiq/triggers/place/IPlacesTriggersStorage.java
//

#ifndef _IPlacesTriggersStorage_H_
#define _IPlacesTriggersStorage_H_

@class PlaceTriggerType;
@class VisitedPlaces;
#import "JBHashSet.h"

#import "JB.h"
#import "IBaseTriggersStorage.h"

/**
 @brief Created by Yaron Abramovich on 25.5.15
 */
@protocol IPlacesTriggersStorage < IBaseTriggersStorage, NSObject >
- (Set*)getTriggersWithTypeAndPlaceWithPlaceTriggerType:(PlaceTriggerType *)type
                                                            withVisitedPlaces:(VisitedPlaces *)placeList;

@end

__attribute__((always_inline)) inline void IPlacesTriggersStorage_init() {}

#define ComIntelWearablePlatformTimeiqTriggersPlaceIPlacesTriggersStorage IPlacesTriggersStorage

#endif // _IPlacesTriggersStorage_H_