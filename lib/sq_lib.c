#include "sq_lib.h"
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
