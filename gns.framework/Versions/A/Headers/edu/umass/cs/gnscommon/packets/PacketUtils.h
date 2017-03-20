//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: ./GNS/src/edu/umass/cs/gnscommon/packets/PacketUtils.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_EduUmassCsGnscommonPacketsPacketUtils")
#ifdef RESTRICT_EduUmassCsGnscommonPacketsPacketUtils
#define INCLUDE_ALL_EduUmassCsGnscommonPacketsPacketUtils 0
#else
#define INCLUDE_ALL_EduUmassCsGnscommonPacketsPacketUtils 1
#endif
#undef RESTRICT_EduUmassCsGnscommonPacketsPacketUtils

#if !defined (EduUmassCsGnscommonPacketsPacketUtils_) && (INCLUDE_ALL_EduUmassCsGnscommonPacketsPacketUtils || defined(INCLUDE_EduUmassCsGnscommonPacketsPacketUtils))
#define EduUmassCsGnscommonPacketsPacketUtils_

@class EduUmassCsGnscommonPacketsCommandPacket;
@class EduUmassCsGnscommonPacketsResponsePacket;
@class EduUmassCsGnsserverGnsappPacketSelectResponsePacket;
@class OrgJsonJSONObject;
@protocol EduUmassCsGnsserverInterfacesInternalRequestHeader;

@interface EduUmassCsGnscommonPacketsPacketUtils : NSObject

#pragma mark Public

- (instancetype)init;

+ (OrgJsonJSONObject *)getCommandWithEduUmassCsGnscommonPacketsCommandPacket:(EduUmassCsGnscommonPacketsCommandPacket *)command;

+ (id<EduUmassCsGnsserverInterfacesInternalRequestHeader>)getInternalRequestHeaderWithEduUmassCsGnscommonPacketsCommandPacket:(EduUmassCsGnscommonPacketsCommandPacket *)commandPacket;

+ (id<EduUmassCsGnsserverInterfacesInternalRequestHeader>)getInternalRequestHeaderWithEduUmassCsGnsserverGnsappPacketSelectResponsePacket:(EduUmassCsGnsserverGnsappPacketSelectResponsePacket *)selectResponse;

+ (jint)getLengthEstimateWithId:(id)command;

+ (NSString *)getOriginatingGUIDWithEduUmassCsGnscommonPacketsCommandPacket:(EduUmassCsGnscommonPacketsCommandPacket *)commandPacket;

+ (EduUmassCsGnscommonPacketsCommandPacket *)setResultWithEduUmassCsGnscommonPacketsCommandPacket:(EduUmassCsGnscommonPacketsCommandPacket *)command
                                                     withEduUmassCsGnscommonPacketsResponsePacket:(EduUmassCsGnscommonPacketsResponsePacket *)response;

@end

J2OBJC_EMPTY_STATIC_INIT(EduUmassCsGnscommonPacketsPacketUtils)

FOUNDATION_EXPORT void EduUmassCsGnscommonPacketsPacketUtils_init(EduUmassCsGnscommonPacketsPacketUtils *self);

FOUNDATION_EXPORT EduUmassCsGnscommonPacketsPacketUtils *new_EduUmassCsGnscommonPacketsPacketUtils_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT EduUmassCsGnscommonPacketsPacketUtils *create_EduUmassCsGnscommonPacketsPacketUtils_init();

FOUNDATION_EXPORT EduUmassCsGnscommonPacketsCommandPacket *EduUmassCsGnscommonPacketsPacketUtils_setResultWithEduUmassCsGnscommonPacketsCommandPacket_withEduUmassCsGnscommonPacketsResponsePacket_(EduUmassCsGnscommonPacketsCommandPacket *command, EduUmassCsGnscommonPacketsResponsePacket *response);

FOUNDATION_EXPORT OrgJsonJSONObject *EduUmassCsGnscommonPacketsPacketUtils_getCommandWithEduUmassCsGnscommonPacketsCommandPacket_(EduUmassCsGnscommonPacketsCommandPacket *command);

FOUNDATION_EXPORT NSString *EduUmassCsGnscommonPacketsPacketUtils_getOriginatingGUIDWithEduUmassCsGnscommonPacketsCommandPacket_(EduUmassCsGnscommonPacketsCommandPacket *commandPacket);

FOUNDATION_EXPORT id<EduUmassCsGnsserverInterfacesInternalRequestHeader> EduUmassCsGnscommonPacketsPacketUtils_getInternalRequestHeaderWithEduUmassCsGnsserverGnsappPacketSelectResponsePacket_(EduUmassCsGnsserverGnsappPacketSelectResponsePacket *selectResponse);

FOUNDATION_EXPORT id<EduUmassCsGnsserverInterfacesInternalRequestHeader> EduUmassCsGnscommonPacketsPacketUtils_getInternalRequestHeaderWithEduUmassCsGnscommonPacketsCommandPacket_(EduUmassCsGnscommonPacketsCommandPacket *commandPacket);

FOUNDATION_EXPORT jint EduUmassCsGnscommonPacketsPacketUtils_getLengthEstimateWithId_(id command);

J2OBJC_TYPE_LITERAL_HEADER(EduUmassCsGnscommonPacketsPacketUtils)

#endif

#pragma pop_macro("INCLUDE_ALL_EduUmassCsGnscommonPacketsPacketUtils")
