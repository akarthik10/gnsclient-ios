//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: ./gigapaxos/src/edu/umass/cs/nio/AbstractPacketDemultiplexer.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_EduUmassCsNioAbstractPacketDemultiplexer")
#ifdef RESTRICT_EduUmassCsNioAbstractPacketDemultiplexer
#define INCLUDE_ALL_EduUmassCsNioAbstractPacketDemultiplexer 0
#else
#define INCLUDE_ALL_EduUmassCsNioAbstractPacketDemultiplexer 1
#endif
#undef RESTRICT_EduUmassCsNioAbstractPacketDemultiplexer

#if !defined (EduUmassCsNioAbstractPacketDemultiplexer_) && (INCLUDE_ALL_EduUmassCsNioAbstractPacketDemultiplexer || defined(INCLUDE_EduUmassCsNioAbstractPacketDemultiplexer))
#define EduUmassCsNioAbstractPacketDemultiplexer_

#define RESTRICT_EduUmassCsNioInterfacesPacketDemultiplexer 1
#define INCLUDE_EduUmassCsNioInterfacesPacketDemultiplexer 1
#include "edu/umass/cs/nio/interfaces/PacketDemultiplexer.h"

@class EduUmassCsNioNioutilsNIOHeader;
@class IOSByteArray;
@class IOSObjectArray;
@class JavaLangInteger;
@class JavaUtilLoggingLogger;
@protocol EduUmassCsNioInterfacesIntegerPacketType;
@protocol JavaUtilSet;

@interface EduUmassCsNioAbstractPacketDemultiplexer : NSObject < EduUmassCsNioInterfacesPacketDemultiplexer >

#pragma mark Public

- (instancetype)init;

- (instancetype)initWithInt:(jint)threadPoolSize;

+ (void)emulateDelays;

+ (NSString *)getHandleMessageReportWithLong:(jlong)threshold;

- (jboolean)isOrderPreservingWithId:(id)msg;

- (void)register__WithEduUmassCsNioInterfacesIntegerPacketType:(id<EduUmassCsNioInterfacesIntegerPacketType>)type;

- (void)register__WithEduUmassCsNioInterfacesIntegerPacketType:(id<EduUmassCsNioInterfacesIntegerPacketType>)type
                withEduUmassCsNioInterfacesPacketDemultiplexer:(id<EduUmassCsNioInterfacesPacketDemultiplexer>)pd;

- (void)register__WithEduUmassCsNioInterfacesIntegerPacketTypeArray:(IOSObjectArray *)types;

- (void)register__WithEduUmassCsNioInterfacesIntegerPacketTypeArray:(IOSObjectArray *)types
                     withEduUmassCsNioInterfacesPacketDemultiplexer:(id<EduUmassCsNioInterfacesPacketDemultiplexer>)pd;

- (void)register__WithJavaUtilSet:(id<JavaUtilSet>)types;

- (void)register__WithJavaUtilSet:(id<JavaUtilSet>)types
withEduUmassCsNioInterfacesPacketDemultiplexer:(id<EduUmassCsNioInterfacesPacketDemultiplexer>)pd;

- (void)registerOrderPreservingWithEduUmassCsNioInterfacesIntegerPacketType:(id<EduUmassCsNioInterfacesIntegerPacketType>)type;

- (EduUmassCsNioAbstractPacketDemultiplexer *)setNumDemultiplexerThreadsWithInt:(jint)corePoolSize;

+ (void)setThreadPoolSizeWithInt:(jint)threadPoolSize;

- (void)stop;

- (NSString *)description;

#pragma mark Protected

- (JavaLangInteger *)getPacketTypeWithId:(id)message;

+ (jint)getThreadPoolSize;

- (jboolean)handleMessageSuperWithByteArray:(IOSByteArray *)msg
         withEduUmassCsNioNioutilsNIOHeader:(EduUmassCsNioNioutilsNIOHeader *)header;

- (jboolean)isCongestedWithEduUmassCsNioNioutilsNIOHeader:(EduUmassCsNioNioutilsNIOHeader *)header;

- (jboolean)loopbackWithId:(id)obj;

- (jboolean)matchesTypeWithId:(id)message;

- (id)processHeaderWithByteArray:(IOSByteArray *)message
withEduUmassCsNioNioutilsNIOHeader:(EduUmassCsNioNioutilsNIOHeader *)header;

- (EduUmassCsNioAbstractPacketDemultiplexer *)setThreadNameWithNSString:(NSString *)name;

@end

J2OBJC_STATIC_INIT(EduUmassCsNioAbstractPacketDemultiplexer)

inline jint EduUmassCsNioAbstractPacketDemultiplexer_get_DEFAULT_THREAD_POOL_SIZE();
#define EduUmassCsNioAbstractPacketDemultiplexer_DEFAULT_THREAD_POOL_SIZE 5
J2OBJC_STATIC_FIELD_CONSTANT(EduUmassCsNioAbstractPacketDemultiplexer, DEFAULT_THREAD_POOL_SIZE, jint)

inline JavaUtilLoggingLogger *EduUmassCsNioAbstractPacketDemultiplexer_get_log();
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT JavaUtilLoggingLogger *EduUmassCsNioAbstractPacketDemultiplexer_log;
J2OBJC_STATIC_FIELD_OBJ_FINAL(EduUmassCsNioAbstractPacketDemultiplexer, log, JavaUtilLoggingLogger *)

FOUNDATION_EXPORT void EduUmassCsNioAbstractPacketDemultiplexer_setThreadPoolSizeWithInt_(jint threadPoolSize);

FOUNDATION_EXPORT jint EduUmassCsNioAbstractPacketDemultiplexer_getThreadPoolSize();

FOUNDATION_EXPORT void EduUmassCsNioAbstractPacketDemultiplexer_initWithInt_(EduUmassCsNioAbstractPacketDemultiplexer *self, jint threadPoolSize);

FOUNDATION_EXPORT void EduUmassCsNioAbstractPacketDemultiplexer_init(EduUmassCsNioAbstractPacketDemultiplexer *self);

FOUNDATION_EXPORT void EduUmassCsNioAbstractPacketDemultiplexer_emulateDelays();

FOUNDATION_EXPORT NSString *EduUmassCsNioAbstractPacketDemultiplexer_getHandleMessageReportWithLong_(jlong threshold);

J2OBJC_TYPE_LITERAL_HEADER(EduUmassCsNioAbstractPacketDemultiplexer)

#endif

#if !defined (EduUmassCsNioAbstractPacketDemultiplexer_Tasker_) && (INCLUDE_ALL_EduUmassCsNioAbstractPacketDemultiplexer || defined(INCLUDE_EduUmassCsNioAbstractPacketDemultiplexer_Tasker))
#define EduUmassCsNioAbstractPacketDemultiplexer_Tasker_

#define RESTRICT_JavaLangRunnable 1
#define INCLUDE_JavaLangRunnable 1
#include "java/lang/Runnable.h"

@class EduUmassCsNioAbstractPacketDemultiplexer;
@class EduUmassCsNioNioutilsNIOHeader;
@protocol EduUmassCsNioInterfacesPacketDemultiplexer;

@interface EduUmassCsNioAbstractPacketDemultiplexer_Tasker : NSObject < JavaLangRunnable >

#pragma mark Public

- (void)run;

#pragma mark Package-Private

- (instancetype)initWithEduUmassCsNioAbstractPacketDemultiplexer:(EduUmassCsNioAbstractPacketDemultiplexer *)outer$
                                                          withId:(id)json
                  withEduUmassCsNioInterfacesPacketDemultiplexer:(id<EduUmassCsNioInterfacesPacketDemultiplexer>)pd
                              withEduUmassCsNioNioutilsNIOHeader:(EduUmassCsNioNioutilsNIOHeader *)header;

@end

J2OBJC_EMPTY_STATIC_INIT(EduUmassCsNioAbstractPacketDemultiplexer_Tasker)

FOUNDATION_EXPORT void EduUmassCsNioAbstractPacketDemultiplexer_Tasker_initWithEduUmassCsNioAbstractPacketDemultiplexer_withId_withEduUmassCsNioInterfacesPacketDemultiplexer_withEduUmassCsNioNioutilsNIOHeader_(EduUmassCsNioAbstractPacketDemultiplexer_Tasker *self, EduUmassCsNioAbstractPacketDemultiplexer *outer$, id json, id<EduUmassCsNioInterfacesPacketDemultiplexer> pd, EduUmassCsNioNioutilsNIOHeader *header);

FOUNDATION_EXPORT EduUmassCsNioAbstractPacketDemultiplexer_Tasker *new_EduUmassCsNioAbstractPacketDemultiplexer_Tasker_initWithEduUmassCsNioAbstractPacketDemultiplexer_withId_withEduUmassCsNioInterfacesPacketDemultiplexer_withEduUmassCsNioNioutilsNIOHeader_(EduUmassCsNioAbstractPacketDemultiplexer *outer$, id json, id<EduUmassCsNioInterfacesPacketDemultiplexer> pd, EduUmassCsNioNioutilsNIOHeader *header) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT EduUmassCsNioAbstractPacketDemultiplexer_Tasker *create_EduUmassCsNioAbstractPacketDemultiplexer_Tasker_initWithEduUmassCsNioAbstractPacketDemultiplexer_withId_withEduUmassCsNioInterfacesPacketDemultiplexer_withEduUmassCsNioNioutilsNIOHeader_(EduUmassCsNioAbstractPacketDemultiplexer *outer$, id json, id<EduUmassCsNioInterfacesPacketDemultiplexer> pd, EduUmassCsNioNioutilsNIOHeader *header);

J2OBJC_TYPE_LITERAL_HEADER(EduUmassCsNioAbstractPacketDemultiplexer_Tasker)

#endif

#pragma pop_macro("INCLUDE_ALL_EduUmassCsNioAbstractPacketDemultiplexer")
