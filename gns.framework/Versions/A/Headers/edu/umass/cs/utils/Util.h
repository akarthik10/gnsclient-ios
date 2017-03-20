//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: ./gigapaxos/src/edu/umass/cs/utils/Util.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_EduUmassCsUtilsUtil")
#ifdef RESTRICT_EduUmassCsUtilsUtil
#define INCLUDE_ALL_EduUmassCsUtilsUtil 0
#else
#define INCLUDE_ALL_EduUmassCsUtilsUtil 1
#endif
#undef RESTRICT_EduUmassCsUtilsUtil

#if !defined (EduUmassCsUtilsUtil_) && (INCLUDE_ALL_EduUmassCsUtilsUtil || defined(INCLUDE_EduUmassCsUtilsUtil))
#define EduUmassCsUtilsUtil_

@class IOSByteArray;
@class IOSClass;
@class IOSIntArray;
@class IOSObjectArray;
@class JavaIoFile;
@class JavaLangBoolean;
@class JavaNetInetAddress;
@class JavaNetInetSocketAddress;
@class JavaNioByteBuffer;
@class JavaTextDecimalFormat;
@class JavaUtilArrayList;
@class JavaUtilLoggingLogger;
@class NetMinidevJsonJSONObject;
@class OrgJsonJSONArray;
@class OrgJsonJSONObject;
@protocol JavaUtilCollection;
@protocol JavaUtilList;
@protocol JavaUtilMap;
@protocol JavaUtilSet;

@interface EduUmassCsUtilsUtil : NSObject

#pragma mark Public

- (instancetype)init;

+ (NSString *)arrayOfIntToStringWithIntArray:(IOSIntArray *)array;

+ (id<JavaUtilSet>)arrayOfIntToStringSetWithIntArray:(IOSIntArray *)array;

+ (id<JavaUtilSet>)arrayOfObjectsToStringSetWithNSObjectArray:(IOSObjectArray *)array;

+ (id<JavaUtilSet>)arrayToIntSetWithIntArray:(IOSIntArray *)array;

+ (void)assertAssertionsEnabled;

- (void)assertEnabled;

+ (jlong)bytesToLongWithByteArray:(IOSByteArray *)bytes;

+ (jboolean)containsWithInt:(jint)member
               withIntArray:(IOSIntArray *)array;

+ (NSString *)dfWithDouble:(jdouble)d;

+ (id<JavaUtilSet>)diffWithJavaUtilSet:(id<JavaUtilSet>)s1
                       withJavaUtilSet:(id<JavaUtilSet>)s2;

+ (jlong)encodedStringToLongWithNSString:(NSString *)str;

+ (IOSIntArray *)filterWithIntArray:(IOSIntArray *)array
                            withInt:(jint)member;

+ (IOSByteArray *)getAlphanumericAsBytes;

+ (JavaNetInetAddress *)getInetAddressFromStringWithNSString:(NSString *)s;

+ (JavaNetInetSocketAddress *)getInetSocketAddressFromStringWithNSString:(NSString *)s;

+ (JavaNetInetSocketAddress *)getInetSocketAddressFromStringStrictWithNSString:(NSString *)s;

+ (OrgJsonJSONArray *)getJSONArrayWithJavaUtilSet:(id<JavaUtilSet>)addresses;

+ (IOSObjectArray *)getMatchingFilesWithNSString:(NSString *)dir
                               withNSStringArray:(IOSObjectArray *)match;

+ (IOSObjectArray *)getNamesWithOrgJsonJSONObject:(OrgJsonJSONObject *)jo;

+ (id<JavaUtilSet>)getOtherThanWithJavaUtilSet:(id<JavaUtilSet>)set
                                        withId:(id)exclude;

+ (id)getOtherThanStringWithJavaUtilSet:(id<JavaUtilSet>)set
                                 withId:(id)exclude;

+ (IOSByteArray *)getRandomAlphanumericBytes;

+ (IOSByteArray *)getRandomAlphanumericBytesWithInt:(jint)size;

+ (id)getRandomOtherThanWithJavaUtilSet:(id<JavaUtilSet>)all
                                 withId:(id)exclude;

+ (id)getRandomOtherThanWithJavaUtilSet:(id<JavaUtilSet>)all
                        withJavaUtilSet:(id<JavaUtilSet>)exclude;

+ (id<JavaUtilSet>)getSocketAddressesWithOrgJsonJSONArray:(OrgJsonJSONArray *)jarray;

+ (IOSObjectArray *)intToIntegerArrayWithIntArray:(IOSIntArray *)array;

+ (jboolean)isWrapperTypeWithIOSClass:(IOSClass *)clazz;

+ (JavaUtilArrayList *)JSONArrayToArrayListIntegerWithOrgJsonJSONArray:(OrgJsonJSONArray *)jsonArray;

+ (id<JavaUtilList>)JSONArrayToListWithOrgJsonJSONArray:(OrgJsonJSONArray *)jsonArray;

+ (id<JavaUtilMap>)JSONObjectToMapWithOrgJsonJSONObject:(OrgJsonJSONObject *)json;

+ (IOSObjectArray *)jsonToStringArrayWithNSString:(NSString *)jsonString;

+ (IOSByteArray *)longToBytesWithLong:(jlong)value;

+ (NSString *)longToEncodedStringWithLong:(jlong)value;

+ (void)mainWithNSStringArray:(IOSObjectArray *)args;

+ (jdouble)movingAverageWithDouble:(jdouble)sample
                        withDouble:(jdouble)historicalAverage;

+ (jdouble)movingAverageWithDouble:(jdouble)sample
                        withDouble:(jdouble)historicalAverage
                        withDouble:(jdouble)alpha;

+ (jdouble)movingAverageWithLong:(jlong)sample
                      withDouble:(jdouble)historicalAverage;

+ (jdouble)movingAverageWithLong:(jlong)sample
                      withDouble:(jdouble)historicalAverage
                      withDouble:(jdouble)alpha;

+ (NSString *)msWithDouble:(jdouble)d;

+ (NSString *)muWithDouble:(jdouble)d;

+ (NSString *)nmuWithDouble:(jdouble)d;

+ (JavaNetInetSocketAddress *)offsetPortWithJavaNetInetSocketAddress:(JavaNetInetSocketAddress *)isa_
                                                             withInt:(jint)offset;

+ (jboolean)oneInWithInt:(jint)n;

+ (NSString *)prefixWithNSString:(NSString *)str
                         withInt:(jint)prefixLength;

+ (id)printThisLine;

+ (id)printThisLineWithJavaLangBoolean:(JavaLangBoolean *)log;

+ (JavaNioByteBuffer *)putWithJavaNioByteBuffer:(JavaNioByteBuffer *)dst
                          withJavaNioByteBuffer:(JavaNioByteBuffer *)src;

+ (JavaNioByteBuffer *)putWithJavaNioByteBuffer:(JavaNioByteBuffer *)dst
                          withJavaNioByteBuffer:(JavaNioByteBuffer *)src
                                        withInt:(jint)transferLimit;

+ (JavaUtilArrayList *)recursiveFindWithNSString:(NSString *)dir
                                    withNSString:(NSString *)regex;

+ (jboolean)recursiveRemoveWithJavaIoFile:(JavaIoFile *)file;

+ (jboolean)recursiveRemoveWithNSString:(NSString *)dir
                      withNSStringArray:(IOSObjectArray *)match;

+ (id<JavaUtilSet>)removeFromSetWithJavaUtilSet:(id<JavaUtilSet>)set
                                         withId:(id)element;

+ (id<JavaUtilSet>)removeFromSetCopyWithJavaUtilSet:(id<JavaUtilSet>)set
                                             withId:(id)element;

+ (jint)roundToIntWithDouble:(jdouble)d;

+ (id)selectRandomWithJavaUtilCollection:(id<JavaUtilCollection>)set;

+ (IOSIntArray *)setToIntArrayWithJavaUtilSet:(id<JavaUtilSet>)set;

+ (IOSObjectArray *)setToIntegerArrayWithJavaUtilSet:(id<JavaUtilSet>)set;

+ (IOSObjectArray *)setToNodeIdArrayWithJavaUtilSet:(id<JavaUtilSet>)set;

+ (id<JavaUtilSet>)setToStringSetWithJavaUtilSet:(id<JavaUtilSet>)set;

+ (id<JavaUtilSet>)socketAddressesToInetAddressesWithJavaNetInetSocketAddressArray:(IOSObjectArray *)sockAddrs;

+ (id<JavaUtilMap>)sortByValueWithJavaUtilMap:(id<JavaUtilMap>)map;

+ (id<JavaUtilSet>)stringSetToIntegerSetWithJavaUtilSet:(id<JavaUtilSet>)set;

+ (IOSIntArray *)stringToIntArrayWithNSString:(NSString *)string;

+ (id<JavaUtilSet>)stringToStringSetWithNSString:(NSString *)string;

+ (id)suicideWithJavaUtilLoggingLogger:(JavaUtilLoggingLogger *)logger
                          withNSString:(NSString *)error;

+ (id)suicideWithNSString:(NSString *)error;

+ (id<JavaUtilSet>)toIntSetWithInt:(jint)i;

+ (OrgJsonJSONObject *)toJSONObjectWithNSString:(NSString *)s;

+ (NSString *)toJSONStringWithJavaUtilCollection:(id<JavaUtilCollection>)collection;

+ (NSString *)toJSONStringWithIntArray:(IOSIntArray *)array;

+ (jlong)toLongWithId:(id)obj;

+ (NSString *)toStringWithJavaNetInetSocketAddress:(JavaNetInetSocketAddress *)entryServer;

+ (id)truncateWithId:(id)obj
             withInt:(jint)size;

+ (id)truncateWithId:(id)obj
             withInt:(jint)prefixSize
             withInt:(jint)suffixSize;

+ (id)truncatedLogWithJavaUtilCollection:(id<JavaUtilCollection>)list
                                 withInt:(jint)size;

+ (OrgJsonJSONObject *)viaJSONSmartWithNetMinidevJsonJSONObject:(NetMinidevJsonJSONObject *)jsonS;

+ (void)wipeoutFileWithNSString:(NSString *)filename;

@end

J2OBJC_STATIC_INIT(EduUmassCsUtilsUtil)

inline JavaTextDecimalFormat *EduUmassCsUtilsUtil_get_decimalFormat();
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT JavaTextDecimalFormat *EduUmassCsUtilsUtil_decimalFormat;
J2OBJC_STATIC_FIELD_OBJ_FINAL(EduUmassCsUtilsUtil, decimalFormat, JavaTextDecimalFormat *)

inline jdouble EduUmassCsUtilsUtil_get_ALPHA();
#define EduUmassCsUtilsUtil_ALPHA 0.05
J2OBJC_STATIC_FIELD_CONSTANT(EduUmassCsUtilsUtil, ALPHA, jdouble)

FOUNDATION_EXPORT void EduUmassCsUtilsUtil_init(EduUmassCsUtilsUtil *self);

FOUNDATION_EXPORT EduUmassCsUtilsUtil *new_EduUmassCsUtilsUtil_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT EduUmassCsUtilsUtil *create_EduUmassCsUtilsUtil_init();

FOUNDATION_EXPORT NSString *EduUmassCsUtilsUtil_dfWithDouble_(jdouble d);

FOUNDATION_EXPORT NSString *EduUmassCsUtilsUtil_msWithDouble_(jdouble d);

FOUNDATION_EXPORT NSString *EduUmassCsUtilsUtil_muWithDouble_(jdouble d);

FOUNDATION_EXPORT NSString *EduUmassCsUtilsUtil_nmuWithDouble_(jdouble d);

FOUNDATION_EXPORT jdouble EduUmassCsUtilsUtil_movingAverageWithDouble_withDouble_withDouble_(jdouble sample, jdouble historicalAverage, jdouble alpha);

FOUNDATION_EXPORT jdouble EduUmassCsUtilsUtil_movingAverageWithDouble_withDouble_(jdouble sample, jdouble historicalAverage);

FOUNDATION_EXPORT jdouble EduUmassCsUtilsUtil_movingAverageWithLong_withDouble_(jlong sample, jdouble historicalAverage);

FOUNDATION_EXPORT jdouble EduUmassCsUtilsUtil_movingAverageWithLong_withDouble_withDouble_(jlong sample, jdouble historicalAverage, jdouble alpha);

FOUNDATION_EXPORT jboolean EduUmassCsUtilsUtil_oneInWithInt_(jint n);

FOUNDATION_EXPORT jint EduUmassCsUtilsUtil_roundToIntWithDouble_(jdouble d);

FOUNDATION_EXPORT void EduUmassCsUtilsUtil_assertAssertionsEnabled();

FOUNDATION_EXPORT NSString *EduUmassCsUtilsUtil_prefixWithNSString_withInt_(NSString *str, jint prefixLength);

FOUNDATION_EXPORT id<JavaUtilSet> EduUmassCsUtilsUtil_arrayToIntSetWithIntArray_(IOSIntArray *array);

FOUNDATION_EXPORT IOSIntArray *EduUmassCsUtilsUtil_filterWithIntArray_withInt_(IOSIntArray *array, jint member);

FOUNDATION_EXPORT id<JavaUtilSet> EduUmassCsUtilsUtil_setToStringSetWithJavaUtilSet_(id<JavaUtilSet> set);

FOUNDATION_EXPORT id<JavaUtilSet> EduUmassCsUtilsUtil_stringSetToIntegerSetWithJavaUtilSet_(id<JavaUtilSet> set);

FOUNDATION_EXPORT IOSIntArray *EduUmassCsUtilsUtil_setToIntArrayWithJavaUtilSet_(id<JavaUtilSet> set);

FOUNDATION_EXPORT IOSObjectArray *EduUmassCsUtilsUtil_setToNodeIdArrayWithJavaUtilSet_(id<JavaUtilSet> set);

FOUNDATION_EXPORT IOSObjectArray *EduUmassCsUtilsUtil_setToIntegerArrayWithJavaUtilSet_(id<JavaUtilSet> set);

FOUNDATION_EXPORT IOSIntArray *EduUmassCsUtilsUtil_stringToIntArrayWithNSString_(NSString *string);

FOUNDATION_EXPORT id<JavaUtilSet> EduUmassCsUtilsUtil_stringToStringSetWithNSString_(NSString *string);

FOUNDATION_EXPORT OrgJsonJSONObject *EduUmassCsUtilsUtil_toJSONObjectWithNSString_(NSString *s);

FOUNDATION_EXPORT IOSObjectArray *EduUmassCsUtilsUtil_intToIntegerArrayWithIntArray_(IOSIntArray *array);

FOUNDATION_EXPORT id<JavaUtilSet> EduUmassCsUtilsUtil_arrayOfIntToStringSetWithIntArray_(IOSIntArray *array);

FOUNDATION_EXPORT NSString *EduUmassCsUtilsUtil_arrayOfIntToStringWithIntArray_(IOSIntArray *array);

FOUNDATION_EXPORT jboolean EduUmassCsUtilsUtil_containsWithInt_withIntArray_(jint member, IOSIntArray *array);

FOUNDATION_EXPORT id<JavaUtilSet> EduUmassCsUtilsUtil_arrayOfObjectsToStringSetWithNSObjectArray_(IOSObjectArray *array);

FOUNDATION_EXPORT id EduUmassCsUtilsUtil_selectRandomWithJavaUtilCollection_(id<JavaUtilCollection> set);

FOUNDATION_EXPORT JavaNetInetSocketAddress *EduUmassCsUtilsUtil_getInetSocketAddressFromStringWithNSString_(NSString *s);

FOUNDATION_EXPORT JavaNetInetSocketAddress *EduUmassCsUtilsUtil_getInetSocketAddressFromStringStrictWithNSString_(NSString *s);

FOUNDATION_EXPORT JavaNetInetAddress *EduUmassCsUtilsUtil_getInetAddressFromStringWithNSString_(NSString *s);

FOUNDATION_EXPORT NSString *EduUmassCsUtilsUtil_toJSONStringWithJavaUtilCollection_(id<JavaUtilCollection> collection);

FOUNDATION_EXPORT IOSObjectArray *EduUmassCsUtilsUtil_jsonToStringArrayWithNSString_(NSString *jsonString);

FOUNDATION_EXPORT NSString *EduUmassCsUtilsUtil_toJSONStringWithIntArray_(IOSIntArray *array);

FOUNDATION_EXPORT JavaUtilArrayList *EduUmassCsUtilsUtil_JSONArrayToArrayListIntegerWithOrgJsonJSONArray_(OrgJsonJSONArray *jsonArray);

FOUNDATION_EXPORT id EduUmassCsUtilsUtil_truncateWithId_withInt_(id obj, jint size);

FOUNDATION_EXPORT id EduUmassCsUtilsUtil_truncateWithId_withInt_withInt_(id obj, jint prefixSize, jint suffixSize);

FOUNDATION_EXPORT IOSByteArray *EduUmassCsUtilsUtil_getAlphanumericAsBytes();

FOUNDATION_EXPORT IOSByteArray *EduUmassCsUtilsUtil_getRandomAlphanumericBytes();

FOUNDATION_EXPORT IOSByteArray *EduUmassCsUtilsUtil_getRandomAlphanumericBytesWithInt_(jint size);

FOUNDATION_EXPORT id EduUmassCsUtilsUtil_truncatedLogWithJavaUtilCollection_withInt_(id<JavaUtilCollection> list, jint size);

FOUNDATION_EXPORT id EduUmassCsUtilsUtil_suicideWithJavaUtilLoggingLogger_withNSString_(JavaUtilLoggingLogger *logger, NSString *error);

FOUNDATION_EXPORT id EduUmassCsUtilsUtil_suicideWithNSString_(NSString *error);

FOUNDATION_EXPORT JavaNioByteBuffer *EduUmassCsUtilsUtil_putWithJavaNioByteBuffer_withJavaNioByteBuffer_withInt_(JavaNioByteBuffer *dst, JavaNioByteBuffer *src, jint transferLimit);

FOUNDATION_EXPORT JavaNioByteBuffer *EduUmassCsUtilsUtil_putWithJavaNioByteBuffer_withJavaNioByteBuffer_(JavaNioByteBuffer *dst, JavaNioByteBuffer *src);

FOUNDATION_EXPORT IOSByteArray *EduUmassCsUtilsUtil_longToBytesWithLong_(jlong value);

FOUNDATION_EXPORT NSString *EduUmassCsUtilsUtil_longToEncodedStringWithLong_(jlong value);

FOUNDATION_EXPORT jlong EduUmassCsUtilsUtil_bytesToLongWithByteArray_(IOSByteArray *bytes);

FOUNDATION_EXPORT jlong EduUmassCsUtilsUtil_encodedStringToLongWithNSString_(NSString *str);

FOUNDATION_EXPORT jlong EduUmassCsUtilsUtil_toLongWithId_(id obj);

FOUNDATION_EXPORT id<JavaUtilSet> EduUmassCsUtilsUtil_toIntSetWithInt_(jint i);

FOUNDATION_EXPORT id EduUmassCsUtilsUtil_getRandomOtherThanWithJavaUtilSet_withJavaUtilSet_(id<JavaUtilSet> all, id<JavaUtilSet> exclude);

FOUNDATION_EXPORT id EduUmassCsUtilsUtil_getRandomOtherThanWithJavaUtilSet_withId_(id<JavaUtilSet> all, id exclude);

FOUNDATION_EXPORT id<JavaUtilSet> EduUmassCsUtilsUtil_getOtherThanWithJavaUtilSet_withId_(id<JavaUtilSet> set, id exclude);

FOUNDATION_EXPORT id EduUmassCsUtilsUtil_getOtherThanStringWithJavaUtilSet_withId_(id<JavaUtilSet> set, id exclude);

FOUNDATION_EXPORT jboolean EduUmassCsUtilsUtil_isWrapperTypeWithIOSClass_(IOSClass *clazz);

FOUNDATION_EXPORT OrgJsonJSONObject *EduUmassCsUtilsUtil_viaJSONSmartWithNetMinidevJsonJSONObject_(NetMinidevJsonJSONObject *jsonS);

FOUNDATION_EXPORT JavaNetInetSocketAddress *EduUmassCsUtilsUtil_offsetPortWithJavaNetInetSocketAddress_withInt_(JavaNetInetSocketAddress *isa_, jint offset);

FOUNDATION_EXPORT id<JavaUtilSet> EduUmassCsUtilsUtil_removeFromSetCopyWithJavaUtilSet_withId_(id<JavaUtilSet> set, id element);

FOUNDATION_EXPORT id<JavaUtilSet> EduUmassCsUtilsUtil_removeFromSetWithJavaUtilSet_withId_(id<JavaUtilSet> set, id element);

FOUNDATION_EXPORT id<JavaUtilSet> EduUmassCsUtilsUtil_diffWithJavaUtilSet_withJavaUtilSet_(id<JavaUtilSet> s1, id<JavaUtilSet> s2);

FOUNDATION_EXPORT void EduUmassCsUtilsUtil_mainWithNSStringArray_(IOSObjectArray *args);

FOUNDATION_EXPORT jboolean EduUmassCsUtilsUtil_recursiveRemoveWithJavaIoFile_(JavaIoFile *file);

FOUNDATION_EXPORT IOSObjectArray *EduUmassCsUtilsUtil_getMatchingFilesWithNSString_withNSStringArray_(NSString *dir, IOSObjectArray *match);

FOUNDATION_EXPORT jboolean EduUmassCsUtilsUtil_recursiveRemoveWithNSString_withNSStringArray_(NSString *dir, IOSObjectArray *match);

FOUNDATION_EXPORT JavaUtilArrayList *EduUmassCsUtilsUtil_recursiveFindWithNSString_withNSString_(NSString *dir, NSString *regex);

FOUNDATION_EXPORT void EduUmassCsUtilsUtil_wipeoutFileWithNSString_(NSString *filename);

FOUNDATION_EXPORT id<JavaUtilSet> EduUmassCsUtilsUtil_socketAddressesToInetAddressesWithJavaNetInetSocketAddressArray_(IOSObjectArray *sockAddrs);

FOUNDATION_EXPORT id EduUmassCsUtilsUtil_printThisLine();

FOUNDATION_EXPORT id EduUmassCsUtilsUtil_printThisLineWithJavaLangBoolean_(JavaLangBoolean *log);

FOUNDATION_EXPORT id<JavaUtilMap> EduUmassCsUtilsUtil_sortByValueWithJavaUtilMap_(id<JavaUtilMap> map);

FOUNDATION_EXPORT id<JavaUtilSet> EduUmassCsUtilsUtil_getSocketAddressesWithOrgJsonJSONArray_(OrgJsonJSONArray *jarray);

FOUNDATION_EXPORT OrgJsonJSONArray *EduUmassCsUtilsUtil_getJSONArrayWithJavaUtilSet_(id<JavaUtilSet> addresses);

FOUNDATION_EXPORT NSString *EduUmassCsUtilsUtil_toStringWithJavaNetInetSocketAddress_(JavaNetInetSocketAddress *entryServer);

FOUNDATION_EXPORT id<JavaUtilList> EduUmassCsUtilsUtil_JSONArrayToListWithOrgJsonJSONArray_(OrgJsonJSONArray *jsonArray);

FOUNDATION_EXPORT IOSObjectArray *EduUmassCsUtilsUtil_getNamesWithOrgJsonJSONObject_(OrgJsonJSONObject *jo);

FOUNDATION_EXPORT id<JavaUtilMap> EduUmassCsUtilsUtil_JSONObjectToMapWithOrgJsonJSONObject_(OrgJsonJSONObject *json);

J2OBJC_TYPE_LITERAL_HEADER(EduUmassCsUtilsUtil)

#endif

#pragma pop_macro("INCLUDE_ALL_EduUmassCsUtilsUtil")