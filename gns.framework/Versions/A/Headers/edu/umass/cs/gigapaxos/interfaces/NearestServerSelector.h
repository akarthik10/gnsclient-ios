//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: ./gigapaxos/src/edu/umass/cs/gigapaxos/interfaces/NearestServerSelector.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_EduUmassCsGigapaxosInterfacesNearestServerSelector")
#ifdef RESTRICT_EduUmassCsGigapaxosInterfacesNearestServerSelector
#define INCLUDE_ALL_EduUmassCsGigapaxosInterfacesNearestServerSelector 0
#else
#define INCLUDE_ALL_EduUmassCsGigapaxosInterfacesNearestServerSelector 1
#endif
#undef RESTRICT_EduUmassCsGigapaxosInterfacesNearestServerSelector

#if !defined (EduUmassCsGigapaxosInterfacesNearestServerSelector_) && (INCLUDE_ALL_EduUmassCsGigapaxosInterfacesNearestServerSelector || defined(INCLUDE_EduUmassCsGigapaxosInterfacesNearestServerSelector))
#define EduUmassCsGigapaxosInterfacesNearestServerSelector_

@class JavaNetInetSocketAddress;
@protocol JavaUtilSet;

@protocol EduUmassCsGigapaxosInterfacesNearestServerSelector < JavaObject >

- (JavaNetInetSocketAddress *)getNearestWithJavaUtilSet:(id<JavaUtilSet>)addresses;

@end

J2OBJC_EMPTY_STATIC_INIT(EduUmassCsGigapaxosInterfacesNearestServerSelector)

J2OBJC_TYPE_LITERAL_HEADER(EduUmassCsGigapaxosInterfacesNearestServerSelector)

#endif

#pragma pop_macro("INCLUDE_ALL_EduUmassCsGigapaxosInterfacesNearestServerSelector")
