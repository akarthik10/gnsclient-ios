//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: ./gigapaxos/src/edu/umass/cs/reconfiguration/reconfigurationpackets/RCRecordRequest.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_EduUmassCsReconfigurationReconfigurationpacketsRCRecordRequest")
#ifdef RESTRICT_EduUmassCsReconfigurationReconfigurationpacketsRCRecordRequest
#define INCLUDE_ALL_EduUmassCsReconfigurationReconfigurationpacketsRCRecordRequest 0
#else
#define INCLUDE_ALL_EduUmassCsReconfigurationReconfigurationpacketsRCRecordRequest 1
#endif
#undef RESTRICT_EduUmassCsReconfigurationReconfigurationpacketsRCRecordRequest

#if !defined (EduUmassCsReconfigurationReconfigurationpacketsRCRecordRequest_) && (INCLUDE_ALL_EduUmassCsReconfigurationReconfigurationpacketsRCRecordRequest || defined(INCLUDE_EduUmassCsReconfigurationReconfigurationpacketsRCRecordRequest))
#define EduUmassCsReconfigurationReconfigurationpacketsRCRecordRequest_

#define RESTRICT_EduUmassCsReconfigurationReconfigurationpacketsBasicReconfigurationPacket 1
#define INCLUDE_EduUmassCsReconfigurationReconfigurationpacketsBasicReconfigurationPacket 1
#include "edu/umass/cs/reconfiguration/reconfigurationpackets/BasicReconfigurationPacket.h"

#define RESTRICT_EduUmassCsReconfigurationInterfacesReplicableRequest 1
#define INCLUDE_EduUmassCsReconfigurationInterfacesReplicableRequest 1
#include "edu/umass/cs/reconfiguration/interfaces/ReplicableRequest.h"

#define RESTRICT_EduUmassCsReconfigurationInterfacesReconfigurableRequest 1
#define INCLUDE_EduUmassCsReconfigurationInterfacesReconfigurableRequest 1
#include "edu/umass/cs/reconfiguration/interfaces/ReconfigurableRequest.h"

#define RESTRICT_EduUmassCsGigapaxosInterfacesSummarizableRequest 1
#define INCLUDE_EduUmassCsGigapaxosInterfacesSummarizableRequest 1
#include "edu/umass/cs/gigapaxos/interfaces/SummarizableRequest.h"

@class EduUmassCsReconfigurationReconfigurationpacketsRCRecordRequest_RequestTypes;
@class EduUmassCsReconfigurationReconfigurationpacketsReconfigurationPacket_PacketType;
@class EduUmassCsReconfigurationReconfigurationpacketsStartEpoch;
@class JavaUtilLoggingLevel;
@class OrgJsonJSONObject;
@protocol EduUmassCsNioInterfacesIntegerPacketType;
@protocol EduUmassCsNioInterfacesStringifiable;

@interface EduUmassCsReconfigurationReconfigurationpacketsRCRecordRequest : EduUmassCsReconfigurationReconfigurationpacketsBasicReconfigurationPacket < EduUmassCsReconfigurationInterfacesReplicableRequest, EduUmassCsReconfigurationInterfacesReconfigurableRequest, EduUmassCsGigapaxosInterfacesSummarizableRequest > {
 @public
  EduUmassCsReconfigurationReconfigurationpacketsStartEpoch *startEpoch_;
}

#pragma mark Public

- (instancetype)initWithOrgJsonJSONObject:(OrgJsonJSONObject *)json
 withEduUmassCsNioInterfacesStringifiable:(id<EduUmassCsNioInterfacesStringifiable>)unstringer;

- (instancetype)initWithId:(id)initiator
withEduUmassCsReconfigurationReconfigurationpacketsStartEpoch:(EduUmassCsReconfigurationReconfigurationpacketsStartEpoch *)startEpoch
withEduUmassCsReconfigurationReconfigurationpacketsRCRecordRequest_RequestTypes:(EduUmassCsReconfigurationReconfigurationpacketsRCRecordRequest_RequestTypes *)reqType;

- (jboolean)isEqual:(id)o;

- (EduUmassCsReconfigurationReconfigurationpacketsRCRecordRequest_RequestTypes *)getRCRequestType;

+ (NSString *)getRCRequestTypeCompactWithEduUmassCsReconfigurationReconfigurationpacketsRCRecordRequest_RequestTypes:(EduUmassCsReconfigurationReconfigurationpacketsRCRecordRequest_RequestTypes *)rType;

- (jlong)getRequestID;

- (id<EduUmassCsNioInterfacesIntegerPacketType>)getRequestType;

- (NSString *)getSummary;

- (NSString *)getSummaryWithJavaUtilLoggingLevel:(JavaUtilLoggingLevel *)level;

- (EduUmassCsReconfigurationReconfigurationpacketsReconfigurationPacket_PacketType *)getType;

- (NSUInteger)hash;

- (jboolean)isActiveNodeConfigChange;

- (jboolean)isDeleteIntent;

- (jboolean)isDeleteIntentOrPrevDropComplete;

- (jboolean)isNodeConfigChange;

- (jboolean)isReconfigurationComplete;

- (jboolean)isReconfigurationIntent;

- (jboolean)isReconfigurationMerge;

- (jboolean)isReconfigurationPrevDropComplete;

- (jboolean)isSplitIntent;

- (jboolean)isStop;

- (jboolean)lessThanWithEduUmassCsReconfigurationReconfigurationpacketsRCRecordRequest:(EduUmassCsReconfigurationReconfigurationpacketsRCRecordRequest *)req2;

- (jboolean)needsCoordination;

- (void)setNeedsCoordinationWithBoolean:(jboolean)b;

- (OrgJsonJSONObject *)toJSONObjectImpl;

@end

J2OBJC_EMPTY_STATIC_INIT(EduUmassCsReconfigurationReconfigurationpacketsRCRecordRequest)

J2OBJC_FIELD_SETTER(EduUmassCsReconfigurationReconfigurationpacketsRCRecordRequest, startEpoch_, EduUmassCsReconfigurationReconfigurationpacketsStartEpoch *)

FOUNDATION_EXPORT void EduUmassCsReconfigurationReconfigurationpacketsRCRecordRequest_initWithId_withEduUmassCsReconfigurationReconfigurationpacketsStartEpoch_withEduUmassCsReconfigurationReconfigurationpacketsRCRecordRequest_RequestTypes_(EduUmassCsReconfigurationReconfigurationpacketsRCRecordRequest *self, id initiator, EduUmassCsReconfigurationReconfigurationpacketsStartEpoch *startEpoch, EduUmassCsReconfigurationReconfigurationpacketsRCRecordRequest_RequestTypes *reqType);

FOUNDATION_EXPORT EduUmassCsReconfigurationReconfigurationpacketsRCRecordRequest *new_EduUmassCsReconfigurationReconfigurationpacketsRCRecordRequest_initWithId_withEduUmassCsReconfigurationReconfigurationpacketsStartEpoch_withEduUmassCsReconfigurationReconfigurationpacketsRCRecordRequest_RequestTypes_(id initiator, EduUmassCsReconfigurationReconfigurationpacketsStartEpoch *startEpoch, EduUmassCsReconfigurationReconfigurationpacketsRCRecordRequest_RequestTypes *reqType) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT EduUmassCsReconfigurationReconfigurationpacketsRCRecordRequest *create_EduUmassCsReconfigurationReconfigurationpacketsRCRecordRequest_initWithId_withEduUmassCsReconfigurationReconfigurationpacketsStartEpoch_withEduUmassCsReconfigurationReconfigurationpacketsRCRecordRequest_RequestTypes_(id initiator, EduUmassCsReconfigurationReconfigurationpacketsStartEpoch *startEpoch, EduUmassCsReconfigurationReconfigurationpacketsRCRecordRequest_RequestTypes *reqType);

FOUNDATION_EXPORT void EduUmassCsReconfigurationReconfigurationpacketsRCRecordRequest_initWithOrgJsonJSONObject_withEduUmassCsNioInterfacesStringifiable_(EduUmassCsReconfigurationReconfigurationpacketsRCRecordRequest *self, OrgJsonJSONObject *json, id<EduUmassCsNioInterfacesStringifiable> unstringer);

FOUNDATION_EXPORT EduUmassCsReconfigurationReconfigurationpacketsRCRecordRequest *new_EduUmassCsReconfigurationReconfigurationpacketsRCRecordRequest_initWithOrgJsonJSONObject_withEduUmassCsNioInterfacesStringifiable_(OrgJsonJSONObject *json, id<EduUmassCsNioInterfacesStringifiable> unstringer) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT EduUmassCsReconfigurationReconfigurationpacketsRCRecordRequest *create_EduUmassCsReconfigurationReconfigurationpacketsRCRecordRequest_initWithOrgJsonJSONObject_withEduUmassCsNioInterfacesStringifiable_(OrgJsonJSONObject *json, id<EduUmassCsNioInterfacesStringifiable> unstringer);

FOUNDATION_EXPORT NSString *EduUmassCsReconfigurationReconfigurationpacketsRCRecordRequest_getRCRequestTypeCompactWithEduUmassCsReconfigurationReconfigurationpacketsRCRecordRequest_RequestTypes_(EduUmassCsReconfigurationReconfigurationpacketsRCRecordRequest_RequestTypes *rType);

J2OBJC_TYPE_LITERAL_HEADER(EduUmassCsReconfigurationReconfigurationpacketsRCRecordRequest)

#endif

#if !defined (EduUmassCsReconfigurationReconfigurationpacketsRCRecordRequest_RequestTypes_) && (INCLUDE_ALL_EduUmassCsReconfigurationReconfigurationpacketsRCRecordRequest || defined(INCLUDE_EduUmassCsReconfigurationReconfigurationpacketsRCRecordRequest_RequestTypes))
#define EduUmassCsReconfigurationReconfigurationpacketsRCRecordRequest_RequestTypes_

#define RESTRICT_JavaLangEnum 1
#define INCLUDE_JavaLangEnum 1
#include "java/lang/Enum.h"

@class IOSObjectArray;

typedef NS_ENUM(NSUInteger, EduUmassCsReconfigurationReconfigurationpacketsRCRecordRequest_RequestTypes_Enum) {
  EduUmassCsReconfigurationReconfigurationpacketsRCRecordRequest_RequestTypes_Enum_RECONFIGURATION_INTENT = 0,
  EduUmassCsReconfigurationReconfigurationpacketsRCRecordRequest_RequestTypes_Enum_RECONFIGURATION_COMPLETE = 1,
  EduUmassCsReconfigurationReconfigurationpacketsRCRecordRequest_RequestTypes_Enum_RECONFIGURATION_PREV_DROPPED = 2,
  EduUmassCsReconfigurationReconfigurationpacketsRCRecordRequest_RequestTypes_Enum_RECONFIGURATION_MERGE = 3,
};

@interface EduUmassCsReconfigurationReconfigurationpacketsRCRecordRequest_RequestTypes : JavaLangEnum < NSCopying >

#pragma mark Public

+ (EduUmassCsReconfigurationReconfigurationpacketsRCRecordRequest_RequestTypes *)valueOfWithNSString:(NSString *)name;

+ (IOSObjectArray *)values;

#pragma mark Package-Private

- (id)copyWithZone:(NSZone *)zone;

@end

J2OBJC_STATIC_INIT(EduUmassCsReconfigurationReconfigurationpacketsRCRecordRequest_RequestTypes)

/*! INTERNAL ONLY - Use enum accessors declared below. */
FOUNDATION_EXPORT EduUmassCsReconfigurationReconfigurationpacketsRCRecordRequest_RequestTypes *EduUmassCsReconfigurationReconfigurationpacketsRCRecordRequest_RequestTypes_values_[];

inline EduUmassCsReconfigurationReconfigurationpacketsRCRecordRequest_RequestTypes *EduUmassCsReconfigurationReconfigurationpacketsRCRecordRequest_RequestTypes_get_RECONFIGURATION_INTENT();
J2OBJC_ENUM_CONSTANT(EduUmassCsReconfigurationReconfigurationpacketsRCRecordRequest_RequestTypes, RECONFIGURATION_INTENT)

inline EduUmassCsReconfigurationReconfigurationpacketsRCRecordRequest_RequestTypes *EduUmassCsReconfigurationReconfigurationpacketsRCRecordRequest_RequestTypes_get_RECONFIGURATION_COMPLETE();
J2OBJC_ENUM_CONSTANT(EduUmassCsReconfigurationReconfigurationpacketsRCRecordRequest_RequestTypes, RECONFIGURATION_COMPLETE)

inline EduUmassCsReconfigurationReconfigurationpacketsRCRecordRequest_RequestTypes *EduUmassCsReconfigurationReconfigurationpacketsRCRecordRequest_RequestTypes_get_RECONFIGURATION_PREV_DROPPED();
J2OBJC_ENUM_CONSTANT(EduUmassCsReconfigurationReconfigurationpacketsRCRecordRequest_RequestTypes, RECONFIGURATION_PREV_DROPPED)

inline EduUmassCsReconfigurationReconfigurationpacketsRCRecordRequest_RequestTypes *EduUmassCsReconfigurationReconfigurationpacketsRCRecordRequest_RequestTypes_get_RECONFIGURATION_MERGE();
J2OBJC_ENUM_CONSTANT(EduUmassCsReconfigurationReconfigurationpacketsRCRecordRequest_RequestTypes, RECONFIGURATION_MERGE)

FOUNDATION_EXPORT IOSObjectArray *EduUmassCsReconfigurationReconfigurationpacketsRCRecordRequest_RequestTypes_values();

FOUNDATION_EXPORT EduUmassCsReconfigurationReconfigurationpacketsRCRecordRequest_RequestTypes *EduUmassCsReconfigurationReconfigurationpacketsRCRecordRequest_RequestTypes_valueOfWithNSString_(NSString *name);

FOUNDATION_EXPORT EduUmassCsReconfigurationReconfigurationpacketsRCRecordRequest_RequestTypes *EduUmassCsReconfigurationReconfigurationpacketsRCRecordRequest_RequestTypes_fromOrdinal(NSUInteger ordinal);

J2OBJC_TYPE_LITERAL_HEADER(EduUmassCsReconfigurationReconfigurationpacketsRCRecordRequest_RequestTypes)

#endif

#pragma pop_macro("INCLUDE_ALL_EduUmassCsReconfigurationReconfigurationpacketsRCRecordRequest")
