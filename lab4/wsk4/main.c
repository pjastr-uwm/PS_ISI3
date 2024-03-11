#include <stdio.h>
#include <stdlib.h>

double findMax(double const * num1, double * const num2){
    if (*num1 >= *num2){
        return *num1;
    }
    return *num2;
}

int main()
{
    double a= 4.5, b = -12.4;
    printf("%lf\n", findMax(&a, &b));
    return 0;
}
