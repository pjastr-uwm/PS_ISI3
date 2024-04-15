#include <stdio.h>
#include <stdlib.h>

void strCopyNew(char src[], char dest[]){
    int i=0;
    while(src[i] !=0){
        dest[i] = src[i];
        i++;
    }
    dest[i]=0;
}

int main()
{
    char n1[] = "ABC";
    char n2[] = "INFORMATYKA";
    strCopyNew(n1, n2);
    printf("%s %s\n",n1, n2);
    return 0;
}
