#include "mylib.h"
#include <stdio.h>

double multiply(double value_1, double value_2, double *result)
{
        *result = value_1 * value_2;
        return 0;
}
