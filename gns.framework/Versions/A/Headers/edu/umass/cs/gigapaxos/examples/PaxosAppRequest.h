//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: ./gigapaxos/src/edu/umass/cs/gigapaxos/examples/PaxosAppRequest.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_EduUmassCsGigapaxosExamplesPaxosAppRequest")
#ifdef RESTRICT_EduUmassCsGigapaxosExamplesPaxosAppRequest
#define INCLUDE_ALL_EduUmassCsGigapaxosExamplesPaxosAppRequest 0
#else
#define INCLUDE_ALL_EduUmassCsGigapaxosExamplesPaxosAppRequest 1
#endif
#undef RESTRICT_EduUmassCsGigapaxosExamplesPaxosAppRequest

#if !defined (EduUmassCsGigapaxosExamplesPaxosAppRequest_) && (INCLUDE_ALL_EduUmassCsGigapaxosExamplesPaxosAppRequest || defined(INCLUDE_EduUmassCsGigapaxosExamplesPaxosAppRequest))
#define EduUmassCsGigapaxosExamplesPaxosAppRequest_

#define RESTRICT_EduUmassCsNioJSONPacket 1
#define INCLUDE_EduUmassCsNioJSONPacket 1
#include "edu/umass/cs/nio/JSONPacket.h"

#define RESTRICT_EduUmassCsReconfigurationInterfacesReplicableRequest 1
#define INCLUDE_EduUmassCsReconfigurationInterfacesReplicableRequest 1
#include "edu/umass/cs/reconfiguration/interfaces/ReplicableRequest.h"

#define RESTRICT_EduUmassCsGigapaxosInterfacesClientRequest 1
#define INCLUDE_EduUmassCsGigapaxosInterfacesClientRequest 1
#include "edu/umass/cs/gigapaxos/interfaces/ClientRequest.h"

@class IOSByteArray;
@class IOSObjectArray;
@class JavaNetInetSocketAddress;
@class OrgJsonJSONObject;
@protocol EduUmassCsNioInterfacesIntegerPacketType;

@interface EduUmassCsGigapaxosExamplesPaxosAppRequest : EduUmassCsNioJSONPacket < EduUmassCsReconfigurationInterfacesReplicableRequest, EduUmassCsGigapaxosInterfacesClientRequest >

#pragma mark Public

- (instancetype)initWithOrgJsonJSONObject:(OrgJsonJSONObject *)json;

- (instancetype)initWithNSString:(NSString *)name
                         withInt:(jint)epoch
                        withLong:(jlong)id_
                    withNSString:(NSString *)value
withEduUmassCsNioInterfacesIntegerPacketType:(id<EduUmassCsNioInterfacesIntegerPacketType>)type
                     withBoolean:(jboolean)stop;

- (instancetype)initWithNSString:(NSString *)name
                        withLong:(jlong)id_
                    withNSString:(NSString *)value
withEduUmassCsNioInterfacesIntegerPacketType:(id<EduUmassCsNioInterfacesIntegerPacketType>)type
                     withBoolean:(jboolean)stop;

- (instancetype)initWithNSString:(NSString *)name
                    withNSString:(NSString *)value
withEduUmassCsNioInterfacesIntegerPacketType:(id<EduUmassCsNioInterfacesIntegerPacketType>)type
                     withBoolean:(jboolean)stop;

- (JavaNetInetSocketAddress *)getClientAddress;

- (jlong)getRequestID;

- (id<EduUmassCsNioInterfacesIntegerPacketType>)getRequestType;

- (id<EduUmassCsGigapaxosInterfacesClientRequest>)getResponse;

- (JavaNetInetSocketAddress *)getSenderAddress;

- (NSString *)getServiceName;

- (NSString *)getValue;

+ (void)mainWithNSStringArray:(IOSObjectArray *)args;

- (jboolean)needsCoordination;

- (void)setNeedsCoordinationWithBoolean:(jboolean)b;

- (void)setResponseWithNSString:(NSString *)response;

- (OrgJsonJSONObject *)toJSONObjectImpl;

@end

J2OBJC_EMPTY_STATIC_INIT(EduUmassCsGigapaxosExamplesPaxosAppRequest)

FOUNDATION_EXPORT void EduUmassCsGigapaxosExamplesPaxosAppRequest_initWithNSString_withInt_withLong_withNSString_withEduUmassCsNioInterfacesIntegerPacketType_withBoolean_(EduUmassCsGigapaxosExamplesPaxosAppRequest *self, NSString *name, jint epoch, jlong id_, NSString *value, id<EduUmassCsNioInterfacesIntegerPacketType> type, jboolean stop);

FOUNDATION_EXPORT EduUmassCsGigapaxosExamplesPaxosAppRequest *new_EduUmassCsGigapaxosExamplesPaxosAppRequest_initWithNSString_withInt_withLong_withNSString_withEduUmassCsNioInterfacesIntegerPacketType_withBoolean_(NSString *name, jint epoch, jlong id_, NSString *value, id<EduUmassCsNioInterfacesIntegerPacketType> type, jboolean stop) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT EduUmassCsGigapaxosExamplesPaxosAppRequest *create_EduUmassCsGigapaxosExamplesPaxosAppRequest_initWithNSString_withInt_withLong_withNSString_withEduUmassCsNioInterfacesIntegerPacketType_withBoolean_(NSString *name, jint epoch, jlong id_, NSString *value, id<EduUmassCsNioInterfacesIntegerPacketType> type, jboolean stop);

FOUNDATION_EXPORT void EduUmassCsGigapaxosExamplesPaxosAppRequest_initWithNSString_withLong_withNSString_withEduUmassCsNioInterfacesIntegerPacketType_withBoolean_(EduUmassCsGigapaxosExamplesPaxosAppRequest *self, NSString *name, jlong id_, NSString *value, id<EduUmassCsNioInterfacesIntegerPacketType> type, jboolean stop);

FOUNDATION_EXPORT EduUmassCsGigapaxosExamplesPaxosAppRequest *new_EduUmassCsGigapaxosExamplesPaxosAppRequest_initWithNSString_withLong_withNSString_withEduUmassCsNioInterfacesIntegerPacketType_withBoolean_(NSString *name, jlong id_, NSString *value, id<EduUmassCsNioInterfacesIntegerPacketType> type, jboolean stop) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT EduUmassCsGigapaxosExamplesPaxosAppRequest *create_EduUmassCsGigapaxosExamplesPaxosAppRequest_initWithNSString_withLong_withNSString_withEduUmassCsNioInterfacesIntegerPacketType_withBoolean_(NSString *name, jlong id_, NSString *value, id<EduUmassCsNioInterfacesIntegerPacketType> type, jboolean stop);

FOUNDATION_EXPORT void EduUmassCsGigapaxosExamplesPaxosAppRequest_initWithNSString_withNSString_withEduUmassCsNioInterfacesIntegerPacketType_withBoolean_(EduUmassCsGigapaxosExamplesPaxosAppRequest *self, NSString *name, NSString *value, id<EduUmassCsNioInterfacesIntegerPacketType> type, jboolean stop);

FOUNDATION_EXPORT EduUmassCsGigapaxosExamplesPaxosAppRequest *new_EduUmassCsGigapaxosExamplesPaxosAppRequest_initWithNSString_withNSString_withEduUmassCsNioInterfacesIntegerPacketType_withBoolean_(NSString *name, NSString *value, id<EduUmassCsNioInterfacesIntegerPacketType> type, jboolean stop) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT EduUmassCsGigapaxosExamplesPaxosAppRequest *create_EduUmassCsGigapaxosExamplesPaxosAppRequest_initWithNSString_withNSString_withEduUmassCsNioInterfacesIntegerPacketType_withBoolean_(NSString *name, NSString *value, id<EduUmassCsNioInterfacesIntegerPacketType> type, jboolean stop);

FOUNDATION_EXPORT void EduUmassCsGigapaxosExamplesPaxosAppRequest_initWithOrgJsonJSONObject_(EduUmassCsGigapaxosExamplesPaxosAppRequest *self, OrgJsonJSONObject *json);

FOUNDATION_EXPORT EduUmassCsGigapaxosExamplesPaxosAppRequest *new_EduUmassCsGigapaxosExamplesPaxosAppRequest_initWithOrgJsonJSONObject_(OrgJsonJSONObject *json) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT EduUmassCsGigapaxosExamplesPaxosAppRequest *create_EduUmassCsGigapaxosExamplesPaxosAppRequest_initWithOrgJsonJSONObject_(OrgJsonJSONObject *json);

FOUNDATION_EXPORT void EduUmassCsGigapaxosExamplesPaxosAppRequest_mainWithNSStringArray_(IOSObjectArray *args);

J2OBJC_TYPE_LITERAL_HEADER(EduUmassCsGigapaxosExamplesPaxosAppRequest)

#endif

#if !defined (EduUmassCsGigapaxosExamplesPaxosAppRequest_PacketType_) && (INCLUDE_ALL_EduUmassCsGigapaxosExamplesPaxosAppRequest || defined(INCLUDE_EduUmassCsGigapaxosExamplesPaxosAppRequest_PacketType))
#define EduUmassCsGigapaxosExamplesPaxosAppRequest_PacketType_

#define RESTRICT_JavaLangEnum 1
#define INCLUDE_JavaLangEnum 1
#include "java/lang/Enum.h"

#define RESTRICT_EduUmassCsNioInterfacesIntegerPacketType 1
#define INCLUDE_EduUmassCsNioInterfacesIntegerPacketType 1
#include "edu/umass/cs/nio/interfaces/IntegerPacketType.h"

@class IOSObjectArray;

typedef NS_ENUM(NSUInteger, EduUmassCsGigapaxosExamplesPaxosAppRequest_PacketType_Enum) {
  EduUmassCsGigapaxosExamplesPaxosAppRequest_PacketType_Enum_DEFAULT_APP_REQUEST = 0,
  EduUmassCsGigapaxosExamplesPaxosAppRequest_PacketType_Enum_APP_REQUEST_NO_COORDINATION = 1,
};

@interface EduUmassCsGigapaxosExamplesPaxosAppRequest_PacketType : JavaLangEnum < NSCopying, EduUmassCsNioInterfacesIntegerPacketType >

#pragma mark Public

- (jint)getInt;

+ (EduUmassCsGigapaxosExamplesPaxosAppRequest_PacketType *)getPacketTypeWithInt:(jint)type;

+ (EduUmassCsGigapaxosExamplesPaxosAppRequest_PacketType *)valueOfWithNSString:(NSString *)name;

+ (IOSObjectArray *)values;

#pragma mark Package-Private

- (id)copyWithZone:(NSZone *)zone;

@end

J2OBJC_STATIC_INIT(EduUmassCsGigapaxosExamplesPaxosAppRequest_PacketType)

/*! INTERNAL ONLY - Use enum accessors declared below. */
FOUNDATION_EXPORT EduUmassCsGigapaxosExamplesPaxosAppRequest_PacketType *EduUmassCsGigapaxosExamplesPaxosAppRequest_PacketType_values_[];

inline EduUmassCsGigapaxosExamplesPaxosAppRequest_PacketType *EduUmassCsGigapaxosExamplesPaxosAppRequest_PacketType_get_DEFAULT_APP_REQUEST();
J2OBJC_ENUM_CONSTANT(EduUmassCsGigapaxosExamplesPaxosAppRequest_PacketType, DEFAULT_APP_REQUEST)

inline EduUmassCsGigapaxosExamplesPaxosAppRequest_PacketType *EduUmassCsGigapaxosExamplesPaxosAppRequest_PacketType_get_APP_REQUEST_NO_COORDINATION();
J2OBJC_ENUM_CONSTANT(EduUmassCsGigapaxosExamplesPaxosAppRequest_PacketType, APP_REQUEST_NO_COORDINATION)

FOUNDATION_EXPORT EduUmassCsGigapaxosExamplesPaxosAppRequest_PacketType *EduUmassCsGigapaxosExamplesPaxosAppRequest_PacketType_getPacketTypeWithInt_(jint type);

FOUNDATION_EXPORT IOSObjectArray *EduUmassCsGigapaxosExamplesPaxosAppRequest_PacketType_values();

FOUNDATION_EXPORT EduUmassCsGigapaxosExamplesPaxosAppRequest_PacketType *EduUmassCsGigapaxosExamplesPaxosAppRequest_PacketType_valueOfWithNSString_(NSString *name);

FOUNDATION_EXPORT EduUmassCsGigapaxosExamplesPaxosAppRequest_PacketType *EduUmassCsGigapaxosExamplesPaxosAppRequest_PacketType_fromOrdinal(NSUInteger ordinal);

J2OBJC_TYPE_LITERAL_HEADER(EduUmassCsGigapaxosExamplesPaxosAppRequest_PacketType)

#endif

#if !defined (EduUmassCsGigapaxosExamplesPaxosAppRequest_Keys_) && (INCLUDE_ALL_EduUmassCsGigapaxosExamplesPaxosAppRequest || defined(INCLUDE_EduUmassCsGigapaxosExamplesPaxosAppRequest_Keys))
#define EduUmassCsGigapaxosExamplesPaxosAppRequest_Keys_

#define RESTRICT_JavaLangEnum 1
#define INCLUDE_JavaLangEnum 1
#include "java/lang/Enum.h"

@class IOSObjectArray;

typedef NS_ENUM(NSUInteger, EduUmassCsGigapaxosExamplesPaxosAppRequest_Keys_Enum) {
  EduUmassCsGigapaxosExamplesPaxosAppRequest_Keys_Enum_SERVICE_NAME = 0,
  EduUmassCsGigapaxosExamplesPaxosAppRequest_Keys_Enum_EPOCH = 1,
  EduUmassCsGigapaxosExamplesPaxosAppRequest_Keys_Enum_REQUEST_ID = 2,
  EduUmassCsGigapaxosExamplesPaxosAppRequest_Keys_Enum_REQUEST_VALUE = 3,
  EduUmassCsGigapaxosExamplesPaxosAppRequest_Keys_Enum_STOP = 4,
  EduUmassCsGigapaxosExamplesPaxosAppRequest_Keys_Enum_IS_COORDINATION = 5,
  EduUmassCsGigapaxosExamplesPaxosAppRequest_Keys_Enum_CLIENT_ADDRESS = 6,
  EduUmassCsGigapaxosExamplesPaxosAppRequest_Keys_Enum_ACK = 7,
  EduUmassCsGigapaxosExamplesPaxosAppRequest_Keys_Enum_RESPONSE_VALUE = 8,
};

@interface EduUmassCsGigapaxosExamplesPaxosAppRequest_Keys : JavaLangEnum < NSCopying >

#pragma mark Public

+ (EduUmassCsGigapaxosExamplesPaxosAppRequest_Keys *)valueOfWithNSString:(NSString *)name;

+ (IOSObjectArray *)values;

#pragma mark Package-Private

- (id)copyWithZone:(NSZone *)zone;

@end

J2OBJC_STATIC_INIT(EduUmassCsGigapaxosExamplesPaxosAppRequest_Keys)

/*! INTERNAL ONLY - Use enum accessors declared below. */
FOUNDATION_EXPORT EduUmassCsGigapaxosExamplesPaxosAppRequest_Keys *EduUmassCsGigapaxosExamplesPaxosAppRequest_Keys_values_[];

inline EduUmassCsGigapaxosExamplesPaxosAppRequest_Keys *EduUmassCsGigapaxosExamplesPaxosAppRequest_Keys_get_SERVICE_NAME();
J2OBJC_ENUM_CONSTANT(EduUmassCsGigapaxosExamplesPaxosAppRequest_Keys, SERVICE_NAME)

inline EduUmassCsGigapaxosExamplesPaxosAppRequest_Keys *EduUmassCsGigapaxosExamplesPaxosAppRequest_Keys_get_EPOCH();
J2OBJC_ENUM_CONSTANT(EduUmassCsGigapaxosExamplesPaxosAppRequest_Keys, EPOCH)

inline EduUmassCsGigapaxosExamplesPaxosAppRequest_Keys *EduUmassCsGigapaxosExamplesPaxosAppRequest_Keys_get_REQUEST_ID();
J2OBJC_ENUM_CONSTANT(EduUmassCsGigapaxosExamplesPaxosAppRequest_Keys, REQUEST_ID)

inline EduUmassCsGigapaxosExamplesPaxosAppRequest_Keys *EduUmassCsGigapaxosExamplesPaxosAppRequest_Keys_get_REQUEST_VALUE();
J2OBJC_ENUM_CONSTANT(EduUmassCsGigapaxosExamplesPaxosAppRequest_Keys, REQUEST_VALUE)

inline EduUmassCsGigapaxosExamplesPaxosAppRequest_Keys *EduUmassCsGigapaxosExamplesPaxosAppRequest_Keys_get_STOP();
J2OBJC_ENUM_CONSTANT(EduUmassCsGigapaxosExamplesPaxosAppRequest_Keys, STOP)

inline EduUmassCsGigapaxosExamplesPaxosAppRequest_Keys *EduUmassCsGigapaxosExamplesPaxosAppRequest_Keys_get_IS_COORDINATION();
J2OBJC_ENUM_CONSTANT(EduUmassCsGigapaxosExamplesPaxosAppRequest_Keys, IS_COORDINATION)

inline EduUmassCsGigapaxosExamplesPaxosAppRequest_Keys *EduUmassCsGigapaxosExamplesPaxosAppRequest_Keys_get_CLIENT_ADDRESS();
J2OBJC_ENUM_CONSTANT(EduUmassCsGigapaxosExamplesPaxosAppRequest_Keys, CLIENT_ADDRESS)

inline EduUmassCsGigapaxosExamplesPaxosAppRequest_Keys *EduUmassCsGigapaxosExamplesPaxosAppRequest_Keys_get_ACK();
J2OBJC_ENUM_CONSTANT(EduUmassCsGigapaxosExamplesPaxosAppRequest_Keys, ACK)

inline EduUmassCsGigapaxosExamplesPaxosAppRequest_Keys *EduUmassCsGigapaxosExamplesPaxosAppRequest_Keys_get_RESPONSE_VALUE();
J2OBJC_ENUM_CONSTANT(EduUmassCsGigapaxosExamplesPaxosAppRequest_Keys, RESPONSE_VALUE)

FOUNDATION_EXPORT IOSObjectArray *EduUmassCsGigapaxosExamplesPaxosAppRequest_Keys_values();

FOUNDATION_EXPORT EduUmassCsGigapaxosExamplesPaxosAppRequest_Keys *EduUmassCsGigapaxosExamplesPaxosAppRequest_Keys_valueOfWithNSString_(NSString *name);

FOUNDATION_EXPORT EduUmassCsGigapaxosExamplesPaxosAppRequest_Keys *EduUmassCsGigapaxosExamplesPaxosAppRequest_Keys_fromOrdinal(NSUInteger ordinal);

J2OBJC_TYPE_LITERAL_HEADER(EduUmassCsGigapaxosExamplesPaxosAppRequest_Keys)

#endif

#pragma pop_macro("INCLUDE_ALL_EduUmassCsGigapaxosExamplesPaxosAppRequest")
