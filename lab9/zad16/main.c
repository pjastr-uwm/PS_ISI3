#include <stdio.h>
#include <stdlib.h>
#include <wchar.h>

int isDigitNew(wchar_t znak){
    if (48 <= znak && znak <=57){
        return 1;
    }
    return 0;
}

int w16(wchar_t * napis){
    int temp=0;
    for(int i=0;i<3;i++){
        if (!isDigitNew(napis[i])){
            return 0;
        }
    }
    temp = (napis[0] -48)*100 +(napis[1] -48)*10+(napis[2] -48);
    return temp;
}

int main()
{
    printf("%d\n", w16(L"a52"));
    wprintf(L"%d\n", w16(L"a52"));
    printf("%d\n", w16(L"253"));
    printf("%d\n", w16(L"012"));
    printf("%d\n", w16(L"005"));
    printf("%d\n", w16(L"000"));
    return 0;
}
