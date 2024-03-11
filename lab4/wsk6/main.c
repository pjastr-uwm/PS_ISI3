#include <stdio.h>
#include <stdlib.h>

float* initFloats(){
    float * p = malloc(3*sizeof(float));
    *p = 4.5;
    *(p+1) = 2.3;
    *(p+2) = -4.2;
    return p;
}

int main()
{
    float * result = initFloats();
    for(int i=0;i<3;i++){
        printf("%f\n", *(result+i));
    }
    return 0;
}
