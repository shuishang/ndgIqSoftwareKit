//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: //com/intel/wearable/platform/timeiq/internalApi/ttlAlerts/TSOAlertsEngine.java
//

#ifndef _TSOAlertsEngine_H_
#define _TSOAlertsEngine_H_

@protocol ITSOAlertsEngine;

#import "JB.h"

/**
 @brief TSOAlertsEngine is a singleton class that implements ITSOAlertsEngine and provides a way to get an TSOAlert.TSOAlertBuilder , add/remove TSOAlert , and query the engine for the added alerts.
 */
@interface TSOAlertsEngine : NSObject {
}

+ (id<ITSOAlertsEngine>)getInstance;

- (instancetype)init;

@end

FOUNDATION_EXPORT BOOL TSOAlertsEngine_initialized;
J2OBJC_STATIC_INIT(TSOAlertsEngine)

FOUNDATION_EXPORT NSString *TSOAlertsEngine_TAG_;
J2OBJC_STATIC_FIELD_GETTER(TSOAlertsEngine, TAG_, NSString *)

typedef TSOAlertsEngine ComIntelWearablePlatformTimeiqInternalApiTtlAlertsTSOAlertsEngine;

#endif // _TSOAlertsEngine_H_