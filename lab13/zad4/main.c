#include <stdio.h>
#include <stdlib.h>

struct element {
    int x;
    struct element * next;
};

void printListWithHead(struct element * lista){
    if (lista->next == NULL){
        printf("Pusta Lista\n");
        printf("---\n");
        return;
    }
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
    lista->next->x = 4;
    lista->next->next = malloc(sizeof(struct element));
    lista->next->next->x = 5;
    lista->next->next->next = malloc(sizeof(struct element));
    lista->next->next->next->x = -12;
    lista->next->next->next->next = NULL;
    printListWithHead(lista);
    struct element * lista2 = malloc(sizeof(struct element));
    lista2->next = NULL;
    printListWithHead(lista2);
    return 0;
}
