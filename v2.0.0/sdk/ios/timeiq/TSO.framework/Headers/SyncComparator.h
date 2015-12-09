//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: //com/intel/wearable/platform/timeiq/dblayer/sync/SyncComparator.java
//

#ifndef _SyncComparator_H_
#define _SyncComparator_H_

@protocol ITSOSyncDbObject;

#import "JB.h"
#import "JBComparator.h"

/**
 @brief Created by aeirew on 08/10/2015.
 */
@interface SyncComparator : NSObject < IComparator > {
}

- (int)compareWithId:(id<ITSOSyncDbObject>)o1
               withId:(id<ITSOSyncDbObject>)o2;

- (instancetype)init;

@end

__attribute__((always_inline)) inline void SyncComparator_init() {}

typedef SyncComparator ComIntelWearablePlatformTimeiqDblayerSyncSyncComparator;

#endif // _SyncComparator_H_
