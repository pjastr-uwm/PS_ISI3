#include <stdio.h>
#include <stdlib.h>

int main()
{
    char nap[30] = "fsdhhdghdsvaa2";
    char z = nap[3];  // z= 104 'h'
    char w = z++;     // w=104 'h'   , z=105 'i'
    w=z--;            // w=105 'i'   , z=104 'h'
    w= (z+=2);        // w=106 'j'   , z=106 'j'
    z = (w--);        // w=105 'i'   , z=106 'j'
    w = z+10;         // w=116 't'   , z=106 'i'
    return 0;
}
