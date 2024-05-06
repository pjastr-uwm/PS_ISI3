#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Car{
    char*brand;
    char model[20];
    int year;
    int isAvailable;
};

int main()
{
    struct Car zmienna = { "Fiat", "126p", 1965, 0};
    struct Car zmienna2;
    zmienna2.brand = "Skoda";
    strcpy(zmienna2.model, "Fabia");
    zmienna2.year = 2015;
    zmienna2.isAvailable = 1;
    printf("%s %s %d %d\n", zmienna.brand, zmienna.model,
           zmienna.year, zmienna.isAvailable);
    return 0;
}
