//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: //com/intel/wearable/platform/timeiq/platform/android/factory/CommonFactoryInitializer.java
//

#ifndef _CommonFactoryInitializer_H_
#define _CommonFactoryInitializer_H_

@class ClassFactory;

#import "JB.h"

/**
 @brief Created by smoradof on 1/19/15.
 */
@interface CommonFactoryInitializer : NSObject {
}

+ (void)initFactoryGeneralWithClassFactory:(ClassFactory *)classFactory OBJC_METHOD_FAMILY_NONE;

+ (void)initFactoryGeneralWithClassFactory:(ClassFactory *)classFactory
                               withBoolean:(boolean)useCSWNetworking OBJC_METHOD_FAMILY_NONE;

+ (void)initFactoryGeneral4TestingWithClassFactory:(ClassFactory *)classFactory OBJC_METHOD_FAMILY_NONE;

- (instancetype)init;

@end

__attribute__((always_inline)) inline void CommonFactoryInitializer_init() {}

typedef CommonFactoryInitializer ComIntelWearablePlatformTimeiqPlatformAndroidFactoryCommonFactoryInitializer;

#endif // _CommonFactoryInitializer_H_
