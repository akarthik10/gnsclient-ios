//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: ./GNS/src/edu/umass/cs/gnsclient/client/util/KeyPairUtils.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_EduUmassCsGnsclientClientUtilKeyPairUtils")
#ifdef RESTRICT_EduUmassCsGnsclientClientUtilKeyPairUtils
#define INCLUDE_ALL_EduUmassCsGnsclientClientUtilKeyPairUtils 0
#else
#define INCLUDE_ALL_EduUmassCsGnsclientClientUtilKeyPairUtils 1
#endif
#undef RESTRICT_EduUmassCsGnsclientClientUtilKeyPairUtils

#if !defined (EduUmassCsGnsclientClientUtilKeyPairUtils_) && (INCLUDE_ALL_EduUmassCsGnsclientClientUtilKeyPairUtils || defined(INCLUDE_EduUmassCsGnsclientClientUtilKeyPairUtils))
#define EduUmassCsGnsclientClientUtilKeyPairUtils_

@class EduUmassCsGnsclientClientUtilGuidEntry;
@protocol JavaSecurityPrivateKey;
@protocol JavaUtilList;

@interface EduUmassCsGnsclientClientUtilKeyPairUtils : NSObject

#pragma mark Public

- (instancetype)init;

+ (void)copyKeyPairWithNSString:(NSString *)sourceGNSName
                   withNSString:(NSString *)username
                   withNSString:(NSString *)destGNSName OBJC_METHOD_FAMILY_NONE;

+ (EduUmassCsGnsclientClientUtilGuidEntry *)generateAndSaveKeyPairWithNSString:(NSString *)gnsName
                                                                  withNSString:(NSString *)username;

+ (id<JavaUtilList>)getAllGuidsWithNSString:(NSString *)gnsName;

+ (NSString *)getDefaultGns;

+ (EduUmassCsGnsclientClientUtilGuidEntry *)getDefaultGuidEntryWithNSString:(NSString *)gnsName;

+ (EduUmassCsGnsclientClientUtilGuidEntry *)getGuidEntryWithNSString:(NSString *)gnsName
                                                        withNSString:(NSString *)username;

+ (id<JavaSecurityPrivateKey>)getPrivateKeyFromPKCS8FileWithNSString:(NSString *)filename;

+ (NSString *)publicKeyToBase64ForGuidWithEduUmassCsGnsclientClientUtilGuidEntry:(EduUmassCsGnsclientClientUtilGuidEntry *)guid;

+ (void)removeDefaultGns;

+ (void)removeDefaultGuidEntryWithNSString:(NSString *)gnsName;

+ (void)removeKeyPairWithNSString:(NSString *)gnsName
                     withNSString:(NSString *)username;

+ (void)setDefaultGnsWithNSString:(NSString *)gnsHostPort;

+ (void)setDefaultGuidEntryWithNSString:(NSString *)gnsName
                           withNSString:(NSString *)username;

+ (jboolean)writePrivateKeyToPKCS8FileWithJavaSecurityPrivateKey:(id<JavaSecurityPrivateKey>)privateKey
                                                    withNSString:(NSString *)filename;

@end

J2OBJC_STATIC_INIT(EduUmassCsGnsclientClientUtilKeyPairUtils)

FOUNDATION_EXPORT void EduUmassCsGnsclientClientUtilKeyPairUtils_init(EduUmassCsGnsclientClientUtilKeyPairUtils *self);

FOUNDATION_EXPORT EduUmassCsGnsclientClientUtilKeyPairUtils *new_EduUmassCsGnsclientClientUtilKeyPairUtils_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT EduUmassCsGnsclientClientUtilKeyPairUtils *create_EduUmassCsGnsclientClientUtilKeyPairUtils_init();

FOUNDATION_EXPORT EduUmassCsGnsclientClientUtilGuidEntry *EduUmassCsGnsclientClientUtilKeyPairUtils_getGuidEntryWithNSString_withNSString_(NSString *gnsName, NSString *username);

FOUNDATION_EXPORT void EduUmassCsGnsclientClientUtilKeyPairUtils_removeKeyPairWithNSString_withNSString_(NSString *gnsName, NSString *username);

FOUNDATION_EXPORT EduUmassCsGnsclientClientUtilGuidEntry *EduUmassCsGnsclientClientUtilKeyPairUtils_generateAndSaveKeyPairWithNSString_withNSString_(NSString *gnsName, NSString *username);

FOUNDATION_EXPORT void EduUmassCsGnsclientClientUtilKeyPairUtils_copyKeyPairWithNSString_withNSString_withNSString_(NSString *sourceGNSName, NSString *username, NSString *destGNSName);

FOUNDATION_EXPORT void EduUmassCsGnsclientClientUtilKeyPairUtils_setDefaultGuidEntryWithNSString_withNSString_(NSString *gnsName, NSString *username);

FOUNDATION_EXPORT void EduUmassCsGnsclientClientUtilKeyPairUtils_removeDefaultGuidEntryWithNSString_(NSString *gnsName);

FOUNDATION_EXPORT EduUmassCsGnsclientClientUtilGuidEntry *EduUmassCsGnsclientClientUtilKeyPairUtils_getDefaultGuidEntryWithNSString_(NSString *gnsName);

FOUNDATION_EXPORT void EduUmassCsGnsclientClientUtilKeyPairUtils_setDefaultGnsWithNSString_(NSString *gnsHostPort);

FOUNDATION_EXPORT NSString *EduUmassCsGnsclientClientUtilKeyPairUtils_getDefaultGns();

FOUNDATION_EXPORT void EduUmassCsGnsclientClientUtilKeyPairUtils_removeDefaultGns();

FOUNDATION_EXPORT id<JavaSecurityPrivateKey> EduUmassCsGnsclientClientUtilKeyPairUtils_getPrivateKeyFromPKCS8FileWithNSString_(NSString *filename);

FOUNDATION_EXPORT jboolean EduUmassCsGnsclientClientUtilKeyPairUtils_writePrivateKeyToPKCS8FileWithJavaSecurityPrivateKey_withNSString_(id<JavaSecurityPrivateKey> privateKey, NSString *filename);

FOUNDATION_EXPORT NSString *EduUmassCsGnsclientClientUtilKeyPairUtils_publicKeyToBase64ForGuidWithEduUmassCsGnsclientClientUtilGuidEntry_(EduUmassCsGnsclientClientUtilGuidEntry *guid);

FOUNDATION_EXPORT id<JavaUtilList> EduUmassCsGnsclientClientUtilKeyPairUtils_getAllGuidsWithNSString_(NSString *gnsName);

J2OBJC_TYPE_LITERAL_HEADER(EduUmassCsGnsclientClientUtilKeyPairUtils)

#endif

#pragma pop_macro("INCLUDE_ALL_EduUmassCsGnsclientClientUtilKeyPairUtils")
