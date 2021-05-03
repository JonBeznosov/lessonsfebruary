#include <stdio.h>

#define N 9

int main(int argc, char* argv[])
{
	int A[N] = {0};

	for(int i = 0; i < N/3; i++)
	{
		A[i] = i+1;
		printf(" %d ", A[i]);

	}
	printf("\n");
	for(int i = 0; i < N/3; i++)
	{
		A[i] = N/2 + i;
		printf(" %d ", A[i]);

	}
	printf("\n");
	for(int i = 0; i < N/3; i++)
	{
		A[i] = N-2+i;
		printf(" %d ", A[i]);

	}
	printf("\n");
	return 0;
}

