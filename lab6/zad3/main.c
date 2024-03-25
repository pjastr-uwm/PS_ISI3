#include <stdio.h>
#include <stdlib.h>

int sumSquares(int n, int tab[]){
    int temp = 0;
    for(int i=0;i<n;i++){
        temp += tab[i] * tab[i];
    }
    return temp;
}

int main()
{
    int tab[] = {3,-2,5};
    printf("%d\n", sumSquares(3, tab));
    return 0;
}
