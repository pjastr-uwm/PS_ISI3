#include <stdio.h>
#include <stdlib.h>

struct element {
    int x;
    struct element * next;
};

void printListWithoutHead(struct element * lista){
    if (lista == NULL){
        printf("Pusta Lista\n");
        printf("---\n");
        return;
    }
    struct element * wsk = lista;
    while(wsk != NULL){
        printf("%d\n", wsk->x);
        wsk = wsk->next;
    }
    printf("---\n");
}

void printListWithoutHead2(struct element * lista){
    if (lista == NULL){
        printf("Pusta Lista\n");
        printf("---\n");
        return;
    }
    while(lista != NULL){
        printf("%d\n", lista->x);
        lista = lista->next;
    }
    printf("---\n");
}


int main()
{
    struct element * lista = malloc(sizeof(struct element));
    lista->x = 4;
    lista->next = malloc(sizeof(struct element));
    lista->next->x = 5;
    lista->next->next = malloc(sizeof(struct element));
    lista->next->next->x = -12;
    lista->next->next->next = NULL;
    printf("%p\n", lista);
    printListWithoutHead2(lista);
    printf("%p\n", lista);
    struct element * lista2 = NULL;
    printListWithoutHead(lista2);
    return 0;
}
