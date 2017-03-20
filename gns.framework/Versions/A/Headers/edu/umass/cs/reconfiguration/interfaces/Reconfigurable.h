//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: ./gigapaxos/src/edu/umass/cs/reconfiguration/interfaces/Reconfigurable.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_EduUmassCsReconfigurationInterfacesReconfigurable")
#ifdef RESTRICT_EduUmassCsReconfigurationInterfacesReconfigurable
#define INCLUDE_ALL_EduUmassCsReconfigurationInterfacesReconfigurable 0
#else
#define INCLUDE_ALL_EduUmassCsReconfigurationInterfacesReconfigurable 1
#endif
#undef RESTRICT_EduUmassCsReconfigurationInterfacesReconfigurable

#if !defined (EduUmassCsReconfigurationInterfacesReconfigurable_) && (INCLUDE_ALL_EduUmassCsReconfigurationInterfacesReconfigurable || defined(INCLUDE_EduUmassCsReconfigurationInterfacesReconfigurable))
#define EduUmassCsReconfigurationInterfacesReconfigurable_

#define RESTRICT_EduUmassCsGigapaxosInterfacesApplication 1
#define INCLUDE_EduUmassCsGigapaxosInterfacesApplication 1
#include "edu/umass/cs/gigapaxos/interfaces/Application.h"

@class JavaLangInteger;
@protocol EduUmassCsReconfigurationInterfacesReconfigurableRequest;

@protocol EduUmassCsReconfigurationInterfacesReconfigurable < EduUmassCsGigapaxosInterfacesApplication, JavaObject >

- (id<EduUmassCsReconfigurationInterfacesReconfigurableRequest>)getStopRequestWithNSString:(NSString *)name
                                                                                   withInt:(jint)epoch;

- (NSString *)getFinalStateWithNSString:(NSString *)name
                                withInt:(jint)epoch;

- (void)putInitialStateWithNSString:(NSString *)name
                            withInt:(jint)epoch
                       withNSString:(NSString *)state;

- (jboolean)deleteFinalStateWithNSString:(NSString *)name
                                 withInt:(jint)epoch;

- (JavaLangInteger *)getEpochWithNSString:(NSString *)name;

@end

J2OBJC_EMPTY_STATIC_INIT(EduUmassCsReconfigurationInterfacesReconfigurable)

J2OBJC_TYPE_LITERAL_HEADER(EduUmassCsReconfigurationInterfacesReconfigurable)

#endif

#pragma pop_macro("INCLUDE_ALL_EduUmassCsReconfigurationInterfacesReconfigurable")
