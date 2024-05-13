#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Book{
    char title[50];
    int page_count;
};

struct Book initBook(char title2[50], int page_count2){
    struct Book temp;
    strcpy(temp.title, title2);
    temp.page_count = page_count2;
    return temp;
}

void showBook(struct Book arg){
    printf("%s %d\n", arg.title, arg.page_count);
}

void addPages(struct Book *wsk){
    wsk->page_count +=10;
}

int main()
{
    struct Book b1 = initBook("Pan Tadeusz", 254);
    showBook(b1);
    addPages(&b1);
    showBook(b1);
    return 0;
}
