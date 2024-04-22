#include <stdio.h>
#include <stdlib.h>

int isDigitNew(char znak){
    if ('0' <= znak && znak <='9'){
        return 1;
    }
    return 0;
}

void rmDigits(char napis[]){
    int i=0,j=0;
    while(napis[i] !=0){
        if (!isDigitNew(napis[i])){
            napis[j] = napis[i];
            j++;
        }
        i++;
    }
    napis[j] = 0;
}



int main()
{
    char n1[] = "aaa344";
    printf("%s\n", n1);
    rmDigits(n1);
    printf("%s\n", n1);
    return 0;
}
