//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: ./GNS/src/edu/umass/cs/gnsserver/gnsapp/packet/Packet.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_EduUmassCsGnsserverGnsappPacketPacket")
#ifdef RESTRICT_EduUmassCsGnsserverGnsappPacketPacket
#define INCLUDE_ALL_EduUmassCsGnsserverGnsappPacketPacket 0
#else
#define INCLUDE_ALL_EduUmassCsGnsserverGnsappPacketPacket 1
#endif
#undef RESTRICT_EduUmassCsGnsserverGnsappPacketPacket

#if !defined (EduUmassCsGnsserverGnsappPacketPacket_) && (INCLUDE_ALL_EduUmassCsGnsserverGnsappPacketPacket || defined(INCLUDE_EduUmassCsGnsserverGnsappPacketPacket))
#define EduUmassCsGnsserverGnsappPacketPacket_

@class EduUmassCsGnsserverGnsappPacketPacket_PacketType;
@class EduUmassCsGnsserverNodeconfigGNSNodeConfig;
@class EduUmassCsGnsserverNodeconfigPortOffsets;
@class JavaIoInputStream;
@class JavaNetInetSocketAddress;
@class JavaNetSocket;
@class OrgJsonJSONObject;
@protocol EduUmassCsNioInterfacesStringifiable;
@protocol JavaUtilSet;

@interface EduUmassCsGnsserverGnsappPacketPacket : NSObject

#pragma mark Public

- (instancetype)init;

+ (id)createInstanceWithOrgJsonJSONObject:(OrgJsonJSONObject *)json
 withEduUmassCsNioInterfacesStringifiable:(id<EduUmassCsNioInterfacesStringifiable>)unstringer;

+ (jint)getDataSizeWithJavaIoInputStream:(JavaIoInputStream *)inStream;

+ (OrgJsonJSONObject *)getJSONObjectFrameWithJavaNetSocket:(JavaNetSocket *)socket;

+ (EduUmassCsGnsserverGnsappPacketPacket_PacketType *)getPacketTypeWithInt:(jint)number;

+ (EduUmassCsGnsserverGnsappPacketPacket_PacketType *)getPacketTypeWithOrgJsonJSONObject:(OrgJsonJSONObject *)json;

+ (NSString *)getPacketTypeStringSafeWithOrgJsonJSONObject:(OrgJsonJSONObject *)json;

+ (jboolean)hasPacketTypeFieldWithOrgJsonJSONObject:(OrgJsonJSONObject *)json;

+ (void)multicastTCPWithEduUmassCsGnsserverNodeconfigGNSNodeConfig:(EduUmassCsGnsserverNodeconfigGNSNodeConfig *)gnsNodeConfig
                                                   withJavaUtilSet:(id<JavaUtilSet>)nameServerIds
                                             withOrgJsonJSONObject:(OrgJsonJSONObject *)json
                                                           withInt:(jint)numRetry
                      withEduUmassCsGnsserverNodeconfigPortOffsets:(EduUmassCsGnsserverNodeconfigPortOffsets *)portType
                                                   withJavaUtilSet:(id<JavaUtilSet>)excludeNameServers;

+ (void)putPacketTypeWithOrgJsonJSONObject:(OrgJsonJSONObject *)json
withEduUmassCsGnsserverGnsappPacketPacket_PacketType:(EduUmassCsGnsserverGnsappPacketPacket_PacketType *)type;

+ (JavaNetSocket *)sendTCPPacketWithEduUmassCsGnsserverNodeconfigGNSNodeConfig:(EduUmassCsGnsserverNodeconfigGNSNodeConfig *)gnsNodeConfig
                                                         withOrgJsonJSONObject:(OrgJsonJSONObject *)json
                                                                  withNSString:(NSString *)nameserverId
                                  withEduUmassCsGnsserverNodeconfigPortOffsets:(EduUmassCsGnsserverNodeconfigPortOffsets *)portType;

+ (JavaNetSocket *)sendTCPPacketWithOrgJsonJSONObject:(OrgJsonJSONObject *)json
                         withJavaNetInetSocketAddress:(JavaNetInetSocketAddress *)addr;

+ (void)sendTCPPacketWithOrgJsonJSONObject:(OrgJsonJSONObject *)json
                         withJavaNetSocket:(JavaNetSocket *)socket;

@end

J2OBJC_EMPTY_STATIC_INIT(EduUmassCsGnsserverGnsappPacketPacket)

inline NSString *EduUmassCsGnsserverGnsappPacketPacket_get_PACKET_TYPE();
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT NSString *EduUmassCsGnsserverGnsappPacketPacket_PACKET_TYPE;
J2OBJC_STATIC_FIELD_OBJ_FINAL(EduUmassCsGnsserverGnsappPacketPacket, PACKET_TYPE, NSString *)

inline NSString *EduUmassCsGnsserverGnsappPacketPacket_get_HEADER_PATTERN();
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT NSString *EduUmassCsGnsserverGnsappPacketPacket_HEADER_PATTERN;
J2OBJC_STATIC_FIELD_OBJ_FINAL(EduUmassCsGnsserverGnsappPacketPacket, HEADER_PATTERN, NSString *)

FOUNDATION_EXPORT void EduUmassCsGnsserverGnsappPacketPacket_init(EduUmassCsGnsserverGnsappPacketPacket *self);

FOUNDATION_EXPORT EduUmassCsGnsserverGnsappPacketPacket *new_EduUmassCsGnsserverGnsappPacketPacket_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT EduUmassCsGnsserverGnsappPacketPacket *create_EduUmassCsGnsserverGnsappPacketPacket_init();

FOUNDATION_EXPORT EduUmassCsGnsserverGnsappPacketPacket_PacketType *EduUmassCsGnsserverGnsappPacketPacket_getPacketTypeWithInt_(jint number);

FOUNDATION_EXPORT EduUmassCsGnsserverGnsappPacketPacket_PacketType *EduUmassCsGnsserverGnsappPacketPacket_getPacketTypeWithOrgJsonJSONObject_(OrgJsonJSONObject *json);

FOUNDATION_EXPORT jboolean EduUmassCsGnsserverGnsappPacketPacket_hasPacketTypeFieldWithOrgJsonJSONObject_(OrgJsonJSONObject *json);

FOUNDATION_EXPORT void EduUmassCsGnsserverGnsappPacketPacket_putPacketTypeWithOrgJsonJSONObject_withEduUmassCsGnsserverGnsappPacketPacket_PacketType_(OrgJsonJSONObject *json, EduUmassCsGnsserverGnsappPacketPacket_PacketType *type);

FOUNDATION_EXPORT id EduUmassCsGnsserverGnsappPacketPacket_createInstanceWithOrgJsonJSONObject_withEduUmassCsNioInterfacesStringifiable_(OrgJsonJSONObject *json, id<EduUmassCsNioInterfacesStringifiable> unstringer);

FOUNDATION_EXPORT jint EduUmassCsGnsserverGnsappPacketPacket_getDataSizeWithJavaIoInputStream_(JavaIoInputStream *inStream);

FOUNDATION_EXPORT OrgJsonJSONObject *EduUmassCsGnsserverGnsappPacketPacket_getJSONObjectFrameWithJavaNetSocket_(JavaNetSocket *socket);

FOUNDATION_EXPORT JavaNetSocket *EduUmassCsGnsserverGnsappPacketPacket_sendTCPPacketWithEduUmassCsGnsserverNodeconfigGNSNodeConfig_withOrgJsonJSONObject_withNSString_withEduUmassCsGnsserverNodeconfigPortOffsets_(EduUmassCsGnsserverNodeconfigGNSNodeConfig *gnsNodeConfig, OrgJsonJSONObject *json, NSString *nameserverId, EduUmassCsGnsserverNodeconfigPortOffsets *portType);

FOUNDATION_EXPORT JavaNetSocket *EduUmassCsGnsserverGnsappPacketPacket_sendTCPPacketWithOrgJsonJSONObject_withJavaNetInetSocketAddress_(OrgJsonJSONObject *json, JavaNetInetSocketAddress *addr);

FOUNDATION_EXPORT void EduUmassCsGnsserverGnsappPacketPacket_sendTCPPacketWithOrgJsonJSONObject_withJavaNetSocket_(OrgJsonJSONObject *json, JavaNetSocket *socket);

FOUNDATION_EXPORT void EduUmassCsGnsserverGnsappPacketPacket_multicastTCPWithEduUmassCsGnsserverNodeconfigGNSNodeConfig_withJavaUtilSet_withOrgJsonJSONObject_withInt_withEduUmassCsGnsserverNodeconfigPortOffsets_withJavaUtilSet_(EduUmassCsGnsserverNodeconfigGNSNodeConfig *gnsNodeConfig, id<JavaUtilSet> nameServerIds, OrgJsonJSONObject *json, jint numRetry, EduUmassCsGnsserverNodeconfigPortOffsets *portType, id<JavaUtilSet> excludeNameServers);

FOUNDATION_EXPORT NSString *EduUmassCsGnsserverGnsappPacketPacket_getPacketTypeStringSafeWithOrgJsonJSONObject_(OrgJsonJSONObject *json);

J2OBJC_TYPE_LITERAL_HEADER(EduUmassCsGnsserverGnsappPacketPacket)

#endif

#if !defined (EduUmassCsGnsserverGnsappPacketPacket_PacketType_) && (INCLUDE_ALL_EduUmassCsGnsserverGnsappPacketPacket || defined(INCLUDE_EduUmassCsGnsserverGnsappPacketPacket_PacketType))
#define EduUmassCsGnsserverGnsappPacketPacket_PacketType_

#define RESTRICT_JavaLangEnum 1
#define INCLUDE_JavaLangEnum 1
#include "java/lang/Enum.h"

#define RESTRICT_EduUmassCsNioInterfacesIntegerPacketType 1
#define INCLUDE_EduUmassCsNioInterfacesIntegerPacketType 1
#include "edu/umass/cs/nio/interfaces/IntegerPacketType.h"

@class IOSObjectArray;

typedef NS_ENUM(NSUInteger, EduUmassCsGnsserverGnsappPacketPacket_PacketType_Enum) {
  EduUmassCsGnsserverGnsappPacketPacket_PacketType_Enum_COMMAND = 0,
  EduUmassCsGnsserverGnsappPacketPacket_PacketType_Enum_COMMAND_RETURN_VALUE = 1,
  EduUmassCsGnsserverGnsappPacketPacket_PacketType_Enum_INTERNAL_COMMAND = 2,
  EduUmassCsGnsserverGnsappPacketPacket_PacketType_Enum_ADMIN_COMMAND = 3,
  EduUmassCsGnsserverGnsappPacketPacket_PacketType_Enum_DUMP_REQUEST = 4,
  EduUmassCsGnsserverGnsappPacketPacket_PacketType_Enum_SENTINAL = 5,
  EduUmassCsGnsserverGnsappPacketPacket_PacketType_Enum_ADMIN_REQUEST = 6,
  EduUmassCsGnsserverGnsappPacketPacket_PacketType_Enum_ADMIN_RESPONSE = 7,
  EduUmassCsGnsserverGnsappPacketPacket_PacketType_Enum_SELECT_REQUEST = 8,
  EduUmassCsGnsserverGnsappPacketPacket_PacketType_Enum_SELECT_RESPONSE = 9,
  EduUmassCsGnsserverGnsappPacketPacket_PacketType_Enum_PAXOS_PACKET = 10,
  EduUmassCsGnsserverGnsappPacketPacket_PacketType_Enum_STOP = 11,
  EduUmassCsGnsserverGnsappPacketPacket_PacketType_Enum_NOOP = 12,
  EduUmassCsGnsserverGnsappPacketPacket_PacketType_Enum_TEST_NOOP = 13,
};

@interface EduUmassCsGnsserverGnsappPacketPacket_PacketType : JavaLangEnum < NSCopying, EduUmassCsNioInterfacesIntegerPacketType >

#pragma mark Public

- (NSString *)getClassName;

- (jint)getInt;

+ (EduUmassCsGnsserverGnsappPacketPacket_PacketType *)getPacketTypeWithInt:(jint)number;

+ (EduUmassCsGnsserverGnsappPacketPacket_PacketType *)valueOfWithNSString:(NSString *)name;

+ (IOSObjectArray *)values;

#pragma mark Package-Private

- (id)copyWithZone:(NSZone *)zone;

@end

J2OBJC_STATIC_INIT(EduUmassCsGnsserverGnsappPacketPacket_PacketType)

/*! INTERNAL ONLY - Use enum accessors declared below. */
FOUNDATION_EXPORT EduUmassCsGnsserverGnsappPacketPacket_PacketType *EduUmassCsGnsserverGnsappPacketPacket_PacketType_values_[];

inline EduUmassCsGnsserverGnsappPacketPacket_PacketType *EduUmassCsGnsserverGnsappPacketPacket_PacketType_get_COMMAND();
J2OBJC_ENUM_CONSTANT(EduUmassCsGnsserverGnsappPacketPacket_PacketType, COMMAND)

inline EduUmassCsGnsserverGnsappPacketPacket_PacketType *EduUmassCsGnsserverGnsappPacketPacket_PacketType_get_COMMAND_RETURN_VALUE();
J2OBJC_ENUM_CONSTANT(EduUmassCsGnsserverGnsappPacketPacket_PacketType, COMMAND_RETURN_VALUE)

inline EduUmassCsGnsserverGnsappPacketPacket_PacketType *EduUmassCsGnsserverGnsappPacketPacket_PacketType_get_INTERNAL_COMMAND();
J2OBJC_ENUM_CONSTANT(EduUmassCsGnsserverGnsappPacketPacket_PacketType, INTERNAL_COMMAND)

inline EduUmassCsGnsserverGnsappPacketPacket_PacketType *EduUmassCsGnsserverGnsappPacketPacket_PacketType_get_ADMIN_COMMAND();
J2OBJC_ENUM_CONSTANT(EduUmassCsGnsserverGnsappPacketPacket_PacketType, ADMIN_COMMAND)

inline EduUmassCsGnsserverGnsappPacketPacket_PacketType *EduUmassCsGnsserverGnsappPacketPacket_PacketType_get_DUMP_REQUEST();
J2OBJC_ENUM_CONSTANT(EduUmassCsGnsserverGnsappPacketPacket_PacketType, DUMP_REQUEST)

inline EduUmassCsGnsserverGnsappPacketPacket_PacketType *EduUmassCsGnsserverGnsappPacketPacket_PacketType_get_SENTINAL();
J2OBJC_ENUM_CONSTANT(EduUmassCsGnsserverGnsappPacketPacket_PacketType, SENTINAL)

inline EduUmassCsGnsserverGnsappPacketPacket_PacketType *EduUmassCsGnsserverGnsappPacketPacket_PacketType_get_ADMIN_REQUEST();
J2OBJC_ENUM_CONSTANT(EduUmassCsGnsserverGnsappPacketPacket_PacketType, ADMIN_REQUEST)

inline EduUmassCsGnsserverGnsappPacketPacket_PacketType *EduUmassCsGnsserverGnsappPacketPacket_PacketType_get_ADMIN_RESPONSE();
J2OBJC_ENUM_CONSTANT(EduUmassCsGnsserverGnsappPacketPacket_PacketType, ADMIN_RESPONSE)

inline EduUmassCsGnsserverGnsappPacketPacket_PacketType *EduUmassCsGnsserverGnsappPacketPacket_PacketType_get_SELECT_REQUEST();
J2OBJC_ENUM_CONSTANT(EduUmassCsGnsserverGnsappPacketPacket_PacketType, SELECT_REQUEST)

inline EduUmassCsGnsserverGnsappPacketPacket_PacketType *EduUmassCsGnsserverGnsappPacketPacket_PacketType_get_SELECT_RESPONSE();
J2OBJC_ENUM_CONSTANT(EduUmassCsGnsserverGnsappPacketPacket_PacketType, SELECT_RESPONSE)

inline EduUmassCsGnsserverGnsappPacketPacket_PacketType *EduUmassCsGnsserverGnsappPacketPacket_PacketType_get_PAXOS_PACKET();
J2OBJC_ENUM_CONSTANT(EduUmassCsGnsserverGnsappPacketPacket_PacketType, PAXOS_PACKET)

inline EduUmassCsGnsserverGnsappPacketPacket_PacketType *EduUmassCsGnsserverGnsappPacketPacket_PacketType_get_STOP();
J2OBJC_ENUM_CONSTANT(EduUmassCsGnsserverGnsappPacketPacket_PacketType, STOP)

inline EduUmassCsGnsserverGnsappPacketPacket_PacketType *EduUmassCsGnsserverGnsappPacketPacket_PacketType_get_NOOP();
J2OBJC_ENUM_CONSTANT(EduUmassCsGnsserverGnsappPacketPacket_PacketType, NOOP)

inline EduUmassCsGnsserverGnsappPacketPacket_PacketType *EduUmassCsGnsserverGnsappPacketPacket_PacketType_get_TEST_NOOP();
J2OBJC_ENUM_CONSTANT(EduUmassCsGnsserverGnsappPacketPacket_PacketType, TEST_NOOP)

FOUNDATION_EXPORT EduUmassCsGnsserverGnsappPacketPacket_PacketType *EduUmassCsGnsserverGnsappPacketPacket_PacketType_getPacketTypeWithInt_(jint number);

FOUNDATION_EXPORT IOSObjectArray *EduUmassCsGnsserverGnsappPacketPacket_PacketType_values();

FOUNDATION_EXPORT EduUmassCsGnsserverGnsappPacketPacket_PacketType *EduUmassCsGnsserverGnsappPacketPacket_PacketType_valueOfWithNSString_(NSString *name);

FOUNDATION_EXPORT EduUmassCsGnsserverGnsappPacketPacket_PacketType *EduUmassCsGnsserverGnsappPacketPacket_PacketType_fromOrdinal(NSUInteger ordinal);

J2OBJC_TYPE_LITERAL_HEADER(EduUmassCsGnsserverGnsappPacketPacket_PacketType)

#endif

#pragma pop_macro("INCLUDE_ALL_EduUmassCsGnsserverGnsappPacketPacket")
