#include <stdio.h>
#include <stdlib.h>

void copyInt(int x, int *w){
    *w=x;
}

int main()
{
    int a=5, b = 9;
    copyInt(a,&b);
    printf("%d %d\n", a,b);
    return 0;
}
