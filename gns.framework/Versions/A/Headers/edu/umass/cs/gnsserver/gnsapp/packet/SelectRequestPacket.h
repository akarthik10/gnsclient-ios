//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: ./GNS/src/edu/umass/cs/gnsserver/gnsapp/packet/SelectRequestPacket.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_EduUmassCsGnsserverGnsappPacketSelectRequestPacket")
#ifdef RESTRICT_EduUmassCsGnsserverGnsappPacketSelectRequestPacket
#define INCLUDE_ALL_EduUmassCsGnsserverGnsappPacketSelectRequestPacket 0
#else
#define INCLUDE_ALL_EduUmassCsGnsserverGnsappPacketSelectRequestPacket 1
#endif
#undef RESTRICT_EduUmassCsGnsserverGnsappPacketSelectRequestPacket

#if !defined (EduUmassCsGnsserverGnsappPacketSelectRequestPacket_) && (INCLUDE_ALL_EduUmassCsGnsserverGnsappPacketSelectRequestPacket || defined(INCLUDE_EduUmassCsGnsserverGnsappPacketSelectRequestPacket))
#define EduUmassCsGnsserverGnsappPacketSelectRequestPacket_

#define RESTRICT_EduUmassCsGnsserverGnsappPacketBasicPacketWithNSReturnAddress 1
#define INCLUDE_EduUmassCsGnsserverGnsappPacketBasicPacketWithNSReturnAddress 1
#include "edu/umass/cs/gnsserver/gnsapp/packet/BasicPacketWithNSReturnAddress.h"

#define RESTRICT_EduUmassCsGigapaxosInterfacesClientRequest 1
#define INCLUDE_EduUmassCsGigapaxosInterfacesClientRequest 1
#include "edu/umass/cs/gigapaxos/interfaces/ClientRequest.h"

@class EduUmassCsGnsserverGnsappPacketSelectGroupBehavior;
@class EduUmassCsGnsserverGnsappPacketSelectOperation;
@class IOSByteArray;
@class OrgJsonJSONObject;

@interface EduUmassCsGnsserverGnsappPacketSelectRequestPacket : EduUmassCsGnsserverGnsappPacketBasicPacketWithNSReturnAddress < EduUmassCsGigapaxosInterfacesClientRequest >

#pragma mark Public

- (instancetype)initWithOrgJsonJSONObject:(OrgJsonJSONObject *)json;

- (instancetype)initWithLong:(jlong)id_
withEduUmassCsGnsserverGnsappPacketSelectOperation:(EduUmassCsGnsserverGnsappPacketSelectOperation *)selectOperation
withEduUmassCsGnsserverGnsappPacketSelectGroupBehavior:(EduUmassCsGnsserverGnsappPacketSelectGroupBehavior *)groupBehavior
                withNSString:(NSString *)reader
                withNSString:(NSString *)key
                      withId:(id)value
                      withId:(id)otherValue;

- (void)addToJSONObjectWithOrgJsonJSONObject:(OrgJsonJSONObject *)json;

- (jint)getCcpQueryId;

- (EduUmassCsGnsserverGnsappPacketSelectGroupBehavior *)getGroupBehavior;

- (NSString *)getGuid;

- (jlong)getId;

- (NSString *)getKey;

- (jint)getMinRefreshInterval;

- (jint)getNsQueryId;

- (id)getOtherValue;

- (NSString *)getQuery;

- (NSString *)getReader;

- (jlong)getRequestID;

- (id<EduUmassCsGigapaxosInterfacesClientRequest>)getResponse;

- (EduUmassCsGnsserverGnsappPacketSelectOperation *)getSelectOperation;

- (NSString *)getServiceName;

- (id)getSummary;

- (id)getValue;

+ (EduUmassCsGnsserverGnsappPacketSelectRequestPacket *)MakeGroupLookupRequestWithLong:(jlong)id_
                                                                          withNSString:(NSString *)reader
                                                                          withNSString:(NSString *)guid;

+ (EduUmassCsGnsserverGnsappPacketSelectRequestPacket *)MakeGroupSetupRequestWithLong:(jlong)id_
                                                                         withNSString:(NSString *)reader
                                                                         withNSString:(NSString *)query
                                                                         withNSString:(NSString *)guid
                                                                              withInt:(jint)refreshInterval;

+ (EduUmassCsGnsserverGnsappPacketSelectRequestPacket *)MakeQueryRequestWithLong:(jlong)id_
                                                                    withNSString:(NSString *)reader
                                                                    withNSString:(NSString *)query;

- (void)setCCPQueryIdWithInt:(jint)ccpQueryId;

- (void)setNsQueryIdWithInt:(jint)nsQueryId;

- (void)setQueryWithNSString:(NSString *)query;

- (void)setRequestIdWithLong:(jlong)requestId;

- (OrgJsonJSONObject *)toJSONObject;

@end

J2OBJC_EMPTY_STATIC_INIT(EduUmassCsGnsserverGnsappPacketSelectRequestPacket)

FOUNDATION_EXPORT void EduUmassCsGnsserverGnsappPacketSelectRequestPacket_initWithLong_withEduUmassCsGnsserverGnsappPacketSelectOperation_withEduUmassCsGnsserverGnsappPacketSelectGroupBehavior_withNSString_withNSString_withId_withId_(EduUmassCsGnsserverGnsappPacketSelectRequestPacket *self, jlong id_, EduUmassCsGnsserverGnsappPacketSelectOperation *selectOperation, EduUmassCsGnsserverGnsappPacketSelectGroupBehavior *groupBehavior, NSString *reader, NSString *key, id value, id otherValue);

FOUNDATION_EXPORT EduUmassCsGnsserverGnsappPacketSelectRequestPacket *new_EduUmassCsGnsserverGnsappPacketSelectRequestPacket_initWithLong_withEduUmassCsGnsserverGnsappPacketSelectOperation_withEduUmassCsGnsserverGnsappPacketSelectGroupBehavior_withNSString_withNSString_withId_withId_(jlong id_, EduUmassCsGnsserverGnsappPacketSelectOperation *selectOperation, EduUmassCsGnsserverGnsappPacketSelectGroupBehavior *groupBehavior, NSString *reader, NSString *key, id value, id otherValue) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT EduUmassCsGnsserverGnsappPacketSelectRequestPacket *create_EduUmassCsGnsserverGnsappPacketSelectRequestPacket_initWithLong_withEduUmassCsGnsserverGnsappPacketSelectOperation_withEduUmassCsGnsserverGnsappPacketSelectGroupBehavior_withNSString_withNSString_withId_withId_(jlong id_, EduUmassCsGnsserverGnsappPacketSelectOperation *selectOperation, EduUmassCsGnsserverGnsappPacketSelectGroupBehavior *groupBehavior, NSString *reader, NSString *key, id value, id otherValue);

FOUNDATION_EXPORT EduUmassCsGnsserverGnsappPacketSelectRequestPacket *EduUmassCsGnsserverGnsappPacketSelectRequestPacket_MakeQueryRequestWithLong_withNSString_withNSString_(jlong id_, NSString *reader, NSString *query);

FOUNDATION_EXPORT EduUmassCsGnsserverGnsappPacketSelectRequestPacket *EduUmassCsGnsserverGnsappPacketSelectRequestPacket_MakeGroupSetupRequestWithLong_withNSString_withNSString_withNSString_withInt_(jlong id_, NSString *reader, NSString *query, NSString *guid, jint refreshInterval);

FOUNDATION_EXPORT EduUmassCsGnsserverGnsappPacketSelectRequestPacket *EduUmassCsGnsserverGnsappPacketSelectRequestPacket_MakeGroupLookupRequestWithLong_withNSString_withNSString_(jlong id_, NSString *reader, NSString *guid);

FOUNDATION_EXPORT void EduUmassCsGnsserverGnsappPacketSelectRequestPacket_initWithOrgJsonJSONObject_(EduUmassCsGnsserverGnsappPacketSelectRequestPacket *self, OrgJsonJSONObject *json);

FOUNDATION_EXPORT EduUmassCsGnsserverGnsappPacketSelectRequestPacket *new_EduUmassCsGnsserverGnsappPacketSelectRequestPacket_initWithOrgJsonJSONObject_(OrgJsonJSONObject *json) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT EduUmassCsGnsserverGnsappPacketSelectRequestPacket *create_EduUmassCsGnsserverGnsappPacketSelectRequestPacket_initWithOrgJsonJSONObject_(OrgJsonJSONObject *json);

J2OBJC_TYPE_LITERAL_HEADER(EduUmassCsGnsserverGnsappPacketSelectRequestPacket)

#endif

#pragma pop_macro("INCLUDE_ALL_EduUmassCsGnsserverGnsappPacketSelectRequestPacket")