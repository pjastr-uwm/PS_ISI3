#include <stdio.h>
#include <stdlib.h>

void reverseArr(int n, int *tab){
    for(int i=0;i<n/2;i++){
        int temp = *(tab+i);
        *(tab+i) = *(tab+n-1-i);
        *(tab+n-1-i) = temp;
    }
}

void printTable(int n, int *tab){
    for(int i=0;i<n;i++){
        printf("%d ", *(tab+i));
    }
    printf("\n");
}

int main()
{
    int * tab1 = malloc(5*sizeof(int));
    *tab1 = 4;
    *(tab1+1) = -3;
    *(tab1+2) = 11;
    *(tab1+3) = 18;
    *(tab1+4) = -;
    printTable(5, tab1);
    reverseArr(5, tab1);
    printTable(5, tab1);
    return 0;
}
