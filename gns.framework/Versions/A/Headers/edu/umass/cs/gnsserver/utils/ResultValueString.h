//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: ./GNS/src/edu/umass/cs/gnsserver/utils/ResultValueString.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_EduUmassCsGnsserverUtilsResultValueString")
#ifdef RESTRICT_EduUmassCsGnsserverUtilsResultValueString
#define INCLUDE_ALL_EduUmassCsGnsserverUtilsResultValueString 0
#else
#define INCLUDE_ALL_EduUmassCsGnsserverUtilsResultValueString 1
#endif
#undef RESTRICT_EduUmassCsGnsserverUtilsResultValueString

#if !defined (EduUmassCsGnsserverUtilsResultValueString_) && (INCLUDE_ALL_EduUmassCsGnsserverUtilsResultValueString || defined(INCLUDE_EduUmassCsGnsserverUtilsResultValueString))
#define EduUmassCsGnsserverUtilsResultValueString_

#define RESTRICT_JavaUtilArrayList 1
#define INCLUDE_JavaUtilArrayList 1
#include "java/util/ArrayList.h"

@protocol JavaUtilCollection;

@interface EduUmassCsGnsserverUtilsResultValueString : JavaUtilArrayList

#pragma mark Public

- (instancetype)init;

- (instancetype)initWithJavaUtilCollection:(id<JavaUtilCollection>)collection;

- (NSString *)getWithInt:(jint)arg0;

- (NSString *)removeWithInt:(jint)arg0;

- (NSString *)setWithInt:(jint)arg0
                  withId:(NSString *)arg1;

#pragma mark Package-Private

@end

J2OBJC_EMPTY_STATIC_INIT(EduUmassCsGnsserverUtilsResultValueString)

FOUNDATION_EXPORT void EduUmassCsGnsserverUtilsResultValueString_init(EduUmassCsGnsserverUtilsResultValueString *self);

FOUNDATION_EXPORT EduUmassCsGnsserverUtilsResultValueString *new_EduUmassCsGnsserverUtilsResultValueString_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT EduUmassCsGnsserverUtilsResultValueString *create_EduUmassCsGnsserverUtilsResultValueString_init();

FOUNDATION_EXPORT void EduUmassCsGnsserverUtilsResultValueString_initWithJavaUtilCollection_(EduUmassCsGnsserverUtilsResultValueString *self, id<JavaUtilCollection> collection);

FOUNDATION_EXPORT EduUmassCsGnsserverUtilsResultValueString *new_EduUmassCsGnsserverUtilsResultValueString_initWithJavaUtilCollection_(id<JavaUtilCollection> collection) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT EduUmassCsGnsserverUtilsResultValueString *create_EduUmassCsGnsserverUtilsResultValueString_initWithJavaUtilCollection_(id<JavaUtilCollection> collection);

J2OBJC_TYPE_LITERAL_HEADER(EduUmassCsGnsserverUtilsResultValueString)

#endif

#pragma pop_macro("INCLUDE_ALL_EduUmassCsGnsserverUtilsResultValueString")
