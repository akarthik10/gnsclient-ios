//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: ./GNS/src/edu/umass/cs/gnscommon/CommandType.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_EduUmassCsGnscommonCommandType")
#ifdef RESTRICT_EduUmassCsGnscommonCommandType
#define INCLUDE_ALL_EduUmassCsGnscommonCommandType 0
#else
#define INCLUDE_ALL_EduUmassCsGnscommonCommandType 1
#endif
#undef RESTRICT_EduUmassCsGnscommonCommandType

#if !defined (EduUmassCsGnscommonCommandType_) && (INCLUDE_ALL_EduUmassCsGnscommonCommandType || defined(INCLUDE_EduUmassCsGnscommonCommandType))
#define EduUmassCsGnscommonCommandType_

#define RESTRICT_JavaLangEnum 1
#define INCLUDE_JavaLangEnum 1
#include "java/lang/Enum.h"

@class EduUmassCsGnsclientClientCommandResultType;
@class EduUmassCsGnscommonCommandType_CommandCategory;
@class IOSClass;
@class IOSObjectArray;
@protocol JavaUtilList;

typedef NS_ENUM(NSUInteger, EduUmassCsGnscommonCommandType_Enum) {
  EduUmassCsGnscommonCommandType_Enum_Append = 0,
  EduUmassCsGnscommonCommandType_Enum_AppendList = 1,
  EduUmassCsGnscommonCommandType_Enum_AppendListUnsigned = 2,
  EduUmassCsGnscommonCommandType_Enum_AppendListWithDuplication = 3,
  EduUmassCsGnscommonCommandType_Enum_AppendListWithDuplicationUnsigned = 4,
  EduUmassCsGnscommonCommandType_Enum_AppendOrCreate = 5,
  EduUmassCsGnscommonCommandType_Enum_AppendOrCreateList = 6,
  EduUmassCsGnscommonCommandType_Enum_AppendOrCreateListUnsigned = 7,
  EduUmassCsGnscommonCommandType_Enum_AppendOrCreateUnsigned = 8,
  EduUmassCsGnscommonCommandType_Enum_AppendUnsigned = 9,
  EduUmassCsGnscommonCommandType_Enum_AppendWithDuplication = 10,
  EduUmassCsGnscommonCommandType_Enum_AppendWithDuplicationUnsigned = 11,
  EduUmassCsGnscommonCommandType_Enum_Clear = 12,
  EduUmassCsGnscommonCommandType_Enum_ClearUnsigned = 13,
  EduUmassCsGnscommonCommandType_Enum_Create = 14,
  EduUmassCsGnscommonCommandType_Enum_CreateEmpty = 15,
  EduUmassCsGnscommonCommandType_Enum_CreateList = 16,
  EduUmassCsGnscommonCommandType_Enum_Read = 17,
  EduUmassCsGnscommonCommandType_Enum_ReadSecured = 18,
  EduUmassCsGnscommonCommandType_Enum_ReadUnsigned = 19,
  EduUmassCsGnscommonCommandType_Enum_ReadMultiField = 20,
  EduUmassCsGnscommonCommandType_Enum_ReadMultiFieldUnsigned = 21,
  EduUmassCsGnscommonCommandType_Enum_ReadArray = 22,
  EduUmassCsGnscommonCommandType_Enum_ReadArrayOne = 23,
  EduUmassCsGnscommonCommandType_Enum_ReadArrayOneUnsigned = 24,
  EduUmassCsGnscommonCommandType_Enum_ReadArrayUnsigned = 25,
  EduUmassCsGnscommonCommandType_Enum_Remove = 26,
  EduUmassCsGnscommonCommandType_Enum_RemoveList = 27,
  EduUmassCsGnscommonCommandType_Enum_RemoveListUnsigned = 28,
  EduUmassCsGnscommonCommandType_Enum_RemoveUnsigned = 29,
  EduUmassCsGnscommonCommandType_Enum_Replace = 30,
  EduUmassCsGnscommonCommandType_Enum_ReplaceList = 31,
  EduUmassCsGnscommonCommandType_Enum_ReplaceListUnsigned = 32,
  EduUmassCsGnscommonCommandType_Enum_ReplaceOrCreate = 33,
  EduUmassCsGnscommonCommandType_Enum_ReplaceOrCreateList = 34,
  EduUmassCsGnscommonCommandType_Enum_ReplaceOrCreateListUnsigned = 35,
  EduUmassCsGnscommonCommandType_Enum_ReplaceOrCreateUnsigned = 36,
  EduUmassCsGnscommonCommandType_Enum_ReplaceUnsigned = 37,
  EduUmassCsGnscommonCommandType_Enum_ReplaceUserJSON = 38,
  EduUmassCsGnscommonCommandType_Enum_ReplaceUserJSONUnsigned = 39,
  EduUmassCsGnscommonCommandType_Enum_CreateIndex = 40,
  EduUmassCsGnscommonCommandType_Enum_Substitute = 41,
  EduUmassCsGnscommonCommandType_Enum_SubstituteList = 42,
  EduUmassCsGnscommonCommandType_Enum_SubstituteListUnsigned = 43,
  EduUmassCsGnscommonCommandType_Enum_SubstituteUnsigned = 44,
  EduUmassCsGnscommonCommandType_Enum_RemoveField = 45,
  EduUmassCsGnscommonCommandType_Enum_RemoveFieldUnsigned = 46,
  EduUmassCsGnscommonCommandType_Enum_Set = 47,
  EduUmassCsGnscommonCommandType_Enum_SetFieldNull = 48,
  EduUmassCsGnscommonCommandType_Enum_Select = 49,
  EduUmassCsGnscommonCommandType_Enum_SelectNear = 50,
  EduUmassCsGnscommonCommandType_Enum_SelectWithin = 51,
  EduUmassCsGnscommonCommandType_Enum_SelectQuery = 52,
  EduUmassCsGnscommonCommandType_Enum_SelectGroupLookupQuery = 53,
  EduUmassCsGnscommonCommandType_Enum_SelectGroupSetupQuery = 54,
  EduUmassCsGnscommonCommandType_Enum_SelectGroupSetupQueryWithGuid = 55,
  EduUmassCsGnscommonCommandType_Enum_SelectGroupSetupQueryWithGuidAndInterval = 56,
  EduUmassCsGnscommonCommandType_Enum_SelectGroupSetupQueryWithInterval = 57,
  EduUmassCsGnscommonCommandType_Enum_AddAlias = 58,
  EduUmassCsGnscommonCommandType_Enum_AddGuid = 59,
  EduUmassCsGnscommonCommandType_Enum_AddMultipleGuids = 60,
  EduUmassCsGnscommonCommandType_Enum_AddMultipleGuidsFast = 61,
  EduUmassCsGnscommonCommandType_Enum_AddMultipleGuidsFastRandom = 62,
  EduUmassCsGnscommonCommandType_Enum_LookupAccountRecord = 63,
  EduUmassCsGnscommonCommandType_Enum_LookupRandomGuids = 64,
  EduUmassCsGnscommonCommandType_Enum_LookupGuid = 65,
  EduUmassCsGnscommonCommandType_Enum_LookupPrimaryGuid = 66,
  EduUmassCsGnscommonCommandType_Enum_LookupGuidRecord = 67,
  EduUmassCsGnscommonCommandType_Enum_RegisterAccount = 68,
  EduUmassCsGnscommonCommandType_Enum_RegisterAccountSecured = 69,
  EduUmassCsGnscommonCommandType_Enum_RemoveAccount = 70,
  EduUmassCsGnscommonCommandType_Enum_RemoveAlias = 71,
  EduUmassCsGnscommonCommandType_Enum_RemoveGuid = 72,
  EduUmassCsGnscommonCommandType_Enum_RemoveGuidNoAccount = 73,
  EduUmassCsGnscommonCommandType_Enum_RetrieveAliases = 74,
  EduUmassCsGnscommonCommandType_Enum_RemoveAccountWithPassword = 75,
  EduUmassCsGnscommonCommandType_Enum_RemoveAccountSecured = 76,
  EduUmassCsGnscommonCommandType_Enum_SetPassword = 77,
  EduUmassCsGnscommonCommandType_Enum_VerifyAccount = 78,
  EduUmassCsGnscommonCommandType_Enum_ResendAuthenticationEmail = 79,
  EduUmassCsGnscommonCommandType_Enum_ResetKey = 80,
  EduUmassCsGnscommonCommandType_Enum_AclAdd = 81,
  EduUmassCsGnscommonCommandType_Enum_AclAddSecured = 82,
  EduUmassCsGnscommonCommandType_Enum_AclAddSelf = 83,
  EduUmassCsGnscommonCommandType_Enum_AclRemove = 84,
  EduUmassCsGnscommonCommandType_Enum_AclRemoveSecured = 85,
  EduUmassCsGnscommonCommandType_Enum_AclRemoveSelf = 86,
  EduUmassCsGnscommonCommandType_Enum_AclRetrieve = 87,
  EduUmassCsGnscommonCommandType_Enum_AclRetrieveSecured = 88,
  EduUmassCsGnscommonCommandType_Enum_AclRetrieveSelf = 89,
  EduUmassCsGnscommonCommandType_Enum_FieldCreateAcl = 90,
  EduUmassCsGnscommonCommandType_Enum_FieldDeleteAcl = 91,
  EduUmassCsGnscommonCommandType_Enum_FieldAclExists = 92,
  EduUmassCsGnscommonCommandType_Enum_AddMembersToGroup = 93,
  EduUmassCsGnscommonCommandType_Enum_AddToGroup = 94,
  EduUmassCsGnscommonCommandType_Enum_GetGroupMembers = 95,
  EduUmassCsGnscommonCommandType_Enum_GetGroups = 96,
  EduUmassCsGnscommonCommandType_Enum_RemoveFromGroup = 97,
  EduUmassCsGnscommonCommandType_Enum_RemoveMembersFromGroup = 98,
  EduUmassCsGnscommonCommandType_Enum_Help = 99,
  EduUmassCsGnscommonCommandType_Enum_HelpTcp = 100,
  EduUmassCsGnscommonCommandType_Enum_HelpTcpWiki = 101,
  EduUmassCsGnscommonCommandType_Enum_Dump = 102,
  EduUmassCsGnscommonCommandType_Enum_ConnectionCheck = 103,
  EduUmassCsGnscommonCommandType_Enum_SetCode = 104,
  EduUmassCsGnscommonCommandType_Enum_ClearCode = 105,
  EduUmassCsGnscommonCommandType_Enum_GetCode = 106,
  EduUmassCsGnscommonCommandType_Enum_Unknown = 107,
};

@interface EduUmassCsGnscommonCommandType : JavaLangEnum < NSCopying >

#pragma mark Public

+ (void)enforceChecks;

- (EduUmassCsGnscommonCommandType_CommandCategory *)getCategory;

- (IOSClass *)getCommandClass;

+ (id<JavaUtilList>)getCommandClasses;

- (NSString *)getCommandDescription;

+ (EduUmassCsGnscommonCommandType *)getCommandForHttpWithNSString:(NSString *)name;

- (IOSObjectArray *)getCommandOptionalParameters;

- (IOSObjectArray *)getCommandRequiredParameters;

+ (EduUmassCsGnscommonCommandType *)getCommandTypeWithInt:(jint)number;

- (jint)getInt;

- (EduUmassCsGnsclientClientCommandResultType *)getResultType;

- (jboolean)isCanBeSafelyCoordinated;

- (jboolean)isCreateDelete;

- (jboolean)isLocallyHandled;

- (jboolean)isMutualAuth;

- (jboolean)isNotForRogueClients;

- (jboolean)isRead;

- (jboolean)isSelect;

- (jboolean)isUpdate;

+ (void)mainWithNSStringArray:(IOSObjectArray *)args;

+ (EduUmassCsGnscommonCommandType *)valueOfWithNSString:(NSString *)name;

+ (IOSObjectArray *)values;

#pragma mark Package-Private

- (id)copyWithZone:(NSZone *)zone;

@end

J2OBJC_STATIC_INIT(EduUmassCsGnscommonCommandType)

/*! INTERNAL ONLY - Use enum accessors declared below. */
FOUNDATION_EXPORT EduUmassCsGnscommonCommandType *EduUmassCsGnscommonCommandType_values_[];

inline EduUmassCsGnscommonCommandType *EduUmassCsGnscommonCommandType_get_Append();
J2OBJC_ENUM_CONSTANT(EduUmassCsGnscommonCommandType, Append)

inline EduUmassCsGnscommonCommandType *EduUmassCsGnscommonCommandType_get_AppendList();
J2OBJC_ENUM_CONSTANT(EduUmassCsGnscommonCommandType, AppendList)

inline EduUmassCsGnscommonCommandType *EduUmassCsGnscommonCommandType_get_AppendListUnsigned();
J2OBJC_ENUM_CONSTANT(EduUmassCsGnscommonCommandType, AppendListUnsigned)

inline EduUmassCsGnscommonCommandType *EduUmassCsGnscommonCommandType_get_AppendListWithDuplication();
J2OBJC_ENUM_CONSTANT(EduUmassCsGnscommonCommandType, AppendListWithDuplication)

inline EduUmassCsGnscommonCommandType *EduUmassCsGnscommonCommandType_get_AppendListWithDuplicationUnsigned();
J2OBJC_ENUM_CONSTANT(EduUmassCsGnscommonCommandType, AppendListWithDuplicationUnsigned)

inline EduUmassCsGnscommonCommandType *EduUmassCsGnscommonCommandType_get_AppendOrCreate();
J2OBJC_ENUM_CONSTANT(EduUmassCsGnscommonCommandType, AppendOrCreate)

inline EduUmassCsGnscommonCommandType *EduUmassCsGnscommonCommandType_get_AppendOrCreateList();
J2OBJC_ENUM_CONSTANT(EduUmassCsGnscommonCommandType, AppendOrCreateList)

inline EduUmassCsGnscommonCommandType *EduUmassCsGnscommonCommandType_get_AppendOrCreateListUnsigned();
J2OBJC_ENUM_CONSTANT(EduUmassCsGnscommonCommandType, AppendOrCreateListUnsigned)

inline EduUmassCsGnscommonCommandType *EduUmassCsGnscommonCommandType_get_AppendOrCreateUnsigned();
J2OBJC_ENUM_CONSTANT(EduUmassCsGnscommonCommandType, AppendOrCreateUnsigned)

inline EduUmassCsGnscommonCommandType *EduUmassCsGnscommonCommandType_get_AppendUnsigned();
J2OBJC_ENUM_CONSTANT(EduUmassCsGnscommonCommandType, AppendUnsigned)

inline EduUmassCsGnscommonCommandType *EduUmassCsGnscommonCommandType_get_AppendWithDuplication();
J2OBJC_ENUM_CONSTANT(EduUmassCsGnscommonCommandType, AppendWithDuplication)

inline EduUmassCsGnscommonCommandType *EduUmassCsGnscommonCommandType_get_AppendWithDuplicationUnsigned();
J2OBJC_ENUM_CONSTANT(EduUmassCsGnscommonCommandType, AppendWithDuplicationUnsigned)

inline EduUmassCsGnscommonCommandType *EduUmassCsGnscommonCommandType_get_Clear();
J2OBJC_ENUM_CONSTANT(EduUmassCsGnscommonCommandType, Clear)

inline EduUmassCsGnscommonCommandType *EduUmassCsGnscommonCommandType_get_ClearUnsigned();
J2OBJC_ENUM_CONSTANT(EduUmassCsGnscommonCommandType, ClearUnsigned)

inline EduUmassCsGnscommonCommandType *EduUmassCsGnscommonCommandType_get_Create();
J2OBJC_ENUM_CONSTANT(EduUmassCsGnscommonCommandType, Create)

inline EduUmassCsGnscommonCommandType *EduUmassCsGnscommonCommandType_get_CreateEmpty();
J2OBJC_ENUM_CONSTANT(EduUmassCsGnscommonCommandType, CreateEmpty)

inline EduUmassCsGnscommonCommandType *EduUmassCsGnscommonCommandType_get_CreateList();
J2OBJC_ENUM_CONSTANT(EduUmassCsGnscommonCommandType, CreateList)

inline EduUmassCsGnscommonCommandType *EduUmassCsGnscommonCommandType_get_Read();
J2OBJC_ENUM_CONSTANT(EduUmassCsGnscommonCommandType, Read)

inline EduUmassCsGnscommonCommandType *EduUmassCsGnscommonCommandType_get_ReadSecured();
J2OBJC_ENUM_CONSTANT(EduUmassCsGnscommonCommandType, ReadSecured)

inline EduUmassCsGnscommonCommandType *EduUmassCsGnscommonCommandType_get_ReadUnsigned();
J2OBJC_ENUM_CONSTANT(EduUmassCsGnscommonCommandType, ReadUnsigned)

inline EduUmassCsGnscommonCommandType *EduUmassCsGnscommonCommandType_get_ReadMultiField();
J2OBJC_ENUM_CONSTANT(EduUmassCsGnscommonCommandType, ReadMultiField)

inline EduUmassCsGnscommonCommandType *EduUmassCsGnscommonCommandType_get_ReadMultiFieldUnsigned();
J2OBJC_ENUM_CONSTANT(EduUmassCsGnscommonCommandType, ReadMultiFieldUnsigned)

inline EduUmassCsGnscommonCommandType *EduUmassCsGnscommonCommandType_get_ReadArray();
J2OBJC_ENUM_CONSTANT(EduUmassCsGnscommonCommandType, ReadArray)

inline EduUmassCsGnscommonCommandType *EduUmassCsGnscommonCommandType_get_ReadArrayOne();
J2OBJC_ENUM_CONSTANT(EduUmassCsGnscommonCommandType, ReadArrayOne)

inline EduUmassCsGnscommonCommandType *EduUmassCsGnscommonCommandType_get_ReadArrayOneUnsigned();
J2OBJC_ENUM_CONSTANT(EduUmassCsGnscommonCommandType, ReadArrayOneUnsigned)

inline EduUmassCsGnscommonCommandType *EduUmassCsGnscommonCommandType_get_ReadArrayUnsigned();
J2OBJC_ENUM_CONSTANT(EduUmassCsGnscommonCommandType, ReadArrayUnsigned)

inline EduUmassCsGnscommonCommandType *EduUmassCsGnscommonCommandType_get_Remove();
J2OBJC_ENUM_CONSTANT(EduUmassCsGnscommonCommandType, Remove)

inline EduUmassCsGnscommonCommandType *EduUmassCsGnscommonCommandType_get_RemoveList();
J2OBJC_ENUM_CONSTANT(EduUmassCsGnscommonCommandType, RemoveList)

inline EduUmassCsGnscommonCommandType *EduUmassCsGnscommonCommandType_get_RemoveListUnsigned();
J2OBJC_ENUM_CONSTANT(EduUmassCsGnscommonCommandType, RemoveListUnsigned)

inline EduUmassCsGnscommonCommandType *EduUmassCsGnscommonCommandType_get_RemoveUnsigned();
J2OBJC_ENUM_CONSTANT(EduUmassCsGnscommonCommandType, RemoveUnsigned)

inline EduUmassCsGnscommonCommandType *EduUmassCsGnscommonCommandType_get_Replace();
J2OBJC_ENUM_CONSTANT(EduUmassCsGnscommonCommandType, Replace)

inline EduUmassCsGnscommonCommandType *EduUmassCsGnscommonCommandType_get_ReplaceList();
J2OBJC_ENUM_CONSTANT(EduUmassCsGnscommonCommandType, ReplaceList)

inline EduUmassCsGnscommonCommandType *EduUmassCsGnscommonCommandType_get_ReplaceListUnsigned();
J2OBJC_ENUM_CONSTANT(EduUmassCsGnscommonCommandType, ReplaceListUnsigned)

inline EduUmassCsGnscommonCommandType *EduUmassCsGnscommonCommandType_get_ReplaceOrCreate();
J2OBJC_ENUM_CONSTANT(EduUmassCsGnscommonCommandType, ReplaceOrCreate)

inline EduUmassCsGnscommonCommandType *EduUmassCsGnscommonCommandType_get_ReplaceOrCreateList();
J2OBJC_ENUM_CONSTANT(EduUmassCsGnscommonCommandType, ReplaceOrCreateList)

inline EduUmassCsGnscommonCommandType *EduUmassCsGnscommonCommandType_get_ReplaceOrCreateListUnsigned();
J2OBJC_ENUM_CONSTANT(EduUmassCsGnscommonCommandType, ReplaceOrCreateListUnsigned)

inline EduUmassCsGnscommonCommandType *EduUmassCsGnscommonCommandType_get_ReplaceOrCreateUnsigned();
J2OBJC_ENUM_CONSTANT(EduUmassCsGnscommonCommandType, ReplaceOrCreateUnsigned)

inline EduUmassCsGnscommonCommandType *EduUmassCsGnscommonCommandType_get_ReplaceUnsigned();
J2OBJC_ENUM_CONSTANT(EduUmassCsGnscommonCommandType, ReplaceUnsigned)

inline EduUmassCsGnscommonCommandType *EduUmassCsGnscommonCommandType_get_ReplaceUserJSON();
J2OBJC_ENUM_CONSTANT(EduUmassCsGnscommonCommandType, ReplaceUserJSON)

inline EduUmassCsGnscommonCommandType *EduUmassCsGnscommonCommandType_get_ReplaceUserJSONUnsigned();
J2OBJC_ENUM_CONSTANT(EduUmassCsGnscommonCommandType, ReplaceUserJSONUnsigned)

inline EduUmassCsGnscommonCommandType *EduUmassCsGnscommonCommandType_get_CreateIndex();
J2OBJC_ENUM_CONSTANT(EduUmassCsGnscommonCommandType, CreateIndex)

inline EduUmassCsGnscommonCommandType *EduUmassCsGnscommonCommandType_get_Substitute();
J2OBJC_ENUM_CONSTANT(EduUmassCsGnscommonCommandType, Substitute)

inline EduUmassCsGnscommonCommandType *EduUmassCsGnscommonCommandType_get_SubstituteList();
J2OBJC_ENUM_CONSTANT(EduUmassCsGnscommonCommandType, SubstituteList)

inline EduUmassCsGnscommonCommandType *EduUmassCsGnscommonCommandType_get_SubstituteListUnsigned();
J2OBJC_ENUM_CONSTANT(EduUmassCsGnscommonCommandType, SubstituteListUnsigned)

inline EduUmassCsGnscommonCommandType *EduUmassCsGnscommonCommandType_get_SubstituteUnsigned();
J2OBJC_ENUM_CONSTANT(EduUmassCsGnscommonCommandType, SubstituteUnsigned)

inline EduUmassCsGnscommonCommandType *EduUmassCsGnscommonCommandType_get_RemoveField();
J2OBJC_ENUM_CONSTANT(EduUmassCsGnscommonCommandType, RemoveField)

inline EduUmassCsGnscommonCommandType *EduUmassCsGnscommonCommandType_get_RemoveFieldUnsigned();
J2OBJC_ENUM_CONSTANT(EduUmassCsGnscommonCommandType, RemoveFieldUnsigned)

inline EduUmassCsGnscommonCommandType *EduUmassCsGnscommonCommandType_get_Set();
J2OBJC_ENUM_CONSTANT(EduUmassCsGnscommonCommandType, Set)

inline EduUmassCsGnscommonCommandType *EduUmassCsGnscommonCommandType_get_SetFieldNull();
J2OBJC_ENUM_CONSTANT(EduUmassCsGnscommonCommandType, SetFieldNull)

inline EduUmassCsGnscommonCommandType *EduUmassCsGnscommonCommandType_get_Select();
J2OBJC_ENUM_CONSTANT(EduUmassCsGnscommonCommandType, Select)

inline EduUmassCsGnscommonCommandType *EduUmassCsGnscommonCommandType_get_SelectNear();
J2OBJC_ENUM_CONSTANT(EduUmassCsGnscommonCommandType, SelectNear)

inline EduUmassCsGnscommonCommandType *EduUmassCsGnscommonCommandType_get_SelectWithin();
J2OBJC_ENUM_CONSTANT(EduUmassCsGnscommonCommandType, SelectWithin)

inline EduUmassCsGnscommonCommandType *EduUmassCsGnscommonCommandType_get_SelectQuery();
J2OBJC_ENUM_CONSTANT(EduUmassCsGnscommonCommandType, SelectQuery)

inline EduUmassCsGnscommonCommandType *EduUmassCsGnscommonCommandType_get_SelectGroupLookupQuery();
J2OBJC_ENUM_CONSTANT(EduUmassCsGnscommonCommandType, SelectGroupLookupQuery)

inline EduUmassCsGnscommonCommandType *EduUmassCsGnscommonCommandType_get_SelectGroupSetupQuery();
J2OBJC_ENUM_CONSTANT(EduUmassCsGnscommonCommandType, SelectGroupSetupQuery)

inline EduUmassCsGnscommonCommandType *EduUmassCsGnscommonCommandType_get_SelectGroupSetupQueryWithGuid();
J2OBJC_ENUM_CONSTANT(EduUmassCsGnscommonCommandType, SelectGroupSetupQueryWithGuid)

inline EduUmassCsGnscommonCommandType *EduUmassCsGnscommonCommandType_get_SelectGroupSetupQueryWithGuidAndInterval();
J2OBJC_ENUM_CONSTANT(EduUmassCsGnscommonCommandType, SelectGroupSetupQueryWithGuidAndInterval)

inline EduUmassCsGnscommonCommandType *EduUmassCsGnscommonCommandType_get_SelectGroupSetupQueryWithInterval();
J2OBJC_ENUM_CONSTANT(EduUmassCsGnscommonCommandType, SelectGroupSetupQueryWithInterval)

inline EduUmassCsGnscommonCommandType *EduUmassCsGnscommonCommandType_get_AddAlias();
J2OBJC_ENUM_CONSTANT(EduUmassCsGnscommonCommandType, AddAlias)

inline EduUmassCsGnscommonCommandType *EduUmassCsGnscommonCommandType_get_AddGuid();
J2OBJC_ENUM_CONSTANT(EduUmassCsGnscommonCommandType, AddGuid)

inline EduUmassCsGnscommonCommandType *EduUmassCsGnscommonCommandType_get_AddMultipleGuids();
J2OBJC_ENUM_CONSTANT(EduUmassCsGnscommonCommandType, AddMultipleGuids)

inline EduUmassCsGnscommonCommandType *EduUmassCsGnscommonCommandType_get_AddMultipleGuidsFast();
J2OBJC_ENUM_CONSTANT(EduUmassCsGnscommonCommandType, AddMultipleGuidsFast)

inline EduUmassCsGnscommonCommandType *EduUmassCsGnscommonCommandType_get_AddMultipleGuidsFastRandom();
J2OBJC_ENUM_CONSTANT(EduUmassCsGnscommonCommandType, AddMultipleGuidsFastRandom)

inline EduUmassCsGnscommonCommandType *EduUmassCsGnscommonCommandType_get_LookupAccountRecord();
J2OBJC_ENUM_CONSTANT(EduUmassCsGnscommonCommandType, LookupAccountRecord)

inline EduUmassCsGnscommonCommandType *EduUmassCsGnscommonCommandType_get_LookupRandomGuids();
J2OBJC_ENUM_CONSTANT(EduUmassCsGnscommonCommandType, LookupRandomGuids)

inline EduUmassCsGnscommonCommandType *EduUmassCsGnscommonCommandType_get_LookupGuid();
J2OBJC_ENUM_CONSTANT(EduUmassCsGnscommonCommandType, LookupGuid)

inline EduUmassCsGnscommonCommandType *EduUmassCsGnscommonCommandType_get_LookupPrimaryGuid();
J2OBJC_ENUM_CONSTANT(EduUmassCsGnscommonCommandType, LookupPrimaryGuid)

inline EduUmassCsGnscommonCommandType *EduUmassCsGnscommonCommandType_get_LookupGuidRecord();
J2OBJC_ENUM_CONSTANT(EduUmassCsGnscommonCommandType, LookupGuidRecord)

inline EduUmassCsGnscommonCommandType *EduUmassCsGnscommonCommandType_get_RegisterAccount();
J2OBJC_ENUM_CONSTANT(EduUmassCsGnscommonCommandType, RegisterAccount)

inline EduUmassCsGnscommonCommandType *EduUmassCsGnscommonCommandType_get_RegisterAccountSecured();
J2OBJC_ENUM_CONSTANT(EduUmassCsGnscommonCommandType, RegisterAccountSecured)

inline EduUmassCsGnscommonCommandType *EduUmassCsGnscommonCommandType_get_RemoveAccount();
J2OBJC_ENUM_CONSTANT(EduUmassCsGnscommonCommandType, RemoveAccount)

inline EduUmassCsGnscommonCommandType *EduUmassCsGnscommonCommandType_get_RemoveAlias();
J2OBJC_ENUM_CONSTANT(EduUmassCsGnscommonCommandType, RemoveAlias)

inline EduUmassCsGnscommonCommandType *EduUmassCsGnscommonCommandType_get_RemoveGuid();
J2OBJC_ENUM_CONSTANT(EduUmassCsGnscommonCommandType, RemoveGuid)

inline EduUmassCsGnscommonCommandType *EduUmassCsGnscommonCommandType_get_RemoveGuidNoAccount();
J2OBJC_ENUM_CONSTANT(EduUmassCsGnscommonCommandType, RemoveGuidNoAccount)

inline EduUmassCsGnscommonCommandType *EduUmassCsGnscommonCommandType_get_RetrieveAliases();
J2OBJC_ENUM_CONSTANT(EduUmassCsGnscommonCommandType, RetrieveAliases)

inline EduUmassCsGnscommonCommandType *EduUmassCsGnscommonCommandType_get_RemoveAccountWithPassword();
J2OBJC_ENUM_CONSTANT(EduUmassCsGnscommonCommandType, RemoveAccountWithPassword)

inline EduUmassCsGnscommonCommandType *EduUmassCsGnscommonCommandType_get_RemoveAccountSecured();
J2OBJC_ENUM_CONSTANT(EduUmassCsGnscommonCommandType, RemoveAccountSecured)

inline EduUmassCsGnscommonCommandType *EduUmassCsGnscommonCommandType_get_SetPassword();
J2OBJC_ENUM_CONSTANT(EduUmassCsGnscommonCommandType, SetPassword)

inline EduUmassCsGnscommonCommandType *EduUmassCsGnscommonCommandType_get_VerifyAccount();
J2OBJC_ENUM_CONSTANT(EduUmassCsGnscommonCommandType, VerifyAccount)

inline EduUmassCsGnscommonCommandType *EduUmassCsGnscommonCommandType_get_ResendAuthenticationEmail();
J2OBJC_ENUM_CONSTANT(EduUmassCsGnscommonCommandType, ResendAuthenticationEmail)

inline EduUmassCsGnscommonCommandType *EduUmassCsGnscommonCommandType_get_ResetKey();
J2OBJC_ENUM_CONSTANT(EduUmassCsGnscommonCommandType, ResetKey)

inline EduUmassCsGnscommonCommandType *EduUmassCsGnscommonCommandType_get_AclAdd();
J2OBJC_ENUM_CONSTANT(EduUmassCsGnscommonCommandType, AclAdd)

inline EduUmassCsGnscommonCommandType *EduUmassCsGnscommonCommandType_get_AclAddSecured();
J2OBJC_ENUM_CONSTANT(EduUmassCsGnscommonCommandType, AclAddSecured)

inline EduUmassCsGnscommonCommandType *EduUmassCsGnscommonCommandType_get_AclAddSelf();
J2OBJC_ENUM_CONSTANT(EduUmassCsGnscommonCommandType, AclAddSelf)

inline EduUmassCsGnscommonCommandType *EduUmassCsGnscommonCommandType_get_AclRemove();
J2OBJC_ENUM_CONSTANT(EduUmassCsGnscommonCommandType, AclRemove)

inline EduUmassCsGnscommonCommandType *EduUmassCsGnscommonCommandType_get_AclRemoveSecured();
J2OBJC_ENUM_CONSTANT(EduUmassCsGnscommonCommandType, AclRemoveSecured)

inline EduUmassCsGnscommonCommandType *EduUmassCsGnscommonCommandType_get_AclRemoveSelf();
J2OBJC_ENUM_CONSTANT(EduUmassCsGnscommonCommandType, AclRemoveSelf)

inline EduUmassCsGnscommonCommandType *EduUmassCsGnscommonCommandType_get_AclRetrieve();
J2OBJC_ENUM_CONSTANT(EduUmassCsGnscommonCommandType, AclRetrieve)

inline EduUmassCsGnscommonCommandType *EduUmassCsGnscommonCommandType_get_AclRetrieveSecured();
J2OBJC_ENUM_CONSTANT(EduUmassCsGnscommonCommandType, AclRetrieveSecured)

inline EduUmassCsGnscommonCommandType *EduUmassCsGnscommonCommandType_get_AclRetrieveSelf();
J2OBJC_ENUM_CONSTANT(EduUmassCsGnscommonCommandType, AclRetrieveSelf)

inline EduUmassCsGnscommonCommandType *EduUmassCsGnscommonCommandType_get_FieldCreateAcl();
J2OBJC_ENUM_CONSTANT(EduUmassCsGnscommonCommandType, FieldCreateAcl)

inline EduUmassCsGnscommonCommandType *EduUmassCsGnscommonCommandType_get_FieldDeleteAcl();
J2OBJC_ENUM_CONSTANT(EduUmassCsGnscommonCommandType, FieldDeleteAcl)

inline EduUmassCsGnscommonCommandType *EduUmassCsGnscommonCommandType_get_FieldAclExists();
J2OBJC_ENUM_CONSTANT(EduUmassCsGnscommonCommandType, FieldAclExists)

inline EduUmassCsGnscommonCommandType *EduUmassCsGnscommonCommandType_get_AddMembersToGroup();
J2OBJC_ENUM_CONSTANT(EduUmassCsGnscommonCommandType, AddMembersToGroup)

inline EduUmassCsGnscommonCommandType *EduUmassCsGnscommonCommandType_get_AddToGroup();
J2OBJC_ENUM_CONSTANT(EduUmassCsGnscommonCommandType, AddToGroup)

inline EduUmassCsGnscommonCommandType *EduUmassCsGnscommonCommandType_get_GetGroupMembers();
J2OBJC_ENUM_CONSTANT(EduUmassCsGnscommonCommandType, GetGroupMembers)

inline EduUmassCsGnscommonCommandType *EduUmassCsGnscommonCommandType_get_GetGroups();
J2OBJC_ENUM_CONSTANT(EduUmassCsGnscommonCommandType, GetGroups)

inline EduUmassCsGnscommonCommandType *EduUmassCsGnscommonCommandType_get_RemoveFromGroup();
J2OBJC_ENUM_CONSTANT(EduUmassCsGnscommonCommandType, RemoveFromGroup)

inline EduUmassCsGnscommonCommandType *EduUmassCsGnscommonCommandType_get_RemoveMembersFromGroup();
J2OBJC_ENUM_CONSTANT(EduUmassCsGnscommonCommandType, RemoveMembersFromGroup)

inline EduUmassCsGnscommonCommandType *EduUmassCsGnscommonCommandType_get_Help();
J2OBJC_ENUM_CONSTANT(EduUmassCsGnscommonCommandType, Help)

inline EduUmassCsGnscommonCommandType *EduUmassCsGnscommonCommandType_get_HelpTcp();
J2OBJC_ENUM_CONSTANT(EduUmassCsGnscommonCommandType, HelpTcp)

inline EduUmassCsGnscommonCommandType *EduUmassCsGnscommonCommandType_get_HelpTcpWiki();
J2OBJC_ENUM_CONSTANT(EduUmassCsGnscommonCommandType, HelpTcpWiki)

inline EduUmassCsGnscommonCommandType *EduUmassCsGnscommonCommandType_get_Dump();
J2OBJC_ENUM_CONSTANT(EduUmassCsGnscommonCommandType, Dump)

inline EduUmassCsGnscommonCommandType *EduUmassCsGnscommonCommandType_get_ConnectionCheck();
J2OBJC_ENUM_CONSTANT(EduUmassCsGnscommonCommandType, ConnectionCheck)

inline EduUmassCsGnscommonCommandType *EduUmassCsGnscommonCommandType_get_SetCode();
J2OBJC_ENUM_CONSTANT(EduUmassCsGnscommonCommandType, SetCode)

inline EduUmassCsGnscommonCommandType *EduUmassCsGnscommonCommandType_get_ClearCode();
J2OBJC_ENUM_CONSTANT(EduUmassCsGnscommonCommandType, ClearCode)

inline EduUmassCsGnscommonCommandType *EduUmassCsGnscommonCommandType_get_GetCode();
J2OBJC_ENUM_CONSTANT(EduUmassCsGnscommonCommandType, GetCode)

inline EduUmassCsGnscommonCommandType *EduUmassCsGnscommonCommandType_get_Unknown();
J2OBJC_ENUM_CONSTANT(EduUmassCsGnscommonCommandType, Unknown)

FOUNDATION_EXPORT EduUmassCsGnscommonCommandType *EduUmassCsGnscommonCommandType_getCommandTypeWithInt_(jint number);

FOUNDATION_EXPORT EduUmassCsGnscommonCommandType *EduUmassCsGnscommonCommandType_getCommandForHttpWithNSString_(NSString *name);

FOUNDATION_EXPORT id<JavaUtilList> EduUmassCsGnscommonCommandType_getCommandClasses();

FOUNDATION_EXPORT void EduUmassCsGnscommonCommandType_enforceChecks();

FOUNDATION_EXPORT void EduUmassCsGnscommonCommandType_mainWithNSStringArray_(IOSObjectArray *args);

FOUNDATION_EXPORT IOSObjectArray *EduUmassCsGnscommonCommandType_values();

FOUNDATION_EXPORT EduUmassCsGnscommonCommandType *EduUmassCsGnscommonCommandType_valueOfWithNSString_(NSString *name);

FOUNDATION_EXPORT EduUmassCsGnscommonCommandType *EduUmassCsGnscommonCommandType_fromOrdinal(NSUInteger ordinal);

J2OBJC_TYPE_LITERAL_HEADER(EduUmassCsGnscommonCommandType)

#endif

#if !defined (EduUmassCsGnscommonCommandType_CommandCategory_) && (INCLUDE_ALL_EduUmassCsGnscommonCommandType || defined(INCLUDE_EduUmassCsGnscommonCommandType_CommandCategory))
#define EduUmassCsGnscommonCommandType_CommandCategory_

#define RESTRICT_JavaLangEnum 1
#define INCLUDE_JavaLangEnum 1
#include "java/lang/Enum.h"

@class IOSObjectArray;

typedef NS_ENUM(NSUInteger, EduUmassCsGnscommonCommandType_CommandCategory_Enum) {
  EduUmassCsGnscommonCommandType_CommandCategory_Enum_READ = 0,
  EduUmassCsGnscommonCommandType_CommandCategory_Enum_UPDATE = 1,
  EduUmassCsGnscommonCommandType_CommandCategory_Enum_CREATE_DELETE = 2,
  EduUmassCsGnscommonCommandType_CommandCategory_Enum_SELECT = 3,
  EduUmassCsGnscommonCommandType_CommandCategory_Enum_OTHER = 4,
};

@interface EduUmassCsGnscommonCommandType_CommandCategory : JavaLangEnum < NSCopying >

#pragma mark Public

+ (EduUmassCsGnscommonCommandType_CommandCategory *)valueOfWithNSString:(NSString *)name;

+ (IOSObjectArray *)values;

#pragma mark Package-Private

- (id)copyWithZone:(NSZone *)zone;

@end

J2OBJC_STATIC_INIT(EduUmassCsGnscommonCommandType_CommandCategory)

/*! INTERNAL ONLY - Use enum accessors declared below. */
FOUNDATION_EXPORT EduUmassCsGnscommonCommandType_CommandCategory *EduUmassCsGnscommonCommandType_CommandCategory_values_[];

inline EduUmassCsGnscommonCommandType_CommandCategory *EduUmassCsGnscommonCommandType_CommandCategory_get_READ();
J2OBJC_ENUM_CONSTANT(EduUmassCsGnscommonCommandType_CommandCategory, READ)

inline EduUmassCsGnscommonCommandType_CommandCategory *EduUmassCsGnscommonCommandType_CommandCategory_get_UPDATE();
J2OBJC_ENUM_CONSTANT(EduUmassCsGnscommonCommandType_CommandCategory, UPDATE)

inline EduUmassCsGnscommonCommandType_CommandCategory *EduUmassCsGnscommonCommandType_CommandCategory_get_CREATE_DELETE();
J2OBJC_ENUM_CONSTANT(EduUmassCsGnscommonCommandType_CommandCategory, CREATE_DELETE)

inline EduUmassCsGnscommonCommandType_CommandCategory *EduUmassCsGnscommonCommandType_CommandCategory_get_SELECT();
J2OBJC_ENUM_CONSTANT(EduUmassCsGnscommonCommandType_CommandCategory, SELECT)

inline EduUmassCsGnscommonCommandType_CommandCategory *EduUmassCsGnscommonCommandType_CommandCategory_get_OTHER();
J2OBJC_ENUM_CONSTANT(EduUmassCsGnscommonCommandType_CommandCategory, OTHER)

FOUNDATION_EXPORT IOSObjectArray *EduUmassCsGnscommonCommandType_CommandCategory_values();

FOUNDATION_EXPORT EduUmassCsGnscommonCommandType_CommandCategory *EduUmassCsGnscommonCommandType_CommandCategory_valueOfWithNSString_(NSString *name);

FOUNDATION_EXPORT EduUmassCsGnscommonCommandType_CommandCategory *EduUmassCsGnscommonCommandType_CommandCategory_fromOrdinal(NSUInteger ordinal);

J2OBJC_TYPE_LITERAL_HEADER(EduUmassCsGnscommonCommandType_CommandCategory)

#endif

#pragma pop_macro("INCLUDE_ALL_EduUmassCsGnscommonCommandType")
