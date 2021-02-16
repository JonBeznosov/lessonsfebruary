#include "mylib.h"
#include <stdio.h>
#include <math.h>

int main() 
{
	double value_1, value_2, result;
	char symbol[2];

	printf("Input value_1 = ");
	scanf("%lf", &value_1);

	printf("Input value_2 = ");
	scanf("%lf", &value_2);

	printf("Input operation: +, -, *, /\n");
	scanf("%s", symbol);

	if (symbol[0] == '+')
	{
		sum(value_1,value_2,&result);
	}
	else if (symbol[0] == '-')
	{
		dif(value_1,value_2,&result);
	}
	else if (symbol[0] == '*')
	{
		multiply(value_1,value_2,&result);
	}
	else
	{
		split(value_1,value_2,&result);
	}

	printf("Result = %1.2lf\n", result);

	return 0;
}
