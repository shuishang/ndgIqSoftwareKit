//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: //com/intel/wearable/platform/timeiq/dbobjects/interfaces/ITSOSyncDbObject.java
//

#ifndef _ITSOSyncDbObject_H_
#define _ITSOSyncDbObject_H_

#import "JB.h"
#import "ITSOBaseDBObject.h"

@protocol ITSOSyncDbObject < ITSOBaseDBObject, NSObject >
- (NSString *)getUserId;

- (void)setUserIdWithNSString:(NSString *)userId;

- (long64)getModificationTimeStamp;

- (void)setModificationTimeStampWithLong:(long64)timeStamp;

@end

__attribute__((always_inline)) inline void ITSOSyncDbObject_init() {}

#define ComIntelWearablePlatformTimeiqDbobjectsInterfacesITSOSyncDbObject ITSOSyncDbObject

#endif // _ITSOSyncDbObject_H_
