//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: ./gigapaxos/src/edu/umass/cs/reconfiguration/reconfigurationutils/ConsistentReconfigurableNodeConfig.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_EduUmassCsReconfigurationReconfigurationutilsConsistentReconfigurableNodeConfig")
#ifdef RESTRICT_EduUmassCsReconfigurationReconfigurationutilsConsistentReconfigurableNodeConfig
#define INCLUDE_ALL_EduUmassCsReconfigurationReconfigurationutilsConsistentReconfigurableNodeConfig 0
#else
#define INCLUDE_ALL_EduUmassCsReconfigurationReconfigurationutilsConsistentReconfigurableNodeConfig 1
#endif
#undef RESTRICT_EduUmassCsReconfigurationReconfigurationutilsConsistentReconfigurableNodeConfig

#if !defined (EduUmassCsReconfigurationReconfigurationutilsConsistentReconfigurableNodeConfig_) && (INCLUDE_ALL_EduUmassCsReconfigurationReconfigurationutilsConsistentReconfigurableNodeConfig || defined(INCLUDE_EduUmassCsReconfigurationReconfigurationutilsConsistentReconfigurableNodeConfig))
#define EduUmassCsReconfigurationReconfigurationutilsConsistentReconfigurableNodeConfig_

#define RESTRICT_EduUmassCsReconfigurationReconfigurationutilsConsistentNodeConfig 1
#define INCLUDE_EduUmassCsReconfigurationReconfigurationutilsConsistentNodeConfig 1
#include "edu/umass/cs/reconfiguration/reconfigurationutils/ConsistentNodeConfig.h"

#define RESTRICT_EduUmassCsReconfigurationInterfacesModifiableActiveConfig 1
#define INCLUDE_EduUmassCsReconfigurationInterfacesModifiableActiveConfig 1
#include "edu/umass/cs/reconfiguration/interfaces/ModifiableActiveConfig.h"

#define RESTRICT_EduUmassCsReconfigurationInterfacesModifiableRCConfig 1
#define INCLUDE_EduUmassCsReconfigurationInterfacesModifiableRCConfig 1
#include "edu/umass/cs/reconfiguration/interfaces/ModifiableRCConfig.h"

#define RESTRICT_EduUmassCsReconfigurationReconfigurationutilsInterfaceGetActiveIPs 1
#define INCLUDE_EduUmassCsReconfigurationReconfigurationutilsInterfaceGetActiveIPs 1
#include "edu/umass/cs/reconfiguration/reconfigurationutils/InterfaceGetActiveIPs.h"

@class JavaNetInetSocketAddress;
@class JavaUtilArrayList;
@class OrgJsonJSONArray;
@protocol EduUmassCsReconfigurationInterfacesReconfigurableNodeConfig;
@protocol JavaUtilCollection;
@protocol JavaUtilSet;

@interface EduUmassCsReconfigurationReconfigurationutilsConsistentReconfigurableNodeConfig : EduUmassCsReconfigurationReconfigurationutilsConsistentNodeConfig < EduUmassCsReconfigurationInterfacesModifiableActiveConfig, EduUmassCsReconfigurationInterfacesModifiableRCConfig, EduUmassCsReconfigurationReconfigurationutilsInterfaceGetActiveIPs >

#pragma mark Public

- (instancetype)initWithEduUmassCsReconfigurationInterfacesReconfigurableNodeConfig:(id<EduUmassCsReconfigurationInterfacesReconfigurableNodeConfig>)nc;

- (JavaNetInetSocketAddress *)addActiveReplicaWithId:(id)id_
                        withJavaNetInetSocketAddress:(JavaNetInetSocketAddress *)sockAddr;

- (JavaNetInetSocketAddress *)addReconfiguratorWithId:(id)id_
                         withJavaNetInetSocketAddress:(JavaNetInetSocketAddress *)sockAddr;

- (jboolean)checkSameGroupWithJavaUtilSet:(id<JavaUtilSet>)names;

- (JavaUtilArrayList *)getActiveIPs;

- (id<JavaUtilSet>)getActiveReplicas;

- (id<JavaUtilSet>)getActiveReplicaSocketAddresses;

- (id<JavaUtilSet>)getActiveReplicaSocketAddressesWithInt:(jint)limit;

- (JavaNetInetSocketAddress *)getBindSocketAddressWithId:(id)id_;

- (id)getFirstReconfiguratorWithNSString:(NSString *)name;

- (id<JavaUtilSet>)getIPToActiveReplicaIDsWithJavaUtilArrayList:(JavaUtilArrayList *)newAddresses
                                                withJavaUtilSet:(id<JavaUtilSet>)oldNodes;

- (id<JavaUtilSet>)getNodeIDs;

- (JavaUtilArrayList *)getNodeIPsWithJavaUtilSet:(id<JavaUtilSet>)nodeIDs;

- (JavaNetInetSocketAddress *)getNodeSocketAddressWithId:(id)id_;

- (id<JavaUtilSet>)getRandomActiveReplica;

- (id)getReconfiguratorHashWithNSString:(NSString *)name;

- (id<JavaUtilSet>)getReconfigurators;

- (id<JavaUtilSet>)getReconfiguratorsAsAddressesWithNSString:(NSString *)name;

- (id<JavaUtilSet>)getReplicatedActivesWithNSString:(NSString *)name;

- (JavaUtilArrayList *)getReplicatedActivesIPsWithNSString:(NSString *)name;

- (id<JavaUtilSet>)getReplicatedReconfiguratorsWithNSString:(NSString *)name;

- (id<EduUmassCsReconfigurationInterfacesReconfigurableNodeConfig>)getUnderlyingNodeConfig;

- (id<JavaUtilSet>)getValuesFromJSONArrayWithOrgJsonJSONArray:(OrgJsonJSONArray *)array;

- (id<JavaUtilSet>)getValuesFromStringSetWithJavaUtilSet:(id<JavaUtilSet>)strNodes;

- (jlong)getVersion;

- (JavaNetInetSocketAddress *)removeActiveReplicaWithId:(id)id_;

- (jboolean)removeActivesSlatedForRemoval;

- (JavaNetInetSocketAddress *)removeReconfiguratorWithId:(id)id_;

- (jboolean)removeReconfiguratorsSlatedForRemoval;

- (JavaNetInetSocketAddress *)slateForRemovalActiveWithId:(id)id_;

- (JavaNetInetSocketAddress *)slateForRemovalReconfiguratorWithId:(id)id_;

+ (id<JavaUtilCollection>)splitIntoRCGroupsWithJavaUtilSet:(id<JavaUtilSet>)names
                                           withJavaUtilSet:(id<JavaUtilSet>)reconfigurators;

- (NSString *)description;

@end

J2OBJC_EMPTY_STATIC_INIT(EduUmassCsReconfigurationReconfigurationutilsConsistentReconfigurableNodeConfig)

FOUNDATION_EXPORT void EduUmassCsReconfigurationReconfigurationutilsConsistentReconfigurableNodeConfig_initWithEduUmassCsReconfigurationInterfacesReconfigurableNodeConfig_(EduUmassCsReconfigurationReconfigurationutilsConsistentReconfigurableNodeConfig *self, id<EduUmassCsReconfigurationInterfacesReconfigurableNodeConfig> nc);

FOUNDATION_EXPORT EduUmassCsReconfigurationReconfigurationutilsConsistentReconfigurableNodeConfig *new_EduUmassCsReconfigurationReconfigurationutilsConsistentReconfigurableNodeConfig_initWithEduUmassCsReconfigurationInterfacesReconfigurableNodeConfig_(id<EduUmassCsReconfigurationInterfacesReconfigurableNodeConfig> nc) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT EduUmassCsReconfigurationReconfigurationutilsConsistentReconfigurableNodeConfig *create_EduUmassCsReconfigurationReconfigurationutilsConsistentReconfigurableNodeConfig_initWithEduUmassCsReconfigurationInterfacesReconfigurableNodeConfig_(id<EduUmassCsReconfigurationInterfacesReconfigurableNodeConfig> nc);

FOUNDATION_EXPORT id<JavaUtilCollection> EduUmassCsReconfigurationReconfigurationutilsConsistentReconfigurableNodeConfig_splitIntoRCGroupsWithJavaUtilSet_withJavaUtilSet_(id<JavaUtilSet> names, id<JavaUtilSet> reconfigurators);

J2OBJC_TYPE_LITERAL_HEADER(EduUmassCsReconfigurationReconfigurationutilsConsistentReconfigurableNodeConfig)

#endif

#pragma pop_macro("INCLUDE_ALL_EduUmassCsReconfigurationReconfigurationutilsConsistentReconfigurableNodeConfig")
