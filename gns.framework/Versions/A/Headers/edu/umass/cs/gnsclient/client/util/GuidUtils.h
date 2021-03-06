//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: ./GNS/src/edu/umass/cs/gnsclient/client/util/GuidUtils.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_EduUmassCsGnsclientClientUtilGuidUtils")
#ifdef RESTRICT_EduUmassCsGnsclientClientUtilGuidUtils
#define INCLUDE_ALL_EduUmassCsGnsclientClientUtilGuidUtils 0
#else
#define INCLUDE_ALL_EduUmassCsGnsclientClientUtilGuidUtils 1
#endif
#undef RESTRICT_EduUmassCsGnsclientClientUtilGuidUtils

#if !defined (EduUmassCsGnsclientClientUtilGuidUtils_) && (INCLUDE_ALL_EduUmassCsGnsclientClientUtilGuidUtils || defined(INCLUDE_EduUmassCsGnsclientClientUtilGuidUtils))
#define EduUmassCsGnsclientClientUtilGuidUtils_

@class EduUmassCsGnsclientClientGNSClient;
@class EduUmassCsGnsclientClientGNSClientCommands;
@class EduUmassCsGnsclientClientHttpHttpClient;
@class EduUmassCsGnsclientClientUtilGuidEntry;

@interface EduUmassCsGnsclientClientUtilGuidUtils : NSObject

#pragma mark Public

- (instancetype)init;

+ (EduUmassCsGnsclientClientUtilGuidEntry *)createAndSaveGuidEntryWithNSString:(NSString *)alias
                                                                  withNSString:(NSString *)hostport;

+ (EduUmassCsGnsclientClientUtilGuidEntry *)getGUIDKeysWithNSString:(NSString *)name;

+ (EduUmassCsGnsclientClientUtilGuidEntry *)lookupGuidEntryFromDatabaseWithEduUmassCsGnsclientClientGNSClient:(EduUmassCsGnsclientClientGNSClient *)client
                                                                                                 withNSString:(NSString *)name;

+ (EduUmassCsGnsclientClientUtilGuidEntry *)lookupGuidEntryFromDatabaseWithEduUmassCsGnsclientClientGNSClientCommands:(EduUmassCsGnsclientClientGNSClientCommands *)client
                                                                                                         withNSString:(NSString *)name;

+ (EduUmassCsGnsclientClientUtilGuidEntry *)lookupGuidEntryFromDatabaseWithEduUmassCsGnsclientClientHttpHttpClient:(EduUmassCsGnsclientClientHttpHttpClient *)client
                                                                                                      withNSString:(NSString *)name;

+ (EduUmassCsGnsclientClientUtilGuidEntry *)lookupGuidEntryFromDatabaseWithNSString:(NSString *)gnsInstance
                                                                       withNSString:(NSString *)name;

+ (EduUmassCsGnsclientClientUtilGuidEntry *)lookupOrCreateAccountGuidWithEduUmassCsGnsclientClientGNSClient:(EduUmassCsGnsclientClientGNSClient *)client
                                                                                               withNSString:(NSString *)name
                                                                                               withNSString:(NSString *)password;

+ (EduUmassCsGnsclientClientUtilGuidEntry *)lookupOrCreateAccountGuidWithEduUmassCsGnsclientClientGNSClient:(EduUmassCsGnsclientClientGNSClient *)client
                                                                                               withNSString:(NSString *)name
                                                                                               withNSString:(NSString *)password
                                                                                                withBoolean:(jboolean)verbose;

+ (EduUmassCsGnsclientClientUtilGuidEntry *)lookupOrCreateAccountGuidWithEduUmassCsGnsclientClientGNSClientCommands:(EduUmassCsGnsclientClientGNSClientCommands *)client
                                                                                                       withNSString:(NSString *)name
                                                                                                       withNSString:(NSString *)password;

+ (EduUmassCsGnsclientClientUtilGuidEntry *)lookupOrCreateAccountGuidWithEduUmassCsGnsclientClientGNSClientCommands:(EduUmassCsGnsclientClientGNSClientCommands *)client
                                                                                                       withNSString:(NSString *)name
                                                                                                       withNSString:(NSString *)password
                                                                                                        withBoolean:(jboolean)verbose;

+ (EduUmassCsGnsclientClientUtilGuidEntry *)lookupOrCreateAccountGuidWithEduUmassCsGnsclientClientHttpHttpClient:(EduUmassCsGnsclientClientHttpHttpClient *)client
                                                                                                    withNSString:(NSString *)name
                                                                                                    withNSString:(NSString *)password;

+ (EduUmassCsGnsclientClientUtilGuidEntry *)lookupOrCreateAccountGuidWithEduUmassCsGnsclientClientHttpHttpClient:(EduUmassCsGnsclientClientHttpHttpClient *)client
                                                                                                    withNSString:(NSString *)name
                                                                                                    withNSString:(NSString *)password
                                                                                                     withBoolean:(jboolean)verbose;

+ (EduUmassCsGnsclientClientUtilGuidEntry *)lookupOrCreateAccountGuidSecuredWithEduUmassCsGnsclientClientGNSClientCommands:(EduUmassCsGnsclientClientGNSClientCommands *)client
                                                                                                              withNSString:(NSString *)name
                                                                                                              withNSString:(NSString *)password
                                                                                                               withBoolean:(jboolean)verbose;

+ (EduUmassCsGnsclientClientUtilGuidEntry *)lookupOrCreateGuidWithEduUmassCsGnsclientClientGNSClient:(EduUmassCsGnsclientClientGNSClient *)client
                                                          withEduUmassCsGnsclientClientUtilGuidEntry:(EduUmassCsGnsclientClientUtilGuidEntry *)accountGuid
                                                                                        withNSString:(NSString *)name;

+ (EduUmassCsGnsclientClientUtilGuidEntry *)lookupOrCreateGuidWithEduUmassCsGnsclientClientGNSClient:(EduUmassCsGnsclientClientGNSClient *)client
                                                          withEduUmassCsGnsclientClientUtilGuidEntry:(EduUmassCsGnsclientClientUtilGuidEntry *)accountGuid
                                                                                        withNSString:(NSString *)name
                                                                                         withBoolean:(jboolean)verbose;

+ (EduUmassCsGnsclientClientUtilGuidEntry *)lookupOrCreateGuidWithEduUmassCsGnsclientClientGNSClientCommands:(EduUmassCsGnsclientClientGNSClientCommands *)client
                                                                  withEduUmassCsGnsclientClientUtilGuidEntry:(EduUmassCsGnsclientClientUtilGuidEntry *)accountGuid
                                                                                                withNSString:(NSString *)name;

+ (EduUmassCsGnsclientClientUtilGuidEntry *)lookupOrCreateGuidWithEduUmassCsGnsclientClientGNSClientCommands:(EduUmassCsGnsclientClientGNSClientCommands *)client
                                                                  withEduUmassCsGnsclientClientUtilGuidEntry:(EduUmassCsGnsclientClientUtilGuidEntry *)accountGuid
                                                                                                withNSString:(NSString *)name
                                                                                                 withBoolean:(jboolean)verbose;

+ (EduUmassCsGnsclientClientUtilGuidEntry *)lookupOrCreateGuidEntryWithNSString:(NSString *)alias
                                                                   withNSString:(NSString *)gnsInstance;

@end

J2OBJC_EMPTY_STATIC_INIT(EduUmassCsGnsclientClientUtilGuidUtils)

FOUNDATION_EXPORT void EduUmassCsGnsclientClientUtilGuidUtils_init(EduUmassCsGnsclientClientUtilGuidUtils *self);

FOUNDATION_EXPORT EduUmassCsGnsclientClientUtilGuidUtils *new_EduUmassCsGnsclientClientUtilGuidUtils_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT EduUmassCsGnsclientClientUtilGuidUtils *create_EduUmassCsGnsclientClientUtilGuidUtils_init();

FOUNDATION_EXPORT EduUmassCsGnsclientClientUtilGuidEntry *EduUmassCsGnsclientClientUtilGuidUtils_lookupOrCreateAccountGuidWithEduUmassCsGnsclientClientGNSClientCommands_withNSString_withNSString_(EduUmassCsGnsclientClientGNSClientCommands *client, NSString *name, NSString *password);

FOUNDATION_EXPORT EduUmassCsGnsclientClientUtilGuidEntry *EduUmassCsGnsclientClientUtilGuidUtils_lookupOrCreateAccountGuidWithEduUmassCsGnsclientClientGNSClient_withNSString_withNSString_(EduUmassCsGnsclientClientGNSClient *client, NSString *name, NSString *password);

FOUNDATION_EXPORT EduUmassCsGnsclientClientUtilGuidEntry *EduUmassCsGnsclientClientUtilGuidUtils_lookupOrCreateAccountGuidWithEduUmassCsGnsclientClientGNSClient_withNSString_withNSString_withBoolean_(EduUmassCsGnsclientClientGNSClient *client, NSString *name, NSString *password, jboolean verbose);

FOUNDATION_EXPORT EduUmassCsGnsclientClientUtilGuidEntry *EduUmassCsGnsclientClientUtilGuidUtils_lookupOrCreateAccountGuidWithEduUmassCsGnsclientClientGNSClientCommands_withNSString_withNSString_withBoolean_(EduUmassCsGnsclientClientGNSClientCommands *client, NSString *name, NSString *password, jboolean verbose);

FOUNDATION_EXPORT EduUmassCsGnsclientClientUtilGuidEntry *EduUmassCsGnsclientClientUtilGuidUtils_lookupOrCreateAccountGuidSecuredWithEduUmassCsGnsclientClientGNSClientCommands_withNSString_withNSString_withBoolean_(EduUmassCsGnsclientClientGNSClientCommands *client, NSString *name, NSString *password, jboolean verbose);

FOUNDATION_EXPORT EduUmassCsGnsclientClientUtilGuidEntry *EduUmassCsGnsclientClientUtilGuidUtils_lookupOrCreateAccountGuidWithEduUmassCsGnsclientClientHttpHttpClient_withNSString_withNSString_(EduUmassCsGnsclientClientHttpHttpClient *client, NSString *name, NSString *password);

FOUNDATION_EXPORT EduUmassCsGnsclientClientUtilGuidEntry *EduUmassCsGnsclientClientUtilGuidUtils_lookupOrCreateAccountGuidWithEduUmassCsGnsclientClientHttpHttpClient_withNSString_withNSString_withBoolean_(EduUmassCsGnsclientClientHttpHttpClient *client, NSString *name, NSString *password, jboolean verbose);

FOUNDATION_EXPORT EduUmassCsGnsclientClientUtilGuidEntry *EduUmassCsGnsclientClientUtilGuidUtils_lookupOrCreateGuidWithEduUmassCsGnsclientClientGNSClientCommands_withEduUmassCsGnsclientClientUtilGuidEntry_withNSString_(EduUmassCsGnsclientClientGNSClientCommands *client, EduUmassCsGnsclientClientUtilGuidEntry *accountGuid, NSString *name);

FOUNDATION_EXPORT EduUmassCsGnsclientClientUtilGuidEntry *EduUmassCsGnsclientClientUtilGuidUtils_lookupOrCreateGuidWithEduUmassCsGnsclientClientGNSClientCommands_withEduUmassCsGnsclientClientUtilGuidEntry_withNSString_withBoolean_(EduUmassCsGnsclientClientGNSClientCommands *client, EduUmassCsGnsclientClientUtilGuidEntry *accountGuid, NSString *name, jboolean verbose);

FOUNDATION_EXPORT EduUmassCsGnsclientClientUtilGuidEntry *EduUmassCsGnsclientClientUtilGuidUtils_lookupOrCreateGuidWithEduUmassCsGnsclientClientGNSClient_withEduUmassCsGnsclientClientUtilGuidEntry_withNSString_(EduUmassCsGnsclientClientGNSClient *client, EduUmassCsGnsclientClientUtilGuidEntry *accountGuid, NSString *name);

FOUNDATION_EXPORT EduUmassCsGnsclientClientUtilGuidEntry *EduUmassCsGnsclientClientUtilGuidUtils_lookupOrCreateGuidWithEduUmassCsGnsclientClientGNSClient_withEduUmassCsGnsclientClientUtilGuidEntry_withNSString_withBoolean_(EduUmassCsGnsclientClientGNSClient *client, EduUmassCsGnsclientClientUtilGuidEntry *accountGuid, NSString *name, jboolean verbose);

FOUNDATION_EXPORT EduUmassCsGnsclientClientUtilGuidEntry *EduUmassCsGnsclientClientUtilGuidUtils_lookupGuidEntryFromDatabaseWithEduUmassCsGnsclientClientGNSClientCommands_withNSString_(EduUmassCsGnsclientClientGNSClientCommands *client, NSString *name);

FOUNDATION_EXPORT EduUmassCsGnsclientClientUtilGuidEntry *EduUmassCsGnsclientClientUtilGuidUtils_getGUIDKeysWithNSString_(NSString *name);

FOUNDATION_EXPORT EduUmassCsGnsclientClientUtilGuidEntry *EduUmassCsGnsclientClientUtilGuidUtils_lookupGuidEntryFromDatabaseWithNSString_withNSString_(NSString *gnsInstance, NSString *name);

FOUNDATION_EXPORT EduUmassCsGnsclientClientUtilGuidEntry *EduUmassCsGnsclientClientUtilGuidUtils_lookupGuidEntryFromDatabaseWithEduUmassCsGnsclientClientGNSClient_withNSString_(EduUmassCsGnsclientClientGNSClient *client, NSString *name);

FOUNDATION_EXPORT EduUmassCsGnsclientClientUtilGuidEntry *EduUmassCsGnsclientClientUtilGuidUtils_lookupGuidEntryFromDatabaseWithEduUmassCsGnsclientClientHttpHttpClient_withNSString_(EduUmassCsGnsclientClientHttpHttpClient *client, NSString *name);

FOUNDATION_EXPORT EduUmassCsGnsclientClientUtilGuidEntry *EduUmassCsGnsclientClientUtilGuidUtils_createAndSaveGuidEntryWithNSString_withNSString_(NSString *alias, NSString *hostport);

FOUNDATION_EXPORT EduUmassCsGnsclientClientUtilGuidEntry *EduUmassCsGnsclientClientUtilGuidUtils_lookupOrCreateGuidEntryWithNSString_withNSString_(NSString *alias, NSString *gnsInstance);

J2OBJC_TYPE_LITERAL_HEADER(EduUmassCsGnsclientClientUtilGuidUtils)

#endif

#pragma pop_macro("INCLUDE_ALL_EduUmassCsGnsclientClientUtilGuidUtils")
