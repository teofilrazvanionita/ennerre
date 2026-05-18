#ifndef __SERVER_H
#define __SERVER_H

#include <pthread.h>

#define PORT "5999"   /* the PORT clients will be connectting to */
#define BACKLOG 1024   /* how many pending connections are permitted */

#include "become_daemon.h"

static pthread_mutex_t mtx = PTHREAD_MUTEX_INITIALIZER;



#endif
