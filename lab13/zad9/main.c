#include <stdio.h>
#include <stdlib.h>

struct element {
    int x;
    struct element * next;
};

struct element * addFirst(struct element * lista, int a){
    struct element * wsk = malloc(sizeof(struct element));
    wsk->x = a;
    wsk->next = lista;
    return wsk;
}

void printListWithoutHead(struct element * lista){
    struct element * wsk = lista;
    while(wsk != NULL){
        printf("%d\n", wsk->x);
        wsk = wsk->next;
    }
    printf("---\n");
}

int main()
{
    struct element * lista = malloc(sizeof(struct element));
    lista->x = 2;
    lista->next = malloc(sizeof(struct element));
    lista->next->x = -7;
    lista->next->next = NULL;
    printListWithoutHead(lista);
    lista = addFirst(lista, 74);
    printListWithoutHead(lista);
    return 0;
}
