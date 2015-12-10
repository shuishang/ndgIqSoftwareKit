//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: //com/intel/wearable/platform/timeiq/places/modules/visitinplacemodule/VisitInPlaceModule.java
//

#ifndef _VisitInPlaceModule_H_
#define _VisitInPlaceModule_H_

@class BaseSensorData;
@class Coord;
#import "NSArray+JavaAPI.h"
@class IPC;
@class Enum;
@class ModuleState;
@class ModuleType;
@class ReceiverSensorsRequest;
@class SensorType;
@class SensorsEngine;
@class TSOCoordinate;
@class VipEventPersistency;
@class VisitedPlace;
@class VisitedPlaceConfidence;
@class VisitsDetetionListener;
@class WifiScan;
@protocol IAuditManager;
@protocol ILocationData;
@protocol IVisitEntry;
@protocol IVisitInPlaceListener;
#import "JBHashSet.h"
#import "JBArrayList.h"
#import "JBHashSet.h"

#import "JB.h"
#import "IDetectionModule.h"
#import "ISensorDataReceiver.h"

#define VisitInPlaceModule_MaxDistanceToManul 100.0
#define VisitInPlaceModule_SensingDistance 1500.0

/**
 @brief Created by ylempert on 13-May-15.
 */
@interface VisitInPlaceModule : NSObject < IDetectionModule, ISensorDataReceiver > {
 @public
  id<IAuditManager> auditManager_;
  SensorsEngine *sensorsEngine_;
  VisitsDetetionListener *visitListener_;
  ArrayList* listeners_;
  ModuleState *moduleState_;
  ArrayList* vipStateList_;
  Set* reportedVisits_;
  Set* endVisits_;
  Set* startVisits_;
  VipEventPersistency *persistency_;
}

/**
 @brief Constructor
 */
- (instancetype)init;

+ (void)init__ OBJC_METHOD_FAMILY_NONE;

+ (VisitInPlaceModule *)getInstance;

+ (void)dispose;

- (void)activateModuleAndSensors;

- (void)deactivateModuleAndSensors;

- (void)onResetReceiver;

/**
 @brief Alert of sample interval change for a given sensor type PAY ATTENTION: a receiver must register specifically to a given sensor type with indication of "should listen to change sample interval" - @@SensorModeRequest
 @param sensorType
 @param sampleInterval
 */
- (void)onSampleIntervalChangedWithSensorType:(SensorType *)sensorType
                                         withLong:(long64)sampleInterval;

- (ReceiverSensorsRequest *)generateReceiverSensorsRequest;

- (Set*)getCurrentVisitsInPlace;

- (void)invokeVipStartWithLong:(long64)timestamp
             withTSOCoordinate:(TSOCoordinate *)coord
withVisitedPlaceConfidence:(VisitedPlaceConfidence *)confidence;

- (void)invokeVipEndWithLong:(long64)timestamp
           withTSOCoordinate:(TSOCoordinate *)coord
withVisitedPlaceConfidence:(VisitedPlaceConfidence *)confidence;

+ (IPC *)convertToIPCWithVisitedPlaceConfidence:(VisitedPlaceConfidence *)vpc;

/**
 @brief onVisitStart() gets not only visits start events from VisitDetectionModule but also visits change.
 Currently both are handled in here
 */
- (void)onVisitStartWithIVisitEntry:(id<IVisitEntry>)visitEntry;

- (void)onVisitEndWithIVisitEntry:(id<IVisitEntry>)visitEntry;

- (void)updateFuseWithILocationData:(id<ILocationData>)locationData;

- (void)invokeListenersWithLong:(long64)timestamp;

- (void)logVipEventSummaryWithNSString:(NSString *)msg;

- (void)dumpVipEventsWithJavaUtilCollection:(Set*)vipEvents
                               withNSString:(NSString *)msg;

- (NSString *)extractSemanticKeysStrWithJavaUtilSet:(Set*)visits;

/**
 @brief "Reverses" any enum instance passed, returning the enum with ordinal = "number of constants - ordinal passed"
 */
+ (id)reverseOrdinalWithEnum:(Enum *)enumInstance;

+ (void)mainWithNSStringArray:(Array *)args;

- (void)updateWifiWithWifiScan:(WifiScan *)wifiScan
                      withLong:(long64)timestamp;

- (ArrayList*)filterManualDetectedWithJavaUtilCollection:(Set*)detectedPlaces
                                        withJavaUtilCollection:(Set*)manualPlaces;

- (void)cleanUpWithCoord:(Coord *)coord
  withJavaUtilCollection:(Set*)reportedVisits;

- (void)updatePlacesAroundLocationWithDouble:(double)latitude
                                  withDouble:(double)longitude
                                    withLong:(long64)timeStamp;

- (ArrayList*)getPlacesAroundLocationWithDouble:(double)latitude
                                           withDouble:(double)longitude;

- (boolean)isWithinSensingDistanceWithCoord:(Coord *)placeCenter
                                   withCoord:(Coord *)location;

- (Set*)getAllDetectedPlaces;

- (Set*)getAllSemanticDetectedPlaces;

- (Set*)getAllManualPlaces;

- (ArrayList*)getAllPlaces;

- (void)onDataReceivedWithBaseSensorData:(BaseSensorData *)data;

- (VisitedPlace *)getCurrent;

- (VisitedPlace *)getPrevious;

- (id<ISensorDataReceiver>)getDataReceiverListener;

- (ModuleState *)getModuleState;

- (void)registerListenerWithId:(id<IVisitInPlaceListener>)iVisitInPlaceListener;

- (void)unregisterListenerWithId:(id<IVisitInPlaceListener>)iVisitInPlaceListener;

- (void)storeModule;

- (void)restoreModule;

- (ModuleType *)getModuleType;

- (void)visitInPlaceStartWithVisitedPlace:(VisitedPlace *)visitedPlace;

- (void)visitInPlaceEndWithVisitedPlace:(VisitedPlace *)visitedPlace;

+ (boolean)isDummyPlaceWithVisitedPlace:(VisitedPlace *)event;

- (void)copyAllFieldsTo:(VisitInPlaceModule *)other;

@end

FOUNDATION_EXPORT BOOL VisitInPlaceModule_initialized;
J2OBJC_STATIC_INIT(VisitInPlaceModule)

//J2OBJC_FIELD_SETTER(VisitInPlaceModule, auditManager_, id<IAuditManager>)
//J2OBJC_FIELD_SETTER(VisitInPlaceModule, sensorsEngine_, SensorsEngine *)
//J2OBJC_FIELD_SETTER(VisitInPlaceModule, visitListener_, VisitsDetetionListener *)
//J2OBJC_FIELD_SETTER(VisitInPlaceModule, listeners_, ArrayList*)
//J2OBJC_FIELD_SETTER(VisitInPlaceModule, moduleState_, ModuleState *)
//J2OBJC_FIELD_SETTER(VisitInPlaceModule, vipStateList_, ArrayList*)
//J2OBJC_FIELD_SETTER(VisitInPlaceModule, reportedVisits_, Set*)
//J2OBJC_FIELD_SETTER(VisitInPlaceModule, endVisits_, Set*)
//J2OBJC_FIELD_SETTER(VisitInPlaceModule, startVisits_, Set*)
//J2OBJC_FIELD_SETTER(VisitInPlaceModule, persistency_, VipEventPersistency *)

FOUNDATION_EXPORT NSString *VisitInPlaceModule_TAG_;
J2OBJC_STATIC_FIELD_GETTER(VisitInPlaceModule, TAG_, NSString *)

J2OBJC_STATIC_FIELD_GETTER(VisitInPlaceModule, MaxDistanceToManul, double)

J2OBJC_STATIC_FIELD_GETTER(VisitInPlaceModule, SensingDistance, double)

FOUNDATION_EXPORT NSString *VisitInPlaceModule_TEST_TAG_;
J2OBJC_STATIC_FIELD_GETTER(VisitInPlaceModule, TEST_TAG_, NSString *)

FOUNDATION_EXPORT VisitInPlaceModule *VisitInPlaceModule_s_instance_;
J2OBJC_STATIC_FIELD_GETTER(VisitInPlaceModule, s_instance_, VisitInPlaceModule *)
//J2OBJC_STATIC_FIELD_SETTER(VisitInPlaceModule, s_instance_, VisitInPlaceModule *)

typedef VisitInPlaceModule ComIntelWearablePlatformTimeiqPlacesModulesVisitinplacemoduleVisitInPlaceModule;

#endif // _VisitInPlaceModule_H_
