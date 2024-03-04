#include <stdio.h>
#include <stdlib.h>

void countFunctionCalls(){
    static int counter =0;
    counter++;
    printf("%d\n", counter);
}

int main()
{
    countFunctionCalls();
    countFunctionCalls();
    countFunctionCalls();
    countFunctionCalls();
    return 0;
}
