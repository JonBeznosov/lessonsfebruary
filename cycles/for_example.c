#include <stdio.h>
#include "func.h"

void for_example()
{
	printf("%s:", __FUNCTION__);
	for(int i = 0; i <= 10; i++)
	{
		if( i == 10)
		{
			printf(" %d", i);
			break;
		}
		printf(" %d,", i);
	}
	printf("\n");
}
