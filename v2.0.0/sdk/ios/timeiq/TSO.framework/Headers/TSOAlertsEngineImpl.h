//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: //com/intel/wearable/platform/timeiq/ttlAlerts/TSOAlertsEngineImpl.java
//

#ifndef _TSOAlertsEngineImpl_H_
#define _TSOAlertsEngineImpl_H_

#import "NSNumber+JavaAPI.h"
@class TSOAlert;
@protocol ITSOAlertListener;
@protocol ITSOAlertProvider;
#import "JBArrayList.h"

#import "JB.h"
#import "ITSOAlertsEngine.h"

/**
 @brief Created by smoradof on 12/24/2014.
 */
@interface TSOAlertsEngineImpl : NSObject < ITSOAlertsEngine > {
 @public
  id<ITSOAlertProvider> m_tsoAlertProvider_;
}

- (instancetype)init;

- (instancetype)initWithITSOAlertProvider:(id<ITSOAlertProvider>)tsoAlertProvider;

- (void)addAlertWithTSOAlert:(TSOAlert *)tsoAlert;

- (void)initAlertsProviderWithITSOAlertListener:(id<ITSOAlertListener>)listener OBJC_METHOD_FAMILY_NONE;

- (ArrayList*)getAllAlerts;

- (TSOAlert *)getAlertWithIdWithNSString:(NSString *)alertId;

- (boolean)removeAlertWithNSString:(NSString *)alertId;

- (boolean)removeAllAlerts;

- (Long *)getNextReminderTimeDiffWithNSString:(NSString *)alertId;

- (void)onDestroy;

- (void)copyAllFieldsTo:(TSOAlertsEngineImpl *)other;

@end

__attribute__((always_inline)) inline void TSOAlertsEngineImpl_init() {}

//J2OBJC_FIELD_SETTER(TSOAlertsEngineImpl, m_tsoAlertProvider_, id<ITSOAlertProvider>)

typedef TSOAlertsEngineImpl ComIntelWearablePlatformTimeiqTtlAlertsTSOAlertsEngineImpl;

#endif // _TSOAlertsEngineImpl_H_
