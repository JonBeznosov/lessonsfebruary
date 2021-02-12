#include "sq_lib.h"

int main()
{
    double a, b, c, x1, x2, err;

    printf("Enter a:\n");
    scanf("%lf", &a);

    printf("Enter b:\n");
    scanf("%lf", &b);

    printf("Enter c:\n");
    scanf("%lf", &c);

    err = square(a, b, c, &x1, &x2);
    if (err == 0)
    {
      printf("x1=%.2lf, x2=%.2lf\n", x1, x2);
    }
    else
    {
      printf ("Error!\n");
    }

    return 0;
}


