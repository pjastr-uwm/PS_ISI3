#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);
    int i;
    //for(i=1;i*i<=n;i++){
    //
    //}
    while(i*i<=n){
        i++;
    }
    printf("%d", i-1);
    return 0;
}
