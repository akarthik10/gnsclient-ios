//
//  ViewController.m
//  GNSClientApp
//
//  Created by Karthik A on 2/7/17.
//  Copyright © 2017 Karthik A. All rights reserved.
//

#import "ViewController.h"
#include "java/io/PrintStream.h"
#include "edu/umass/cs/gnsclient/client/GNSClient.h"
#include "edu/umass/cs/gnsclient/client/util/GuidEntry.h"
#include "edu/umass/cs/gnsclient/client/util/GUIDUtils.h"
#include "edu/umass/cs/gnsclient/client/GNSCommand.h"
#include "org/json/JSONObject.h"
#include "java/lang/System.h"
#include "J2ObjC_source.h"


@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view, typically from a nib.
    
    [self.helloLabel setTitle:@"Changed!" forState:UIControlStateNormal];
    EduUmassCsGnsclientClientGNSClient *client = create_EduUmassCsGnsclientClientGNSClient_init();
    EduUmassCsGnsclientClientUtilGuidEntry *guid;
    guid = EduUmassCsGnsclientClientUtilGuidUtils_lookupOrCreateAccountGuidWithEduUmassCsGnsclientClientGNSClient_withNSString_withNSString_withBoolean_(client, @"test@hellos", @"password", true);
    [client executeWithEduUmassCsGnscommonPacketsCommandPacket:EduUmassCsGnsclientClientGNSCommand_updateWithEduUmassCsGnsclientClientUtilGuidEntry_withOrgJsonJSONObject_(guid, create_OrgJsonJSONObject_initWithNSString_(@"{\"Hello\":5}"))];

    OrgJsonJSONObject *result = [((EduUmassCsGnscommonPacketsCommandPacket *) nil_chk([client executeWithEduUmassCsGnscommonPacketsCommandPacket:EduUmassCsGnsclientClientGNSCommand_readWithEduUmassCsGnsclientClientUtilGuidEntry_(guid)])) getResultJSONObject];
    [((JavaIoPrintStream *) nil_chk(JreLoadStatic(JavaLangSystem, out))) printlnWithId:result];

}


- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}


@end
