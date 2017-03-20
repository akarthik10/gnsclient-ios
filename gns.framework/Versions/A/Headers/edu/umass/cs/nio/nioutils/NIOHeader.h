//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: ./gigapaxos/src/edu/umass/cs/nio/nioutils/NIOHeader.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_EduUmassCsNioNioutilsNIOHeader")
#ifdef RESTRICT_EduUmassCsNioNioutilsNIOHeader
#define INCLUDE_ALL_EduUmassCsNioNioutilsNIOHeader 0
#else
#define INCLUDE_ALL_EduUmassCsNioNioutilsNIOHeader 1
#endif
#undef RESTRICT_EduUmassCsNioNioutilsNIOHeader

#if !defined (EduUmassCsNioNioutilsNIOHeader_) && (INCLUDE_ALL_EduUmassCsNioNioutilsNIOHeader || defined(INCLUDE_EduUmassCsNioNioutilsNIOHeader))
#define EduUmassCsNioNioutilsNIOHeader_

@class IOSByteArray;
@class JavaNetInetSocketAddress;

@interface EduUmassCsNioNioutilsNIOHeader : NSObject {
 @public
  JavaNetInetSocketAddress *sndr_;
  JavaNetInetSocketAddress *rcvr_;
}

#pragma mark Public

- (instancetype)initWithJavaNetInetSocketAddress:(JavaNetInetSocketAddress *)sndr
                    withJavaNetInetSocketAddress:(JavaNetInetSocketAddress *)rcvr;

+ (EduUmassCsNioNioutilsNIOHeader *)getNIOHeaderWithByteArray:(IOSByteArray *)bytes;

- (IOSByteArray *)toBytes;

- (NSString *)description;

@end

J2OBJC_EMPTY_STATIC_INIT(EduUmassCsNioNioutilsNIOHeader)

J2OBJC_FIELD_SETTER(EduUmassCsNioNioutilsNIOHeader, sndr_, JavaNetInetSocketAddress *)
J2OBJC_FIELD_SETTER(EduUmassCsNioNioutilsNIOHeader, rcvr_, JavaNetInetSocketAddress *)

inline jint EduUmassCsNioNioutilsNIOHeader_get_BYTES();
#define EduUmassCsNioNioutilsNIOHeader_BYTES 12
J2OBJC_STATIC_FIELD_CONSTANT(EduUmassCsNioNioutilsNIOHeader, BYTES, jint)

inline NSString *EduUmassCsNioNioutilsNIOHeader_get_CHARSET();
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT NSString *EduUmassCsNioNioutilsNIOHeader_CHARSET;
J2OBJC_STATIC_FIELD_OBJ_FINAL(EduUmassCsNioNioutilsNIOHeader, CHARSET, NSString *)

FOUNDATION_EXPORT void EduUmassCsNioNioutilsNIOHeader_initWithJavaNetInetSocketAddress_withJavaNetInetSocketAddress_(EduUmassCsNioNioutilsNIOHeader *self, JavaNetInetSocketAddress *sndr, JavaNetInetSocketAddress *rcvr);

FOUNDATION_EXPORT EduUmassCsNioNioutilsNIOHeader *new_EduUmassCsNioNioutilsNIOHeader_initWithJavaNetInetSocketAddress_withJavaNetInetSocketAddress_(JavaNetInetSocketAddress *sndr, JavaNetInetSocketAddress *rcvr) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT EduUmassCsNioNioutilsNIOHeader *create_EduUmassCsNioNioutilsNIOHeader_initWithJavaNetInetSocketAddress_withJavaNetInetSocketAddress_(JavaNetInetSocketAddress *sndr, JavaNetInetSocketAddress *rcvr);

FOUNDATION_EXPORT EduUmassCsNioNioutilsNIOHeader *EduUmassCsNioNioutilsNIOHeader_getNIOHeaderWithByteArray_(IOSByteArray *bytes);

J2OBJC_TYPE_LITERAL_HEADER(EduUmassCsNioNioutilsNIOHeader)

#endif

#pragma pop_macro("INCLUDE_ALL_EduUmassCsNioNioutilsNIOHeader")