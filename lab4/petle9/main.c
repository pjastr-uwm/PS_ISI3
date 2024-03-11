#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Podaj liczbe n\n");
    int n;
    scanf("%d", &n);
    printf("Podaj elementy ciagu\n");
    int prev, curr, next;
    scanf("%d", &prev);
    scanf("%d", &curr);
    int counter =0;
    for(int i =3;i<=n;i++){
        scanf("%d", &next);
        if (2*curr - prev < next){
            counter++;
        }
        prev = curr;
        curr = next;
    }
    printf("Licznik: %d\n", counter);
    return 0;
}
