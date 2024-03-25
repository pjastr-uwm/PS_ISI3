#include <stdio.h>
#include <stdlib.h>

int* shiftRight(int n, int tab[]){
    int *temp = malloc(n*sizeof(int));
    for(int i=1;i<n;i++){
        *(temp+i) = tab[i-1];
    }
    *temp = tab[n-1];
    return temp;
}

int main()
{
    int tab[] = {-2,8,7,-3,5};
    int * results = shiftRight(5, tab);
    for(int i=0;i<5;i++){
        printf("%d ", *(results+i));
    }
    return 0;
}
