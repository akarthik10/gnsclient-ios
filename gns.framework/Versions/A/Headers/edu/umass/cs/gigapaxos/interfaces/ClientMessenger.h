//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: ./gigapaxos/src/edu/umass/cs/gigapaxos/interfaces/ClientMessenger.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_EduUmassCsGigapaxosInterfacesClientMessenger")
#ifdef RESTRICT_EduUmassCsGigapaxosInterfacesClientMessenger
#define INCLUDE_ALL_EduUmassCsGigapaxosInterfacesClientMessenger 0
#else
#define INCLUDE_ALL_EduUmassCsGigapaxosInterfacesClientMessenger 1
#endif
#undef RESTRICT_EduUmassCsGigapaxosInterfacesClientMessenger

#if !defined (EduUmassCsGigapaxosInterfacesClientMessenger_) && (INCLUDE_ALL_EduUmassCsGigapaxosInterfacesClientMessenger || defined(INCLUDE_EduUmassCsGigapaxosInterfacesClientMessenger))
#define EduUmassCsGigapaxosInterfacesClientMessenger_

@protocol EduUmassCsNioInterfacesSSLMessenger;

@protocol EduUmassCsGigapaxosInterfacesClientMessenger < JavaObject >

- (void)setClientMessengerWithEduUmassCsNioInterfacesSSLMessenger:(id<EduUmassCsNioInterfacesSSLMessenger>)messenger;

@end

J2OBJC_EMPTY_STATIC_INIT(EduUmassCsGigapaxosInterfacesClientMessenger)

J2OBJC_TYPE_LITERAL_HEADER(EduUmassCsGigapaxosInterfacesClientMessenger)

#endif

#pragma pop_macro("INCLUDE_ALL_EduUmassCsGigapaxosInterfacesClientMessenger")
