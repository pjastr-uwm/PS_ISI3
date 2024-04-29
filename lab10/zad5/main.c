#include <stdio.h>
#include <stdlib.h>

void copyMat(int n, int m, int tab1[n][m], int tab2[n][m]){
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            tab1[i][j] =tab2[i][j];
        }
    }
}

void printTable(int n, int m, int tab[n][m]){
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
    int tab1[4][2] = {{3,4}};
    int tab2[4][2] = {{1,2},{-9,0},{4,5},{-7,2}};
    printTable(4,2, tab1);
    printTable(4,2, tab2);
    copyMat(4,2, tab1, tab2);
    printTable(4,2, tab1);
    printTable(4,2, tab2);
    return 0;
}
