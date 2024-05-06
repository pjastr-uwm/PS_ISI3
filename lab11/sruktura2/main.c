#include <stdio.h>
#include <stdlib.h>

typedef struct{
    char*firstName;
    char*lastName;
    int id;
    double gpa;
} Student;

int main()
{
    Student s1 = {"Anna", "Kowalski", 1, 4.3};
    Student s2 = {"Jan", "Nowak", 2, 2.8};
    Student s3 = {"John", "Smith", 3, 3.6};
    int tab[] = {3,-4,6};
    Student tablica[] = {s1,s2,s3};
    Student tablica2[] = {
        {"Anna", "Kowalski", 1, 4.3},
        {"Jan", "Nowak", 2, 2.8},
        {"John", "Smith", 3, 3.6},
    };
    return 0;
}
