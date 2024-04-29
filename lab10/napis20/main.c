#include <stdio.h>
#include <stdlib.h>

int countOdds(char*napis){
    int i=0;
    int licznik=0;
    while(napis[i] !=0){
        if ('0' <= napis[i] && napis[i] <= '9' && napis[i] %2 !=0){
            licznik++;
        }
        i++;
    }
    return licznik;
}

int main()
{
    printf("%d\n", countOdds("abc123"));
    return 0;
}
