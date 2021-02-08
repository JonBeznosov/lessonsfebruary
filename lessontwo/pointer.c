#include <stdio.h>

int swap(
   int *a, 
   int *b) 
{

  int temp;
  printf("adress in swap - %p\n", a);
  printf("value a = %d\n", *a);   

  temp = *b;        
  *b = *a;
  *a = temp;
}


int main(void){
  int a = 2;
  int b = 1;


  printf("in main a = %d, b = %d\n", a, b);
  printf("adress in main - %p\n", &a);  
  swap(&a, &b);      
  printf("in main a = %d, b = %d\n", a, b);
  return 0;
}
