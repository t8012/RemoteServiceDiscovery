//
//  internal_log.h
//  RemoteServiceDiscovery
//
//  Created by Aun-Ali Zaidi on 9/4/19.
//  Copyright © 2019 Aun-Ali Zaidi. All rights reserved.
//

#ifndef internal_log_h
#define internal_log_h

#define PRIVATE

#ifdef PRIVATE
#define OS_CRASH_ENABLE_EXPERIMENTAL_LIBTRACE
#import <os/assumes.h>
#define PANIC(x) __os_crash_simple(x)
#define PANIC_FMT(...) __os_crash_fmt(__VA_ARGS__)
#else
#define PANIC(x) printf(x)
#define PANIC_FMT(...) printf(__VA_ARGS__)
#endif

#endif /* internal_log_h */
