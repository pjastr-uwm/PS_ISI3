#include <stdio.h>
#include <stdlib.h>

int calculateAbsoluteValue(int n){
    if (n<0)
        return -n;
    return n;
}

int main()
{
    printf("%d\n", calculateAbsoluteValue(4));
    return 0;
}
