#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);
    if (n%2 != 0){
        printf("nieparzysta\n");
    }
    else{
        printf("parzysta\n");
    }

    return 0;
}
