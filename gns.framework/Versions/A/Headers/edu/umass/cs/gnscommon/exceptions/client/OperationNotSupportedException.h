//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: ./GNS/src/edu/umass/cs/gnscommon/exceptions/client/OperationNotSupportedException.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_EduUmassCsGnscommonExceptionsClientOperationNotSupportedException")
#ifdef RESTRICT_EduUmassCsGnscommonExceptionsClientOperationNotSupportedException
#define INCLUDE_ALL_EduUmassCsGnscommonExceptionsClientOperationNotSupportedException 0
#else
#define INCLUDE_ALL_EduUmassCsGnscommonExceptionsClientOperationNotSupportedException 1
#endif
#undef RESTRICT_EduUmassCsGnscommonExceptionsClientOperationNotSupportedException

#if !defined (EduUmassCsGnscommonExceptionsClientOperationNotSupportedException_) && (INCLUDE_ALL_EduUmassCsGnscommonExceptionsClientOperationNotSupportedException || defined(INCLUDE_EduUmassCsGnscommonExceptionsClientOperationNotSupportedException))
#define EduUmassCsGnscommonExceptionsClientOperationNotSupportedException_

#define RESTRICT_EduUmassCsGnscommonExceptionsClientClientException 1
#define INCLUDE_EduUmassCsGnscommonExceptionsClientClientException 1
#include "edu/umass/cs/gnscommon/exceptions/client/ClientException.h"

@class EduUmassCsGnscommonResponseCode;

@interface EduUmassCsGnscommonExceptionsClientOperationNotSupportedException : EduUmassCsGnscommonExceptionsClientClientException

#pragma mark Public

- (instancetype)initWithEduUmassCsGnscommonResponseCode:(EduUmassCsGnscommonResponseCode *)code
                                           withNSString:(NSString *)message;

- (instancetype)initWithNSString:(NSString *)message;

@end

J2OBJC_EMPTY_STATIC_INIT(EduUmassCsGnscommonExceptionsClientOperationNotSupportedException)

FOUNDATION_EXPORT void EduUmassCsGnscommonExceptionsClientOperationNotSupportedException_initWithEduUmassCsGnscommonResponseCode_withNSString_(EduUmassCsGnscommonExceptionsClientOperationNotSupportedException *self, EduUmassCsGnscommonResponseCode *code, NSString *message);

FOUNDATION_EXPORT EduUmassCsGnscommonExceptionsClientOperationNotSupportedException *new_EduUmassCsGnscommonExceptionsClientOperationNotSupportedException_initWithEduUmassCsGnscommonResponseCode_withNSString_(EduUmassCsGnscommonResponseCode *code, NSString *message) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT EduUmassCsGnscommonExceptionsClientOperationNotSupportedException *create_EduUmassCsGnscommonExceptionsClientOperationNotSupportedException_initWithEduUmassCsGnscommonResponseCode_withNSString_(EduUmassCsGnscommonResponseCode *code, NSString *message);

FOUNDATION_EXPORT void EduUmassCsGnscommonExceptionsClientOperationNotSupportedException_initWithNSString_(EduUmassCsGnscommonExceptionsClientOperationNotSupportedException *self, NSString *message);

FOUNDATION_EXPORT EduUmassCsGnscommonExceptionsClientOperationNotSupportedException *new_EduUmassCsGnscommonExceptionsClientOperationNotSupportedException_initWithNSString_(NSString *message) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT EduUmassCsGnscommonExceptionsClientOperationNotSupportedException *create_EduUmassCsGnscommonExceptionsClientOperationNotSupportedException_initWithNSString_(NSString *message);

J2OBJC_TYPE_LITERAL_HEADER(EduUmassCsGnscommonExceptionsClientOperationNotSupportedException)

#endif

#pragma pop_macro("INCLUDE_ALL_EduUmassCsGnscommonExceptionsClientOperationNotSupportedException")
