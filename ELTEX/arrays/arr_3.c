#include <stdio.h>

#define N 6

int main(int argv, char* argc[])
{
	int A[N] = {0};

	for(int i = 0; i < N; i++)
	{
          for(int j = N; j > i; j--)
	  {
       	    printf("1");
	  }

	  for(int j = 0; j <= i; j++)
	  {
	    printf("0");
	  }
	  printf("\n");
	}
}

