#include <stdio.h>
#include "func.h"

void test()
{
	printf("functin: %s\n", __FUNCTION__);
}

int main()
{
        for_example();
	do_while_example();
	while_do_example();

	return 0;
}
