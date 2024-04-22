#include <stdio.h>
#include <stdlib.h>

int dlugosc(char napis[]){
    int i=0;
    while(napis[i] !=0){
        i++;
    }
    return i;
}

void cutStr(char napis[], int n, int m){
    int d = dlugosc(napis);
    if (0<=n && m<d){
        int i;
        for(i=m+1;i<=d-1;i++){
            napis[i-m+n-1] =napis[i]  ;
        }
        napis[d-m+n-1] =0;
    }
}

int main()
{
    char n1[] = "Olsztyn";
    cutStr(n1, 1,4);
    printf("%s\n", n1);
    return 0;
}
