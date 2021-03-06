//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: ./gigapaxos/src/edu/umass/cs/reconfiguration/reconfigurationpackets/StartEpoch.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_EduUmassCsReconfigurationReconfigurationpacketsStartEpoch")
#ifdef RESTRICT_EduUmassCsReconfigurationReconfigurationpacketsStartEpoch
#define INCLUDE_ALL_EduUmassCsReconfigurationReconfigurationpacketsStartEpoch 0
#else
#define INCLUDE_ALL_EduUmassCsReconfigurationReconfigurationpacketsStartEpoch 1
#endif
#undef RESTRICT_EduUmassCsReconfigurationReconfigurationpacketsStartEpoch

#if !defined (EduUmassCsReconfigurationReconfigurationpacketsStartEpoch_) && (INCLUDE_ALL_EduUmassCsReconfigurationReconfigurationpacketsStartEpoch || defined(INCLUDE_EduUmassCsReconfigurationReconfigurationpacketsStartEpoch))
#define EduUmassCsReconfigurationReconfigurationpacketsStartEpoch_

#define RESTRICT_EduUmassCsReconfigurationReconfigurationpacketsBasicReconfigurationPacket 1
#define INCLUDE_EduUmassCsReconfigurationReconfigurationpacketsBasicReconfigurationPacket 1
#include "edu/umass/cs/reconfiguration/reconfigurationpackets/BasicReconfigurationPacket.h"

@class EduUmassCsReconfigurationReconfigurationpacketsReconfigurationPacket_PacketType;
@class IOSObjectArray;
@class JavaNetInetSocketAddress;
@class OrgJsonJSONObject;
@protocol EduUmassCsNioInterfacesStringifiable;
@protocol JavaUtilMap;
@protocol JavaUtilSet;

@interface EduUmassCsReconfigurationReconfigurationpacketsStartEpoch : EduUmassCsReconfigurationReconfigurationpacketsBasicReconfigurationPacket {
 @public
  id<JavaUtilSet> prevEpochGroup_;
  id<JavaUtilSet> curEpochGroup_;
  NSString *initialState_;
  JavaNetInetSocketAddress *creator_;
  JavaNetInetSocketAddress *receiver_;
  NSString *prevGroupName_;
  jint prevEpoch_;
  jboolean isMerge_;
  id<JavaUtilMap> newlyAddedNodes_;
  id<JavaUtilSet> mergees_;
}

#pragma mark Public

- (instancetype)initWithOrgJsonJSONObject:(OrgJsonJSONObject *)json
 withEduUmassCsNioInterfacesStringifiable:(id<EduUmassCsNioInterfacesStringifiable>)unstringer;

- (instancetype)initWithId:(id)initiator
withEduUmassCsReconfigurationReconfigurationpacketsStartEpoch:(EduUmassCsReconfigurationReconfigurationpacketsStartEpoch *)startEpoch;

- (instancetype)initWithId:(id)initiator
              withNSString:(NSString *)serviceName
                   withInt:(jint)epochNumber
           withJavaUtilSet:(id<JavaUtilSet>)curNodes
               withBoolean:(jboolean)passive;

- (instancetype)initWithId:(id)initiator
              withNSString:(NSString *)serviceName
                   withInt:(jint)epochNumber
           withJavaUtilSet:(id<JavaUtilSet>)curNodes
           withJavaUtilSet:(id<JavaUtilSet>)prevNodes
withJavaNetInetSocketAddress:(JavaNetInetSocketAddress *)creator
withJavaNetInetSocketAddress:(JavaNetInetSocketAddress *)receiver
withJavaNetInetSocketAddress:(JavaNetInetSocketAddress *)forwarder
              withNSString:(NSString *)initialState
           withJavaUtilMap:(id<JavaUtilMap>)nameStates
           withJavaUtilMap:(id<JavaUtilMap>)newlyAddedNodes;

- (instancetype)initWithId:(id)initiator
              withNSString:(NSString *)serviceName
                   withInt:(jint)epochNumber
           withJavaUtilSet:(id<JavaUtilSet>)curNodes
           withJavaUtilSet:(id<JavaUtilSet>)prevNodes
           withJavaUtilSet:(id<JavaUtilSet>)mergees;

- (instancetype)initWithId:(id)initiator
              withNSString:(NSString *)serviceName
                   withInt:(jint)epochNumber
           withJavaUtilSet:(id<JavaUtilSet>)curNodes
           withJavaUtilSet:(id<JavaUtilSet>)prevNodes
              withNSString:(NSString *)prevGroupName
               withBoolean:(jboolean)isMerge
                   withInt:(jint)prevEpoch;

- (instancetype)initWithEduUmassCsReconfigurationReconfigurationpacketsStartEpoch:(EduUmassCsReconfigurationReconfigurationpacketsStartEpoch *)startEpoch
                                                                     withNSString:(NSString *)initialState;

- (id<JavaUtilSet>)getCommonMembers;

- (id<JavaUtilSet>)getCurEpochGroup;

- (id<JavaUtilSet>)getDeletedNodes;

- (id)getFirstPrevEpochCandidate;

- (JavaNetInetSocketAddress *)getForwarder;

- (NSString *)getInitialState;

- (id<JavaUtilSet>)getInitiatorAsSet;

- (jlong)getInitTime;

- (id<JavaUtilSet>)getMergees;

- (JavaNetInetSocketAddress *)getMyReceiver;

- (id<JavaUtilMap>)getNameStates;

- (id<JavaUtilSet>)getNewlyAddedNodes;

- (id<JavaUtilSet>)getPrevEpochGroup;

- (jint)getPrevEpochNumber;

- (NSString *)getPrevGroupName;

- (EduUmassCsReconfigurationReconfigurationpacketsReconfigurationPacket_PacketType *)getType;

- (jboolean)hasCurEpochGroup;

- (jboolean)hasMergees;

- (jboolean)hasNewlyAddedNodes;

- (jboolean)hasPrevEpochGroup;

- (jboolean)isActiveNodeConfigChange;

- (jboolean)isBatchedCreate;

- (jboolean)isCreateRequest;

- (jboolean)isDeleteRequest;

- (jboolean)isInitEpoch;

- (jboolean)isMerge;

- (jboolean)isNodeConfigChange;

- (jboolean)isPassive;

- (jboolean)isRCNodeConfigChange;

- (jboolean)isSplit;

- (jboolean)isSplitOrMerge;

- (jboolean)noCurEpochGroup;

- (jboolean)noPrevEpochGroup;

- (EduUmassCsReconfigurationReconfigurationpacketsStartEpoch *)setFirstPrevEpochCandidateWithId:(id)node;

- (OrgJsonJSONObject *)toJSONObjectImpl;

#pragma mark Package-Private

+ (void)mainWithNSStringArray:(IOSObjectArray *)args;

@end

J2OBJC_EMPTY_STATIC_INIT(EduUmassCsReconfigurationReconfigurationpacketsStartEpoch)

J2OBJC_FIELD_SETTER(EduUmassCsReconfigurationReconfigurationpacketsStartEpoch, prevEpochGroup_, id<JavaUtilSet>)
J2OBJC_FIELD_SETTER(EduUmassCsReconfigurationReconfigurationpacketsStartEpoch, curEpochGroup_, id<JavaUtilSet>)
J2OBJC_FIELD_SETTER(EduUmassCsReconfigurationReconfigurationpacketsStartEpoch, initialState_, NSString *)
J2OBJC_FIELD_SETTER(EduUmassCsReconfigurationReconfigurationpacketsStartEpoch, creator_, JavaNetInetSocketAddress *)
J2OBJC_FIELD_SETTER(EduUmassCsReconfigurationReconfigurationpacketsStartEpoch, receiver_, JavaNetInetSocketAddress *)
J2OBJC_FIELD_SETTER(EduUmassCsReconfigurationReconfigurationpacketsStartEpoch, prevGroupName_, NSString *)
J2OBJC_FIELD_SETTER(EduUmassCsReconfigurationReconfigurationpacketsStartEpoch, newlyAddedNodes_, id<JavaUtilMap>)
J2OBJC_FIELD_SETTER(EduUmassCsReconfigurationReconfigurationpacketsStartEpoch, mergees_, id<JavaUtilSet>)

FOUNDATION_EXPORT void EduUmassCsReconfigurationReconfigurationpacketsStartEpoch_initWithId_withNSString_withInt_withJavaUtilSet_withBoolean_(EduUmassCsReconfigurationReconfigurationpacketsStartEpoch *self, id initiator, NSString *serviceName, jint epochNumber, id<JavaUtilSet> curNodes, jboolean passive);

FOUNDATION_EXPORT EduUmassCsReconfigurationReconfigurationpacketsStartEpoch *new_EduUmassCsReconfigurationReconfigurationpacketsStartEpoch_initWithId_withNSString_withInt_withJavaUtilSet_withBoolean_(id initiator, NSString *serviceName, jint epochNumber, id<JavaUtilSet> curNodes, jboolean passive) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT EduUmassCsReconfigurationReconfigurationpacketsStartEpoch *create_EduUmassCsReconfigurationReconfigurationpacketsStartEpoch_initWithId_withNSString_withInt_withJavaUtilSet_withBoolean_(id initiator, NSString *serviceName, jint epochNumber, id<JavaUtilSet> curNodes, jboolean passive);

FOUNDATION_EXPORT void EduUmassCsReconfigurationReconfigurationpacketsStartEpoch_initWithId_withNSString_withInt_withJavaUtilSet_withJavaUtilSet_withJavaUtilSet_(EduUmassCsReconfigurationReconfigurationpacketsStartEpoch *self, id initiator, NSString *serviceName, jint epochNumber, id<JavaUtilSet> curNodes, id<JavaUtilSet> prevNodes, id<JavaUtilSet> mergees);

FOUNDATION_EXPORT EduUmassCsReconfigurationReconfigurationpacketsStartEpoch *new_EduUmassCsReconfigurationReconfigurationpacketsStartEpoch_initWithId_withNSString_withInt_withJavaUtilSet_withJavaUtilSet_withJavaUtilSet_(id initiator, NSString *serviceName, jint epochNumber, id<JavaUtilSet> curNodes, id<JavaUtilSet> prevNodes, id<JavaUtilSet> mergees) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT EduUmassCsReconfigurationReconfigurationpacketsStartEpoch *create_EduUmassCsReconfigurationReconfigurationpacketsStartEpoch_initWithId_withNSString_withInt_withJavaUtilSet_withJavaUtilSet_withJavaUtilSet_(id initiator, NSString *serviceName, jint epochNumber, id<JavaUtilSet> curNodes, id<JavaUtilSet> prevNodes, id<JavaUtilSet> mergees);

FOUNDATION_EXPORT void EduUmassCsReconfigurationReconfigurationpacketsStartEpoch_initWithId_withNSString_withInt_withJavaUtilSet_withJavaUtilSet_withNSString_withBoolean_withInt_(EduUmassCsReconfigurationReconfigurationpacketsStartEpoch *self, id initiator, NSString *serviceName, jint epochNumber, id<JavaUtilSet> curNodes, id<JavaUtilSet> prevNodes, NSString *prevGroupName, jboolean isMerge, jint prevEpoch);

FOUNDATION_EXPORT EduUmassCsReconfigurationReconfigurationpacketsStartEpoch *new_EduUmassCsReconfigurationReconfigurationpacketsStartEpoch_initWithId_withNSString_withInt_withJavaUtilSet_withJavaUtilSet_withNSString_withBoolean_withInt_(id initiator, NSString *serviceName, jint epochNumber, id<JavaUtilSet> curNodes, id<JavaUtilSet> prevNodes, NSString *prevGroupName, jboolean isMerge, jint prevEpoch) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT EduUmassCsReconfigurationReconfigurationpacketsStartEpoch *create_EduUmassCsReconfigurationReconfigurationpacketsStartEpoch_initWithId_withNSString_withInt_withJavaUtilSet_withJavaUtilSet_withNSString_withBoolean_withInt_(id initiator, NSString *serviceName, jint epochNumber, id<JavaUtilSet> curNodes, id<JavaUtilSet> prevNodes, NSString *prevGroupName, jboolean isMerge, jint prevEpoch);

FOUNDATION_EXPORT void EduUmassCsReconfigurationReconfigurationpacketsStartEpoch_initWithId_withNSString_withInt_withJavaUtilSet_withJavaUtilSet_withJavaNetInetSocketAddress_withJavaNetInetSocketAddress_withJavaNetInetSocketAddress_withNSString_withJavaUtilMap_withJavaUtilMap_(EduUmassCsReconfigurationReconfigurationpacketsStartEpoch *self, id initiator, NSString *serviceName, jint epochNumber, id<JavaUtilSet> curNodes, id<JavaUtilSet> prevNodes, JavaNetInetSocketAddress *creator, JavaNetInetSocketAddress *receiver, JavaNetInetSocketAddress *forwarder, NSString *initialState, id<JavaUtilMap> nameStates, id<JavaUtilMap> newlyAddedNodes);

FOUNDATION_EXPORT EduUmassCsReconfigurationReconfigurationpacketsStartEpoch *new_EduUmassCsReconfigurationReconfigurationpacketsStartEpoch_initWithId_withNSString_withInt_withJavaUtilSet_withJavaUtilSet_withJavaNetInetSocketAddress_withJavaNetInetSocketAddress_withJavaNetInetSocketAddress_withNSString_withJavaUtilMap_withJavaUtilMap_(id initiator, NSString *serviceName, jint epochNumber, id<JavaUtilSet> curNodes, id<JavaUtilSet> prevNodes, JavaNetInetSocketAddress *creator, JavaNetInetSocketAddress *receiver, JavaNetInetSocketAddress *forwarder, NSString *initialState, id<JavaUtilMap> nameStates, id<JavaUtilMap> newlyAddedNodes) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT EduUmassCsReconfigurationReconfigurationpacketsStartEpoch *create_EduUmassCsReconfigurationReconfigurationpacketsStartEpoch_initWithId_withNSString_withInt_withJavaUtilSet_withJavaUtilSet_withJavaNetInetSocketAddress_withJavaNetInetSocketAddress_withJavaNetInetSocketAddress_withNSString_withJavaUtilMap_withJavaUtilMap_(id initiator, NSString *serviceName, jint epochNumber, id<JavaUtilSet> curNodes, id<JavaUtilSet> prevNodes, JavaNetInetSocketAddress *creator, JavaNetInetSocketAddress *receiver, JavaNetInetSocketAddress *forwarder, NSString *initialState, id<JavaUtilMap> nameStates, id<JavaUtilMap> newlyAddedNodes);

FOUNDATION_EXPORT void EduUmassCsReconfigurationReconfigurationpacketsStartEpoch_initWithEduUmassCsReconfigurationReconfigurationpacketsStartEpoch_withNSString_(EduUmassCsReconfigurationReconfigurationpacketsStartEpoch *self, EduUmassCsReconfigurationReconfigurationpacketsStartEpoch *startEpoch, NSString *initialState);

FOUNDATION_EXPORT EduUmassCsReconfigurationReconfigurationpacketsStartEpoch *new_EduUmassCsReconfigurationReconfigurationpacketsStartEpoch_initWithEduUmassCsReconfigurationReconfigurationpacketsStartEpoch_withNSString_(EduUmassCsReconfigurationReconfigurationpacketsStartEpoch *startEpoch, NSString *initialState) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT EduUmassCsReconfigurationReconfigurationpacketsStartEpoch *create_EduUmassCsReconfigurationReconfigurationpacketsStartEpoch_initWithEduUmassCsReconfigurationReconfigurationpacketsStartEpoch_withNSString_(EduUmassCsReconfigurationReconfigurationpacketsStartEpoch *startEpoch, NSString *initialState);

FOUNDATION_EXPORT void EduUmassCsReconfigurationReconfigurationpacketsStartEpoch_initWithId_withEduUmassCsReconfigurationReconfigurationpacketsStartEpoch_(EduUmassCsReconfigurationReconfigurationpacketsStartEpoch *self, id initiator, EduUmassCsReconfigurationReconfigurationpacketsStartEpoch *startEpoch);

FOUNDATION_EXPORT EduUmassCsReconfigurationReconfigurationpacketsStartEpoch *new_EduUmassCsReconfigurationReconfigurationpacketsStartEpoch_initWithId_withEduUmassCsReconfigurationReconfigurationpacketsStartEpoch_(id initiator, EduUmassCsReconfigurationReconfigurationpacketsStartEpoch *startEpoch) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT EduUmassCsReconfigurationReconfigurationpacketsStartEpoch *create_EduUmassCsReconfigurationReconfigurationpacketsStartEpoch_initWithId_withEduUmassCsReconfigurationReconfigurationpacketsStartEpoch_(id initiator, EduUmassCsReconfigurationReconfigurationpacketsStartEpoch *startEpoch);

FOUNDATION_EXPORT void EduUmassCsReconfigurationReconfigurationpacketsStartEpoch_initWithOrgJsonJSONObject_withEduUmassCsNioInterfacesStringifiable_(EduUmassCsReconfigurationReconfigurationpacketsStartEpoch *self, OrgJsonJSONObject *json, id<EduUmassCsNioInterfacesStringifiable> unstringer);

FOUNDATION_EXPORT EduUmassCsReconfigurationReconfigurationpacketsStartEpoch *new_EduUmassCsReconfigurationReconfigurationpacketsStartEpoch_initWithOrgJsonJSONObject_withEduUmassCsNioInterfacesStringifiable_(OrgJsonJSONObject *json, id<EduUmassCsNioInterfacesStringifiable> unstringer) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT EduUmassCsReconfigurationReconfigurationpacketsStartEpoch *create_EduUmassCsReconfigurationReconfigurationpacketsStartEpoch_initWithOrgJsonJSONObject_withEduUmassCsNioInterfacesStringifiable_(OrgJsonJSONObject *json, id<EduUmassCsNioInterfacesStringifiable> unstringer);

FOUNDATION_EXPORT void EduUmassCsReconfigurationReconfigurationpacketsStartEpoch_mainWithNSStringArray_(IOSObjectArray *args);

J2OBJC_TYPE_LITERAL_HEADER(EduUmassCsReconfigurationReconfigurationpacketsStartEpoch)

#endif

#if !defined (EduUmassCsReconfigurationReconfigurationpacketsStartEpoch_Keys_) && (INCLUDE_ALL_EduUmassCsReconfigurationReconfigurationpacketsStartEpoch || defined(INCLUDE_EduUmassCsReconfigurationReconfigurationpacketsStartEpoch_Keys))
#define EduUmassCsReconfigurationReconfigurationpacketsStartEpoch_Keys_

#define RESTRICT_JavaLangEnum 1
#define INCLUDE_JavaLangEnum 1
#include "java/lang/Enum.h"

@class IOSObjectArray;

typedef NS_ENUM(NSUInteger, EduUmassCsReconfigurationReconfigurationpacketsStartEpoch_Keys_Enum) {
  EduUmassCsReconfigurationReconfigurationpacketsStartEpoch_Keys_Enum_PREV_EPOCH_GROUP = 0,
  EduUmassCsReconfigurationReconfigurationpacketsStartEpoch_Keys_Enum_CUR_EPOCH_GROUP = 1,
  EduUmassCsReconfigurationReconfigurationpacketsStartEpoch_Keys_Enum_CREATOR = 2,
  EduUmassCsReconfigurationReconfigurationpacketsStartEpoch_Keys_Enum_RECEIVER = 3,
  EduUmassCsReconfigurationReconfigurationpacketsStartEpoch_Keys_Enum_FORWARDER = 4,
  EduUmassCsReconfigurationReconfigurationpacketsStartEpoch_Keys_Enum_INITIAL_STATE = 5,
  EduUmassCsReconfigurationReconfigurationpacketsStartEpoch_Keys_Enum_PREV_GROUP_NAME = 6,
  EduUmassCsReconfigurationReconfigurationpacketsStartEpoch_Keys_Enum_NEWLY_ADDED_NODES = 7,
  EduUmassCsReconfigurationReconfigurationpacketsStartEpoch_Keys_Enum_NODE_ID = 8,
  EduUmassCsReconfigurationReconfigurationpacketsStartEpoch_Keys_Enum_SOCKET_ADDRESS = 9,
  EduUmassCsReconfigurationReconfigurationpacketsStartEpoch_Keys_Enum_PREV_EPOCH = 10,
  EduUmassCsReconfigurationReconfigurationpacketsStartEpoch_Keys_Enum_IS_MERGE = 11,
  EduUmassCsReconfigurationReconfigurationpacketsStartEpoch_Keys_Enum_INIT_TIME = 12,
  EduUmassCsReconfigurationReconfigurationpacketsStartEpoch_Keys_Enum_MERGEES = 13,
  EduUmassCsReconfigurationReconfigurationpacketsStartEpoch_Keys_Enum_FIRST_PREV_EPOCH_CANDIDATE = 14,
  EduUmassCsReconfigurationReconfigurationpacketsStartEpoch_Keys_Enum_NAME_STATE_ARRAY = 15,
  EduUmassCsReconfigurationReconfigurationpacketsStartEpoch_Keys_Enum_PASSIVE = 16,
};

@interface EduUmassCsReconfigurationReconfigurationpacketsStartEpoch_Keys : JavaLangEnum < NSCopying >

#pragma mark Public

+ (EduUmassCsReconfigurationReconfigurationpacketsStartEpoch_Keys *)valueOfWithNSString:(NSString *)name;

+ (IOSObjectArray *)values;

#pragma mark Package-Private

- (id)copyWithZone:(NSZone *)zone;

@end

J2OBJC_STATIC_INIT(EduUmassCsReconfigurationReconfigurationpacketsStartEpoch_Keys)

/*! INTERNAL ONLY - Use enum accessors declared below. */
FOUNDATION_EXPORT EduUmassCsReconfigurationReconfigurationpacketsStartEpoch_Keys *EduUmassCsReconfigurationReconfigurationpacketsStartEpoch_Keys_values_[];

inline EduUmassCsReconfigurationReconfigurationpacketsStartEpoch_Keys *EduUmassCsReconfigurationReconfigurationpacketsStartEpoch_Keys_get_PREV_EPOCH_GROUP();
J2OBJC_ENUM_CONSTANT(EduUmassCsReconfigurationReconfigurationpacketsStartEpoch_Keys, PREV_EPOCH_GROUP)

inline EduUmassCsReconfigurationReconfigurationpacketsStartEpoch_Keys *EduUmassCsReconfigurationReconfigurationpacketsStartEpoch_Keys_get_CUR_EPOCH_GROUP();
J2OBJC_ENUM_CONSTANT(EduUmassCsReconfigurationReconfigurationpacketsStartEpoch_Keys, CUR_EPOCH_GROUP)

inline EduUmassCsReconfigurationReconfigurationpacketsStartEpoch_Keys *EduUmassCsReconfigurationReconfigurationpacketsStartEpoch_Keys_get_CREATOR();
J2OBJC_ENUM_CONSTANT(EduUmassCsReconfigurationReconfigurationpacketsStartEpoch_Keys, CREATOR)

inline EduUmassCsReconfigurationReconfigurationpacketsStartEpoch_Keys *EduUmassCsReconfigurationReconfigurationpacketsStartEpoch_Keys_get_RECEIVER();
J2OBJC_ENUM_CONSTANT(EduUmassCsReconfigurationReconfigurationpacketsStartEpoch_Keys, RECEIVER)

inline EduUmassCsReconfigurationReconfigurationpacketsStartEpoch_Keys *EduUmassCsReconfigurationReconfigurationpacketsStartEpoch_Keys_get_FORWARDER();
J2OBJC_ENUM_CONSTANT(EduUmassCsReconfigurationReconfigurationpacketsStartEpoch_Keys, FORWARDER)

inline EduUmassCsReconfigurationReconfigurationpacketsStartEpoch_Keys *EduUmassCsReconfigurationReconfigurationpacketsStartEpoch_Keys_get_INITIAL_STATE();
J2OBJC_ENUM_CONSTANT(EduUmassCsReconfigurationReconfigurationpacketsStartEpoch_Keys, INITIAL_STATE)

inline EduUmassCsReconfigurationReconfigurationpacketsStartEpoch_Keys *EduUmassCsReconfigurationReconfigurationpacketsStartEpoch_Keys_get_PREV_GROUP_NAME();
J2OBJC_ENUM_CONSTANT(EduUmassCsReconfigurationReconfigurationpacketsStartEpoch_Keys, PREV_GROUP_NAME)

inline EduUmassCsReconfigurationReconfigurationpacketsStartEpoch_Keys *EduUmassCsReconfigurationReconfigurationpacketsStartEpoch_Keys_get_NEWLY_ADDED_NODES();
J2OBJC_ENUM_CONSTANT(EduUmassCsReconfigurationReconfigurationpacketsStartEpoch_Keys, NEWLY_ADDED_NODES)

inline EduUmassCsReconfigurationReconfigurationpacketsStartEpoch_Keys *EduUmassCsReconfigurationReconfigurationpacketsStartEpoch_Keys_get_NODE_ID();
J2OBJC_ENUM_CONSTANT(EduUmassCsReconfigurationReconfigurationpacketsStartEpoch_Keys, NODE_ID)

inline EduUmassCsReconfigurationReconfigurationpacketsStartEpoch_Keys *EduUmassCsReconfigurationReconfigurationpacketsStartEpoch_Keys_get_SOCKET_ADDRESS();
J2OBJC_ENUM_CONSTANT(EduUmassCsReconfigurationReconfigurationpacketsStartEpoch_Keys, SOCKET_ADDRESS)

inline EduUmassCsReconfigurationReconfigurationpacketsStartEpoch_Keys *EduUmassCsReconfigurationReconfigurationpacketsStartEpoch_Keys_get_PREV_EPOCH();
J2OBJC_ENUM_CONSTANT(EduUmassCsReconfigurationReconfigurationpacketsStartEpoch_Keys, PREV_EPOCH)

inline EduUmassCsReconfigurationReconfigurationpacketsStartEpoch_Keys *EduUmassCsReconfigurationReconfigurationpacketsStartEpoch_Keys_get_IS_MERGE();
J2OBJC_ENUM_CONSTANT(EduUmassCsReconfigurationReconfigurationpacketsStartEpoch_Keys, IS_MERGE)

inline EduUmassCsReconfigurationReconfigurationpacketsStartEpoch_Keys *EduUmassCsReconfigurationReconfigurationpacketsStartEpoch_Keys_get_INIT_TIME();
J2OBJC_ENUM_CONSTANT(EduUmassCsReconfigurationReconfigurationpacketsStartEpoch_Keys, INIT_TIME)

inline EduUmassCsReconfigurationReconfigurationpacketsStartEpoch_Keys *EduUmassCsReconfigurationReconfigurationpacketsStartEpoch_Keys_get_MERGEES();
J2OBJC_ENUM_CONSTANT(EduUmassCsReconfigurationReconfigurationpacketsStartEpoch_Keys, MERGEES)

inline EduUmassCsReconfigurationReconfigurationpacketsStartEpoch_Keys *EduUmassCsReconfigurationReconfigurationpacketsStartEpoch_Keys_get_FIRST_PREV_EPOCH_CANDIDATE();
J2OBJC_ENUM_CONSTANT(EduUmassCsReconfigurationReconfigurationpacketsStartEpoch_Keys, FIRST_PREV_EPOCH_CANDIDATE)

inline EduUmassCsReconfigurationReconfigurationpacketsStartEpoch_Keys *EduUmassCsReconfigurationReconfigurationpacketsStartEpoch_Keys_get_NAME_STATE_ARRAY();
J2OBJC_ENUM_CONSTANT(EduUmassCsReconfigurationReconfigurationpacketsStartEpoch_Keys, NAME_STATE_ARRAY)

inline EduUmassCsReconfigurationReconfigurationpacketsStartEpoch_Keys *EduUmassCsReconfigurationReconfigurationpacketsStartEpoch_Keys_get_PASSIVE();
J2OBJC_ENUM_CONSTANT(EduUmassCsReconfigurationReconfigurationpacketsStartEpoch_Keys, PASSIVE)

FOUNDATION_EXPORT IOSObjectArray *EduUmassCsReconfigurationReconfigurationpacketsStartEpoch_Keys_values();

FOUNDATION_EXPORT EduUmassCsReconfigurationReconfigurationpacketsStartEpoch_Keys *EduUmassCsReconfigurationReconfigurationpacketsStartEpoch_Keys_valueOfWithNSString_(NSString *name);

FOUNDATION_EXPORT EduUmassCsReconfigurationReconfigurationpacketsStartEpoch_Keys *EduUmassCsReconfigurationReconfigurationpacketsStartEpoch_Keys_fromOrdinal(NSUInteger ordinal);

J2OBJC_TYPE_LITERAL_HEADER(EduUmassCsReconfigurationReconfigurationpacketsStartEpoch_Keys)

#endif

#pragma pop_macro("INCLUDE_ALL_EduUmassCsReconfigurationReconfigurationpacketsStartEpoch")
