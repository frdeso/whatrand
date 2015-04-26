#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	srand(time(0));

	int i;
	for(i = 0; i < 10;i++)
	{
		int a = rand();
		printf("randon number: %d: %d\n", i ,a);
	}
	return 0;
}
