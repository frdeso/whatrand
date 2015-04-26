#include <stdlib.h>

#define __USE_GNU
#include <dlfcn.h>
void srand(unsigned int seed)
{
	unsigned int my_seed = 1337;
	static int (*srand_real)(unsigned int)=NULL;
	if (!srand_real)
	{
		srand_real = dlsym(RTLD_NEXT,"srand");
	}

	srand_real(my_seed);
	return;
}
