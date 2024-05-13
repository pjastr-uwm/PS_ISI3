#include <stdio.h>
#include <stdlib.h>

typedef struct{
    char * title;
    int page_count;
} Book;

Book max_pages(Book tab[], int n){
    Book temp = tab[0];
    for(int i=1;i<n;i++){
        if(temp.page_count <= tab[i].page_count){
            temp = tab[i];
        }
    }
    return temp;
}

int main()
{
    Book tab[] = {
        {"Pan Tadeusz", 254},
        {"Lalka", 723},
        {"Balladyna", 723}
    };
    Book wynik = max_pages(tab, 3);
    printf("%s %d\n", wynik.title, wynik.page_count);
    return 0;
}
