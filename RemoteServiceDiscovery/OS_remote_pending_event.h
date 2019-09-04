//
//  OS_remote_pending_event.h
//  RemoteServiceDiscovery
//
//  Created by Aun-Ali Zaidi on 9/4/19.
//  Copyright © 2019 Aun-Ali Zaidi. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <xpc/base.h>

NS_ASSUME_NONNULL_BEGIN

@protocol OS_xpc_object;

__attribute__((visibility("hidden")))
@interface OS_remote_pending_event : NSObject {
    const char* service_name;
    dispatch_queue_t event;
    OS_remote_pending_event* next;
}

@end

NS_ASSUME_NONNULL_END
