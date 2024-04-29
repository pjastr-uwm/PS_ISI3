#include <stdio.h>
#include <stdlib.h>

int ** transCopy(int n, int ** tab){
    int ** wsk = malloc(n* sizeof(int *));
    for(int i=0;i<n;i++){
        wsk[i] = malloc(n*sizeof(int));
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            wsk[i][j] = tab[j][i];
        }
    }
    return wsk;
}

void printTable(int n, int ** tab){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("%d ", tab[i][j]);
        }
        printf("\n");
    }
    printf("---\n");
}

int main()
{
    int **tab = malloc(3*sizeof(int*));
    tab[0] = malloc(3*sizeof(int));
    tab[1] = malloc(3*sizeof(int));
    tab[2] = malloc(3*sizeof(int));
    tab[0][0] =  2;
    tab[0][1] =  3;
    tab[0][2] = -8;
    tab[1][0] =  1;
    tab[1][1] = -4;
    tab[1][2] =  7;
    tab[2][0] =  6;
    tab[2][1] =  4;
    tab[2][2] = -5;
    printTable(3, tab);
    int ** wynik = transCopy(3, tab);
    printTable(3, wynik);
    return 0;
}
