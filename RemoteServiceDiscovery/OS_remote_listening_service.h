//
//  OS_remote_listening_service.h
//  RemoteServiceDiscovery
//
//  Created by Aun-Ali Zaidi on 9/4/19.
//  Copyright © 2019 Aun-Ali Zaidi. All rights reserved.
//

#import <Foundation/Foundation.h>


NS_ASSUME_NONNULL_BEGIN

@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface OS_remote_listening_service : NSObject {
    const char* service_name;
    dispatch_queue_t queue;
    id accept_block;
    OS_remote_listening_service* next;
}

- (void) dealloc;

@end

NS_ASSUME_NONNULL_END
