//
//  OS_remote_device_browser.m
//  RemoteServiceDiscovery
//
//  Created by Aun-Ali Zaidi on 9/3/19.
//  Copyright © 2019 Aun-Ali Zaidi. All rights reserved.
//

#import "OS_remote_device_browser.h"

#import "internal_log.h"

@implementation OS_remote_device_browser

- (void) dealloc
{
    if (![self canceled])
        HALT("Browse handle must be canceled before releasing it");
}

@end
