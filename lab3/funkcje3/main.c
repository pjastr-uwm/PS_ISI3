#include <stdio.h>
#include <stdlib.h>

int calculateFactorial(int n){
    int temp =1;
    for(int i=1;i<=n;i++){
        temp *= i;
    }
    return temp;
}

int main()
{
    printf("%d\n",calculateFactorial(0));
    printf("%d\n",calculateFactorial(1));
    printf("%d\n",calculateFactorial(2));
    printf("%d\n",calculateFactorial(5));
    printf("%d\n",calculateFactorial(7));
    return 0;
}
