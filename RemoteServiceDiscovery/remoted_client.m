//
//  remoted_client.m
//  RemoteServiceDiscovery
//
//  Created by Aun-Ali Zaidi on 9/5/19.
//  Copyright © 2019 Aun-Ali Zaidi. All rights reserved.
//

#import "remoted_client.h"

static dispatch_once_t remoted_queue_once;
static dispatch_once_t remoted_conn_once;
static dispatch_once_t rsd_log_once;

static dispatch_queue_t remoted_queue_queue;
static xpc_connection_t remoted_conn_conn;
static os_log_t rsd_log_log;

xpc_connection_t remoted_conn(void)
{
    dispatch_once(&remoted_conn_once, ^{
        remoted_conn_conn = xpc_connection_create_mach_service("com.apple.remoted", remoted_queue(), XPC_CONNECTION_MACH_SERVICE_PRIVILEGED);

        xpc_connection_set_event_handler(remoted_conn_conn, ^(xpc_object_t  _Nonnull event_handler) {
            if (xpc_get_type(event_handler) == XPC_TYPE_ERROR)
                os_log(rsd_log(), "Error received on client connection:");
            else
                os_log_error(rsd_log(), "Unexpected message from remoted");
        });
        return xpc_connection_activate(remoted_conn_conn);
    });

    return remoted_conn_conn;
}

dispatch_queue_t remoted_queue(void)
{
    dispatch_once(&remoted_queue_once, ^{
        remoted_queue_queue = dispatch_queue_create("remote client queue", 0);
    });

    return remoted_queue_queue;
}

os_log_t rsd_log(void)
{
    dispatch_once(&rsd_log_once, ^{
        rsd_log_log = os_log_create("com.apple.xpc.remote", "RemoteServiceDiscovery");
    });

    return rsd_log_log;
}
