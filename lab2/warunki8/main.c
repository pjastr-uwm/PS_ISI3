#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b;
    scanf("%d", &a);
    scanf("%d", &b);
    int maks = a>=b ? a : b;
    printf("%d", maks);
    return 0;
}
