//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: //com/intel/wearable/platform/timeiq/common/messagehandler/IInternalMessageEngine.java
//

#ifndef _IInternalMessageEngine_H_
#define _IInternalMessageEngine_H_

@protocol IMessage;
@protocol ISentValidationListener;

#import "JB.h"
#import "IMessageHandler.h"

/**
 @brief Created by stzour on 15/10/2015.
 */
@protocol IInternalMessageEngine < IMessageHandler, NSObject >
- (void)addMessageWithIMessage:(id<IMessage>)msg;

- (void)addMessageWithIMessage:(id<IMessage>)msg
   withISentValidationListener:(id<ISentValidationListener>)sentValidationListener;

@end

__attribute__((always_inline)) inline void IInternalMessageEngine_init() {}

#define ComIntelWearablePlatformTimeiqCommonMessagehandlerIInternalMessageEngine IInternalMessageEngine

#endif // _IInternalMessageEngine_H_
