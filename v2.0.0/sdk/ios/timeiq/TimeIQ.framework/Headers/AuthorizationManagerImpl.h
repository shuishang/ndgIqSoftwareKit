//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: //com/intel/wearable/platform/timeiq/platform/java/auth/AuthorizationManagerImpl.java
//

#ifndef _AuthorizationManagerImpl_H_
#define _AuthorizationManagerImpl_H_

@class ClassFactory;
@class TSOUserInfo;
@protocol ITSOLogger;

#import "JB.h"
#import "IAuthorizationManager.h"

/**
 @brief Created by orencoh2 on 23/3/15.
 */
@interface AuthorizationManagerImpl : NSObject < IAuthorizationManager > {
 @public
  id<ITSOLogger> m_logger_;
  TSOUserInfo *m_userInfo_;
  id m_credentials_;
}

- (instancetype)init;

- (instancetype)initWithClassFactory:(ClassFactory *)classFactory;

/**
 */
- (instancetype)initWithITSOLogger:(id<ITSOLogger>)logger;

/**
 */
- (void)init__WithTSOUserInfo:(TSOUserInfo *)userInfo
                       withId:(id)credentials OBJC_METHOD_FAMILY_NONE;

/**
 @return 
 */
- (TSOUserInfo *)getUserInfo;

- (id)getCredentials;

- (void)copyAllFieldsTo:(AuthorizationManagerImpl *)other;

@end

FOUNDATION_EXPORT BOOL AuthorizationManagerImpl_initialized;
J2OBJC_STATIC_INIT(AuthorizationManagerImpl)

//J2OBJC_FIELD_SETTER(AuthorizationManagerImpl, m_logger_, id<ITSOLogger>)
//J2OBJC_FIELD_SETTER(AuthorizationManagerImpl, m_userInfo_, TSOUserInfo *)
//J2OBJC_FIELD_SETTER(AuthorizationManagerImpl, m_credentials_, id)

FOUNDATION_EXPORT NSString *AuthorizationManagerImpl_TAG_;
J2OBJC_STATIC_FIELD_GETTER(AuthorizationManagerImpl, TAG_, NSString *)

typedef AuthorizationManagerImpl ComIntelWearablePlatformTimeiqPlatformJavaAuthAuthorizationManagerImpl;

#endif // _AuthorizationManagerImpl_H_