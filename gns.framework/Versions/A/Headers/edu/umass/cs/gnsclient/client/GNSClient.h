//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: ./GNS/src/edu/umass/cs/gnsclient/client/GNSClient.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_EduUmassCsGnsclientClientGNSClient")
#ifdef RESTRICT_EduUmassCsGnsclientClientGNSClient
#define INCLUDE_ALL_EduUmassCsGnsclientClientGNSClient 0
#else
#define INCLUDE_ALL_EduUmassCsGnsclientClientGNSClient 1
#endif
#undef RESTRICT_EduUmassCsGnsclientClientGNSClient

#if !defined (EduUmassCsGnsclientClientGNSClient_) && (INCLUDE_ALL_EduUmassCsGnsclientClientGNSClient || defined(INCLUDE_EduUmassCsGnsclientClientGNSClient))
#define EduUmassCsGnsclientClientGNSClient_

@class EduUmassCsGnsclientClientGNSClient_AsyncClient;
@class EduUmassCsGnscommonPacketsCommandPacket;
@class EduUmassCsGnscommonPacketsResponsePacket;
@class IOSObjectArray;
@class JavaNetInetSocketAddress;
@protocol EduUmassCsGigapaxosInterfacesCallback;
@protocol EduUmassCsGigapaxosInterfacesRequestFuture;
@protocol JavaUtilSet;

@interface EduUmassCsGnsclientClientGNSClient : NSObject {
 @public
  EduUmassCsGnsclientClientGNSClient_AsyncClient *asyncClient_;
}

#pragma mark Public

- (instancetype)init;

- (instancetype)initWithJavaNetInetSocketAddress:(JavaNetInetSocketAddress *)anyReconfigurator;

- (instancetype)initWithNSString:(NSString *)anyReconfiguratorHostName;

- (void)checkConnectivity;

- (void)close;

- (EduUmassCsGnscommonPacketsCommandPacket *)executeWithEduUmassCsGnscommonPacketsCommandPacket:(EduUmassCsGnscommonPacketsCommandPacket *)command;

- (id<EduUmassCsGigapaxosInterfacesRequestFuture>)executeWithEduUmassCsGnscommonPacketsCommandPacket:(EduUmassCsGnscommonPacketsCommandPacket *)commandPacket
                                                           withEduUmassCsGigapaxosInterfacesCallback:(id<EduUmassCsGigapaxosInterfacesCallback>)callback;

- (EduUmassCsGnscommonPacketsCommandPacket *)executeWithEduUmassCsGnscommonPacketsCommandPacket:(EduUmassCsGnscommonPacketsCommandPacket *)command
                                                                                       withLong:(jlong)timeout;

- (id<EduUmassCsGigapaxosInterfacesRequestFuture>)executeAsyncWithEduUmassCsGnscommonPacketsCommandPacket:(EduUmassCsGnscommonPacketsCommandPacket *)commandPacket;

+ (NSString *)getGNSProvider;

- (JavaNetInetSocketAddress *)getGNSProxy;

+ (void)mainWithNSStringArray:(IOSObjectArray *)args;

- (EduUmassCsGnsclientClientGNSClient *)setForceCoordinatedReadsWithBoolean:(jboolean)forceCoordinatedReads;

- (EduUmassCsGnsclientClientGNSClient *)setForcedTimeoutWithLong:(jlong)t;

- (void)setGNSProxyWithJavaNetInetSocketAddress:(JavaNetInetSocketAddress *)LNS;

- (EduUmassCsGnsclientClientGNSClient *)setNumRetriesUponTimeoutWithInt:(jint)retries;

- (NSString *)description;

#pragma mark Protected

- (instancetype)initWithBoolean:(jboolean)checkConnectivity;

- (EduUmassCsGnscommonPacketsResponsePacket *)getCommandValueReturnPacketWithEduUmassCsGnscommonPacketsCommandPacket:(EduUmassCsGnscommonPacketsCommandPacket *)packet;

- (NSString *)getLabel;

- (id<JavaUtilSet>)getRequestTypes;

- (EduUmassCsGnscommonPacketsResponsePacket *)getResponsePacketWithEduUmassCsGnscommonPacketsCommandPacket:(EduUmassCsGnscommonPacketsCommandPacket *)commandPacket
                                                                                                  withLong:(jlong)timeout;

+ (id<JavaUtilSet>)getStaticReconfigurators;

- (jboolean)isForceCoordinatedReads;

@end

J2OBJC_STATIC_INIT(EduUmassCsGnsclientClientGNSClient)

J2OBJC_FIELD_SETTER(EduUmassCsGnsclientClientGNSClient, asyncClient_, EduUmassCsGnsclientClientGNSClient_AsyncClient *)

FOUNDATION_EXPORT void EduUmassCsGnsclientClientGNSClient_init(EduUmassCsGnsclientClientGNSClient *self);

FOUNDATION_EXPORT EduUmassCsGnsclientClientGNSClient *new_EduUmassCsGnsclientClientGNSClient_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT EduUmassCsGnsclientClientGNSClient *create_EduUmassCsGnsclientClientGNSClient_init();

FOUNDATION_EXPORT void EduUmassCsGnsclientClientGNSClient_initWithJavaNetInetSocketAddress_(EduUmassCsGnsclientClientGNSClient *self, JavaNetInetSocketAddress *anyReconfigurator);

FOUNDATION_EXPORT EduUmassCsGnsclientClientGNSClient *new_EduUmassCsGnsclientClientGNSClient_initWithJavaNetInetSocketAddress_(JavaNetInetSocketAddress *anyReconfigurator) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT EduUmassCsGnsclientClientGNSClient *create_EduUmassCsGnsclientClientGNSClient_initWithJavaNetInetSocketAddress_(JavaNetInetSocketAddress *anyReconfigurator);

FOUNDATION_EXPORT void EduUmassCsGnsclientClientGNSClient_initWithNSString_(EduUmassCsGnsclientClientGNSClient *self, NSString *anyReconfiguratorHostName);

FOUNDATION_EXPORT EduUmassCsGnsclientClientGNSClient *new_EduUmassCsGnsclientClientGNSClient_initWithNSString_(NSString *anyReconfiguratorHostName) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT EduUmassCsGnsclientClientGNSClient *create_EduUmassCsGnsclientClientGNSClient_initWithNSString_(NSString *anyReconfiguratorHostName);

FOUNDATION_EXPORT void EduUmassCsGnsclientClientGNSClient_initWithBoolean_(EduUmassCsGnsclientClientGNSClient *self, jboolean checkConnectivity);

FOUNDATION_EXPORT EduUmassCsGnsclientClientGNSClient *new_EduUmassCsGnsclientClientGNSClient_initWithBoolean_(jboolean checkConnectivity) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT EduUmassCsGnsclientClientGNSClient *create_EduUmassCsGnsclientClientGNSClient_initWithBoolean_(jboolean checkConnectivity);

FOUNDATION_EXPORT id<JavaUtilSet> EduUmassCsGnsclientClientGNSClient_getStaticReconfigurators();

FOUNDATION_EXPORT NSString *EduUmassCsGnsclientClientGNSClient_getGNSProvider();

FOUNDATION_EXPORT void EduUmassCsGnsclientClientGNSClient_mainWithNSStringArray_(IOSObjectArray *args);

J2OBJC_TYPE_LITERAL_HEADER(EduUmassCsGnsclientClientGNSClient)

#endif

#if !defined (EduUmassCsGnsclientClientGNSClient_AsyncClient_) && (INCLUDE_ALL_EduUmassCsGnsclientClientGNSClient || defined(INCLUDE_EduUmassCsGnsclientClientGNSClient_AsyncClient))
#define EduUmassCsGnsclientClientGNSClient_AsyncClient_

#define RESTRICT_EduUmassCsReconfigurationReconfigurableAppClientAsync 1
#define INCLUDE_EduUmassCsReconfigurationReconfigurableAppClientAsync 1
#include "edu/umass/cs/reconfiguration/ReconfigurableAppClientAsync.h"

#define RESTRICT_EduUmassCsGigapaxosInterfacesAppRequestParserBytes 1
#define INCLUDE_EduUmassCsGigapaxosInterfacesAppRequestParserBytes 1
#include "edu/umass/cs/gigapaxos/interfaces/AppRequestParserBytes.h"

@class EduUmassCsNioNioutilsNIOHeader;
@class EduUmassCsNioSSLDataProcessingWorker_SSL_MODES;
@class IOSByteArray;
@class OrgJsonJSONObject;
@protocol EduUmassCsGigapaxosInterfacesRequest;
@protocol JavaUtilSet;

@interface EduUmassCsGnsclientClientGNSClient_AsyncClient : EduUmassCsReconfigurationReconfigurableAppClientAsync < EduUmassCsGigapaxosInterfacesAppRequestParserBytes >

#pragma mark Public

- (instancetype)initWithJavaUtilSet:(id<JavaUtilSet>)reconfigurators
withEduUmassCsNioSSLDataProcessingWorker_SSL_MODES:(EduUmassCsNioSSLDataProcessingWorker_SSL_MODES *)sslMode
                            withInt:(jint)clientPortOffset
                        withBoolean:(jboolean)checkConnectivity;

- (id<JavaUtilSet>)getMutualAuthRequestTypes;

- (id<EduUmassCsGigapaxosInterfacesRequest>)getRequestWithByteArray:(IOSByteArray *)bytes
                                 withEduUmassCsNioNioutilsNIOHeader:(EduUmassCsNioNioutilsNIOHeader *)header;

- (id<EduUmassCsGigapaxosInterfacesRequest>)getRequestWithNSString:(NSString *)msg;

- (id<EduUmassCsGigapaxosInterfacesRequest>)getRequestFromJSONWithOrgJsonJSONObject:(OrgJsonJSONObject *)json;

- (id<JavaUtilSet>)getRequestTypes;

@end

J2OBJC_STATIC_INIT(EduUmassCsGnsclientClientGNSClient_AsyncClient)

FOUNDATION_EXPORT void EduUmassCsGnsclientClientGNSClient_AsyncClient_initWithJavaUtilSet_withEduUmassCsNioSSLDataProcessingWorker_SSL_MODES_withInt_withBoolean_(EduUmassCsGnsclientClientGNSClient_AsyncClient *self, id<JavaUtilSet> reconfigurators, EduUmassCsNioSSLDataProcessingWorker_SSL_MODES *sslMode, jint clientPortOffset, jboolean checkConnectivity);

FOUNDATION_EXPORT EduUmassCsGnsclientClientGNSClient_AsyncClient *new_EduUmassCsGnsclientClientGNSClient_AsyncClient_initWithJavaUtilSet_withEduUmassCsNioSSLDataProcessingWorker_SSL_MODES_withInt_withBoolean_(id<JavaUtilSet> reconfigurators, EduUmassCsNioSSLDataProcessingWorker_SSL_MODES *sslMode, jint clientPortOffset, jboolean checkConnectivity) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT EduUmassCsGnsclientClientGNSClient_AsyncClient *create_EduUmassCsGnsclientClientGNSClient_AsyncClient_initWithJavaUtilSet_withEduUmassCsNioSSLDataProcessingWorker_SSL_MODES_withInt_withBoolean_(id<JavaUtilSet> reconfigurators, EduUmassCsNioSSLDataProcessingWorker_SSL_MODES *sslMode, jint clientPortOffset, jboolean checkConnectivity);

J2OBJC_TYPE_LITERAL_HEADER(EduUmassCsGnsclientClientGNSClient_AsyncClient)

#endif

#pragma pop_macro("INCLUDE_ALL_EduUmassCsGnsclientClientGNSClient")
