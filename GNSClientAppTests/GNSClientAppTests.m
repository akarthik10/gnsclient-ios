//
//  GNSClientAppTests.m
//  GNSClientAppTests
//
//  Created by Karthik A on 3/21/17.
//  Copyright © 2017 Karthik A. All rights reserved.
//

#import <XCTest/XCTest.h>
#include "java/io/PrintStream.h"
#include "edu/umass/cs/gnsclient/client/GNSClient.h"
#include "edu/umass/cs/gnsclient/client/util/GuidEntry.h"
#include "edu/umass/cs/gnsclient/client/util/GUIDUtils.h"
#include "edu/umass/cs/gnsclient/client/GNSCommand.h"
#include "org/json/JSONObject.h"
#include "java/lang/System.h"
#include "J2ObjC_source.h"

@interface GNSClientAppTests : XCTestCase

@end

@implementation GNSClientAppTests

- (void)setUp {
    [super setUp];
    // Put setup code here. This method is called before the invocation of each test method in the class.
}

- (void)tearDown {
    // Put teardown code here. This method is called after the invocation of each test method in the class.
    [super tearDown];
}

- (void)testExample {
    EduUmassCsGnsclientClientGNSClient *client = create_EduUmassCsGnsclientClientGNSClient_init();
    EduUmassCsGnsclientClientUtilGuidEntry *guid;
    guid = EduUmassCsGnsclientClientUtilGuidUtils_lookupOrCreateAccountGuidWithEduUmassCsGnsclientClientGNSClient_withNSString_withNSString_withBoolean_(client, @"test@hellos", @"password", true);
    [client executeWithEduUmassCsGnscommonPacketsCommandPacket:EduUmassCsGnsclientClientGNSCommand_updateWithEduUmassCsGnsclientClientUtilGuidEntry_withOrgJsonJSONObject_(guid, create_OrgJsonJSONObject_initWithNSString_(@"{\"Hello\":5}"))];
    
    OrgJsonJSONObject *result = [((EduUmassCsGnscommonPacketsCommandPacket *) nil_chk([client executeWithEduUmassCsGnscommonPacketsCommandPacket:EduUmassCsGnsclientClientGNSCommand_readWithEduUmassCsGnsclientClientUtilGuidEntry_(guid)])) getResultJSONObject];
    [((JavaIoPrintStream *) nil_chk(JreLoadStatic(JavaLangSystem, out))) printlnWithId:result];
}

- (void)testPerformanceExample {
    // This is an example of a performance test case.
    [self measureBlock:^{
        // Put the code you want to measure the time of here.
    }];
}

@end
