//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: ./gigapaxos/src/edu/umass/cs/utils/GCConcurrentHashMapCallback.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_EduUmassCsUtilsGCConcurrentHashMapCallback")
#ifdef RESTRICT_EduUmassCsUtilsGCConcurrentHashMapCallback
#define INCLUDE_ALL_EduUmassCsUtilsGCConcurrentHashMapCallback 0
#else
#define INCLUDE_ALL_EduUmassCsUtilsGCConcurrentHashMapCallback 1
#endif
#undef RESTRICT_EduUmassCsUtilsGCConcurrentHashMapCallback

#if !defined (EduUmassCsUtilsGCConcurrentHashMapCallback_) && (INCLUDE_ALL_EduUmassCsUtilsGCConcurrentHashMapCallback || defined(INCLUDE_EduUmassCsUtilsGCConcurrentHashMapCallback))
#define EduUmassCsUtilsGCConcurrentHashMapCallback_

@protocol EduUmassCsUtilsGCConcurrentHashMapCallback < JavaObject >

- (void)callbackGCWithId:(id)key
                  withId:(id)value;

@end

J2OBJC_EMPTY_STATIC_INIT(EduUmassCsUtilsGCConcurrentHashMapCallback)

J2OBJC_TYPE_LITERAL_HEADER(EduUmassCsUtilsGCConcurrentHashMapCallback)

#endif

#pragma pop_macro("INCLUDE_ALL_EduUmassCsUtilsGCConcurrentHashMapCallback")
