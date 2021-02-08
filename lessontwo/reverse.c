#include <stdio.h>

int swap(
 int *aa, 
 int *bb) 
{
 *aa = *aa + *bb;
 *bb = *aa - *bb;
 *aa = *aa - *bb;
}


int main(void){
 int a = 2;
 int b = 1;

 printf("a = %d, b = %d\n", a, b);
 swap(&a, &b);      
 printf("a = %d, b = %d\n", a, b);
 return 0;
}
