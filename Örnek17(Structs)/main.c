#include <stdio.h>
#include <stdlib.h>

struct studental
{
    char name[50];
    char major[50];
    int age;
    double gpa;

};

int main()
{
    struct studental studental1;
    studental1.age = 74;
    studental1.gpa = 3.7;
    strcpy(studental1.name, "Hans");
    strcpy(studental1.major, "Fucking with boys ?");

    printf("%d", studental1.age);
}

