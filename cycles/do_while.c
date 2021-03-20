#include <stdio.h>
#include "func.h"

void do_while_example()
{
	printf("%s:", __FUNCTION__);
	int i = 0;
	do
	{
		if(i == 10)
		{
			printf(" %d", i);
			break;
		}
		printf(" %d,", i);
		i++;
	} while( i <= 10);

	printf("\n");
}
