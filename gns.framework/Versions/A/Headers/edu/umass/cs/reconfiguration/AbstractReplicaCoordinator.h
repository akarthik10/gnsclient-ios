//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: ./gigapaxos/src/edu/umass/cs/reconfiguration/AbstractReplicaCoordinator.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_EduUmassCsReconfigurationAbstractReplicaCoordinator")
#ifdef RESTRICT_EduUmassCsReconfigurationAbstractReplicaCoordinator
#define INCLUDE_ALL_EduUmassCsReconfigurationAbstractReplicaCoordinator 0
#else
#define INCLUDE_ALL_EduUmassCsReconfigurationAbstractReplicaCoordinator 1
#endif
#undef RESTRICT_EduUmassCsReconfigurationAbstractReplicaCoordinator

#if !defined (EduUmassCsReconfigurationAbstractReplicaCoordinator_) && (INCLUDE_ALL_EduUmassCsReconfigurationAbstractReplicaCoordinator || defined(INCLUDE_EduUmassCsReconfigurationAbstractReplicaCoordinator))
#define EduUmassCsReconfigurationAbstractReplicaCoordinator_

#define RESTRICT_EduUmassCsReconfigurationInterfacesRepliconfigurable 1
#define INCLUDE_EduUmassCsReconfigurationInterfacesRepliconfigurable 1
#include "edu/umass/cs/reconfiguration/interfaces/Repliconfigurable.h"

#define RESTRICT_EduUmassCsReconfigurationInterfacesReplicaCoordinator 1
#define INCLUDE_EduUmassCsReconfigurationInterfacesReplicaCoordinator 1
#include "edu/umass/cs/reconfiguration/interfaces/ReplicaCoordinator.h"

#define RESTRICT_EduUmassCsGigapaxosInterfacesAppRequestParserBytes 1
#define INCLUDE_EduUmassCsGigapaxosInterfacesAppRequestParserBytes 1
#include "edu/umass/cs/gigapaxos/interfaces/AppRequestParserBytes.h"

@class EduUmassCsNioNioutilsNIOHeader;
@class EduUmassCsReconfigurationReconfigurationpacketsReplicableClientRequest;
@class IOSByteArray;
@class IOSObjectArray;
@class JavaLangInteger;
@protocol EduUmassCsGigapaxosInterfacesExecutedCallback;
@protocol EduUmassCsGigapaxosInterfacesReplicable;
@protocol EduUmassCsGigapaxosInterfacesRequest;
@protocol EduUmassCsNioInterfacesMessenger;
@protocol EduUmassCsReconfigurationInterfacesReconfigurableRequest;
@protocol EduUmassCsReconfigurationInterfacesReconfiguratorCallback;
@protocol JavaUtilMap;
@protocol JavaUtilSet;

@interface EduUmassCsReconfigurationAbstractReplicaCoordinator : NSObject < EduUmassCsReconfigurationInterfacesRepliconfigurable, EduUmassCsReconfigurationInterfacesReplicaCoordinator, EduUmassCsGigapaxosInterfacesAppRequestParserBytes > {
 @public
  id<EduUmassCsReconfigurationInterfacesRepliconfigurable> app_;
  id<EduUmassCsNioInterfacesMessenger> messenger_;
}

#pragma mark Public

- (instancetype)initWithEduUmassCsGigapaxosInterfacesReplicable:(id<EduUmassCsGigapaxosInterfacesReplicable>)app
                           withEduUmassCsNioInterfacesMessenger:(id<EduUmassCsNioInterfacesMessenger>)messenger;

- (NSString *)checkpointWithNSString:(NSString *)name;

- (jboolean)coordinateRequestWithEduUmassCsGigapaxosInterfacesRequest:(id<EduUmassCsGigapaxosInterfacesRequest>)request
                    withEduUmassCsGigapaxosInterfacesExecutedCallback:(id<EduUmassCsGigapaxosInterfacesExecutedCallback>)callback;

- (jboolean)createReplicaGroupWithJavaUtilMap:(id<JavaUtilMap>)nameStates
                              withJavaUtilSet:(id<JavaUtilSet>)nodes;

- (jboolean)createReplicaGroupWithNSString:(NSString *)serviceName
                                   withInt:(jint)epoch
                              withNSString:(NSString *)state
                           withJavaUtilSet:(id<JavaUtilSet>)nodes;

- (jboolean)deleteFinalStateWithNSString:(NSString *)name
                                 withInt:(jint)epoch;

- (jboolean)deleteReplicaGroupWithNSString:(NSString *)serviceName
                                   withInt:(jint)epoch;

- (jboolean)executeWithEduUmassCsGigapaxosInterfacesRequest:(id<EduUmassCsGigapaxosInterfacesRequest>)request;

- (jboolean)executeWithEduUmassCsGigapaxosInterfacesRequest:(id<EduUmassCsGigapaxosInterfacesRequest>)request
                                                withBoolean:(jboolean)noReplyToClient;

- (jboolean)executeWithEduUmassCsGigapaxosInterfacesRequest:(id<EduUmassCsGigapaxosInterfacesRequest>)request
                                                withBoolean:(jboolean)noReplyToClient
          withEduUmassCsGigapaxosInterfacesExecutedCallback:(id<EduUmassCsGigapaxosInterfacesExecutedCallback>)requestCallback;

- (id<JavaUtilSet>)getAppRequestTypes;

- (id<JavaUtilSet>)getCoordinatorRequestTypes;

- (JavaLangInteger *)getEpochWithNSString:(NSString *)name;

- (NSString *)getFinalStateWithNSString:(NSString *)name
                                withInt:(jint)epoch;

- (id)getMyID;

- (id<JavaUtilSet>)getReplicaGroupWithNSString:(NSString *)serviceName;

- (id<EduUmassCsGigapaxosInterfacesRequest>)getRequestWithByteArray:(IOSByteArray *)bytes
                                 withEduUmassCsNioNioutilsNIOHeader:(EduUmassCsNioNioutilsNIOHeader *)header;

- (id<EduUmassCsGigapaxosInterfacesRequest>)getRequestWithNSString:(NSString *)stringified;

- (id<EduUmassCsReconfigurationInterfacesReconfigurableRequest>)getStopRequestWithNSString:(NSString *)name
                                                                                   withInt:(jint)epoch;

- (jboolean)hasLargeCheckpoints;

- (void)putInitialStateWithNSString:(NSString *)name
                            withInt:(jint)epoch
                       withNSString:(NSString *)state;

- (jboolean)restoreWithNSString:(NSString *)name
                   withNSString:(NSString *)state;

- (void)setLargeCheckpoints;

- (void)stop;

#pragma mark Protected

- (instancetype)initWithEduUmassCsGigapaxosInterfacesReplicable:(id<EduUmassCsGigapaxosInterfacesReplicable>)app;

- (void)callCallbackWithEduUmassCsGigapaxosInterfacesRequest:(id<EduUmassCsGigapaxosInterfacesRequest>)request
                                                 withBoolean:(jboolean)handled
           withEduUmassCsGigapaxosInterfacesExecutedCallback:(id<EduUmassCsGigapaxosInterfacesExecutedCallback>)requestCallback;

- (id<EduUmassCsReconfigurationInterfacesReconfiguratorCallback>)getCallback;

- (id<EduUmassCsNioInterfacesMessenger>)getMessenger;

- (id<JavaUtilSet>)getMutualAuthAppRequestTypes;

- (id<EduUmassCsGigapaxosInterfacesRequest>)getRequestWithEduUmassCsReconfigurationReconfigurationpacketsReplicableClientRequest:(EduUmassCsReconfigurationReconfigurationpacketsReplicableClientRequest *)rcr
                                                                                              withEduUmassCsNioNioutilsNIOHeader:(EduUmassCsNioNioutilsNIOHeader *)header;

- (jboolean)handleIncomingWithEduUmassCsGigapaxosInterfacesRequest:(id<EduUmassCsGigapaxosInterfacesRequest>)request
                 withEduUmassCsGigapaxosInterfacesExecutedCallback:(id<EduUmassCsGigapaxosInterfacesExecutedCallback>)callback;

- (void)registerCoordinationWithEduUmassCsNioInterfacesIntegerPacketTypeArray:(IOSObjectArray *)types;

- (void)sendAllLazyWithEduUmassCsGigapaxosInterfacesRequest:(id<EduUmassCsGigapaxosInterfacesRequest>)request;

- (EduUmassCsReconfigurationAbstractReplicaCoordinator *)setCallbackWithEduUmassCsReconfigurationInterfacesReconfiguratorCallback:(id<EduUmassCsReconfigurationInterfacesReconfiguratorCallback>)callback;

- (void)setMessengerWithEduUmassCsNioInterfacesMessenger:(id<EduUmassCsNioInterfacesMessenger>)messenger;

- (EduUmassCsReconfigurationAbstractReplicaCoordinator *)setStopCallbackWithEduUmassCsReconfigurationInterfacesReconfiguratorCallback:(id<EduUmassCsReconfigurationInterfacesReconfiguratorCallback>)callback;

@end

J2OBJC_STATIC_INIT(EduUmassCsReconfigurationAbstractReplicaCoordinator)

J2OBJC_FIELD_SETTER(EduUmassCsReconfigurationAbstractReplicaCoordinator, app_, id<EduUmassCsReconfigurationInterfacesRepliconfigurable>)
J2OBJC_FIELD_SETTER(EduUmassCsReconfigurationAbstractReplicaCoordinator, messenger_, id<EduUmassCsNioInterfacesMessenger>)

FOUNDATION_EXPORT void EduUmassCsReconfigurationAbstractReplicaCoordinator_initWithEduUmassCsGigapaxosInterfacesReplicable_(EduUmassCsReconfigurationAbstractReplicaCoordinator *self, id<EduUmassCsGigapaxosInterfacesReplicable> app);

FOUNDATION_EXPORT void EduUmassCsReconfigurationAbstractReplicaCoordinator_initWithEduUmassCsGigapaxosInterfacesReplicable_withEduUmassCsNioInterfacesMessenger_(EduUmassCsReconfigurationAbstractReplicaCoordinator *self, id<EduUmassCsGigapaxosInterfacesReplicable> app, id<EduUmassCsNioInterfacesMessenger> messenger);

J2OBJC_TYPE_LITERAL_HEADER(EduUmassCsReconfigurationAbstractReplicaCoordinator)

#endif

#pragma pop_macro("INCLUDE_ALL_EduUmassCsReconfigurationAbstractReplicaCoordinator")
