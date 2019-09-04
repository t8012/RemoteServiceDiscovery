//
//  internal_log.h
//  RemoteServiceDiscovery
//
//  Created by Aun-Ali Zaidi on 9/4/19.
//  Copyright © 2019 Aun-Ali Zaidi. All rights reserved.
//

#ifndef internal_log_h
#define internal_log_h

#ifdef PRIVATE
#define HALT(x) __os_crash(x)
#else
#define HALT(x) printf(x)
#endif

#endif /* internal_log_h */
