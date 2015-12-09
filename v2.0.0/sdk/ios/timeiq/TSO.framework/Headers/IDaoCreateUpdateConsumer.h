//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: //com/intel/wearable/platform/timeiq/common/storage/db/IDaoCreateUpdateConsumer.java
//

#ifndef _IDaoCreateUpdateConsumer_H_
#define _IDaoCreateUpdateConsumer_H_

@protocol IDbPlatformImpl;

#import "JB.h"

/**
 @brief Handle the strategy of updating/creating a database table, those will be called when com.intel.wearable.platform.timeiq.common.system.SystemConfig#DB_VERSION is incremented Created by yaronabr on 02-Jul-15.
 */
@protocol IDaoCreateUpdateConsumer < NSObject >

- (void)onCreateCommandWithIDbPlatformImpl:(id<IDbPlatformImpl>)idb;

- (void)onUpgradeCommandWithIDbPlatformImpl:(id<IDbPlatformImpl>)idb
                                    withInt:(int)oldVersion
                                    withInt:(int)newVersion;

@end

__attribute__((always_inline)) inline void IDaoCreateUpdateConsumer_init() {}

#define ComIntelWearablePlatformTimeiqCommonStorageDbIDaoCreateUpdateConsumer IDaoCreateUpdateConsumer

#endif // _IDaoCreateUpdateConsumer_H_
