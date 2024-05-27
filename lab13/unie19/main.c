#include <stdio.h>
#include <stdlib.h>

union Number{
    int x;
    double y;
};

struct NumberData{
    int type;
    union Number data;
};

struct NumberData input(){
    struct NumberData temp;
    printf("0 - liczba calk, 1 - liczba wym\n");
    scanf("%d", &temp.type);
    if (temp.type ==0){
        scanf("%d", &temp.data.x);
    }
    else {
        scanf("%lf", &temp.data.y);
    }
    return temp;
};

void print(struct NumberData arg){
    if (arg.type == 0)
        printf("%d\n", arg.data.x);
    else
        printf("%lf\n", arg.data.y);
}

int main()
{
    struct NumberData  result = input();
    print(result);
    return 0;
}
