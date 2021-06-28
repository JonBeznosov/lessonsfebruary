#include <stdio.h>
#include <stdlib.h>

#define N 3

int summa_number(
    int *number,
    int *sum1, 
    int *sum2)
{

    for (int i = 0; i < N; i++)
    {
    	*sum1 += (*number % 10);
    	*number /= 10;
    }

    for (int i = 0; i < N; i++)
    {
    	*sum2 += (*number % 10);
    	*number /= 10;
    }

    return 0;

}

int main(void) {
	int number = 0;
	int sum1 = 0; 
	int sum2 = 0; 	
	
	printf("enter a six-digit number\n");
	scanf("%d", &number);

	summa_number(&number, &sum1, &sum2);

    if(sum1 == sum2)
    {	
       	printf("lucky ticket\n");
    }
    else
    {
    	printf("an unlucky ticket\n");
    }
    
    return 0;
}
