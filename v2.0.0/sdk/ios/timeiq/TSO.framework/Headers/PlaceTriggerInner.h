//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: //com/intel/wearable/platform/timeiq/triggers/place/PlaceTriggerInner.java
//

#ifndef _PlaceTriggerInner_H_
#define _PlaceTriggerInner_H_

@class PlaceID;
@class PlaceTrigger;
@class PlaceTriggerType;
@protocol ITSOTimeUtil;
@protocol ITrigger;
#import "JBHashtable.h"

#import "JB.h"
#include "BaseTriggerInner.h"

/**
 @brief Created by mleib on 26/04/2015.
 */
@interface PlaceTriggerInner : BaseTriggerInner {
 @public
  PlaceID *m_placeId_;
  PlaceTriggerType *m_placeType_;
}

- (instancetype)init;

- (instancetype)initWithPlaceTrigger:(PlaceTrigger *)placeTrigger;

- (instancetype)initWithPlaceTrigger:(PlaceTrigger *)placeTrigger
                    withITSOTimeUtil:(id<ITSOTimeUtil>)tsoTimeUtil;

- (PlaceTriggerType *)getPlaceTriggerType;

- (PlaceID *)getPlaceId;

- (boolean)isEqual:(id)o;

- (NSUInteger)hash;

- (void)initObjectFromMapWithJavaUtilMap:(HashMap*)stringObjectMap OBJC_METHOD_FAMILY_NONE;

- (HashMap*)objectToMap;

- (id<ITrigger>)createTrigger;

- (void)copyAllFieldsTo:(PlaceTriggerInner *)other;

@end

__attribute__((always_inline)) inline void PlaceTriggerInner_init() {}

//J2OBJC_FIELD_SETTER(PlaceTriggerInner, m_placeId_, PlaceID *)
//J2OBJC_FIELD_SETTER(PlaceTriggerInner, m_placeType_, PlaceTriggerType *)

FOUNDATION_EXPORT NSString *PlaceTriggerInner_PLACE_ID_FIELD_;
J2OBJC_STATIC_FIELD_GETTER(PlaceTriggerInner, PLACE_ID_FIELD_, NSString *)

FOUNDATION_EXPORT NSString *PlaceTriggerInner_PLACE_TYPE_FIELD_;
J2OBJC_STATIC_FIELD_GETTER(PlaceTriggerInner, PLACE_TYPE_FIELD_, NSString *)

typedef PlaceTriggerInner ComIntelWearablePlatformTimeiqTriggersPlacePlaceTriggerInner;

#endif // _PlaceTriggerInner_H_
