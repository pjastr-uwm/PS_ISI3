#include <stdio.h>
#include <stdlib.h>

int maxRowIdx(int n, int m, int tab[n][m]){
    int max = tab[0][0];
    int max_index=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if (tab[i][j] > max){
                max = tab[i][j];
                max_index=i;
            }
        }
    }
    return max_index;
}

int main()
{
    int tab[4][3] = {{3,-4,2},{1,-8,9},{33,2,4},{8,22,33}};
    printf("%d\n", maxRowIdx(4,3,tab));
    return 0;
}
