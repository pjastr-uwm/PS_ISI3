#include <stdio.h>
#include <stdlib.h>

int lexComp(char txt1[], char txt2[]){
    int i;
    for(i=0;txt1[i] !=0 && txt2[i] !=0;i++){
        if (txt1[i] > txt2[i])
            return 0;
        if (txt1[i] < txt2[i])
            return 1;
    }
    if (txt2[i] !=0)
        return 1;
    return 0;
}

int main()
{
    printf("%d\n", lexComp("ABC", "KLM")); // 1
    printf("%d\n", lexComp("Aw2", "ABC")); // 0
    printf("%d\n", lexComp("ABC", "ABCD")); // 1
    printf("%d\n", lexComp("KLM", "ABC")); // 0
    printf("%d\n", lexComp("ABC", "Aw2")); // 1
    printf("%d\n", lexComp("ABCD", "ABC")); // 0
    printf("%d\n", lexComp("", "ABC")); // 1
    printf("%d\n", lexComp("ABC", "")); // 0
    printf("%d\n", lexComp("", "")); // 0
    printf("%d\n", lexComp("X", "X")); // 0
    return 0;
}
