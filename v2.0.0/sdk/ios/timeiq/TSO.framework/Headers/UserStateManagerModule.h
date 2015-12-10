//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: //com/intel/wearable/platform/timeiq/userstate/UserStateManagerModule.java
//

#ifndef _UserStateManagerModule_H_
#define _UserStateManagerModule_H_

@class ResultData;
@class UserState;
@class UserStateChanges;
@protocol IUserStateFilter;

#import "JB.h"
#import "IUserStateChangeListener.h"
#import "BaseUserStateChangeProvider.h"
#import "IUserStateManagerModule.h"

/**
 @brief Created by gilsharo on 5/12/2015.
 */
@interface UserStateManagerModule : BaseUserStateChangeProvider < IUserStateManagerModule, IUserStateChangeListener > {
 @public
  id<IUserStateFilter> m_stateFilter_;
}

- (instancetype)init;

- (instancetype)initWithIUserStateFilter:(id<IUserStateFilter>)stateFilter;

- (void)onStateChangedWithUserState:(UserState *)oldState
                      withUserState:(UserState *)newState
               withUserStateChanges:(UserStateChanges *)changes;

- (ResultData *)registerForStateChangesWithIUserStateChangeListener:(id<IUserStateChangeListener>)listener;

- (void)unregisterForStateChangesWithIUserStateChangeListener:(id<IUserStateChangeListener>)listener;

- (ResultData *)getCurrentState;

- (void)copyAllFieldsTo:(UserStateManagerModule *)other;

@end

__attribute__((always_inline)) inline void UserStateManagerModule_init() {}

//J2OBJC_FIELD_SETTER(UserStateManagerModule, m_stateFilter_, id<IUserStateFilter>)

typedef UserStateManagerModule ComIntelWearablePlatformTimeiqUserstateUserStateManagerModule;

#endif // _UserStateManagerModule_H_
