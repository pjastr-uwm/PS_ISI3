#include <stdio.h>
#include <stdlib.h>

void toUpperNew(char txt[]){
    for(int i=0;txt[i] !=0;i++){
        if ('a' <= txt[i] && txt[i] <= 'z'){
            //txt[i] -=32;
            txt[i] -= ('a' -'A');
        }
    }
}

int main()
{
    char napis []= "Olsztyn562552";
    toUpperNew(napis);
    printf("%s\n", napis);
    return 0;
}
