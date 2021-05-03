#include <stdio.h>

#define N 9

int main(int argc, char* argv[])
{
	int A[N] = {0};
	for(int i = 0; i < N; i++)
	{
		A[i] = i + 1;
		printf(" %d ", A[i]);
	}
	printf("\n");

	for(int i = 0; i < N; i++)
	{
		A[i] = N-i-1;
		printf(" %d ", A[i]);
	}
	return 0;
}

