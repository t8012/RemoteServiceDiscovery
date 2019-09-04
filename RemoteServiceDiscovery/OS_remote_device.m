//
//  OS_remote_device.m
//  RemoteServiceDiscovery
//
//  Created by Aun-Ali Zaidi on 9/3/19.
//  Copyright © 2019 Aun-Ali Zaidi. All rights reserved.
//

#import "OS_remote_device.h"

#import "internal_log.h"

@implementation OS_remote_device

- (OS_remote_device*) init
{
    self = [super init];
    if (self)
    {
        self->_dq = dispatch_queue_create("remote_device_t", 0);
        self->_state = 1;
    }
    return self;
}

- (void) dealloc
{
    if (self->_connection)
        xpc_connection_cancel(self->_connection);

    free(self->_uuid);
    free(self->device_name);
}

@end
