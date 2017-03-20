//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: ./gigapaxos/src/edu/umass/cs/nio/nioutils/StringifiableDefault.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_EduUmassCsNioNioutilsStringifiableDefault")
#ifdef RESTRICT_EduUmassCsNioNioutilsStringifiableDefault
#define INCLUDE_ALL_EduUmassCsNioNioutilsStringifiableDefault 0
#else
#define INCLUDE_ALL_EduUmassCsNioNioutilsStringifiableDefault 1
#endif
#undef RESTRICT_EduUmassCsNioNioutilsStringifiableDefault

#if !defined (EduUmassCsNioNioutilsStringifiableDefault_) && (INCLUDE_ALL_EduUmassCsNioNioutilsStringifiableDefault || defined(INCLUDE_EduUmassCsNioNioutilsStringifiableDefault))
#define EduUmassCsNioNioutilsStringifiableDefault_

#define RESTRICT_EduUmassCsNioInterfacesStringifiable 1
#define INCLUDE_EduUmassCsNioInterfacesStringifiable 1
#include "edu/umass/cs/nio/interfaces/Stringifiable.h"

@class OrgJsonJSONArray;
@protocol JavaUtilSet;

@interface EduUmassCsNioNioutilsStringifiableDefault : NSObject < EduUmassCsNioInterfacesStringifiable > {
 @public
  id seedObj_;
}

#pragma mark Public

- (instancetype)initWithId:(id)obj;

- (id<JavaUtilSet>)getValuesFromJSONArrayWithOrgJsonJSONArray:(OrgJsonJSONArray *)array;

- (id<JavaUtilSet>)getValuesFromStringSetWithJavaUtilSet:(id<JavaUtilSet>)strValues;

- (id)valueOfWithNSString:(NSString *)strValue;

@end

J2OBJC_EMPTY_STATIC_INIT(EduUmassCsNioNioutilsStringifiableDefault)

J2OBJC_FIELD_SETTER(EduUmassCsNioNioutilsStringifiableDefault, seedObj_, id)

FOUNDATION_EXPORT void EduUmassCsNioNioutilsStringifiableDefault_initWithId_(EduUmassCsNioNioutilsStringifiableDefault *self, id obj);

FOUNDATION_EXPORT EduUmassCsNioNioutilsStringifiableDefault *new_EduUmassCsNioNioutilsStringifiableDefault_initWithId_(id obj) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT EduUmassCsNioNioutilsStringifiableDefault *create_EduUmassCsNioNioutilsStringifiableDefault_initWithId_(id obj);

J2OBJC_TYPE_LITERAL_HEADER(EduUmassCsNioNioutilsStringifiableDefault)

#endif

#if !defined (EduUmassCsNioNioutilsStringifiableDefault_Main_) && (INCLUDE_ALL_EduUmassCsNioNioutilsStringifiableDefault || defined(INCLUDE_EduUmassCsNioNioutilsStringifiableDefault_Main))
#define EduUmassCsNioNioutilsStringifiableDefault_Main_

@class IOSObjectArray;

@interface EduUmassCsNioNioutilsStringifiableDefault_Main : NSObject

#pragma mark Package-Private

- (instancetype)init;

+ (void)mainWithNSStringArray:(IOSObjectArray *)args;

@end

J2OBJC_EMPTY_STATIC_INIT(EduUmassCsNioNioutilsStringifiableDefault_Main)

FOUNDATION_EXPORT void EduUmassCsNioNioutilsStringifiableDefault_Main_init(EduUmassCsNioNioutilsStringifiableDefault_Main *self);

FOUNDATION_EXPORT EduUmassCsNioNioutilsStringifiableDefault_Main *new_EduUmassCsNioNioutilsStringifiableDefault_Main_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT EduUmassCsNioNioutilsStringifiableDefault_Main *create_EduUmassCsNioNioutilsStringifiableDefault_Main_init();

FOUNDATION_EXPORT void EduUmassCsNioNioutilsStringifiableDefault_Main_mainWithNSStringArray_(IOSObjectArray *args);

J2OBJC_TYPE_LITERAL_HEADER(EduUmassCsNioNioutilsStringifiableDefault_Main)

#endif

#pragma pop_macro("INCLUDE_ALL_EduUmassCsNioNioutilsStringifiableDefault")