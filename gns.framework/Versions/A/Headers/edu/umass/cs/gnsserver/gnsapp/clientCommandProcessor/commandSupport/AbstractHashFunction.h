//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: ./GNS/src/edu/umass/cs/gnsserver/gnsapp/clientCommandProcessor/commandSupport/AbstractHashFunction.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_EduUmassCsGnsserverGnsappClientCommandProcessorCommandSupportAbstractHashFunction")
#ifdef RESTRICT_EduUmassCsGnsserverGnsappClientCommandProcessorCommandSupportAbstractHashFunction
#define INCLUDE_ALL_EduUmassCsGnsserverGnsappClientCommandProcessorCommandSupportAbstractHashFunction 0
#else
#define INCLUDE_ALL_EduUmassCsGnsserverGnsappClientCommandProcessorCommandSupportAbstractHashFunction 1
#endif
#undef RESTRICT_EduUmassCsGnsserverGnsappClientCommandProcessorCommandSupportAbstractHashFunction

#if !defined (EduUmassCsGnsserverGnsappClientCommandProcessorCommandSupportAbstractHashFunction_) && (INCLUDE_ALL_EduUmassCsGnsserverGnsappClientCommandProcessorCommandSupportAbstractHashFunction || defined(INCLUDE_EduUmassCsGnsserverGnsappClientCommandProcessorCommandSupportAbstractHashFunction))
#define EduUmassCsGnsserverGnsappClientCommandProcessorCommandSupportAbstractHashFunction_

#define RESTRICT_EduUmassCsGnsserverGnsappClientCommandProcessorCommandSupportHashFunction 1
#define INCLUDE_EduUmassCsGnsserverGnsappClientCommandProcessorCommandSupportHashFunction 1
#include "edu/umass/cs/gnsserver/gnsapp/clientCommandProcessor/commandSupport/HashFunction.h"

@interface EduUmassCsGnsserverGnsappClientCommandProcessorCommandSupportAbstractHashFunction : NSObject < EduUmassCsGnsserverGnsappClientCommandProcessorCommandSupportHashFunction >

#pragma mark Public

- (instancetype)init;

- (jlong)hashToLongWithNSString:(NSString *)key;

@end

J2OBJC_EMPTY_STATIC_INIT(EduUmassCsGnsserverGnsappClientCommandProcessorCommandSupportAbstractHashFunction)

FOUNDATION_EXPORT void EduUmassCsGnsserverGnsappClientCommandProcessorCommandSupportAbstractHashFunction_init(EduUmassCsGnsserverGnsappClientCommandProcessorCommandSupportAbstractHashFunction *self);

J2OBJC_TYPE_LITERAL_HEADER(EduUmassCsGnsserverGnsappClientCommandProcessorCommandSupportAbstractHashFunction)

#endif

#pragma pop_macro("INCLUDE_ALL_EduUmassCsGnsserverGnsappClientCommandProcessorCommandSupportAbstractHashFunction")
