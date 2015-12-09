//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: //com/intel/wearable/platform/timeiq/dblayer/interfaces/ISyncMethods.java
//

#ifndef _ISyncMethods_H_
#define _ISyncMethods_H_

#import "JBFuture.h"
#import "JBArrayList.h"

#import "JB.h"

/**
 @brief <p>Sync Methods interface with the most basic common methods for Server/Client communication related to retrieve/sync Data Base objects</p>
 @author aeirew
 */
@protocol ISyncMethods < NSObject >

- (ArrayList*)getAllAfterTimeStampFromRemoteMasterWithNSString:(NSString *)userId
                                                            withLong:(long64)timeStamp;

- (ArrayList*)getAllAfterTimeStampFromRemoteSlaveWithNSString:(NSString *)userId
                                                           withLong:(long64)timeStamp;

- (id<Future>)syncFromRemoteMasterToLocalSlaveWithNSString:(NSString *)userId
                                                                    withLong:(long64)timeStamp;

- (void)syncFromLocalMasterToRemoteSlave;

@end

__attribute__((always_inline)) inline void ISyncMethods_init() {}

#define ComIntelWearablePlatformTimeiqDblayerInterfacesISyncMethods ISyncMethods

#endif // _ISyncMethods_H_
