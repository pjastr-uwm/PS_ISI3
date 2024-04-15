#include <stdio.h>
#include <stdlib.h>

int cmpStrNew(char txt1[], char txt2[]){
    int i;
    for(i=0;txt1[i] !=0 || txt2[i] !=0;i++){
        if (txt1[i] != txt2[i])
            return 0;
    }

    return 1;
}

int main()
{
    printf("%d\n", cmpStrNew("ABC", "ABCD")); //0
    printf("%d\n", cmpStrNew("ABCD", "ABC")); // 0
    printf("%d\n", cmpStrNew("ABC", "ABC")); //1
    return 0;
}
