#include <stdio.h>
#include <stdlib.h>

int* initInts(){
    int * wsk = malloc(3*sizeof(int));
    *(wsk+0) = 5;
    *(wsk+1) = -12;
    *(wsk+2) = 33;
    return wsk+1;
}

int main()
{
    int* wynik = initInts();
    printf("%p\n", wynik);
    printf("%d\n", *(wynik-1));
    printf("%d\n", *wynik);
    printf("%d\n", *(wynik+1));
    return 0;
}
