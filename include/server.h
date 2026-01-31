#ifndef __SERVER_H
#define __SERVER_H

#define PORT "50000"   /* the PORT clients will be connectting to */
#define BACKLOG 1024   /* how many pending connections are permitted */

static pthread_mutex_t mtx = PTHREAD_MUTEX_INITIALIZER;



#endif
