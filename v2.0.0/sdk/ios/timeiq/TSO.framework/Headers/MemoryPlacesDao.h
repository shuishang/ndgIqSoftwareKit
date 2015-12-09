//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: //com/intel/wearable/platform/timeiq/places/modules/persistence/syncdb/daoimpls/memory/MemoryPlacesDao.java
//

#ifndef _MemoryPlacesDao_H_
#define _MemoryPlacesDao_H_

#import "JBClass.h"
@protocol IDBSourceDefinition;
@protocol ITSOSemanticPlace;

#import "JB.h"
#include "IPlaceDao.h"
#include "GenericMemoryDao.h"

/**
 @brief Created by aeirew on 01/09/2015.
 */
@interface MemoryPlacesDao : GenericMemoryDao < IPlaceDao > {
 @public
  id<IPlaceDao> m_placeDao_;
}

- (instancetype)initWithIDBSourceDefinition:(id<IDBSourceDefinition>)idbSourceDefinition
                               withIOSClass:(Class )tClass;

- (id)getUserPlaceByNameWithNSString:(NSString *)userId
                        withNSString:(NSString *)placeName;

- (id)getUserHomeWithNSString:(NSString *)userId;

- (id)getUserWorkWithNSString:(NSString *)userId;

- (void)copyAllFieldsTo:(MemoryPlacesDao *)other;

@end

__attribute__((always_inline)) inline void MemoryPlacesDao_init() {}

//J2OBJC_FIELD_SETTER(MemoryPlacesDao, m_placeDao_, id<IPlaceDao>)

typedef MemoryPlacesDao ComIntelWearablePlatformTimeiqPlacesModulesPersistenceSyncdbDaoimplsMemoryMemoryPlacesDao;

#endif // _MemoryPlacesDao_H_
