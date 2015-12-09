//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: //com/intel/wearable/platform/timeiq/places/modules/persistence/syncdb/daoimpls/file/SyncFileDao.java
//

#ifndef _SyncFileDao_H_
#define _SyncFileDao_H_

@class DaoType;
#import "JBClass.h"
@protocol IDBSourceDefinition;
#import "JBHashSet.h"

#import "JB.h"
#include "GenericFileDao.h"
#include "ISyncDao.h"

/**
 @brief Created by aeirew on 04/08/2015.
 */
@interface SyncFileDao : GenericFileDao < ISyncDao > {
 @public
  id<ISyncDao> m_syncDao_;
}

- (instancetype)initWithIDBSourceDefinition:(id<IDBSourceDefinition>)idbSourceDefinition;

- (instancetype)initWithIDBSourceDefinition:(id<IDBSourceDefinition>)idbSourceDefinition
                               withISyncDao:(id<ISyncDao>)syncDao;

- (Set*)getAllObjectsBySourceTypeWithNSString:(NSString *)userId
                                                   withIOSClass:(Class )deserializeClassName;

- (Set*)getFirstXObjectsBySourceTypeWithDaoType:(DaoType *)daoType
                                                              withInt:(int)x;

- (void)copyAllFieldsTo:(SyncFileDao *)other;

@end

__attribute__((always_inline)) inline void SyncFileDao_init() {}

//J2OBJC_FIELD_SETTER(SyncFileDao, m_syncDao_, id<ISyncDao>)

typedef SyncFileDao ComIntelWearablePlatformTimeiqPlacesModulesPersistenceSyncdbDaoimplsFileSyncFileDao;

#endif // _SyncFileDao_H_
