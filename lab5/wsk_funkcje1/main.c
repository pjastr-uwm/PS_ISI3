#include <stdio.h>
#include <stdlib.h>

int calculate(int (*operation)(int) ,int number){
    return operation(number);
}

int pom(int arg){
    return arg-5;
}

int square(int arg){
    return arg*arg;
}

int main()
{
    printf("%d\n", calculate(pom, 22));
    printf("%d\n", calculate(square, 22));
    return 0;
}
