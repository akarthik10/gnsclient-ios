//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: ./gigapaxos/src/edu/umass/cs/utils/DelayProfiler.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_EduUmassCsUtilsDelayProfiler")
#ifdef RESTRICT_EduUmassCsUtilsDelayProfiler
#define INCLUDE_ALL_EduUmassCsUtilsDelayProfiler 0
#else
#define INCLUDE_ALL_EduUmassCsUtilsDelayProfiler 1
#endif
#undef RESTRICT_EduUmassCsUtilsDelayProfiler

#if !defined (EduUmassCsUtilsDelayProfiler_) && (INCLUDE_ALL_EduUmassCsUtilsDelayProfiler || defined(INCLUDE_EduUmassCsUtilsDelayProfiler))
#define EduUmassCsUtilsDelayProfiler_

@protocol JavaUtilConcurrentConcurrentMap;
@protocol JavaUtilSet;

@interface EduUmassCsUtilsDelayProfiler : NSObject

#pragma mark Public

- (instancetype)init;

+ (void)clear;

+ (void)disable;

+ (jdouble)getWithNSString:(NSString *)field;

+ (jdouble)getRateWithNSString:(NSString *)field;

+ (NSString *)getStats;

+ (NSString *)getStatsWithJavaUtilSet:(id<JavaUtilSet>)fields;

+ (id)getStatsLog;

+ (jdouble)getThroughputWithNSString:(NSString *)field;

+ (jboolean)register__WithNSString:(NSString *)field
withJavaUtilConcurrentConcurrentMap:(id<JavaUtilConcurrentConcurrentMap>)map;

+ (void)updateCountWithNSString:(NSString *)field
                        withInt:(jint)incr;

+ (void)updateDelayWithNSString:(NSString *)field
                     withDouble:(jdouble)time;

+ (void)updateDelayWithNSString:(NSString *)field
                     withDouble:(jdouble)time
                     withDouble:(jdouble)alpha;

+ (void)updateDelayWithNSString:(NSString *)field
                       withLong:(jlong)time
                        withInt:(jint)n;

+ (void)updateDelayNanoWithNSString:(NSString *)field
                         withDouble:(jdouble)time;

+ (void)updateDelayNanoWithNSString:(NSString *)field
                           withLong:(jlong)time
                            withInt:(jint)n;

+ (void)updateInterArrivalTimeWithNSString:(NSString *)field
                                   withInt:(jint)numArrivals;

+ (void)updateInterArrivalTimeWithNSString:(NSString *)field
                                   withInt:(jint)numArrivals
                                   withInt:(jint)samplingFactor;

+ (void)updateInterArrivalTimeWithNSString:(NSString *)field
                                   withInt:(jint)numArrivals
                                   withInt:(jint)samplingFactor
                                withDouble:(jdouble)alpha;

+ (void)updateMovAvgWithNSString:(NSString *)field
                      withDouble:(jdouble)sample;

+ (void)updateMovAvgWithNSString:(NSString *)field
                      withDouble:(jdouble)sample
                      withDouble:(jdouble)alpha;

+ (void)updateRateWithNSString:(NSString *)field
                       withInt:(jint)numArrivals;

+ (void)updateRateWithNSString:(NSString *)field
                       withInt:(jint)numArrivals
                       withInt:(jint)samplingFactor;

+ (void)updateValueWithNSString:(NSString *)field
                     withDouble:(jdouble)value;

@end

J2OBJC_STATIC_INIT(EduUmassCsUtilsDelayProfiler)

FOUNDATION_EXPORT void EduUmassCsUtilsDelayProfiler_init(EduUmassCsUtilsDelayProfiler *self);

FOUNDATION_EXPORT EduUmassCsUtilsDelayProfiler *new_EduUmassCsUtilsDelayProfiler_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT EduUmassCsUtilsDelayProfiler *create_EduUmassCsUtilsDelayProfiler_init();

FOUNDATION_EXPORT void EduUmassCsUtilsDelayProfiler_disable();

FOUNDATION_EXPORT jboolean EduUmassCsUtilsDelayProfiler_register__WithNSString_withJavaUtilConcurrentConcurrentMap_(NSString *field, id<JavaUtilConcurrentConcurrentMap> map);

FOUNDATION_EXPORT void EduUmassCsUtilsDelayProfiler_updateDelayWithNSString_withDouble_withDouble_(NSString *field, jdouble time, jdouble alpha);

FOUNDATION_EXPORT void EduUmassCsUtilsDelayProfiler_updateDelayWithNSString_withDouble_(NSString *field, jdouble time);

FOUNDATION_EXPORT void EduUmassCsUtilsDelayProfiler_updateDelayNanoWithNSString_withDouble_(NSString *field, jdouble time);

FOUNDATION_EXPORT void EduUmassCsUtilsDelayProfiler_updateDelayNanoWithNSString_withLong_withInt_(NSString *field, jlong time, jint n);

FOUNDATION_EXPORT void EduUmassCsUtilsDelayProfiler_updateDelayWithNSString_withLong_withInt_(NSString *field, jlong time, jint n);

FOUNDATION_EXPORT jdouble EduUmassCsUtilsDelayProfiler_getWithNSString_(NSString *field);

FOUNDATION_EXPORT void EduUmassCsUtilsDelayProfiler_updateMovAvgWithNSString_withDouble_(NSString *field, jdouble sample);

FOUNDATION_EXPORT void EduUmassCsUtilsDelayProfiler_updateMovAvgWithNSString_withDouble_withDouble_(NSString *field, jdouble sample, jdouble alpha);

FOUNDATION_EXPORT void EduUmassCsUtilsDelayProfiler_updateCountWithNSString_withInt_(NSString *field, jint incr);

FOUNDATION_EXPORT void EduUmassCsUtilsDelayProfiler_updateValueWithNSString_withDouble_(NSString *field, jdouble value);

FOUNDATION_EXPORT void EduUmassCsUtilsDelayProfiler_updateInterArrivalTimeWithNSString_withInt_withInt_(NSString *field, jint numArrivals, jint samplingFactor);

FOUNDATION_EXPORT void EduUmassCsUtilsDelayProfiler_updateInterArrivalTimeWithNSString_withInt_withInt_withDouble_(NSString *field, jint numArrivals, jint samplingFactor, jdouble alpha);

FOUNDATION_EXPORT void EduUmassCsUtilsDelayProfiler_updateInterArrivalTimeWithNSString_withInt_(NSString *field, jint numArrivals);

FOUNDATION_EXPORT void EduUmassCsUtilsDelayProfiler_updateRateWithNSString_withInt_withInt_(NSString *field, jint numArrivals, jint samplingFactor);

FOUNDATION_EXPORT void EduUmassCsUtilsDelayProfiler_updateRateWithNSString_withInt_(NSString *field, jint numArrivals);

FOUNDATION_EXPORT jdouble EduUmassCsUtilsDelayProfiler_getThroughputWithNSString_(NSString *field);

FOUNDATION_EXPORT jdouble EduUmassCsUtilsDelayProfiler_getRateWithNSString_(NSString *field);

FOUNDATION_EXPORT NSString *EduUmassCsUtilsDelayProfiler_getStats();

FOUNDATION_EXPORT id EduUmassCsUtilsDelayProfiler_getStatsLog();

FOUNDATION_EXPORT NSString *EduUmassCsUtilsDelayProfiler_getStatsWithJavaUtilSet_(id<JavaUtilSet> fields);

FOUNDATION_EXPORT void EduUmassCsUtilsDelayProfiler_clear();

J2OBJC_TYPE_LITERAL_HEADER(EduUmassCsUtilsDelayProfiler)

#endif

#pragma pop_macro("INCLUDE_ALL_EduUmassCsUtilsDelayProfiler")
