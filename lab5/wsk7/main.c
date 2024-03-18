#include <stdio.h>
#include <stdlib.h>

float* initFlts(){
    float* wsk = malloc(4*sizeof(float));
    *wsk = 0.5;
    *(wsk+1) = 1.5;
    *(wsk+2) = 2.5;
    *(wsk+3) = 3.5;
    return wsk+3;
}

int main()
{
    float * wynik = initFlts();
    printf("%f\n", *wynik);
    printf("%f\n", *(wynik-1));
    printf("%f\n", *(wynik-2));
    printf("%f\n", *(wynik-3));
    return 0;
}
