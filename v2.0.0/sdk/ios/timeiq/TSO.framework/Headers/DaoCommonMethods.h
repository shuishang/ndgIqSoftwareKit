//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: //com/intel/wearable/platform/timeiq/common/db/DaoCommonMethods.java
//

#ifndef _DaoCommonMethods_H_
#define _DaoCommonMethods_H_

@class GenericSyncDaoDecorator;
@class SyncSlaveDbs;
@protocol IDBSourceDefinition;
@protocol IGenericDaoImpl;
@protocol ISyncEventListener;

#import "JB.h"
#import "IDaoCommonMethods.h"

/**
 @brief Created by aeirew on 17/09/2015.
 */
@interface DaoCommonMethods : NSObject < IDaoCommonMethods > {
 @public
  id<IDBSourceDefinition> m_dbSourceDefinition_;
  SyncSlaveDbs *m_syncSlaveDbs_;
}

- (instancetype)init;

- (instancetype)initWithIDBSourceDefinition:(id<IDBSourceDefinition>)dbSourceDefinition;

- (void)deleteAllUserLocalMasterDBObjects;

- (void)deleteAllUserRemoteMasterDBObjects;

- (void)syncAllUserLocalMasterDBWithRemote;

/**
 @brief Sync Slave DB from server to client and merge with local Repo, method intended to run only on first installation of the app and create a sync state on first installation
 @return true if sync success, false otherwise
 */
- (boolean)syncFromAllRemoteSlaveToLocalMaster;

/**
 @brief Sync Master DB's from server to client and merge with local Repo
 @return true if sync success, false otherwise
 */
- (boolean)syncFromAllRemoteMasterToLocalSlaves;

- (GenericSyncDaoDecorator *)extractGenericSyncDaoWithIGenericDaoImpl:(id<IGenericDaoImpl>)rootDao;

- (id<ISyncEventListener>)extractSyncEventListenerDaoWithIGenericDaoImpl:(id<IGenericDaoImpl>)rootDao;

- (id<IGenericDaoImpl>)extractBaseDaoWithIGenericDaoImpl:(id<IGenericDaoImpl>)rootDao;

- (void)copyAllFieldsTo:(DaoCommonMethods *)other;

@end

FOUNDATION_EXPORT BOOL DaoCommonMethods_initialized;
J2OBJC_STATIC_INIT(DaoCommonMethods)

//J2OBJC_FIELD_SETTER(DaoCommonMethods, m_dbSourceDefinition_, id<IDBSourceDefinition>)
//J2OBJC_FIELD_SETTER(DaoCommonMethods, m_syncSlaveDbs_, SyncSlaveDbs *)

FOUNDATION_EXPORT NSString *DaoCommonMethods_TAG_;
J2OBJC_STATIC_FIELD_GETTER(DaoCommonMethods, TAG_, NSString *)
//J2OBJC_STATIC_FIELD_SETTER(DaoCommonMethods, TAG_, NSString *)

typedef DaoCommonMethods ComIntelWearablePlatformTimeiqCommonDbDaoCommonMethods;

#endif // _DaoCommonMethods_H_
