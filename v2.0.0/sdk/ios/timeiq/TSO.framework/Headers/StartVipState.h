//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: //com/intel/wearable/platform/timeiq/places/modules/visitinplacemodule/state/StartVipState.java
//

#ifndef _StartVipState_H_
#define _StartVipState_H_

@class IPC;
@class PlaceID;
@class Visit;
@protocol IState;

#import "JB.h"
#include "AbstractState.h"

@interface StartVipState : AbstractState {
}

- (instancetype)initWithPlaceID:(PlaceID *)placeId
                       withLong:(long64)timestamp;

- (id<IState>)updateIpcWithIPC:(IPC *)ipc
                          withLong:(long64)timestamp
                       withIPC:(IPC *)lastWifiIpc
                          withLong:(long64)lastWifiTimestamp;

- (id<IState>)updateVisitStartWithVisit:(Visit *)visit
                               withLong:(long64)timestamp;

- (id<IState>)updateVisitEndWithVisit:(Visit *)visit
                             withLong:(long64)timestamp;

- (id<IState>)updateTimerWithLong:(long64)timestamp;

@end

__attribute__((always_inline)) inline void StartVipState_init() {}

typedef StartVipState ComIntelWearablePlatformTimeiqPlacesModulesVisitinplacemoduleStateStartVipState;

#endif // _StartVipState_H_
