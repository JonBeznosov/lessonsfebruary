
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
    int a,b,c;
    printf("Enter a:\n");
    scanf("%d", &a);
 
    printf("Enter b:\n");
    scanf("%d", &b);
 
    printf("Enter c:\n");
    scanf("%d", &c);
    square(a,b,c);
    return 0;
}

 
void square(int a,int b, int c) {
    double d = b*b-4*a*c;
    if (d<0) {
       printf("Error\n");
    }
 
    else if (d==0) {
       double x = -b/2*a*c;
       printf("root x= %f", x);
    }
 
    else if (d>0){
 	double x1=(-b-sqrt(d))/(2*a);
 	double x2=(-b+sqrt(d))/(2*a);
 	printf("root x1= %f", x1);
 	printf("root x2= %f", x2);
    }
    return x1,x2;
}
 

