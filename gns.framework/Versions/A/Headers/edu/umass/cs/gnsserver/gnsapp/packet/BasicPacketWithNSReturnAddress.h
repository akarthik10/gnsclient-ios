//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: ./GNS/src/edu/umass/cs/gnsserver/gnsapp/packet/BasicPacketWithNSReturnAddress.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_EduUmassCsGnsserverGnsappPacketBasicPacketWithNSReturnAddress")
#ifdef RESTRICT_EduUmassCsGnsserverGnsappPacketBasicPacketWithNSReturnAddress
#define INCLUDE_ALL_EduUmassCsGnsserverGnsappPacketBasicPacketWithNSReturnAddress 0
#else
#define INCLUDE_ALL_EduUmassCsGnsserverGnsappPacketBasicPacketWithNSReturnAddress 1
#endif
#undef RESTRICT_EduUmassCsGnsserverGnsappPacketBasicPacketWithNSReturnAddress

#if !defined (EduUmassCsGnsserverGnsappPacketBasicPacketWithNSReturnAddress_) && (INCLUDE_ALL_EduUmassCsGnsserverGnsappPacketBasicPacketWithNSReturnAddress || defined(INCLUDE_EduUmassCsGnsserverGnsappPacketBasicPacketWithNSReturnAddress))
#define EduUmassCsGnsserverGnsappPacketBasicPacketWithNSReturnAddress_

#define RESTRICT_EduUmassCsGnsserverGnsappPacketBasicPacketWithClientAddress 1
#define INCLUDE_EduUmassCsGnsserverGnsappPacketBasicPacketWithClientAddress 1
#include "edu/umass/cs/gnsserver/gnsapp/packet/BasicPacketWithClientAddress.h"

@class JavaNetInetSocketAddress;
@class OrgJsonJSONObject;

@interface EduUmassCsGnsserverGnsappPacketBasicPacketWithNSReturnAddress : EduUmassCsGnsserverGnsappPacketBasicPacketWithClientAddress

#pragma mark Public

- (instancetype)init;

- (instancetype)initWithJavaNetInetSocketAddress:(JavaNetInetSocketAddress *)address;

- (instancetype)initWithOrgJsonJSONObject:(OrgJsonJSONObject *)json;

- (void)addToJSONObjectWithOrgJsonJSONObject:(OrgJsonJSONObject *)json;

- (JavaNetInetSocketAddress *)getNSReturnAddress;

- (void)setNSReturnAddressWithJavaNetInetSocketAddress:(JavaNetInetSocketAddress *)address;

@end

J2OBJC_EMPTY_STATIC_INIT(EduUmassCsGnsserverGnsappPacketBasicPacketWithNSReturnAddress)

inline jint EduUmassCsGnsserverGnsappPacketBasicPacketWithNSReturnAddress_get_INVALID_PORT();
#define EduUmassCsGnsserverGnsappPacketBasicPacketWithNSReturnAddress_INVALID_PORT -1
J2OBJC_STATIC_FIELD_CONSTANT(EduUmassCsGnsserverGnsappPacketBasicPacketWithNSReturnAddress, INVALID_PORT, jint)

FOUNDATION_EXPORT void EduUmassCsGnsserverGnsappPacketBasicPacketWithNSReturnAddress_initWithOrgJsonJSONObject_(EduUmassCsGnsserverGnsappPacketBasicPacketWithNSReturnAddress *self, OrgJsonJSONObject *json);

FOUNDATION_EXPORT void EduUmassCsGnsserverGnsappPacketBasicPacketWithNSReturnAddress_init(EduUmassCsGnsserverGnsappPacketBasicPacketWithNSReturnAddress *self);

FOUNDATION_EXPORT void EduUmassCsGnsserverGnsappPacketBasicPacketWithNSReturnAddress_initWithJavaNetInetSocketAddress_(EduUmassCsGnsserverGnsappPacketBasicPacketWithNSReturnAddress *self, JavaNetInetSocketAddress *address);

J2OBJC_TYPE_LITERAL_HEADER(EduUmassCsGnsserverGnsappPacketBasicPacketWithNSReturnAddress)

#endif

#pragma pop_macro("INCLUDE_ALL_EduUmassCsGnsserverGnsappPacketBasicPacketWithNSReturnAddress")
