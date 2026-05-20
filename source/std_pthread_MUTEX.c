#include "std_pthread_MUTEX.h"

void init_MTX(STD_PTHREAD_MTX *p_MTX)
{
	p_MTX -> mtx = PTHREAD_MUTEX_INITIALIZER;
}
