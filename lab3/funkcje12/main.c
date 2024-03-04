#include <stdio.h>
#include <stdlib.h>

int calculateGeometricSequenceRecursively(int n, int d){
    if (n==1)
        return 1;
    return d*calculateGeometricSequenceRecursively(n-1,d);
}

int main()
{
    printf("%d\n", calculateGeometricSequenceRecursively(1,3));
    printf("%d\n", calculateGeometricSequenceRecursively(2,3));
    printf("%d\n", calculateGeometricSequenceRecursively(3,3));
    printf("%d\n", calculateGeometricSequenceRecursively(1,-2));
    printf("%d\n", calculateGeometricSequenceRecursively(2,-2));
    printf("%d\n", calculateGeometricSequenceRecursively(3,-2));
    return 0;
}
