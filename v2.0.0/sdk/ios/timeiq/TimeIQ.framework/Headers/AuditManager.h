//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: //com/intel/wearable/platform/timeiq/common/audit/AuditManager.java
//

#ifndef _AuditManager_H_
#define _AuditManager_H_

@class ClassFactory;
@class InputStream;
@class TSOAuditObject;
@class eAuditLabels;
@protocol IAuditForwardStrategy;
@protocol IAuthorizationManager;
@protocol IHttpAuditTransmitter;
@protocol IMappable;
@protocol IStorage;
@protocol IStorageManager;
@protocol ITSOLogger;
#import "JBExecutorService.h"

#import "JB.h"
#import "IAuditManager.h"
#import "IForwarder.h"
#import "ITransfer.h"
#import "JBRunnable.h"

/**
 @brief Created by ibeider on 28/01/2015.
 */
@interface AuditManager : NSObject < IAuditManager, IForwarder, ITransfer > {
 @public
  id<IAuthorizationManager> m_authMgr_;
  id<IStorage> m_storage_;
  id<IHttpAuditTransmitter> m_transmitter_;
  id<IAuditForwardStrategy> m_strategy_;
  id<ITSOLogger> m_logger_;
}

- (instancetype)init;

- (instancetype)initWithClassFactory:(ClassFactory *)classFactory;

- (instancetype)initWithIAuthorizationManager:(id<IAuthorizationManager>)authMgr
                    withIHttpAuditTransmitter:(id<IHttpAuditTransmitter>)transmitter
                    withIAuditForwardStrategy:(id<IAuditForwardStrategy>)strategy
                          withIStorageManager:(id<IStorageManager>)storageManager
                               withITSOLogger:(id<ITSOLogger>)logger;

- (void)auditWithIMappable:(id<IMappable>)object
      withEAuditLabelsEnum:(eAuditLabels *)label;

- (void)flush;

- (boolean)transferWithInputStream:(InputStream *)inputStream;

- (void)storeWithTSOAuditObject:(TSOAuditObject *)object;

- (void)forward;

- (void)copyAllFieldsTo:(AuditManager *)other;

@end

FOUNDATION_EXPORT BOOL AuditManager_initialized;
J2OBJC_STATIC_INIT(AuditManager)

//J2OBJC_FIELD_SETTER(AuditManager, m_authMgr_, id<IAuthorizationManager>)
//J2OBJC_FIELD_SETTER(AuditManager, m_storage_, id<IStorage>)
//J2OBJC_FIELD_SETTER(AuditManager, m_transmitter_, id<IHttpAuditTransmitter>)
//J2OBJC_FIELD_SETTER(AuditManager, m_strategy_, id<IAuditForwardStrategy>)
//J2OBJC_FIELD_SETTER(AuditManager, m_logger_, id<ITSOLogger>)

FOUNDATION_EXPORT NSString *AuditManager_TAG_;
J2OBJC_STATIC_FIELD_GETTER(AuditManager, TAG_, NSString *)

FOUNDATION_EXPORT id<ExecutorService> AuditManager_threadPool_;
J2OBJC_STATIC_FIELD_GETTER(AuditManager, threadPool_, id<ExecutorService>)

typedef AuditManager ComIntelWearablePlatformTimeiqCommonAuditAuditManager;

@interface AuditManager_$1 : NSObject < Runnable > {
 @public
  AuditManager *this$0_;
  TSOAuditObject *val$object_;
}

- (void)run;

- (instancetype)initWithAuditManager:(AuditManager *)outer$
                  withTSOAuditObject:(TSOAuditObject *)capture$0;

@end

__attribute__((always_inline)) inline void AuditManager_$1_init() {}

//J2OBJC_FIELD_SETTER(AuditManager_$1, this$0_, AuditManager *)
//J2OBJC_FIELD_SETTER(AuditManager_$1, val$object_, TSOAuditObject *)

#endif // _AuditManager_H_