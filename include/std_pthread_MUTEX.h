#ifndef __STD_PTHREAD_MUTEX_H
#define __STD_PTHREAD_MUTEX_H

#include <pthread.h>

typedef struct MTX{
	pthread_mutex_t mtx;
}STD_PTHREAD_MTX;

#endif
