#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

enum Constants
{
    N = 3,
    BUF_SIZE = 10,
    LENGTH_NUMBER 6,
};

void summa_number(int number) 
{
    int sum1 = 0; 
    int sum2 = 0;   

    for (int i = 0; i < N; i++)
    {
    	sum1 += (number % 10);
    	number /= 10;
    }

    for (int i = 0; i < N; i++)
    {
    	sum2 += (number % 10);
    	number /= 10;
    }

    if(sum1 == sum2)
    {   
        printf("This is a lucky ticket!\n");
    }
    else
    {
        printf("This is not a lucky ticket.\n");
    }
}

int check_number(char *str)
{
    int is_number = 1;
     
    str[strlen(str) - 1] = '\0';
    
    if (LENGTH_NUMBER == strlen(str))
    {
        for (int i = 0; i < strlen(str); i++)
            if (!isdigit(str[i]))
            {
                printf("Please enter the numbers!\n");
                is_number = 0;
                break;
            }
    }
    else
    {
        printf("Error, enter a six-digit number.\n");
        is_number = 0;
    }

    return is_number;
}

int main(int argc, char *argv[]) {
	
    int number = 0;
	
    char str[BUF_SIZE] = {0};

    printf("Enter a six-digit number.\n");
    fgets(str, BUF_SIZE, stdin);

    if(check_number(str))
    {
        number = atoi(str);
        summa_number(number);
    }
    
    return 0;
}
