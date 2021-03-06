//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: ./gigapaxos/src/edu/umass/cs/reconfiguration/reconfigurationutils/DemandProfile.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_EduUmassCsReconfigurationReconfigurationutilsDemandProfile")
#ifdef RESTRICT_EduUmassCsReconfigurationReconfigurationutilsDemandProfile
#define INCLUDE_ALL_EduUmassCsReconfigurationReconfigurationutilsDemandProfile 0
#else
#define INCLUDE_ALL_EduUmassCsReconfigurationReconfigurationutilsDemandProfile 1
#endif
#undef RESTRICT_EduUmassCsReconfigurationReconfigurationutilsDemandProfile

#if !defined (EduUmassCsReconfigurationReconfigurationutilsDemandProfile_) && (INCLUDE_ALL_EduUmassCsReconfigurationReconfigurationutilsDemandProfile || defined(INCLUDE_EduUmassCsReconfigurationReconfigurationutilsDemandProfile))
#define EduUmassCsReconfigurationReconfigurationutilsDemandProfile_

#define RESTRICT_EduUmassCsReconfigurationReconfigurationutilsAbstractDemandProfile 1
#define INCLUDE_EduUmassCsReconfigurationReconfigurationutilsAbstractDemandProfile 1
#include "edu/umass/cs/reconfiguration/reconfigurationutils/AbstractDemandProfile.h"

@class IOSObjectArray;
@class JavaNetInetAddress;
@class JavaUtilArrayList;
@class OrgJsonJSONObject;
@protocol EduUmassCsGigapaxosInterfacesRequest;
@protocol EduUmassCsReconfigurationReconfigurationutilsInterfaceGetActiveIPs;

@interface EduUmassCsReconfigurationReconfigurationutilsDemandProfile : EduUmassCsReconfigurationReconfigurationutilsAbstractDemandProfile {
 @public
  jdouble interArrivalTime_;
  jlong lastRequestTime_;
  jint numRequests_;
  jint numTotalRequests_;
  EduUmassCsReconfigurationReconfigurationutilsDemandProfile *lastReconfiguredProfile_;
}

#pragma mark Public

- (instancetype)initWithEduUmassCsReconfigurationReconfigurationutilsDemandProfile:(EduUmassCsReconfigurationReconfigurationutilsDemandProfile *)dp;

- (instancetype)initWithOrgJsonJSONObject:(OrgJsonJSONObject *)json;

- (instancetype)initWithNSString:(NSString *)name;

- (void)combineWithEduUmassCsReconfigurationReconfigurationutilsAbstractDemandProfile:(EduUmassCsReconfigurationReconfigurationutilsAbstractDemandProfile *)dp;

+ (EduUmassCsReconfigurationReconfigurationutilsDemandProfile *)createDemandProfileWithNSString:(NSString *)name;

- (jdouble)getNumRequests;

- (jdouble)getNumTotalRequests;

- (jdouble)getRequestRate;

- (OrgJsonJSONObject *)getStats;

- (void)justReconfigured;

+ (void)mainWithNSStringArray:(IOSObjectArray *)args;

- (void)register__WithEduUmassCsGigapaxosInterfacesRequest:(id<EduUmassCsGigapaxosInterfacesRequest>)request
                                    withJavaNetInetAddress:(JavaNetInetAddress *)sender
withEduUmassCsReconfigurationReconfigurationutilsInterfaceGetActiveIPs:(id<EduUmassCsReconfigurationReconfigurationutilsInterfaceGetActiveIPs>)nodeConfig;

- (JavaUtilArrayList *)shouldReconfigureWithJavaUtilArrayList:(JavaUtilArrayList *)curActives
withEduUmassCsReconfigurationReconfigurationutilsInterfaceGetActiveIPs:(id<EduUmassCsReconfigurationReconfigurationutilsInterfaceGetActiveIPs>)nodeConfig;

- (jboolean)shouldReport;

@end

J2OBJC_STATIC_INIT(EduUmassCsReconfigurationReconfigurationutilsDemandProfile)

J2OBJC_FIELD_SETTER(EduUmassCsReconfigurationReconfigurationutilsDemandProfile, lastReconfiguredProfile_, EduUmassCsReconfigurationReconfigurationutilsDemandProfile *)

inline jint EduUmassCsReconfigurationReconfigurationutilsDemandProfile_get_minRequestsBeforeDemandReport();
inline jint EduUmassCsReconfigurationReconfigurationutilsDemandProfile_set_minRequestsBeforeDemandReport(jint value);
inline jint *EduUmassCsReconfigurationReconfigurationutilsDemandProfile_getRef_minRequestsBeforeDemandReport();
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT jint EduUmassCsReconfigurationReconfigurationutilsDemandProfile_minRequestsBeforeDemandReport;
J2OBJC_STATIC_FIELD_PRIMITIVE(EduUmassCsReconfigurationReconfigurationutilsDemandProfile, minRequestsBeforeDemandReport, jint)

inline jlong EduUmassCsReconfigurationReconfigurationutilsDemandProfile_get_minReconfigurationInterval();
inline jlong EduUmassCsReconfigurationReconfigurationutilsDemandProfile_set_minReconfigurationInterval(jlong value);
inline jlong *EduUmassCsReconfigurationReconfigurationutilsDemandProfile_getRef_minReconfigurationInterval();
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT jlong EduUmassCsReconfigurationReconfigurationutilsDemandProfile_minReconfigurationInterval;
J2OBJC_STATIC_FIELD_PRIMITIVE(EduUmassCsReconfigurationReconfigurationutilsDemandProfile, minReconfigurationInterval, jlong)

inline jlong EduUmassCsReconfigurationReconfigurationutilsDemandProfile_get_minRequestsBeforeReconfiguration();
inline jlong EduUmassCsReconfigurationReconfigurationutilsDemandProfile_set_minRequestsBeforeReconfiguration(jlong value);
inline jlong *EduUmassCsReconfigurationReconfigurationutilsDemandProfile_getRef_minRequestsBeforeReconfiguration();
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT jlong EduUmassCsReconfigurationReconfigurationutilsDemandProfile_minRequestsBeforeReconfiguration;
J2OBJC_STATIC_FIELD_PRIMITIVE(EduUmassCsReconfigurationReconfigurationutilsDemandProfile, minRequestsBeforeReconfiguration, jlong)

FOUNDATION_EXPORT void EduUmassCsReconfigurationReconfigurationutilsDemandProfile_initWithNSString_(EduUmassCsReconfigurationReconfigurationutilsDemandProfile *self, NSString *name);

FOUNDATION_EXPORT EduUmassCsReconfigurationReconfigurationutilsDemandProfile *new_EduUmassCsReconfigurationReconfigurationutilsDemandProfile_initWithNSString_(NSString *name) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT EduUmassCsReconfigurationReconfigurationutilsDemandProfile *create_EduUmassCsReconfigurationReconfigurationutilsDemandProfile_initWithNSString_(NSString *name);

FOUNDATION_EXPORT void EduUmassCsReconfigurationReconfigurationutilsDemandProfile_initWithEduUmassCsReconfigurationReconfigurationutilsDemandProfile_(EduUmassCsReconfigurationReconfigurationutilsDemandProfile *self, EduUmassCsReconfigurationReconfigurationutilsDemandProfile *dp);

FOUNDATION_EXPORT EduUmassCsReconfigurationReconfigurationutilsDemandProfile *new_EduUmassCsReconfigurationReconfigurationutilsDemandProfile_initWithEduUmassCsReconfigurationReconfigurationutilsDemandProfile_(EduUmassCsReconfigurationReconfigurationutilsDemandProfile *dp) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT EduUmassCsReconfigurationReconfigurationutilsDemandProfile *create_EduUmassCsReconfigurationReconfigurationutilsDemandProfile_initWithEduUmassCsReconfigurationReconfigurationutilsDemandProfile_(EduUmassCsReconfigurationReconfigurationutilsDemandProfile *dp);

FOUNDATION_EXPORT void EduUmassCsReconfigurationReconfigurationutilsDemandProfile_initWithOrgJsonJSONObject_(EduUmassCsReconfigurationReconfigurationutilsDemandProfile *self, OrgJsonJSONObject *json);

FOUNDATION_EXPORT EduUmassCsReconfigurationReconfigurationutilsDemandProfile *new_EduUmassCsReconfigurationReconfigurationutilsDemandProfile_initWithOrgJsonJSONObject_(OrgJsonJSONObject *json) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT EduUmassCsReconfigurationReconfigurationutilsDemandProfile *create_EduUmassCsReconfigurationReconfigurationutilsDemandProfile_initWithOrgJsonJSONObject_(OrgJsonJSONObject *json);

FOUNDATION_EXPORT EduUmassCsReconfigurationReconfigurationutilsDemandProfile *EduUmassCsReconfigurationReconfigurationutilsDemandProfile_createDemandProfileWithNSString_(NSString *name);

FOUNDATION_EXPORT void EduUmassCsReconfigurationReconfigurationutilsDemandProfile_mainWithNSStringArray_(IOSObjectArray *args);

J2OBJC_TYPE_LITERAL_HEADER(EduUmassCsReconfigurationReconfigurationutilsDemandProfile)

#endif

#if !defined (EduUmassCsReconfigurationReconfigurationutilsDemandProfile_Keys_) && (INCLUDE_ALL_EduUmassCsReconfigurationReconfigurationutilsDemandProfile || defined(INCLUDE_EduUmassCsReconfigurationReconfigurationutilsDemandProfile_Keys))
#define EduUmassCsReconfigurationReconfigurationutilsDemandProfile_Keys_

#define RESTRICT_JavaLangEnum 1
#define INCLUDE_JavaLangEnum 1
#include "java/lang/Enum.h"

@class IOSObjectArray;

typedef NS_ENUM(NSUInteger, EduUmassCsReconfigurationReconfigurationutilsDemandProfile_Keys_Enum) {
  EduUmassCsReconfigurationReconfigurationutilsDemandProfile_Keys_Enum_NAME = 0,
  EduUmassCsReconfigurationReconfigurationutilsDemandProfile_Keys_Enum_STATS = 1,
  EduUmassCsReconfigurationReconfigurationutilsDemandProfile_Keys_Enum_RATE = 2,
  EduUmassCsReconfigurationReconfigurationutilsDemandProfile_Keys_Enum_NREQS = 3,
  EduUmassCsReconfigurationReconfigurationutilsDemandProfile_Keys_Enum_NTOTREQS = 4,
};

@interface EduUmassCsReconfigurationReconfigurationutilsDemandProfile_Keys : JavaLangEnum < NSCopying >

#pragma mark Public

+ (EduUmassCsReconfigurationReconfigurationutilsDemandProfile_Keys *)valueOfWithNSString:(NSString *)name;

+ (IOSObjectArray *)values;

#pragma mark Package-Private

- (id)copyWithZone:(NSZone *)zone;

@end

J2OBJC_STATIC_INIT(EduUmassCsReconfigurationReconfigurationutilsDemandProfile_Keys)

/*! INTERNAL ONLY - Use enum accessors declared below. */
FOUNDATION_EXPORT EduUmassCsReconfigurationReconfigurationutilsDemandProfile_Keys *EduUmassCsReconfigurationReconfigurationutilsDemandProfile_Keys_values_[];

inline EduUmassCsReconfigurationReconfigurationutilsDemandProfile_Keys *EduUmassCsReconfigurationReconfigurationutilsDemandProfile_Keys_get_NAME();
J2OBJC_ENUM_CONSTANT(EduUmassCsReconfigurationReconfigurationutilsDemandProfile_Keys, NAME)

inline EduUmassCsReconfigurationReconfigurationutilsDemandProfile_Keys *EduUmassCsReconfigurationReconfigurationutilsDemandProfile_Keys_get_STATS();
J2OBJC_ENUM_CONSTANT(EduUmassCsReconfigurationReconfigurationutilsDemandProfile_Keys, STATS)

inline EduUmassCsReconfigurationReconfigurationutilsDemandProfile_Keys *EduUmassCsReconfigurationReconfigurationutilsDemandProfile_Keys_get_RATE();
J2OBJC_ENUM_CONSTANT(EduUmassCsReconfigurationReconfigurationutilsDemandProfile_Keys, RATE)

inline EduUmassCsReconfigurationReconfigurationutilsDemandProfile_Keys *EduUmassCsReconfigurationReconfigurationutilsDemandProfile_Keys_get_NREQS();
J2OBJC_ENUM_CONSTANT(EduUmassCsReconfigurationReconfigurationutilsDemandProfile_Keys, NREQS)

inline EduUmassCsReconfigurationReconfigurationutilsDemandProfile_Keys *EduUmassCsReconfigurationReconfigurationutilsDemandProfile_Keys_get_NTOTREQS();
J2OBJC_ENUM_CONSTANT(EduUmassCsReconfigurationReconfigurationutilsDemandProfile_Keys, NTOTREQS)

FOUNDATION_EXPORT IOSObjectArray *EduUmassCsReconfigurationReconfigurationutilsDemandProfile_Keys_values();

FOUNDATION_EXPORT EduUmassCsReconfigurationReconfigurationutilsDemandProfile_Keys *EduUmassCsReconfigurationReconfigurationutilsDemandProfile_Keys_valueOfWithNSString_(NSString *name);

FOUNDATION_EXPORT EduUmassCsReconfigurationReconfigurationutilsDemandProfile_Keys *EduUmassCsReconfigurationReconfigurationutilsDemandProfile_Keys_fromOrdinal(NSUInteger ordinal);

J2OBJC_TYPE_LITERAL_HEADER(EduUmassCsReconfigurationReconfigurationutilsDemandProfile_Keys)

#endif

#pragma pop_macro("INCLUDE_ALL_EduUmassCsReconfigurationReconfigurationutilsDemandProfile")
