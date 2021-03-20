#include <stdio.h>
#include "func.h"

void while_do_example()
{
	printf("%s:", __FUNCTION__);
	int i = 0;
	while(i <= 10)
	{
		if(i == 10)
		{
			printf(" %d", i);
			break;
		}
		printf(" %d,", i);
		i++;
	}

	printf("\n");
}
