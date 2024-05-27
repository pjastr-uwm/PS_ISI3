#include <stdio.h>
#include <stdlib.h>

struct element {
    int x;
    struct element * next;
};

void addFirst(struct element * lista, int a){
    struct element * wsk = malloc(sizeof(struct element));
    wsk->x = a;
    wsk->next = lista->next;
    lista->next = wsk;
}

void printListWithHead(struct element * lista){
    struct element * wsk = lista->next;
    while(wsk != NULL){
        printf("%d\n", wsk->x);
        wsk = wsk->next;
    }
    printf("---\n");
}

int main()
{
    struct element * lista = malloc(sizeof(struct element));
    lista->next = malloc(sizeof(struct element));
    lista->next->x = 2;
    lista->next->next = malloc(sizeof(struct element));
    lista->next->next->x = -7;
    lista->next->next->next = NULL;
    printListWithHead(lista);
    addFirst(lista, -56);
    printListWithHead(lista);
    return 0;
}
