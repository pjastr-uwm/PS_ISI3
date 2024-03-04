#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);
    (n%2 ==0) ? printf("parzysta\n") : printf("nieparzysta\n");
    printf(n%2 ==0 ? "parzysta\n" : "nieparzysta\n");
    return 0;
}
