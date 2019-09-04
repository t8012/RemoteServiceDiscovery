//
//  OS_remote_service.h
//  RemoteServiceDiscovery
//
//  Created by Aun-Ali Zaidi on 9/4/19.
//  Copyright © 2019 Aun-Ali Zaidi. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <xpc/base.h>

NS_ASSUME_NONNULL_BEGIN

@class OS_remote_device;
@protocol OS_xpc_object;

__attribute__((visibility("hidden")))
@interface OS_remote_service : NSObject {
    char* name;
    xpc_object_t properties;
    xpc_object_t connection;
    OS_remote_device* device;
    unsigned int connection_timeout;
}

- (void) dealloc;

@end

NS_ASSUME_NONNULL_END
