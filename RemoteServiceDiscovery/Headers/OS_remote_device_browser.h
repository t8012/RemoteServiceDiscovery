//
//  OS_remote_device_browser.h
//  RemoteServiceDiscovery
//
//  Created by Aun-Ali Zaidi on 9/3/19.
//  Copyright © 2019 Aun-Ali Zaidi. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <xpc/base.h>

NS_ASSUME_NONNULL_BEGIN

@protocol OS_dispatch_queue, OS_xpc_object;

__attribute__((visibility("hidden")))
@interface OS_remote_device_browser : NSObject {
    bool _canceled;
    unsigned int _device_type;
    xpc_object_t _connection;
    dispatch_queue_t _cbq;
    id _callback;
}

@property(copy) id callback; // @synthesize callback=_callback;
@property bool canceled; // @synthesize canceled=_canceled;
@property(retain) dispatch_queue_t cbq; // @synthesize cbq=_cbq;
@property(retain) xpc_object_t connection; // @synthesize connection=_connection;
@property unsigned int device_type; // @synthesize device_type=_device_type;

- (void) dealloc;

@end

NS_ASSUME_NONNULL_END
