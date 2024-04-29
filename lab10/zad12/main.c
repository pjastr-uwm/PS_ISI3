#include <stdio.h>
#include <stdlib.h>

void revColArr(int n, int m, int **tab){
    for(int i=0;i<n/2;i++){
        int * wiersz = tab[i];
        tab[i] = tab[n-1-i];
        tab[n-1-i] = wiersz;
    }
}

void revColArr2(int n, int m, int **tab){
    for(int j=0;j<m;j++){
        for(int i=0;i<n/2;i++){
            int temp = tab[i][j];
            tab[i][j] =  tab[n-1-i][j];
            tab[n-1-i][j] = temp;
        }
    }
}

void printTable(int n, int m, int ** tab){
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
    int ** tab= malloc(4*sizeof(int*));
    tab[0] = malloc(3*sizeof(int));
    tab[1] = malloc(3*sizeof(int));
    tab[2] = malloc(3*sizeof(int));
    tab[3] = malloc(3*sizeof(int));
    tab[0][0] =  2;tab[0][1] =  3;tab[0][2] = -4;
    tab[1][0] =  1;tab[1][1] = -8;tab[1][2] =  0;
    tab[2][0] =  2;tab[2][1] = -5;tab[2][2] =  7;
    tab[3][0] = -4;tab[3][1] =  5;tab[3][2] =  9;
    printTable(4,3,tab);
    revColArr(4,3,tab);
    printTable(4,3,tab);
    revColArr2(4,3,tab);
    printTable(4,3,tab);

    free(tab[0]);
    free(tab[1]);
    free(tab[2]);
    free(tab[3]);
    free(tab);
    return 0;
}
