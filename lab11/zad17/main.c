#include <stdio.h>
#include <stdlib.h>

void swap2nd(int ** tab, int n, int m){
    if (n<4)
        return;
    int * wsk = tab[1];
    tab[1] = tab[n-2];
    tab[n-2] = wsk;
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
    swap2nd(tab,4,3);
    printTable(tab,4,3);
    return 0;
}
