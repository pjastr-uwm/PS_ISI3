#include <stdio.h>
#include <stdlib.h>

int findWithCondition(int tab[], int n, int (*condtion)(int)){
    int index = -1;
    for(int i=0;i<n;i++){
        if (condtion(tab[i])){
            index =i;
        }
    }
    return index;
}

int help(int arg){
    return arg %3 == 1;
}

int main()
{
    int tab[] = {-4, 5,6,7,8,9,10};
    printf("%d\n", findWithCondition(tab, 7, help));
    return 0;
}
