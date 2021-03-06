//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: ./gigapaxos/src/edu/umass/cs/reconfiguration/reconfigurationutils/AppInstrumenter.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_EduUmassCsReconfigurationReconfigurationutilsAppInstrumenter")
#ifdef RESTRICT_EduUmassCsReconfigurationReconfigurationutilsAppInstrumenter
#define INCLUDE_ALL_EduUmassCsReconfigurationReconfigurationutilsAppInstrumenter 0
#else
#define INCLUDE_ALL_EduUmassCsReconfigurationReconfigurationutilsAppInstrumenter 1
#endif
#undef RESTRICT_EduUmassCsReconfigurationReconfigurationutilsAppInstrumenter

#if !defined (EduUmassCsReconfigurationReconfigurationutilsAppInstrumenter_) && (INCLUDE_ALL_EduUmassCsReconfigurationReconfigurationutilsAppInstrumenter || defined(INCLUDE_EduUmassCsReconfigurationReconfigurationutilsAppInstrumenter))
#define EduUmassCsReconfigurationReconfigurationutilsAppInstrumenter_

@protocol EduUmassCsGigapaxosInterfacesClientRequest;
@protocol EduUmassCsGigapaxosInterfacesRequest;

@interface EduUmassCsReconfigurationReconfigurationutilsAppInstrumenter : NSObject

#pragma mark Public

- (instancetype)init;

+ (NSString *)getStats;

+ (void)outstandingAppRequestWithInt:(jint)numOutstandingAppRequests
withEduUmassCsGigapaxosInterfacesClientRequest:(id<EduUmassCsGigapaxosInterfacesClientRequest>)request;

+ (void)rcvdRequestWithEduUmassCsGigapaxosInterfacesRequest:(id<EduUmassCsGigapaxosInterfacesRequest>)request;

+ (void)rcvdSSLPacket;

+ (void)recvdAppPacket;

+ (void)recvdResponseWithEduUmassCsGigapaxosInterfacesClientRequest:(id<EduUmassCsGigapaxosInterfacesClientRequest>)response;

+ (void)sentActiveReplicaError;

+ (void)sentRequestWithEduUmassCsGigapaxosInterfacesClientRequest:(id<EduUmassCsGigapaxosInterfacesClientRequest>)request;

+ (void)sentResponseCoordinatedWithEduUmassCsGigapaxosInterfacesRequest:(id<EduUmassCsGigapaxosInterfacesRequest>)request;

+ (void)sentResponseLocalWithEduUmassCsGigapaxosInterfacesRequest:(id<EduUmassCsGigapaxosInterfacesRequest>)request;

@end

J2OBJC_STATIC_INIT(EduUmassCsReconfigurationReconfigurationutilsAppInstrumenter)

FOUNDATION_EXPORT void EduUmassCsReconfigurationReconfigurationutilsAppInstrumenter_init(EduUmassCsReconfigurationReconfigurationutilsAppInstrumenter *self);

FOUNDATION_EXPORT EduUmassCsReconfigurationReconfigurationutilsAppInstrumenter *new_EduUmassCsReconfigurationReconfigurationutilsAppInstrumenter_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT EduUmassCsReconfigurationReconfigurationutilsAppInstrumenter *create_EduUmassCsReconfigurationReconfigurationutilsAppInstrumenter_init();

FOUNDATION_EXPORT void EduUmassCsReconfigurationReconfigurationutilsAppInstrumenter_rcvdRequestWithEduUmassCsGigapaxosInterfacesRequest_(id<EduUmassCsGigapaxosInterfacesRequest> request);

FOUNDATION_EXPORT void EduUmassCsReconfigurationReconfigurationutilsAppInstrumenter_sentResponseLocalWithEduUmassCsGigapaxosInterfacesRequest_(id<EduUmassCsGigapaxosInterfacesRequest> request);

FOUNDATION_EXPORT void EduUmassCsReconfigurationReconfigurationutilsAppInstrumenter_sentResponseCoordinatedWithEduUmassCsGigapaxosInterfacesRequest_(id<EduUmassCsGigapaxosInterfacesRequest> request);

FOUNDATION_EXPORT void EduUmassCsReconfigurationReconfigurationutilsAppInstrumenter_sentActiveReplicaError();

FOUNDATION_EXPORT void EduUmassCsReconfigurationReconfigurationutilsAppInstrumenter_recvdAppPacket();

FOUNDATION_EXPORT NSString *EduUmassCsReconfigurationReconfigurationutilsAppInstrumenter_getStats();

FOUNDATION_EXPORT void EduUmassCsReconfigurationReconfigurationutilsAppInstrumenter_sentRequestWithEduUmassCsGigapaxosInterfacesClientRequest_(id<EduUmassCsGigapaxosInterfacesClientRequest> request);

FOUNDATION_EXPORT void EduUmassCsReconfigurationReconfigurationutilsAppInstrumenter_recvdResponseWithEduUmassCsGigapaxosInterfacesClientRequest_(id<EduUmassCsGigapaxosInterfacesClientRequest> response);

FOUNDATION_EXPORT void EduUmassCsReconfigurationReconfigurationutilsAppInstrumenter_outstandingAppRequestWithInt_withEduUmassCsGigapaxosInterfacesClientRequest_(jint numOutstandingAppRequests, id<EduUmassCsGigapaxosInterfacesClientRequest> request);

FOUNDATION_EXPORT void EduUmassCsReconfigurationReconfigurationutilsAppInstrumenter_rcvdSSLPacket();

J2OBJC_TYPE_LITERAL_HEADER(EduUmassCsReconfigurationReconfigurationutilsAppInstrumenter)

#endif

#pragma pop_macro("INCLUDE_ALL_EduUmassCsReconfigurationReconfigurationutilsAppInstrumenter")
