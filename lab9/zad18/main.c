#include <stdio.h>
#include <stdlib.h>

char * copyEveryThird(char *napis){
    int n=0;
    while(napis[n]!=0){
        n++;
    }
    char * wsk = malloc((n+1)*sizeof(char));
    int j=0, k=0;
    for(j=0;j<n;j+=3){
        wsk[k] = napis[j];
        k++;
    }
    wsk[k] = 0;
    return wsk;
}

int main()
{
    char * result = copyEveryThird("ABCXYZ");
    printf("%s\n", result);
    return 0;
}
