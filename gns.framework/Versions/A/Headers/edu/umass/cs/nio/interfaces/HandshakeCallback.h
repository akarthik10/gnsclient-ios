//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: ./gigapaxos/src/edu/umass/cs/nio/interfaces/HandshakeCallback.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_EduUmassCsNioInterfacesHandshakeCallback")
#ifdef RESTRICT_EduUmassCsNioInterfacesHandshakeCallback
#define INCLUDE_ALL_EduUmassCsNioInterfacesHandshakeCallback 0
#else
#define INCLUDE_ALL_EduUmassCsNioInterfacesHandshakeCallback 1
#endif
#undef RESTRICT_EduUmassCsNioInterfacesHandshakeCallback

#if !defined (EduUmassCsNioInterfacesHandshakeCallback_) && (INCLUDE_ALL_EduUmassCsNioInterfacesHandshakeCallback || defined(INCLUDE_EduUmassCsNioInterfacesHandshakeCallback))
#define EduUmassCsNioInterfacesHandshakeCallback_

@class JavaNioChannelsSelectionKey;

@protocol EduUmassCsNioInterfacesHandshakeCallback < JavaObject >

- (void)handshakeCompleteWithJavaNioChannelsSelectionKey:(JavaNioChannelsSelectionKey *)key;

@end

J2OBJC_EMPTY_STATIC_INIT(EduUmassCsNioInterfacesHandshakeCallback)

J2OBJC_TYPE_LITERAL_HEADER(EduUmassCsNioInterfacesHandshakeCallback)

#endif

#pragma pop_macro("INCLUDE_ALL_EduUmassCsNioInterfacesHandshakeCallback")
