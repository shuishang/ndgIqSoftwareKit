//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: //com/intel/wearable/platform/timeiq/platform/android/common/IOSWakeLock.java
//

#ifndef _IOSWakeLock_H_
#define _IOSWakeLock_H_

#import "JB.h"
#include "IWakeLock.h"

@interface IOSWakeLock : NSObject < IWakeLock > {
}

- (void)setNameWithNSString:(NSString *)name;

- (void)acquire;

- (void)acquireWithLong:(long64)timeout;

- (void)release__;

- (instancetype)init;

@end

__attribute__((always_inline)) inline void IOSWakeLock_init() {}

typedef IOSWakeLock ComIntelWearablePlatformTimeiqPlatformAndroidCommonIOSWakeLock;

#endif // _IOSWakeLock_H_
