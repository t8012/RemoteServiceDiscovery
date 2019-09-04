//
//  OS_remote_service.m
//  RemoteServiceDiscovery
//
//  Created by Aun-Ali Zaidi on 9/4/19.
//  Copyright © 2019 Aun-Ali Zaidi. All rights reserved.
//

#import "OS_remote_service.h"

@implementation OS_remote_service

- (void) dealloc
{
    free(self->name);
}

@end
