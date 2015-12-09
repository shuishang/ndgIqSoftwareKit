//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: //com/intel/wearable/platform/timeiq/common/system/ISystemUtils.java
//

#ifndef _ISystemUtils_H_
#define _ISystemUtils_H_

#import "JBFile.h"

#import "JB.h"

/**
 @brief Created by orencoh2 on 19/1/15.
 */
@protocol ISystemUtils < NSObject >

- (boolean)isStorageDiskAvailable;

- (File *)getSystemRepositoryFolder;

- (File *)getSystemRepositoryBackUpFolder;

- (File *)getSystemBaseFolder;

- (File *)getSystemExternalBaseFolder;

@end

__attribute__((always_inline)) inline void ISystemUtils_init() {}

#define ComIntelWearablePlatformTimeiqCommonSystemISystemUtils ISystemUtils

#endif // _ISystemUtils_H_
