//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: ./gigapaxos/src/edu/umass/cs/gigapaxos/paxosutil/RequestInstrumenter.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_EduUmassCsGigapaxosPaxosutilRequestInstrumenter")
#ifdef RESTRICT_EduUmassCsGigapaxosPaxosutilRequestInstrumenter
#define INCLUDE_ALL_EduUmassCsGigapaxosPaxosutilRequestInstrumenter 0
#else
#define INCLUDE_ALL_EduUmassCsGigapaxosPaxosutilRequestInstrumenter 1
#endif
#undef RESTRICT_EduUmassCsGigapaxosPaxosutilRequestInstrumenter

#if !defined (EduUmassCsGigapaxosPaxosutilRequestInstrumenter_) && (INCLUDE_ALL_EduUmassCsGigapaxosPaxosutilRequestInstrumenter || defined(INCLUDE_EduUmassCsGigapaxosPaxosutilRequestInstrumenter))
#define EduUmassCsGigapaxosPaxosutilRequestInstrumenter_

@class EduUmassCsGigapaxosPaxospacketsAcceptReplyPacket;
@class EduUmassCsGigapaxosPaxospacketsRequestPacket;

@interface EduUmassCsGigapaxosPaxosutilRequestInstrumenter : NSObject

#pragma mark Public

- (instancetype)init;

+ (NSString *)getLog;

+ (NSString *)getLogWithLong:(jlong)requestID;

+ (void)receivedWithEduUmassCsGigapaxosPaxospacketsAcceptReplyPacket:(EduUmassCsGigapaxosPaxospacketsAcceptReplyPacket *)request
                                                             withInt:(jint)sender
                                                             withInt:(jint)receiver;

+ (void)receivedWithEduUmassCsGigapaxosPaxospacketsRequestPacket:(EduUmassCsGigapaxosPaxospacketsRequestPacket *)request
                                                         withInt:(jint)sender
                                                         withInt:(jint)receiver;

+ (NSString *)removeWithLong:(jlong)requestID;

+ (void)removeAll;

+ (void)sentWithEduUmassCsGigapaxosPaxospacketsAcceptReplyPacket:(EduUmassCsGigapaxosPaxospacketsAcceptReplyPacket *)request
                                                         withInt:(jint)sender
                                                         withInt:(jint)receiver;

+ (void)sentWithEduUmassCsGigapaxosPaxospacketsRequestPacket:(EduUmassCsGigapaxosPaxospacketsRequestPacket *)request
                                                     withInt:(jint)sender
                                                     withInt:(jint)receiver;

@end

J2OBJC_STATIC_INIT(EduUmassCsGigapaxosPaxosutilRequestInstrumenter)

inline jboolean EduUmassCsGigapaxosPaxosutilRequestInstrumenter_get_DEBUG();
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT jboolean EduUmassCsGigapaxosPaxosutilRequestInstrumenter_DEBUG;
J2OBJC_STATIC_FIELD_PRIMITIVE_FINAL(EduUmassCsGigapaxosPaxosutilRequestInstrumenter, DEBUG, jboolean)

FOUNDATION_EXPORT void EduUmassCsGigapaxosPaxosutilRequestInstrumenter_init(EduUmassCsGigapaxosPaxosutilRequestInstrumenter *self);

FOUNDATION_EXPORT EduUmassCsGigapaxosPaxosutilRequestInstrumenter *new_EduUmassCsGigapaxosPaxosutilRequestInstrumenter_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT EduUmassCsGigapaxosPaxosutilRequestInstrumenter *create_EduUmassCsGigapaxosPaxosutilRequestInstrumenter_init();

FOUNDATION_EXPORT void EduUmassCsGigapaxosPaxosutilRequestInstrumenter_receivedWithEduUmassCsGigapaxosPaxospacketsRequestPacket_withInt_withInt_(EduUmassCsGigapaxosPaxospacketsRequestPacket *request, jint sender, jint receiver);

FOUNDATION_EXPORT void EduUmassCsGigapaxosPaxosutilRequestInstrumenter_receivedWithEduUmassCsGigapaxosPaxospacketsAcceptReplyPacket_withInt_withInt_(EduUmassCsGigapaxosPaxospacketsAcceptReplyPacket *request, jint sender, jint receiver);

FOUNDATION_EXPORT void EduUmassCsGigapaxosPaxosutilRequestInstrumenter_sentWithEduUmassCsGigapaxosPaxospacketsAcceptReplyPacket_withInt_withInt_(EduUmassCsGigapaxosPaxospacketsAcceptReplyPacket *request, jint sender, jint receiver);

FOUNDATION_EXPORT void EduUmassCsGigapaxosPaxosutilRequestInstrumenter_sentWithEduUmassCsGigapaxosPaxospacketsRequestPacket_withInt_withInt_(EduUmassCsGigapaxosPaxospacketsRequestPacket *request, jint sender, jint receiver);

FOUNDATION_EXPORT NSString *EduUmassCsGigapaxosPaxosutilRequestInstrumenter_removeWithLong_(jlong requestID);

FOUNDATION_EXPORT void EduUmassCsGigapaxosPaxosutilRequestInstrumenter_removeAll();

FOUNDATION_EXPORT NSString *EduUmassCsGigapaxosPaxosutilRequestInstrumenter_getLogWithLong_(jlong requestID);

FOUNDATION_EXPORT NSString *EduUmassCsGigapaxosPaxosutilRequestInstrumenter_getLog();

J2OBJC_TYPE_LITERAL_HEADER(EduUmassCsGigapaxosPaxosutilRequestInstrumenter)

#endif

#pragma pop_macro("INCLUDE_ALL_EduUmassCsGigapaxosPaxosutilRequestInstrumenter")
