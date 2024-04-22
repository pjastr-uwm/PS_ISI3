#include <stdio.h>
#include <stdlib.h>

void strConcat(char nap1[], char nap2[], char nap3[]){
    int i;
    for(i=0;nap1[i] !=0;i++){
        nap3[i] = nap1[i];
    }
    int j;
    for(j=0;nap2[j] !=0;j++){
        nap3[i+j] = nap2[j];
    }
    nap3[i+j] =0;
}

int main()
{
    char n1[]="AB";
    char n2[] = "XYZ";
    char n3[20];
    strConcat(n1, n2, n3);
    printf("%s %s %s\n", n1, n2, n3);
    return 0;
}
