//
//  OS_remote_device.h
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
@interface OS_remote_device : NSObject
{
    char* device_name;
    unsigned int _state;
    unsigned int _type;
    dispatch_queue_t _dq;
    xpc_object_t _properties;
    char* _uuid;
    unsigned long long _device_id;
    unsigned long long _messaging_protocol_version;

    xpc_object_t _connection;

    id _connected_callback;
    dispatch_queue_t _connected_callback_queue;
    OS_remote_device* _connected_callback_self_retain;

    id _disconnected_callback;
    dispatch_queue_t _disconnected_callback_queue;
    OS_remote_device* _disconnected_callback_self_retain;
}

@property(retain) OS_remote_device *disconnected_callback_self_retain; // @synthesize disconnected_callback_self_retain=_disconnected_callback_self_retain;
@property(retain) dispatch_queue_t disconnected_callback_queue; // @synthesize disconnected_callback_queue=_disconnected_callback_queue;
@property(copy) id disconnected_callback; // @synthesize disconnected_callback=_disconnected_callback;

@property(retain) OS_remote_device *connected_callback_self_retain; // @synthesize connected_callback_self_retain=_connected_callback_self_retain;
@property(retain) dispatch_queue_t connected_callback_queue; // @synthesize connected_callback_queue=_connected_callback_queue;
@property(copy) id connected_callback; // @synthesize connected_callback=_connected_callback;

@property(retain) xpc_object_t connection; // @synthesize connection=_connection;

@property(nonatomic) unsigned long long messaging_protocol_version; // @synthesize messaging_protocol_version=_messaging_protocol_version;
@property(nonatomic) unsigned long long device_id; // @synthesize device_id=_device_id;
@property(nonatomic) char *uuid; // @synthesize uuid=_uuid;

@property unsigned int type; // @synthesize type=_type;
@property(retain) xpc_object_t properties; // @synthesize properties=_properties;
@property unsigned int state; // @synthesize state=_state;
@property(retain) dispatch_queue_t dq; // @synthesize dq=_dq;

- (OS_remote_device*) init;
- (void) dealloc;

@end

NS_ASSUME_NONNULL_END
