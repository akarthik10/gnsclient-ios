//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: ./gigapaxos/src/edu/umass/cs/utils/IntegerPacketTypeMap.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_EduUmassCsUtilsIntegerPacketTypeMap")
#ifdef RESTRICT_EduUmassCsUtilsIntegerPacketTypeMap
#define INCLUDE_ALL_EduUmassCsUtilsIntegerPacketTypeMap 0
#else
#define INCLUDE_ALL_EduUmassCsUtilsIntegerPacketTypeMap 1
#endif
#undef RESTRICT_EduUmassCsUtilsIntegerPacketTypeMap

#if !defined (EduUmassCsUtilsIntegerPacketTypeMap_) && (INCLUDE_ALL_EduUmassCsUtilsIntegerPacketTypeMap || defined(INCLUDE_EduUmassCsUtilsIntegerPacketTypeMap))
#define EduUmassCsUtilsIntegerPacketTypeMap_

#define RESTRICT_JavaUtilHashMap 1
#define INCLUDE_JavaUtilHashMap 1
#include "java/util/HashMap.h"

@class IOSObjectArray;
@class JavaLangInteger;
@protocol EduUmassCsNioInterfacesIntegerPacketType;
@protocol JavaUtilFunctionBiFunction;
@protocol JavaUtilFunctionFunction;

@interface EduUmassCsUtilsIntegerPacketTypeMap : JavaUtilHashMap

#pragma mark Public

- (instancetype)initWithEduUmassCsNioInterfacesIntegerPacketTypeArray:(IOSObjectArray *)types;

- (id<EduUmassCsNioInterfacesIntegerPacketType>)computeIfAbsentWithId:(JavaLangInteger *)arg0
                                         withJavaUtilFunctionFunction:(id<JavaUtilFunctionFunction>)arg1;

- (id<EduUmassCsNioInterfacesIntegerPacketType>)computeIfPresentWithId:(JavaLangInteger *)arg0
                                        withJavaUtilFunctionBiFunction:(id<JavaUtilFunctionBiFunction>)arg1;

- (id<EduUmassCsNioInterfacesIntegerPacketType>)computeWithId:(JavaLangInteger *)arg0
                               withJavaUtilFunctionBiFunction:(id<JavaUtilFunctionBiFunction>)arg1;

- (id<EduUmassCsNioInterfacesIntegerPacketType>)getOrDefaultWithId:(id)arg0
                                                            withId:(id<EduUmassCsNioInterfacesIntegerPacketType>)arg1;

- (id<EduUmassCsNioInterfacesIntegerPacketType>)getWithId:(id)arg0;

- (id<EduUmassCsNioInterfacesIntegerPacketType>)mergeWithId:(JavaLangInteger *)arg0
                                                     withId:(id<EduUmassCsNioInterfacesIntegerPacketType>)arg1
                             withJavaUtilFunctionBiFunction:(id<JavaUtilFunctionBiFunction>)arg2;

- (id<EduUmassCsNioInterfacesIntegerPacketType>)putIfAbsentWithId:(JavaLangInteger *)arg0
                                                           withId:(id<EduUmassCsNioInterfacesIntegerPacketType>)arg1;

- (id<EduUmassCsNioInterfacesIntegerPacketType>)putWithId:(JavaLangInteger *)arg0
                                                   withId:(id<EduUmassCsNioInterfacesIntegerPacketType>)arg1;

- (id<EduUmassCsNioInterfacesIntegerPacketType>)removeWithId:(id)arg0;

- (id<EduUmassCsNioInterfacesIntegerPacketType>)replaceWithId:(JavaLangInteger *)arg0
                                                       withId:(id<EduUmassCsNioInterfacesIntegerPacketType>)arg1;

@end

J2OBJC_EMPTY_STATIC_INIT(EduUmassCsUtilsIntegerPacketTypeMap)

FOUNDATION_EXPORT void EduUmassCsUtilsIntegerPacketTypeMap_initWithEduUmassCsNioInterfacesIntegerPacketTypeArray_(EduUmassCsUtilsIntegerPacketTypeMap *self, IOSObjectArray *types);

FOUNDATION_EXPORT EduUmassCsUtilsIntegerPacketTypeMap *new_EduUmassCsUtilsIntegerPacketTypeMap_initWithEduUmassCsNioInterfacesIntegerPacketTypeArray_(IOSObjectArray *types) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT EduUmassCsUtilsIntegerPacketTypeMap *create_EduUmassCsUtilsIntegerPacketTypeMap_initWithEduUmassCsNioInterfacesIntegerPacketTypeArray_(IOSObjectArray *types);

J2OBJC_TYPE_LITERAL_HEADER(EduUmassCsUtilsIntegerPacketTypeMap)

#endif

#pragma pop_macro("INCLUDE_ALL_EduUmassCsUtilsIntegerPacketTypeMap")
