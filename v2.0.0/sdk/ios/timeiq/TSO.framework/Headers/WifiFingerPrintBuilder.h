//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: //com/intel/wearable/platform/timeiq/sensors/datatypes/wifi/WifiFingerPrintBuilder.java
//

#ifndef _WifiFingerPrintBuilder_H_
#define _WifiFingerPrintBuilder_H_

@class AssociatedWifiSpot;
@class WifiFingerPrintCollection;
#import "JBArrayList.h"

#import "JB.h"

/**
 @brief Created by eleuchte on 24/12/2014.
 */
@interface WifiFingerPrintBuilder : NSObject {
 @public
  ArrayList* m_capabilities_;
  NSString *m_ssid_;
  ArrayList* associatedWifiSpots_;
}

- (WifiFingerPrintBuilder *)setCapabilitiesWithNSString:(NSString *)capabilities;

- (WifiFingerPrintBuilder *)setSSIDWithNSString:(NSString *)ssid;

- (WifiFingerPrintBuilder *)appendWifiSpotWithAssociatedWifiSpot:(AssociatedWifiSpot *)spot;

- (WifiFingerPrintBuilder *)setAssociatedWifiSpotsWithJavaUtilList:(ArrayList*)associatedWifiSpots;

- (WifiFingerPrintCollection *)build;

- (instancetype)init;

- (void)copyAllFieldsTo:(WifiFingerPrintBuilder *)other;

@end

__attribute__((always_inline)) inline void WifiFingerPrintBuilder_init() {}

//J2OBJC_FIELD_SETTER(WifiFingerPrintBuilder, m_capabilities_, ArrayList*)
//J2OBJC_FIELD_SETTER(WifiFingerPrintBuilder, m_ssid_, NSString *)
//J2OBJC_FIELD_SETTER(WifiFingerPrintBuilder, associatedWifiSpots_, ArrayList*)

typedef WifiFingerPrintBuilder ComIntelWearablePlatformTimeiqSensorsDatatypesWifiWifiFingerPrintBuilder;

#endif // _WifiFingerPrintBuilder_H_
