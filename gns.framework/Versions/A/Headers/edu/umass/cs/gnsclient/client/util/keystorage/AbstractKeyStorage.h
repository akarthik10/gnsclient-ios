//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: ./GNS/src/edu/umass/cs/gnsclient/client/util/keystorage/AbstractKeyStorage.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_EduUmassCsGnsclientClientUtilKeystorageAbstractKeyStorage")
#ifdef RESTRICT_EduUmassCsGnsclientClientUtilKeystorageAbstractKeyStorage
#define INCLUDE_ALL_EduUmassCsGnsclientClientUtilKeystorageAbstractKeyStorage 0
#else
#define INCLUDE_ALL_EduUmassCsGnsclientClientUtilKeystorageAbstractKeyStorage 1
#endif
#undef RESTRICT_EduUmassCsGnsclientClientUtilKeystorageAbstractKeyStorage

#if !defined (EduUmassCsGnsclientClientUtilKeystorageAbstractKeyStorage_) && (INCLUDE_ALL_EduUmassCsGnsclientClientUtilKeystorageAbstractKeyStorage || defined(INCLUDE_EduUmassCsGnsclientClientUtilKeystorageAbstractKeyStorage))
#define EduUmassCsGnsclientClientUtilKeystorageAbstractKeyStorage_

@class IOSObjectArray;

@interface EduUmassCsGnsclientClientUtilKeystorageAbstractKeyStorage : NSObject

#pragma mark Public

- (instancetype)init;

- (void)clear;

- (NSString *)getWithNSString:(NSString *)key
                 withNSString:(NSString *)def;

- (IOSObjectArray *)keys;

- (void)putWithNSString:(NSString *)key
           withNSString:(NSString *)value;

- (void)removeWithNSString:(NSString *)key;

- (NSString *)description;

@end

J2OBJC_EMPTY_STATIC_INIT(EduUmassCsGnsclientClientUtilKeystorageAbstractKeyStorage)

FOUNDATION_EXPORT void EduUmassCsGnsclientClientUtilKeystorageAbstractKeyStorage_init(EduUmassCsGnsclientClientUtilKeystorageAbstractKeyStorage *self);

J2OBJC_TYPE_LITERAL_HEADER(EduUmassCsGnsclientClientUtilKeystorageAbstractKeyStorage)

#endif

#pragma pop_macro("INCLUDE_ALL_EduUmassCsGnsclientClientUtilKeystorageAbstractKeyStorage")
