//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: ./gigapaxos/src/edu/umass/cs/gigapaxos/interfaces/TimeoutRequestCallback.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_EduUmassCsGigapaxosInterfacesTimeoutRequestCallback")
#ifdef RESTRICT_EduUmassCsGigapaxosInterfacesTimeoutRequestCallback
#define INCLUDE_ALL_EduUmassCsGigapaxosInterfacesTimeoutRequestCallback 0
#else
#define INCLUDE_ALL_EduUmassCsGigapaxosInterfacesTimeoutRequestCallback 1
#endif
#undef RESTRICT_EduUmassCsGigapaxosInterfacesTimeoutRequestCallback

#if !defined (EduUmassCsGigapaxosInterfacesTimeoutRequestCallback_) && (INCLUDE_ALL_EduUmassCsGigapaxosInterfacesTimeoutRequestCallback || defined(INCLUDE_EduUmassCsGigapaxosInterfacesTimeoutRequestCallback))
#define EduUmassCsGigapaxosInterfacesTimeoutRequestCallback_

#define RESTRICT_EduUmassCsGigapaxosInterfacesRequestCallback 1
#define INCLUDE_EduUmassCsGigapaxosInterfacesRequestCallback 1
#include "edu/umass/cs/gigapaxos/interfaces/RequestCallback.h"

@protocol EduUmassCsGigapaxosInterfacesTimeoutRequestCallback < EduUmassCsGigapaxosInterfacesRequestCallback, JavaObject >

- (jlong)getTimeout;

@end

J2OBJC_EMPTY_STATIC_INIT(EduUmassCsGigapaxosInterfacesTimeoutRequestCallback)

J2OBJC_TYPE_LITERAL_HEADER(EduUmassCsGigapaxosInterfacesTimeoutRequestCallback)

#endif

#pragma pop_macro("INCLUDE_ALL_EduUmassCsGigapaxosInterfacesTimeoutRequestCallback")
