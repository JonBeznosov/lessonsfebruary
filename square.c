#include <stdio.h>
#include <math.h>

double square(double a, double b, double c, double *x1, double *x2)
{
    double d = (pow(b, 2)) - (4 * a * c);

    if (d > 0)
    {
 	*x1 = (-b) - sqrt(d) / (2 * a);
 	*x2 = (-b) + sqrt(d) / (2 * a);
    }
    else if (d == 0)
    {
        *x1 = *x2 = (-b) / (2 * a * c);
    }
    else
    {
       return 1;
    }

    return 0;
}

int main(void)
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


