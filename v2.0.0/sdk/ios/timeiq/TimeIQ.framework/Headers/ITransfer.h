//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: //com/intel/wearable/platform/timeiq/common/storage/basicstorage/ITransfer.java
//

#ifndef _ITransfer_H_
#define _ITransfer_H_

@class InputStream;

#import "JB.h"

/**
 @brief Created by ibeider on 03/02/2015.
 */
@protocol ITransfer < NSObject >

- (boolean)transferWithInputStream:(InputStream *)inputStream;

@end

__attribute__((always_inline)) inline void ITransfer_init() {}

#define ComIntelWearablePlatformTimeiqCommonStorageBasicstorageITransfer ITransfer

#endif // _ITransfer_H_