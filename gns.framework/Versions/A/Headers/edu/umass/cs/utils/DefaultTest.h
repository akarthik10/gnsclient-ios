//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: ./gigapaxos/src/edu/umass/cs/utils/DefaultTest.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_EduUmassCsUtilsDefaultTest")
#ifdef RESTRICT_EduUmassCsUtilsDefaultTest
#define INCLUDE_ALL_EduUmassCsUtilsDefaultTest 0
#else
#define INCLUDE_ALL_EduUmassCsUtilsDefaultTest 1
#endif
#undef RESTRICT_EduUmassCsUtilsDefaultTest

#if !defined (EduUmassCsUtilsDefaultTest_) && (INCLUDE_ALL_EduUmassCsUtilsDefaultTest || defined(INCLUDE_EduUmassCsUtilsDefaultTest))
#define EduUmassCsUtilsDefaultTest_

@class EduUmassCsUtilsRepeatRule;
@class IOSObjectArray;
@class OrgJunitRulesTestName;
@class OrgJunitRulesTestWatcher;
@protocol JavaUtilList;

@interface EduUmassCsUtilsDefaultTest : NSObject {
 @public
  OrgJunitRulesTestName *testName_;
  EduUmassCsUtilsRepeatRule *repeatRule_;
  OrgJunitRulesTestWatcher *watcher_;
  jint repeatIndex_, lastPrinted_;
}

#pragma mark Public

- (instancetype)init;

- (void)afterMethod;

- (void)beforeMethod;

- (void)test;

+ (void)testAllWithIOSClassArray:(IOSObjectArray *)classes;

+ (void)testAllWithJavaUtilList:(id<JavaUtilList>)classes;

- (void)testPackage;

@end

J2OBJC_EMPTY_STATIC_INIT(EduUmassCsUtilsDefaultTest)

J2OBJC_FIELD_SETTER(EduUmassCsUtilsDefaultTest, testName_, OrgJunitRulesTestName *)
J2OBJC_FIELD_SETTER(EduUmassCsUtilsDefaultTest, repeatRule_, EduUmassCsUtilsRepeatRule *)
J2OBJC_FIELD_SETTER(EduUmassCsUtilsDefaultTest, watcher_, OrgJunitRulesTestWatcher *)

FOUNDATION_EXPORT void EduUmassCsUtilsDefaultTest_init(EduUmassCsUtilsDefaultTest *self);

FOUNDATION_EXPORT EduUmassCsUtilsDefaultTest *new_EduUmassCsUtilsDefaultTest_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT EduUmassCsUtilsDefaultTest *create_EduUmassCsUtilsDefaultTest_init();

FOUNDATION_EXPORT void EduUmassCsUtilsDefaultTest_testAllWithJavaUtilList_(id<JavaUtilList> classes);

FOUNDATION_EXPORT void EduUmassCsUtilsDefaultTest_testAllWithIOSClassArray_(IOSObjectArray *classes);

J2OBJC_TYPE_LITERAL_HEADER(EduUmassCsUtilsDefaultTest)

#endif

#pragma pop_macro("INCLUDE_ALL_EduUmassCsUtilsDefaultTest")