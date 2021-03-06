//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: ./gigapaxos/src/edu/umass/cs/reconfiguration/reconfigurationpackets/DeleteServiceName.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_EduUmassCsReconfigurationReconfigurationpacketsDeleteServiceName")
#ifdef RESTRICT_EduUmassCsReconfigurationReconfigurationpacketsDeleteServiceName
#define INCLUDE_ALL_EduUmassCsReconfigurationReconfigurationpacketsDeleteServiceName 0
#else
#define INCLUDE_ALL_EduUmassCsReconfigurationReconfigurationpacketsDeleteServiceName 1
#endif
#undef RESTRICT_EduUmassCsReconfigurationReconfigurationpacketsDeleteServiceName

#if !defined (EduUmassCsReconfigurationReconfigurationpacketsDeleteServiceName_) && (INCLUDE_ALL_EduUmassCsReconfigurationReconfigurationpacketsDeleteServiceName || defined(INCLUDE_EduUmassCsReconfigurationReconfigurationpacketsDeleteServiceName))
#define EduUmassCsReconfigurationReconfigurationpacketsDeleteServiceName_

#define RESTRICT_EduUmassCsReconfigurationReconfigurationpacketsClientReconfigurationPacket 1
#define INCLUDE_EduUmassCsReconfigurationReconfigurationpacketsClientReconfigurationPacket 1
#include "edu/umass/cs/reconfiguration/reconfigurationpackets/ClientReconfigurationPacket.h"

@class EduUmassCsReconfigurationReconfigurationpacketsReconfigurationPacket_PacketType;
@class JavaNetInetSocketAddress;
@class OrgJsonJSONObject;
@protocol EduUmassCsNioInterfacesStringifiable;

@interface EduUmassCsReconfigurationReconfigurationpacketsDeleteServiceName : EduUmassCsReconfigurationReconfigurationpacketsClientReconfigurationPacket

#pragma mark Public

- (instancetype)initWithJavaNetInetSocketAddress:(JavaNetInetSocketAddress *)initiator
                                    withNSString:(NSString *)name
                                         withInt:(jint)epochNumber;

- (instancetype)initWithJavaNetInetSocketAddress:(JavaNetInetSocketAddress *)initiator
                                    withNSString:(NSString *)name
                                         withInt:(jint)epochNumber
                    withJavaNetInetSocketAddress:(JavaNetInetSocketAddress *)myReceiver;

- (instancetype)initWithOrgJsonJSONObject:(OrgJsonJSONObject *)json;

- (instancetype)initWithOrgJsonJSONObject:(OrgJsonJSONObject *)json
 withEduUmassCsNioInterfacesStringifiable:(id<EduUmassCsNioInterfacesStringifiable>)unstringer;

- (instancetype)initWithNSString:(NSString *)name;

- (JavaNetInetSocketAddress *)getInitiator;

- (JavaNetInetSocketAddress *)getSender;

- (EduUmassCsReconfigurationReconfigurationpacketsReconfigurationPacket_PacketType *)getType;

- (OrgJsonJSONObject *)toJSONObjectImpl;

#pragma mark Protected

- (JavaNetInetSocketAddress *)flipWithId:(JavaNetInetSocketAddress *)arg0;

@end

J2OBJC_STATIC_INIT(EduUmassCsReconfigurationReconfigurationpacketsDeleteServiceName)

inline id<EduUmassCsNioInterfacesStringifiable> EduUmassCsReconfigurationReconfigurationpacketsDeleteServiceName_get_unstringer();
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT id<EduUmassCsNioInterfacesStringifiable> EduUmassCsReconfigurationReconfigurationpacketsDeleteServiceName_unstringer;
J2OBJC_STATIC_FIELD_OBJ_FINAL(EduUmassCsReconfigurationReconfigurationpacketsDeleteServiceName, unstringer, id<EduUmassCsNioInterfacesStringifiable>)

FOUNDATION_EXPORT void EduUmassCsReconfigurationReconfigurationpacketsDeleteServiceName_initWithNSString_(EduUmassCsReconfigurationReconfigurationpacketsDeleteServiceName *self, NSString *name);

FOUNDATION_EXPORT EduUmassCsReconfigurationReconfigurationpacketsDeleteServiceName *new_EduUmassCsReconfigurationReconfigurationpacketsDeleteServiceName_initWithNSString_(NSString *name) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT EduUmassCsReconfigurationReconfigurationpacketsDeleteServiceName *create_EduUmassCsReconfigurationReconfigurationpacketsDeleteServiceName_initWithNSString_(NSString *name);

FOUNDATION_EXPORT void EduUmassCsReconfigurationReconfigurationpacketsDeleteServiceName_initWithJavaNetInetSocketAddress_withNSString_withInt_(EduUmassCsReconfigurationReconfigurationpacketsDeleteServiceName *self, JavaNetInetSocketAddress *initiator, NSString *name, jint epochNumber);

FOUNDATION_EXPORT EduUmassCsReconfigurationReconfigurationpacketsDeleteServiceName *new_EduUmassCsReconfigurationReconfigurationpacketsDeleteServiceName_initWithJavaNetInetSocketAddress_withNSString_withInt_(JavaNetInetSocketAddress *initiator, NSString *name, jint epochNumber) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT EduUmassCsReconfigurationReconfigurationpacketsDeleteServiceName *create_EduUmassCsReconfigurationReconfigurationpacketsDeleteServiceName_initWithJavaNetInetSocketAddress_withNSString_withInt_(JavaNetInetSocketAddress *initiator, NSString *name, jint epochNumber);

FOUNDATION_EXPORT void EduUmassCsReconfigurationReconfigurationpacketsDeleteServiceName_initWithJavaNetInetSocketAddress_withNSString_withInt_withJavaNetInetSocketAddress_(EduUmassCsReconfigurationReconfigurationpacketsDeleteServiceName *self, JavaNetInetSocketAddress *initiator, NSString *name, jint epochNumber, JavaNetInetSocketAddress *myReceiver);

FOUNDATION_EXPORT EduUmassCsReconfigurationReconfigurationpacketsDeleteServiceName *new_EduUmassCsReconfigurationReconfigurationpacketsDeleteServiceName_initWithJavaNetInetSocketAddress_withNSString_withInt_withJavaNetInetSocketAddress_(JavaNetInetSocketAddress *initiator, NSString *name, jint epochNumber, JavaNetInetSocketAddress *myReceiver) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT EduUmassCsReconfigurationReconfigurationpacketsDeleteServiceName *create_EduUmassCsReconfigurationReconfigurationpacketsDeleteServiceName_initWithJavaNetInetSocketAddress_withNSString_withInt_withJavaNetInetSocketAddress_(JavaNetInetSocketAddress *initiator, NSString *name, jint epochNumber, JavaNetInetSocketAddress *myReceiver);

FOUNDATION_EXPORT void EduUmassCsReconfigurationReconfigurationpacketsDeleteServiceName_initWithOrgJsonJSONObject_withEduUmassCsNioInterfacesStringifiable_(EduUmassCsReconfigurationReconfigurationpacketsDeleteServiceName *self, OrgJsonJSONObject *json, id<EduUmassCsNioInterfacesStringifiable> unstringer);

FOUNDATION_EXPORT EduUmassCsReconfigurationReconfigurationpacketsDeleteServiceName *new_EduUmassCsReconfigurationReconfigurationpacketsDeleteServiceName_initWithOrgJsonJSONObject_withEduUmassCsNioInterfacesStringifiable_(OrgJsonJSONObject *json, id<EduUmassCsNioInterfacesStringifiable> unstringer) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT EduUmassCsReconfigurationReconfigurationpacketsDeleteServiceName *create_EduUmassCsReconfigurationReconfigurationpacketsDeleteServiceName_initWithOrgJsonJSONObject_withEduUmassCsNioInterfacesStringifiable_(OrgJsonJSONObject *json, id<EduUmassCsNioInterfacesStringifiable> unstringer);

FOUNDATION_EXPORT void EduUmassCsReconfigurationReconfigurationpacketsDeleteServiceName_initWithOrgJsonJSONObject_(EduUmassCsReconfigurationReconfigurationpacketsDeleteServiceName *self, OrgJsonJSONObject *json);

FOUNDATION_EXPORT EduUmassCsReconfigurationReconfigurationpacketsDeleteServiceName *new_EduUmassCsReconfigurationReconfigurationpacketsDeleteServiceName_initWithOrgJsonJSONObject_(OrgJsonJSONObject *json) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT EduUmassCsReconfigurationReconfigurationpacketsDeleteServiceName *create_EduUmassCsReconfigurationReconfigurationpacketsDeleteServiceName_initWithOrgJsonJSONObject_(OrgJsonJSONObject *json);

J2OBJC_TYPE_LITERAL_HEADER(EduUmassCsReconfigurationReconfigurationpacketsDeleteServiceName)

#endif

#pragma pop_macro("INCLUDE_ALL_EduUmassCsReconfigurationReconfigurationpacketsDeleteServiceName")
