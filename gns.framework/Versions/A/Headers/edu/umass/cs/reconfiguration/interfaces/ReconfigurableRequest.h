//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: ./gigapaxos/src/edu/umass/cs/reconfiguration/interfaces/ReconfigurableRequest.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_EduUmassCsReconfigurationInterfacesReconfigurableRequest")
#ifdef RESTRICT_EduUmassCsReconfigurationInterfacesReconfigurableRequest
#define INCLUDE_ALL_EduUmassCsReconfigurationInterfacesReconfigurableRequest 0
#else
#define INCLUDE_ALL_EduUmassCsReconfigurationInterfacesReconfigurableRequest 1
#endif
#undef RESTRICT_EduUmassCsReconfigurationInterfacesReconfigurableRequest

#if !defined (EduUmassCsReconfigurationInterfacesReconfigurableRequest_) && (INCLUDE_ALL_EduUmassCsReconfigurationInterfacesReconfigurableRequest || defined(INCLUDE_EduUmassCsReconfigurationInterfacesReconfigurableRequest))
#define EduUmassCsReconfigurationInterfacesReconfigurableRequest_

#define RESTRICT_EduUmassCsGigapaxosInterfacesRequest 1
#define INCLUDE_EduUmassCsGigapaxosInterfacesRequest 1
#include "edu/umass/cs/gigapaxos/interfaces/Request.h"

@protocol EduUmassCsNioInterfacesIntegerPacketType;

@protocol EduUmassCsReconfigurationInterfacesReconfigurableRequest < EduUmassCsGigapaxosInterfacesRequest, JavaObject >

- (jint)getEpochNumber;

- (jboolean)isStop;

- (id)getSummary;

@end

@interface EduUmassCsReconfigurationInterfacesReconfigurableRequest : NSObject

@end

J2OBJC_STATIC_INIT(EduUmassCsReconfigurationInterfacesReconfigurableRequest)

inline id<EduUmassCsNioInterfacesIntegerPacketType> EduUmassCsReconfigurationInterfacesReconfigurableRequest_get_STOP();
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT id<EduUmassCsNioInterfacesIntegerPacketType> EduUmassCsReconfigurationInterfacesReconfigurableRequest_STOP;
J2OBJC_STATIC_FIELD_OBJ_FINAL(EduUmassCsReconfigurationInterfacesReconfigurableRequest, STOP, id<EduUmassCsNioInterfacesIntegerPacketType>)

FOUNDATION_EXPORT id EduUmassCsReconfigurationInterfacesReconfigurableRequest_getSummary(id<EduUmassCsReconfigurationInterfacesReconfigurableRequest> self);

J2OBJC_TYPE_LITERAL_HEADER(EduUmassCsReconfigurationInterfacesReconfigurableRequest)

#endif

#pragma pop_macro("INCLUDE_ALL_EduUmassCsReconfigurationInterfacesReconfigurableRequest")
