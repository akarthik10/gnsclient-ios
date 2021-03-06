//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: ./GNS/src/edu/umass/cs/gnscommon/utils/JSONByteConverter.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_EduUmassCsGnscommonUtilsJSONByteConverter")
#ifdef RESTRICT_EduUmassCsGnscommonUtilsJSONByteConverter
#define INCLUDE_ALL_EduUmassCsGnscommonUtilsJSONByteConverter 0
#else
#define INCLUDE_ALL_EduUmassCsGnscommonUtilsJSONByteConverter 1
#endif
#undef RESTRICT_EduUmassCsGnscommonUtilsJSONByteConverter

#if !defined (EduUmassCsGnscommonUtilsJSONByteConverter_) && (INCLUDE_ALL_EduUmassCsGnscommonUtilsJSONByteConverter || defined(INCLUDE_EduUmassCsGnscommonUtilsJSONByteConverter))
#define EduUmassCsGnscommonUtilsJSONByteConverter_

@class IOSByteArray;
@class JavaNioByteBuffer;
@class OrgJsonJSONObject;

@interface EduUmassCsGnscommonUtilsJSONByteConverter : NSObject

#pragma mark Public

- (instancetype)init;

+ (OrgJsonJSONObject *)fromBytesHardcodedWithByteArray:(IOSByteArray *)bytes;

+ (OrgJsonJSONObject *)fromBytesHardcodedWithJavaNioByteBuffer:(JavaNioByteBuffer *)bbuf;

+ (IOSByteArray *)toBytesHardcodedWithOrgJsonJSONObject:(OrgJsonJSONObject *)json;

@end

J2OBJC_STATIC_INIT(EduUmassCsGnscommonUtilsJSONByteConverter)

FOUNDATION_EXPORT void EduUmassCsGnscommonUtilsJSONByteConverter_init(EduUmassCsGnscommonUtilsJSONByteConverter *self);

FOUNDATION_EXPORT EduUmassCsGnscommonUtilsJSONByteConverter *new_EduUmassCsGnscommonUtilsJSONByteConverter_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT EduUmassCsGnscommonUtilsJSONByteConverter *create_EduUmassCsGnscommonUtilsJSONByteConverter_init();

FOUNDATION_EXPORT IOSByteArray *EduUmassCsGnscommonUtilsJSONByteConverter_toBytesHardcodedWithOrgJsonJSONObject_(OrgJsonJSONObject *json);

FOUNDATION_EXPORT OrgJsonJSONObject *EduUmassCsGnscommonUtilsJSONByteConverter_fromBytesHardcodedWithByteArray_(IOSByteArray *bytes);

FOUNDATION_EXPORT OrgJsonJSONObject *EduUmassCsGnscommonUtilsJSONByteConverter_fromBytesHardcodedWithJavaNioByteBuffer_(JavaNioByteBuffer *bbuf);

J2OBJC_TYPE_LITERAL_HEADER(EduUmassCsGnscommonUtilsJSONByteConverter)

#endif

#pragma pop_macro("INCLUDE_ALL_EduUmassCsGnscommonUtilsJSONByteConverter")
