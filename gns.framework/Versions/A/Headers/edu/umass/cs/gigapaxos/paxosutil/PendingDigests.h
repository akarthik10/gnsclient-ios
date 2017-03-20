//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: ./gigapaxos/src/edu/umass/cs/gigapaxos/paxosutil/PendingDigests.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_EduUmassCsGigapaxosPaxosutilPendingDigests")
#ifdef RESTRICT_EduUmassCsGigapaxosPaxosutilPendingDigests
#define INCLUDE_ALL_EduUmassCsGigapaxosPaxosutilPendingDigests 0
#else
#define INCLUDE_ALL_EduUmassCsGigapaxosPaxosutilPendingDigests 1
#endif
#undef RESTRICT_EduUmassCsGigapaxosPaxosutilPendingDigests

#if !defined (EduUmassCsGigapaxosPaxosutilPendingDigests_) && (INCLUDE_ALL_EduUmassCsGigapaxosPaxosutilPendingDigests || defined(INCLUDE_EduUmassCsGigapaxosPaxosutilPendingDigests))
#define EduUmassCsGigapaxosPaxosutilPendingDigests_

@class EduUmassCsGigapaxosPaxospacketsAcceptPacket;
@class EduUmassCsGigapaxosPaxospacketsRequestPacket;
@class EduUmassCsGigapaxosPaxosutilPendingDigests_PendingDigestCallback;
@class JavaSecurityMessageDigest;
@class JavaUtilConcurrentConcurrentHashMap;
@protocol JavaUtilMap;

@interface EduUmassCsGigapaxosPaxosutilPendingDigests : NSObject {
 @public
  JavaUtilConcurrentConcurrentHashMap *accepts_;
  id<JavaUtilMap> requests_;
  EduUmassCsGigapaxosPaxosutilPendingDigests_PendingDigestCallback *callback_;
}

#pragma mark Public

- (instancetype)initWithJavaUtilMap:(id<JavaUtilMap>)rcs
                            withInt:(jint)numMDs
withEduUmassCsGigapaxosPaxosutilPendingDigests_PendingDigestCallback:(EduUmassCsGigapaxosPaxosutilPendingDigests_PendingDigestCallback *)callback;

+ (JavaSecurityMessageDigest *)getMessageDigest;

- (EduUmassCsGigapaxosPaxospacketsAcceptPacket *)matchWithEduUmassCsGigapaxosPaxospacketsAcceptPacket:(EduUmassCsGigapaxosPaxospacketsAcceptPacket *)accept;

- (EduUmassCsGigapaxosPaxospacketsAcceptPacket *)release__WithEduUmassCsGigapaxosPaxospacketsRequestPacket:(EduUmassCsGigapaxosPaxospacketsRequestPacket *)request
                                                                                               withBoolean:(jboolean)remove;

- (EduUmassCsGigapaxosPaxospacketsAcceptPacket *)release__WithEduUmassCsGigapaxosPaxospacketsRequestPacket:(EduUmassCsGigapaxosPaxospacketsRequestPacket *)request
                                                                                               withBoolean:(jboolean)remove
                                                                                               withBoolean:(jboolean)assertion;

- (EduUmassCsGigapaxosPaxospacketsAcceptPacket *)removeWithEduUmassCsGigapaxosPaxospacketsRequestPacket:(EduUmassCsGigapaxosPaxospacketsRequestPacket *)request;

- (jint)size;

- (NSString *)description;

@end

J2OBJC_STATIC_INIT(EduUmassCsGigapaxosPaxosutilPendingDigests)

J2OBJC_FIELD_SETTER(EduUmassCsGigapaxosPaxosutilPendingDigests, accepts_, JavaUtilConcurrentConcurrentHashMap *)
J2OBJC_FIELD_SETTER(EduUmassCsGigapaxosPaxosutilPendingDigests, requests_, id<JavaUtilMap>)
J2OBJC_FIELD_SETTER(EduUmassCsGigapaxosPaxosutilPendingDigests, callback_, EduUmassCsGigapaxosPaxosutilPendingDigests_PendingDigestCallback *)

FOUNDATION_EXPORT void EduUmassCsGigapaxosPaxosutilPendingDigests_initWithJavaUtilMap_withInt_withEduUmassCsGigapaxosPaxosutilPendingDigests_PendingDigestCallback_(EduUmassCsGigapaxosPaxosutilPendingDigests *self, id<JavaUtilMap> rcs, jint numMDs, EduUmassCsGigapaxosPaxosutilPendingDigests_PendingDigestCallback *callback);

FOUNDATION_EXPORT EduUmassCsGigapaxosPaxosutilPendingDigests *new_EduUmassCsGigapaxosPaxosutilPendingDigests_initWithJavaUtilMap_withInt_withEduUmassCsGigapaxosPaxosutilPendingDigests_PendingDigestCallback_(id<JavaUtilMap> rcs, jint numMDs, EduUmassCsGigapaxosPaxosutilPendingDigests_PendingDigestCallback *callback) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT EduUmassCsGigapaxosPaxosutilPendingDigests *create_EduUmassCsGigapaxosPaxosutilPendingDigests_initWithJavaUtilMap_withInt_withEduUmassCsGigapaxosPaxosutilPendingDigests_PendingDigestCallback_(id<JavaUtilMap> rcs, jint numMDs, EduUmassCsGigapaxosPaxosutilPendingDigests_PendingDigestCallback *callback);

FOUNDATION_EXPORT JavaSecurityMessageDigest *EduUmassCsGigapaxosPaxosutilPendingDigests_getMessageDigest();

J2OBJC_TYPE_LITERAL_HEADER(EduUmassCsGigapaxosPaxosutilPendingDigests)

#endif

#if !defined (EduUmassCsGigapaxosPaxosutilPendingDigests_PendingDigestCallback_) && (INCLUDE_ALL_EduUmassCsGigapaxosPaxosutilPendingDigests || defined(INCLUDE_EduUmassCsGigapaxosPaxosutilPendingDigests_PendingDigestCallback))
#define EduUmassCsGigapaxosPaxosutilPendingDigests_PendingDigestCallback_

@class EduUmassCsGigapaxosPaxospacketsAcceptPacket;

@interface EduUmassCsGigapaxosPaxosutilPendingDigests_PendingDigestCallback : NSObject

#pragma mark Public

- (instancetype)init;

- (void)callbackWithEduUmassCsGigapaxosPaxospacketsAcceptPacket:(EduUmassCsGigapaxosPaxospacketsAcceptPacket *)accept;

@end

J2OBJC_EMPTY_STATIC_INIT(EduUmassCsGigapaxosPaxosutilPendingDigests_PendingDigestCallback)

FOUNDATION_EXPORT void EduUmassCsGigapaxosPaxosutilPendingDigests_PendingDigestCallback_init(EduUmassCsGigapaxosPaxosutilPendingDigests_PendingDigestCallback *self);

J2OBJC_TYPE_LITERAL_HEADER(EduUmassCsGigapaxosPaxosutilPendingDigests_PendingDigestCallback)

#endif

#pragma pop_macro("INCLUDE_ALL_EduUmassCsGigapaxosPaxosutilPendingDigests")