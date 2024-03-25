#include <stdio.h>
#include <stdlib.h>

void findMaxValue(int *numbers, int size){
    int max = *numbers;
    for(int i=1;i<size;i++){
        if (max < *(numbers+i)){
            max = *(numbers+i);
        }
    }
    printf("%d\n", max);
}

int main()
{
    int *tab= malloc(4*sizeof(int));
    *tab= 4;
    *(tab+1)= -5;
    *(tab+2)= 6;
    *(tab+3)= 8;
    findMaxValue(tab, 4);
    free(tab);
    return 0;
}
