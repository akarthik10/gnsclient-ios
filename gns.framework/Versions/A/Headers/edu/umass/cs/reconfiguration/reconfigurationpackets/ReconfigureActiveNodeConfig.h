//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: ./gigapaxos/src/edu/umass/cs/reconfiguration/reconfigurationpackets/ReconfigureActiveNodeConfig.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_EduUmassCsReconfigurationReconfigurationpacketsReconfigureActiveNodeConfig")
#ifdef RESTRICT_EduUmassCsReconfigurationReconfigurationpacketsReconfigureActiveNodeConfig
#define INCLUDE_ALL_EduUmassCsReconfigurationReconfigurationpacketsReconfigureActiveNodeConfig 0
#else
#define INCLUDE_ALL_EduUmassCsReconfigurationReconfigurationpacketsReconfigureActiveNodeConfig 1
#endif
#undef RESTRICT_EduUmassCsReconfigurationReconfigurationpacketsReconfigureActiveNodeConfig

#if !defined (EduUmassCsReconfigurationReconfigurationpacketsReconfigureActiveNodeConfig_) && (INCLUDE_ALL_EduUmassCsReconfigurationReconfigurationpacketsReconfigureActiveNodeConfig || defined(INCLUDE_EduUmassCsReconfigurationReconfigurationpacketsReconfigureActiveNodeConfig))
#define EduUmassCsReconfigurationReconfigurationpacketsReconfigureActiveNodeConfig_

#define RESTRICT_EduUmassCsReconfigurationReconfigurationpacketsServerReconfigurationPacket 1
#define INCLUDE_EduUmassCsReconfigurationReconfigurationpacketsServerReconfigurationPacket 1
#include "edu/umass/cs/reconfiguration/reconfigurationpackets/ServerReconfigurationPacket.h"

@class EduUmassCsReconfigurationReconfigurationpacketsReconfigurationPacket_PacketType;
@class JavaNetInetSocketAddress;
@class OrgJsonJSONObject;
@protocol EduUmassCsNioInterfacesStringifiable;
@protocol JavaUtilMap;
@protocol JavaUtilSet;

@interface EduUmassCsReconfigurationReconfigurationpacketsReconfigureActiveNodeConfig : EduUmassCsReconfigurationReconfigurationpacketsServerReconfigurationPacket

#pragma mark Public

- (instancetype)initWithOrgJsonJSONObject:(OrgJsonJSONObject *)json
 withEduUmassCsNioInterfacesStringifiable:(id<EduUmassCsNioInterfacesStringifiable>)unstringer;

- (instancetype)initWithId:(id)initiator
           withJavaUtilMap:(id<JavaUtilMap>)newlyAddedNodes
           withJavaUtilSet:(id<JavaUtilSet>)deletedNodes;

- (instancetype)initWithId:(id)initiator
                    withId:(id)nodeID
withJavaNetInetSocketAddress:(JavaNetInetSocketAddress *)sockAddr;

- (NSString *)getServiceName;

- (EduUmassCsReconfigurationReconfigurationpacketsReconfigurationPacket_PacketType *)getType;

@end

J2OBJC_EMPTY_STATIC_INIT(EduUmassCsReconfigurationReconfigurationpacketsReconfigureActiveNodeConfig)

FOUNDATION_EXPORT void EduUmassCsReconfigurationReconfigurationpacketsReconfigureActiveNodeConfig_initWithId_withId_withJavaNetInetSocketAddress_(EduUmassCsReconfigurationReconfigurationpacketsReconfigureActiveNodeConfig *self, id initiator, id nodeID, JavaNetInetSocketAddress *sockAddr);

FOUNDATION_EXPORT EduUmassCsReconfigurationReconfigurationpacketsReconfigureActiveNodeConfig *new_EduUmassCsReconfigurationReconfigurationpacketsReconfigureActiveNodeConfig_initWithId_withId_withJavaNetInetSocketAddress_(id initiator, id nodeID, JavaNetInetSocketAddress *sockAddr) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT EduUmassCsReconfigurationReconfigurationpacketsReconfigureActiveNodeConfig *create_EduUmassCsReconfigurationReconfigurationpacketsReconfigureActiveNodeConfig_initWithId_withId_withJavaNetInetSocketAddress_(id initiator, id nodeID, JavaNetInetSocketAddress *sockAddr);

FOUNDATION_EXPORT void EduUmassCsReconfigurationReconfigurationpacketsReconfigureActiveNodeConfig_initWithId_withJavaUtilMap_withJavaUtilSet_(EduUmassCsReconfigurationReconfigurationpacketsReconfigureActiveNodeConfig *self, id initiator, id<JavaUtilMap> newlyAddedNodes, id<JavaUtilSet> deletedNodes);

FOUNDATION_EXPORT EduUmassCsReconfigurationReconfigurationpacketsReconfigureActiveNodeConfig *new_EduUmassCsReconfigurationReconfigurationpacketsReconfigureActiveNodeConfig_initWithId_withJavaUtilMap_withJavaUtilSet_(id initiator, id<JavaUtilMap> newlyAddedNodes, id<JavaUtilSet> deletedNodes) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT EduUmassCsReconfigurationReconfigurationpacketsReconfigureActiveNodeConfig *create_EduUmassCsReconfigurationReconfigurationpacketsReconfigureActiveNodeConfig_initWithId_withJavaUtilMap_withJavaUtilSet_(id initiator, id<JavaUtilMap> newlyAddedNodes, id<JavaUtilSet> deletedNodes);

FOUNDATION_EXPORT void EduUmassCsReconfigurationReconfigurationpacketsReconfigureActiveNodeConfig_initWithOrgJsonJSONObject_withEduUmassCsNioInterfacesStringifiable_(EduUmassCsReconfigurationReconfigurationpacketsReconfigureActiveNodeConfig *self, OrgJsonJSONObject *json, id<EduUmassCsNioInterfacesStringifiable> unstringer);

FOUNDATION_EXPORT EduUmassCsReconfigurationReconfigurationpacketsReconfigureActiveNodeConfig *new_EduUmassCsReconfigurationReconfigurationpacketsReconfigureActiveNodeConfig_initWithOrgJsonJSONObject_withEduUmassCsNioInterfacesStringifiable_(OrgJsonJSONObject *json, id<EduUmassCsNioInterfacesStringifiable> unstringer) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT EduUmassCsReconfigurationReconfigurationpacketsReconfigureActiveNodeConfig *create_EduUmassCsReconfigurationReconfigurationpacketsReconfigureActiveNodeConfig_initWithOrgJsonJSONObject_withEduUmassCsNioInterfacesStringifiable_(OrgJsonJSONObject *json, id<EduUmassCsNioInterfacesStringifiable> unstringer);

J2OBJC_TYPE_LITERAL_HEADER(EduUmassCsReconfigurationReconfigurationpacketsReconfigureActiveNodeConfig)

#endif

#pragma pop_macro("INCLUDE_ALL_EduUmassCsReconfigurationReconfigurationpacketsReconfigureActiveNodeConfig")
