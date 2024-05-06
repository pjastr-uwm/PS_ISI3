#include <stdio.h>
#include <stdlib.h>

void swap(int* a, int* b){
    int temp = *a;
    *a=*b;
    *b = temp;
}

void sortTable(int n, int tab[]){
    for(int i=0;i<n-1;i++){
        for(int k=0;k<n-1;k++){
            if (tab[k] > tab[k+1]){
                swap(&tab[k], &tab[k+1]);
            }
        }
    }
}

void sortRows(int n, int m, int ** tab){
    for(int i=0;i<n;i++){
        sortTable(m, tab[i]);
    }
}
void printTable(int ** tab, int n, int m){
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            printf("%d ", tab[i][j]);
        }
        printf("\n");
    }
    printf("---\n");
}

int main()
{
    int ** tab = malloc(4*sizeof(int*));
    tab[0] = malloc(3*sizeof(int));
    tab[1] = malloc(3*sizeof(int));
    tab[2] = malloc(3*sizeof(int));
    tab[3] = malloc(3*sizeof(int));
    tab[0][0] =  2; tab[0][1] =  3; tab[0][2] = -3;
    tab[1][0] =  1; tab[1][1] =  4; tab[1][2] =  7;
    tab[2][0] = -3; tab[2][1] = -6; tab[2][2] = 11;
    tab[3][0] = -2; tab[3][1] =  8; tab[3][2] = 23;
    printTable(tab,4,3);
    sortRows(4,3,tab);
    printTable(tab,4,3);
    return 0;
}
