//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: ./gigapaxos/src/edu/umass/cs/nio/interfaces/Messenger.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_EduUmassCsNioInterfacesMessenger")
#ifdef RESTRICT_EduUmassCsNioInterfacesMessenger
#define INCLUDE_ALL_EduUmassCsNioInterfacesMessenger 0
#else
#define INCLUDE_ALL_EduUmassCsNioInterfacesMessenger 1
#endif
#undef RESTRICT_EduUmassCsNioInterfacesMessenger

#if !defined (EduUmassCsNioInterfacesMessenger_) && (INCLUDE_ALL_EduUmassCsNioInterfacesMessenger || defined(INCLUDE_EduUmassCsNioInterfacesMessenger))
#define EduUmassCsNioInterfacesMessenger_

#define RESTRICT_EduUmassCsNioInterfacesInterfaceNIOTransport 1
#define INCLUDE_EduUmassCsNioInterfacesInterfaceNIOTransport 1
#include "edu/umass/cs/nio/interfaces/InterfaceNIOTransport.h"

@class EduUmassCsNioGenericMessagingTask;

@protocol EduUmassCsNioInterfacesMessenger < EduUmassCsNioInterfacesInterfaceNIOTransport, JavaObject >

- (void)sendWithEduUmassCsNioGenericMessagingTask:(EduUmassCsNioGenericMessagingTask *)mtask;

@end

J2OBJC_EMPTY_STATIC_INIT(EduUmassCsNioInterfacesMessenger)

J2OBJC_TYPE_LITERAL_HEADER(EduUmassCsNioInterfacesMessenger)

#endif

#pragma pop_macro("INCLUDE_ALL_EduUmassCsNioInterfacesMessenger")
