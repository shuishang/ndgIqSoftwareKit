//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: //com/intel/wearable/platform/timeiq/dblayer/sync/decorators/GenericSyncDaoDecorator.java
//

#ifndef _GenericSyncDaoDecorator_H_
#define _GenericSyncDaoDecorator_H_

@class DBOperation;
@class DataBaseControl;
#import "JBClass.h"
@class RetCode;
@protocol ISyncPlatformHandler;
@protocol ITSOSyncDbObject;
#import "JBHashSet.h"
#import "JBFuture.h"
#import "JBArrayList.h"

#import "JB.h"
#import "IDaoDecorator.h"
#import "IGenericDaoImpl.h"
#import "ISyncEventListener.h"
#import "ISyncMethods.h"

@interface GenericSyncDaoDecorator : NSObject < IGenericDaoImpl, ISyncMethods, IDaoDecorator, ISyncEventListener > {
 @public
  id<IGenericDaoImpl> m_daoImpl_;
  id<ISyncPlatformHandler> m_syncHandler_;
  long64 m_lastSyncTimeStamp_;
  RetCode *m_lastSyncStatus_;
}

- (instancetype)initWithIGenericDaoImpl:(id<IGenericDaoImpl>)daoImpl
               withISyncPlatformHandler:(id<ISyncPlatformHandler>)syncHandler;

- (long64)getLastSyncTimeStamp;

- (RetCode *)getLastSyncStatus;

- (id<Future>)addObjectWithITSOBaseDBObject:(id<ITSOSyncDbObject>)objectToAdd;

- (id<Future>)addObjectsWithJavaUtilList:(ArrayList*)objectsToAdd;

- (id<Future>)deleteAllObjectsByUserIdWithNSString:(NSString *)userId;

- (id<Future>)deleteObjectWithITSOBaseDBObject:(id<ITSOSyncDbObject>)objectToDelete;

- (id<Future>)deleteObjectsWithJavaUtilList:(ArrayList*)objectsToDelete;

- (id<Future>)updateObjectWithITSOBaseDBObject:(id<ITSOSyncDbObject>)objectToUpdate;

- (id<Future>)multiTransactionWithJavaUtilList:(ArrayList*)objects;

- (void)handleDBObjectsWithJavaUtilList:(ArrayList*)objects;

- (ArrayList*)getAllObjectsByUserIdWithNSString:(NSString *)userId;

- (DataBaseControl *)getDBControl;

- (id)getObjectByIdWithNSString:(NSString *)userId
                   withNSString:(NSString *)objectId;

- (ArrayList*)getObjectsByIdsWithNSString:(NSString *)userId
                               withJavaUtilList:(ArrayList*)objectsIds;

- (ArrayList*)getAllAfterTimeStampWithNSString:(NSString *)userId
                                            withLong:(long64)timeStamp;

- (ArrayList*)getAllAfterTimeStampFromRemoteMasterWithNSString:(NSString *)userId
                                                            withLong:(long64)timeStamp;

- (ArrayList*)getAllAfterTimeStampFromRemoteSlaveWithNSString:(NSString *)userId
                                                           withLong:(long64)timeStamp;

- (id<Future>)syncFromRemoteMasterToLocalSlaveWithNSString:(NSString *)userId
                                                                    withLong:(long64)timeStamp;

- (void)syncFromLocalMasterToRemoteSlave;

- (void)syncOperationWithMasterWithFuture:(id<Future>)localWriteResult
                                           withJavaUtilList:(ArrayList*)objToWrite
                                        withDBOperation:(DBOperation *)operation;

- (ArrayList*)createObjListWithITSOSyncDbObject:(id<ITSOSyncDbObject>)arg0;

- (void)updateTimeStampWithITSOSyncDbObject:(id<ITSOSyncDbObject>)arg0;

- (void)updateTimeStampsWithJavaUtilCollection:(Set*)arg0;

- (boolean)isObjectValidWithITSOSyncDbObject:(id<ITSOSyncDbObject>)object;

- (boolean)areObjectsValidWithJavaUtilList:(ArrayList*)objectsToAdd;

- (Class )getDeserializeClass;

- (id<IGenericDaoImpl>)getDecoratedDao;

- (void)onSyncEventWithFuture:(id<Future>)eventResp;

- (void)copyAllFieldsTo:(GenericSyncDaoDecorator *)other;

@end

__attribute__((always_inline)) inline void GenericSyncDaoDecorator_init() {}

//J2OBJC_FIELD_SETTER(GenericSyncDaoDecorator, m_daoImpl_, id<IGenericDaoImpl>)
//J2OBJC_FIELD_SETTER(GenericSyncDaoDecorator, m_syncHandler_, id<ISyncPlatformHandler>)
//J2OBJC_FIELD_SETTER(GenericSyncDaoDecorator, m_lastSyncStatus_, RetCode *)

typedef GenericSyncDaoDecorator ComIntelWearablePlatformTimeiqDblayerSyncDecoratorsGenericSyncDaoDecorator;

#endif // _GenericSyncDaoDecorator_H_