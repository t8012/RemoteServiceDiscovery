//
//  remoted_client.h
//  RemoteServiceDiscovery
//
//  Created by Aun-Ali Zaidi on 9/5/19.
//  Copyright © 2019 Aun-Ali Zaidi. All rights reserved.
//

#import <os/log.h>
#import <xpc/base.h>

OS_ASSUME_NONNULL_BEGIN
__BEGIN_DECLS

OS_EXPORT dispatch_queue_t remoted_queue(void);
OS_EXPORT xpc_connection_t remoted_conn(void);

OS_EXPORT os_log_t rsd_log(void);

__END_DECLS
OS_ASSUME_NONNULL_END
