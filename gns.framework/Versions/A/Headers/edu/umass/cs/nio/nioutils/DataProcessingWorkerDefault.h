//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: ./gigapaxos/src/edu/umass/cs/nio/nioutils/DataProcessingWorkerDefault.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_EduUmassCsNioNioutilsDataProcessingWorkerDefault")
#ifdef RESTRICT_EduUmassCsNioNioutilsDataProcessingWorkerDefault
#define INCLUDE_ALL_EduUmassCsNioNioutilsDataProcessingWorkerDefault 0
#else
#define INCLUDE_ALL_EduUmassCsNioNioutilsDataProcessingWorkerDefault 1
#endif
#undef RESTRICT_EduUmassCsNioNioutilsDataProcessingWorkerDefault

#if !defined (EduUmassCsNioNioutilsDataProcessingWorkerDefault_) && (INCLUDE_ALL_EduUmassCsNioNioutilsDataProcessingWorkerDefault || defined(INCLUDE_EduUmassCsNioNioutilsDataProcessingWorkerDefault))
#define EduUmassCsNioNioutilsDataProcessingWorkerDefault_

#define RESTRICT_EduUmassCsNioInterfacesDataProcessingWorker 1
#define INCLUDE_EduUmassCsNioInterfacesDataProcessingWorker 1
#include "edu/umass/cs/nio/interfaces/DataProcessingWorker.h"

@class JavaNioByteBuffer;
@class JavaNioChannelsSocketChannel;

@interface EduUmassCsNioNioutilsDataProcessingWorkerDefault : NSObject < EduUmassCsNioInterfacesDataProcessingWorker >

#pragma mark Public

- (instancetype)init;

- (void)demultiplexMessageWithId:(id)message;

- (void)processDataWithJavaNioChannelsSocketChannel:(JavaNioChannelsSocketChannel *)socket
                              withJavaNioByteBuffer:(JavaNioByteBuffer *)incoming;

@end

J2OBJC_EMPTY_STATIC_INIT(EduUmassCsNioNioutilsDataProcessingWorkerDefault)

FOUNDATION_EXPORT void EduUmassCsNioNioutilsDataProcessingWorkerDefault_init(EduUmassCsNioNioutilsDataProcessingWorkerDefault *self);

FOUNDATION_EXPORT EduUmassCsNioNioutilsDataProcessingWorkerDefault *new_EduUmassCsNioNioutilsDataProcessingWorkerDefault_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT EduUmassCsNioNioutilsDataProcessingWorkerDefault *create_EduUmassCsNioNioutilsDataProcessingWorkerDefault_init();

J2OBJC_TYPE_LITERAL_HEADER(EduUmassCsNioNioutilsDataProcessingWorkerDefault)

#endif

#pragma pop_macro("INCLUDE_ALL_EduUmassCsNioNioutilsDataProcessingWorkerDefault")