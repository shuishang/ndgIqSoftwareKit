//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: //com/intel/wearable/platform/timeiq/events/factory/EventsClassPool.java
//

#ifndef _EventsClassPool_H_
#define _EventsClassPool_H_

@class BeManager;
@class CalendarEventsManager;
@class EventIdManager;
@class EventsAudit;
@class EventsManager;
@class EventsPersistenceUtil;
@class TSOEventsSync;
@protocol IEventsEngineModule;

#import "JB.h"

/**
 @brief Created by stzour on 06/05/2015.
 */
@interface EventsClassPool : NSObject {
}

+ (id<IEventsEngineModule>)getEventsEngine;

+ (BeManager *)getBeManager;

+ (CalendarEventsManager *)getCalendarEventsManager;

+ (EventsManager *)getEventsManager;

+ (EventsAudit *)getEventsAuditManager;

+ (TSOEventsSync *)getTSOEventsSync;

+ (EventsPersistenceUtil *)getEventsPersistenceUtil;

+ (EventIdManager *)getEventIdManager;

- (instancetype)init;

@end

__attribute__((always_inline)) inline void EventsClassPool_init() {}

typedef EventsClassPool ComIntelWearablePlatformTimeiqEventsFactoryEventsClassPool;

#endif // _EventsClassPool_H_
