//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: ./GNS/src/edu/umass/cs/gnsserver/gnsapp/packet/admin/DumpRequestPacket.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_EduUmassCsGnsserverGnsappPacketAdminDumpRequestPacket")
#ifdef RESTRICT_EduUmassCsGnsserverGnsappPacketAdminDumpRequestPacket
#define INCLUDE_ALL_EduUmassCsGnsserverGnsappPacketAdminDumpRequestPacket 0
#else
#define INCLUDE_ALL_EduUmassCsGnsserverGnsappPacketAdminDumpRequestPacket 1
#endif
#undef RESTRICT_EduUmassCsGnsserverGnsappPacketAdminDumpRequestPacket

#if !defined (EduUmassCsGnsserverGnsappPacketAdminDumpRequestPacket_) && (INCLUDE_ALL_EduUmassCsGnsserverGnsappPacketAdminDumpRequestPacket || defined(INCLUDE_EduUmassCsGnsserverGnsappPacketAdminDumpRequestPacket))
#define EduUmassCsGnsserverGnsappPacketAdminDumpRequestPacket_

#define RESTRICT_EduUmassCsGnsserverGnsappPacketBasicPacketWithReturnAddress 1
#define INCLUDE_EduUmassCsGnsserverGnsappPacketBasicPacketWithReturnAddress 1
#include "edu/umass/cs/gnsserver/gnsapp/packet/BasicPacketWithReturnAddress.h"

@class JavaNetInetSocketAddress;
@class OrgJsonJSONArray;
@class OrgJsonJSONObject;
@protocol EduUmassCsNioInterfacesStringifiable;

@interface EduUmassCsGnsserverGnsappPacketAdminDumpRequestPacket : EduUmassCsGnsserverGnsappPacketBasicPacketWithReturnAddress

#pragma mark Public

- (instancetype)initWithInt:(jint)id_
withJavaNetInetSocketAddress:(JavaNetInetSocketAddress *)lnsAddress;

- (instancetype)initWithInt:(jint)id_
withJavaNetInetSocketAddress:(JavaNetInetSocketAddress *)lnsAddress
                     withId:(id)primaryNameServer
       withOrgJsonJSONArray:(OrgJsonJSONArray *)jsonArray
               withNSString:(NSString *)argument;

- (instancetype)initWithInt:(jint)id_
withJavaNetInetSocketAddress:(JavaNetInetSocketAddress *)lnsAddress
               withNSString:(NSString *)tagName;

- (instancetype)initWithOrgJsonJSONObject:(OrgJsonJSONObject *)json
 withEduUmassCsNioInterfacesStringifiable:(id<EduUmassCsNioInterfacesStringifiable>)unstringer;

- (NSString *)getArgument;

- (jint)getId;

- (OrgJsonJSONArray *)getJsonArray;

- (id)getPrimaryNameServer;

- (void)setIdWithInt:(jint)id_;

- (void)setJsonArrayWithOrgJsonJSONArray:(OrgJsonJSONArray *)jsonArray;

- (void)setPrimaryNameServerWithId:(id)primaryNameServer;

- (OrgJsonJSONObject *)toJSONObject;

@end

J2OBJC_EMPTY_STATIC_INIT(EduUmassCsGnsserverGnsappPacketAdminDumpRequestPacket)

inline NSString *EduUmassCsGnsserverGnsappPacketAdminDumpRequestPacket_get_ID();
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT NSString *EduUmassCsGnsserverGnsappPacketAdminDumpRequestPacket_ID;
J2OBJC_STATIC_FIELD_OBJ_FINAL(EduUmassCsGnsserverGnsappPacketAdminDumpRequestPacket, ID, NSString *)

inline NSString *EduUmassCsGnsserverGnsappPacketAdminDumpRequestPacket_get_PRIMARY_NAMESERVER();
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT NSString *EduUmassCsGnsserverGnsappPacketAdminDumpRequestPacket_PRIMARY_NAMESERVER;
J2OBJC_STATIC_FIELD_OBJ_FINAL(EduUmassCsGnsserverGnsappPacketAdminDumpRequestPacket, PRIMARY_NAMESERVER, NSString *)

inline NSString *EduUmassCsGnsserverGnsappPacketAdminDumpRequestPacket_get_JSON();
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT NSString *EduUmassCsGnsserverGnsappPacketAdminDumpRequestPacket_JSON;
J2OBJC_STATIC_FIELD_OBJ_FINAL(EduUmassCsGnsserverGnsappPacketAdminDumpRequestPacket, JSON, NSString *)

FOUNDATION_EXPORT void EduUmassCsGnsserverGnsappPacketAdminDumpRequestPacket_initWithInt_withJavaNetInetSocketAddress_withId_withOrgJsonJSONArray_withNSString_(EduUmassCsGnsserverGnsappPacketAdminDumpRequestPacket *self, jint id_, JavaNetInetSocketAddress *lnsAddress, id primaryNameServer, OrgJsonJSONArray *jsonArray, NSString *argument);

FOUNDATION_EXPORT EduUmassCsGnsserverGnsappPacketAdminDumpRequestPacket *new_EduUmassCsGnsserverGnsappPacketAdminDumpRequestPacket_initWithInt_withJavaNetInetSocketAddress_withId_withOrgJsonJSONArray_withNSString_(jint id_, JavaNetInetSocketAddress *lnsAddress, id primaryNameServer, OrgJsonJSONArray *jsonArray, NSString *argument) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT EduUmassCsGnsserverGnsappPacketAdminDumpRequestPacket *create_EduUmassCsGnsserverGnsappPacketAdminDumpRequestPacket_initWithInt_withJavaNetInetSocketAddress_withId_withOrgJsonJSONArray_withNSString_(jint id_, JavaNetInetSocketAddress *lnsAddress, id primaryNameServer, OrgJsonJSONArray *jsonArray, NSString *argument);

FOUNDATION_EXPORT void EduUmassCsGnsserverGnsappPacketAdminDumpRequestPacket_initWithInt_withJavaNetInetSocketAddress_(EduUmassCsGnsserverGnsappPacketAdminDumpRequestPacket *self, jint id_, JavaNetInetSocketAddress *lnsAddress);

FOUNDATION_EXPORT EduUmassCsGnsserverGnsappPacketAdminDumpRequestPacket *new_EduUmassCsGnsserverGnsappPacketAdminDumpRequestPacket_initWithInt_withJavaNetInetSocketAddress_(jint id_, JavaNetInetSocketAddress *lnsAddress) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT EduUmassCsGnsserverGnsappPacketAdminDumpRequestPacket *create_EduUmassCsGnsserverGnsappPacketAdminDumpRequestPacket_initWithInt_withJavaNetInetSocketAddress_(jint id_, JavaNetInetSocketAddress *lnsAddress);

FOUNDATION_EXPORT void EduUmassCsGnsserverGnsappPacketAdminDumpRequestPacket_initWithInt_withJavaNetInetSocketAddress_withNSString_(EduUmassCsGnsserverGnsappPacketAdminDumpRequestPacket *self, jint id_, JavaNetInetSocketAddress *lnsAddress, NSString *tagName);

FOUNDATION_EXPORT EduUmassCsGnsserverGnsappPacketAdminDumpRequestPacket *new_EduUmassCsGnsserverGnsappPacketAdminDumpRequestPacket_initWithInt_withJavaNetInetSocketAddress_withNSString_(jint id_, JavaNetInetSocketAddress *lnsAddress, NSString *tagName) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT EduUmassCsGnsserverGnsappPacketAdminDumpRequestPacket *create_EduUmassCsGnsserverGnsappPacketAdminDumpRequestPacket_initWithInt_withJavaNetInetSocketAddress_withNSString_(jint id_, JavaNetInetSocketAddress *lnsAddress, NSString *tagName);

FOUNDATION_EXPORT void EduUmassCsGnsserverGnsappPacketAdminDumpRequestPacket_initWithOrgJsonJSONObject_withEduUmassCsNioInterfacesStringifiable_(EduUmassCsGnsserverGnsappPacketAdminDumpRequestPacket *self, OrgJsonJSONObject *json, id<EduUmassCsNioInterfacesStringifiable> unstringer);

FOUNDATION_EXPORT EduUmassCsGnsserverGnsappPacketAdminDumpRequestPacket *new_EduUmassCsGnsserverGnsappPacketAdminDumpRequestPacket_initWithOrgJsonJSONObject_withEduUmassCsNioInterfacesStringifiable_(OrgJsonJSONObject *json, id<EduUmassCsNioInterfacesStringifiable> unstringer) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT EduUmassCsGnsserverGnsappPacketAdminDumpRequestPacket *create_EduUmassCsGnsserverGnsappPacketAdminDumpRequestPacket_initWithOrgJsonJSONObject_withEduUmassCsNioInterfacesStringifiable_(OrgJsonJSONObject *json, id<EduUmassCsNioInterfacesStringifiable> unstringer);

J2OBJC_TYPE_LITERAL_HEADER(EduUmassCsGnsserverGnsappPacketAdminDumpRequestPacket)

#endif

#pragma pop_macro("INCLUDE_ALL_EduUmassCsGnsserverGnsappPacketAdminDumpRequestPacket")
