//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: ./GNS/src/edu/umass/cs/gnsserver/nodeconfig/GNSInterfaceNodeConfig.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_EduUmassCsGnsserverNodeconfigGNSInterfaceNodeConfig")
#ifdef RESTRICT_EduUmassCsGnsserverNodeconfigGNSInterfaceNodeConfig
#define INCLUDE_ALL_EduUmassCsGnsserverNodeconfigGNSInterfaceNodeConfig 0
#else
#define INCLUDE_ALL_EduUmassCsGnsserverNodeconfigGNSInterfaceNodeConfig 1
#endif
#undef RESTRICT_EduUmassCsGnsserverNodeconfigGNSInterfaceNodeConfig

#if !defined (EduUmassCsGnsserverNodeconfigGNSInterfaceNodeConfig_) && (INCLUDE_ALL_EduUmassCsGnsserverNodeconfigGNSInterfaceNodeConfig || defined(INCLUDE_EduUmassCsGnsserverNodeconfigGNSInterfaceNodeConfig))
#define EduUmassCsGnsserverNodeconfigGNSInterfaceNodeConfig_

#define RESTRICT_EduUmassCsReconfigurationInterfacesReconfigurableNodeConfig 1
#define INCLUDE_EduUmassCsReconfigurationInterfacesReconfigurableNodeConfig 1
#include "edu/umass/cs/reconfiguration/interfaces/ReconfigurableNodeConfig.h"

@protocol JavaUtilSet;

@protocol EduUmassCsGnsserverNodeconfigGNSInterfaceNodeConfig < EduUmassCsReconfigurationInterfacesReconfigurableNodeConfig, JavaObject >

- (id<JavaUtilSet>)getReconfigurators;

- (id<JavaUtilSet>)getActiveReplicas;

- (jint)getServerAdminPortWithId:(id)id_;

- (jint)getCollatingAdminPortWithId:(id)id_;

- (jlong)getPingLatencyWithId:(id)id_;

- (void)updatePingLatencyWithId:(id)id_
                       withLong:(jlong)responseTime;

- (jlong)getVersion;

@end

J2OBJC_EMPTY_STATIC_INIT(EduUmassCsGnsserverNodeconfigGNSInterfaceNodeConfig)

J2OBJC_TYPE_LITERAL_HEADER(EduUmassCsGnsserverNodeconfigGNSInterfaceNodeConfig)

#endif

#pragma pop_macro("INCLUDE_ALL_EduUmassCsGnsserverNodeconfigGNSInterfaceNodeConfig")
