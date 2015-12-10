//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: //com/intel/wearable/platform/timeiq/common/preferences/SdkDefaultPrefs.java
//

#ifndef _SdkDefaultPrefs_H_
#define _SdkDefaultPrefs_H_

@class PrefsStorage;
@class Result;

#import "JB.h"
#import "APrefs.h"
#import "ISdkDefaultPrefs.h"

/**
 @brief Created by mleib on 02/08/2015.
 */
@interface SdkDefaultPrefs : APrefs < ISdkDefaultPrefs > {
}

- (void)init__ OBJC_METHOD_FAMILY_NONE;

/**
 @brief should create and return the storage (inherited from PrefsStorage )
 */
- (PrefsStorage *)createAndReturnStorage;

- (Result *)setWithNSString:(NSString *)key
                     withId:(id)value;

- (NSString *)getObjectId;

- (instancetype)init;

@end

__attribute__((always_inline)) inline void SdkDefaultPrefs_init() {}

typedef SdkDefaultPrefs ComIntelWearablePlatformTimeiqCommonPreferencesSdkDefaultPrefs;

#endif // _SdkDefaultPrefs_H_
