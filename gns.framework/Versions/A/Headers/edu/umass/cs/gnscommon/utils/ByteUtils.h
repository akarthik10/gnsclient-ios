//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: ./GNS/src/edu/umass/cs/gnscommon/utils/ByteUtils.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_EduUmassCsGnscommonUtilsByteUtils")
#ifdef RESTRICT_EduUmassCsGnscommonUtilsByteUtils
#define INCLUDE_ALL_EduUmassCsGnscommonUtilsByteUtils 0
#else
#define INCLUDE_ALL_EduUmassCsGnscommonUtilsByteUtils 1
#endif
#undef RESTRICT_EduUmassCsGnscommonUtilsByteUtils

#if !defined (EduUmassCsGnscommonUtilsByteUtils_) && (INCLUDE_ALL_EduUmassCsGnscommonUtilsByteUtils || defined(INCLUDE_EduUmassCsGnscommonUtilsByteUtils))
#define EduUmassCsGnscommonUtilsByteUtils_

@class IOSByteArray;

@interface EduUmassCsGnscommonUtilsByteUtils : NSObject

#pragma mark Public

- (instancetype)init;

+ (jint)BAToIntWithByteArray:(IOSByteArray *)buf;

+ (jint)BAToIntWithByteArray:(IOSByteArray *)buf
                     withInt:(jint)offset;

+ (jint)ByteArrayToIntWithByteArray:(IOSByteArray *)buf;

+ (jint)ByteArrayToIntWithByteArray:(IOSByteArray *)buf
                            withInt:(jint)offset;

+ (jlong)byteArrayToLongWithByteArray:(IOSByteArray *)bytes;

+ (jint)ByteArrayToShortWithByteArray:(IOSByteArray *)buf;

+ (jint)ByteArrayToShortWithByteArray:(IOSByteArray *)buf
                              withInt:(jint)offset;

+ (void)IntToByteArrayWithInt:(jint)val
                withByteArray:(IOSByteArray *)buf;

+ (void)IntToByteArrayWithInt:(jint)val
                withByteArray:(IOSByteArray *)buf
                      withInt:(jint)offset;

+ (void)ShortToByteArrayWithInt:(jint)val
                  withByteArray:(IOSByteArray *)buf;

+ (void)ShortToByteArrayWithInt:(jint)val
                  withByteArray:(IOSByteArray *)buf
                        withInt:(jint)offset;

@end

J2OBJC_EMPTY_STATIC_INIT(EduUmassCsGnscommonUtilsByteUtils)

FOUNDATION_EXPORT void EduUmassCsGnscommonUtilsByteUtils_init(EduUmassCsGnscommonUtilsByteUtils *self);

FOUNDATION_EXPORT EduUmassCsGnscommonUtilsByteUtils *new_EduUmassCsGnscommonUtilsByteUtils_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT EduUmassCsGnscommonUtilsByteUtils *create_EduUmassCsGnscommonUtilsByteUtils_init();

FOUNDATION_EXPORT void EduUmassCsGnscommonUtilsByteUtils_ShortToByteArrayWithInt_withByteArray_withInt_(jint val, IOSByteArray *buf, jint offset);

FOUNDATION_EXPORT void EduUmassCsGnscommonUtilsByteUtils_ShortToByteArrayWithInt_withByteArray_(jint val, IOSByteArray *buf);

FOUNDATION_EXPORT jint EduUmassCsGnscommonUtilsByteUtils_BAToIntWithByteArray_withInt_(IOSByteArray *buf, jint offset);

FOUNDATION_EXPORT jint EduUmassCsGnscommonUtilsByteUtils_BAToIntWithByteArray_(IOSByteArray *buf);

FOUNDATION_EXPORT jint EduUmassCsGnscommonUtilsByteUtils_ByteArrayToIntWithByteArray_withInt_(IOSByteArray *buf, jint offset);

FOUNDATION_EXPORT jint EduUmassCsGnscommonUtilsByteUtils_ByteArrayToIntWithByteArray_(IOSByteArray *buf);

FOUNDATION_EXPORT void EduUmassCsGnscommonUtilsByteUtils_IntToByteArrayWithInt_withByteArray_withInt_(jint val, IOSByteArray *buf, jint offset);

FOUNDATION_EXPORT void EduUmassCsGnscommonUtilsByteUtils_IntToByteArrayWithInt_withByteArray_(jint val, IOSByteArray *buf);

FOUNDATION_EXPORT jint EduUmassCsGnscommonUtilsByteUtils_ByteArrayToShortWithByteArray_withInt_(IOSByteArray *buf, jint offset);

FOUNDATION_EXPORT jint EduUmassCsGnscommonUtilsByteUtils_ByteArrayToShortWithByteArray_(IOSByteArray *buf);

FOUNDATION_EXPORT jlong EduUmassCsGnscommonUtilsByteUtils_byteArrayToLongWithByteArray_(IOSByteArray *bytes);

J2OBJC_TYPE_LITERAL_HEADER(EduUmassCsGnscommonUtilsByteUtils)

#endif

#pragma pop_macro("INCLUDE_ALL_EduUmassCsGnscommonUtilsByteUtils")