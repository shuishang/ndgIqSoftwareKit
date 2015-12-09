//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: //com/intel/wearable/platform/timeiq/places/modules/visitsmodule/algs/IVisitDetectorImpl.java
//

#ifndef _IVisitDetectorImpl_H_
#define _IVisitDetectorImpl_H_

@class Visit;
@class WifiScan;
@protocol ILocationData;
@protocol IVisitListener;
#import "JBArrayList.h"

#import "JB.h"

@protocol IVisitDetectorImpl < NSObject >

- (void)onWifiRecieveWithWifiScan:(WifiScan *)wifiScan;

- (void)onLocationRecieveWithILocationData:(id<ILocationData>)fuseLocation;

- (void)registerVisitListenerWithIVisitListener:(id<IVisitListener>)listener;

- (ArrayList*)getVisitListeners;

- (void)unregisterVisitListenerWithIVisitListener:(id<IVisitListener>)listener;

- (ArrayList*)getVisits;

- (Visit *)getCurrentVisit;

- (void)rePlayVisits;

- (void)reportVisitEndWithVisit:(Visit *)visit;

- (void)reportVisitBeginWithVisit:(Visit *)visit;

@end

__attribute__((always_inline)) inline void IVisitDetectorImpl_init() {}

#define ComIntelWearablePlatformTimeiqPlacesModulesVisitsmoduleAlgsIVisitDetectorImpl IVisitDetectorImpl

#endif // _IVisitDetectorImpl_H_
