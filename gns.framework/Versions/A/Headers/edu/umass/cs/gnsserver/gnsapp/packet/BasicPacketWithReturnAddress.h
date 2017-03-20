//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: ./GNS/src/edu/umass/cs/gnsserver/gnsapp/packet/BasicPacketWithReturnAddress.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_EduUmassCsGnsserverGnsappPacketBasicPacketWithReturnAddress")
#ifdef RESTRICT_EduUmassCsGnsserverGnsappPacketBasicPacketWithReturnAddress
#define INCLUDE_ALL_EduUmassCsGnsserverGnsappPacketBasicPacketWithReturnAddress 0
#else
#define INCLUDE_ALL_EduUmassCsGnsserverGnsappPacketBasicPacketWithReturnAddress 1
#endif
#undef RESTRICT_EduUmassCsGnsserverGnsappPacketBasicPacketWithReturnAddress

#if !defined (EduUmassCsGnsserverGnsappPacketBasicPacketWithReturnAddress_) && (INCLUDE_ALL_EduUmassCsGnsserverGnsappPacketBasicPacketWithReturnAddress || defined(INCLUDE_EduUmassCsGnsserverGnsappPacketBasicPacketWithReturnAddress))
#define EduUmassCsGnsserverGnsappPacketBasicPacketWithReturnAddress_

#define RESTRICT_EduUmassCsGnsserverGnsappPacketBasicPacketWithClientAddress 1
#define INCLUDE_EduUmassCsGnsserverGnsappPacketBasicPacketWithClientAddress 1
#include "edu/umass/cs/gnsserver/gnsapp/packet/BasicPacketWithClientAddress.h"

@class JavaNetInetSocketAddress;
@class OrgJsonJSONObject;

@interface EduUmassCsGnsserverGnsappPacketBasicPacketWithReturnAddress : EduUmassCsGnsserverGnsappPacketBasicPacketWithClientAddress

#pragma mark Public

- (instancetype)init;

- (instancetype)initWithJavaNetInetSocketAddress:(JavaNetInetSocketAddress *)address;

- (instancetype)initWithOrgJsonJSONObject:(OrgJsonJSONObject *)json;

- (void)addToJSONObjectWithOrgJsonJSONObject:(OrgJsonJSONObject *)json;

- (JavaNetInetSocketAddress *)getReturnAddress;

@end

J2OBJC_EMPTY_STATIC_INIT(EduUmassCsGnsserverGnsappPacketBasicPacketWithReturnAddress)

inline jint EduUmassCsGnsserverGnsappPacketBasicPacketWithReturnAddress_get_INVALID_PORT();
#define EduUmassCsGnsserverGnsappPacketBasicPacketWithReturnAddress_INVALID_PORT -1
J2OBJC_STATIC_FIELD_CONSTANT(EduUmassCsGnsserverGnsappPacketBasicPacketWithReturnAddress, INVALID_PORT, jint)

FOUNDATION_EXPORT void EduUmassCsGnsserverGnsappPacketBasicPacketWithReturnAddress_initWithOrgJsonJSONObject_(EduUmassCsGnsserverGnsappPacketBasicPacketWithReturnAddress *self, OrgJsonJSONObject *json);

FOUNDATION_EXPORT void EduUmassCsGnsserverGnsappPacketBasicPacketWithReturnAddress_init(EduUmassCsGnsserverGnsappPacketBasicPacketWithReturnAddress *self);

FOUNDATION_EXPORT void EduUmassCsGnsserverGnsappPacketBasicPacketWithReturnAddress_initWithJavaNetInetSocketAddress_(EduUmassCsGnsserverGnsappPacketBasicPacketWithReturnAddress *self, JavaNetInetSocketAddress *address);

J2OBJC_TYPE_LITERAL_HEADER(EduUmassCsGnsserverGnsappPacketBasicPacketWithReturnAddress)

#endif

#pragma pop_macro("INCLUDE_ALL_EduUmassCsGnsserverGnsappPacketBasicPacketWithReturnAddress")
