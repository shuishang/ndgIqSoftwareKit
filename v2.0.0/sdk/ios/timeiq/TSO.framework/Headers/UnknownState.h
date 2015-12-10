//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: //com/intel/wearable/platform/timeiq/places/modules/visitinplacemodule/state/UnknownState.java
//

#ifndef _UnknownState_H_
#define _UnknownState_H_

@class IPC;
@class PlaceID;
@class Visit;

#import "JB.h"
#import "AbstractState.h"
#import "IState.h"

#define UnknownState_WIFI_UNKOWN_INFLUENCE_IN_MINS 5.0

@interface UnknownState : AbstractState < IState > {
}

- (instancetype)initWithPlaceID:(PlaceID *)placeId
                       withLong:(long64)creationTime;

- (id<IState>)updateIpcWithIPC:(IPC *)ipc
                          withLong:(long64)timestamp
                       withIPC:(IPC *)wifiIpc
                          withLong:(long64)wifiTimestamp;

- (id<IState>)updateVisitStartWithVisit:(Visit *)visit
                               withLong:(long64)timestamp;

- (id<IState>)updateVisitEndWithVisit:(Visit *)visit
                             withLong:(long64)timestamp;

- (id<IState>)updateTimerWithLong:(long64)timestamp;

@end

__attribute__((always_inline)) inline void UnknownState_init() {}

J2OBJC_STATIC_FIELD_GETTER(UnknownState, WIFI_UNKOWN_INFLUENCE_IN_MINS, double)

typedef UnknownState ComIntelWearablePlatformTimeiqPlacesModulesVisitinplacemoduleStateUnknownState;

#endif // _UnknownState_H_
