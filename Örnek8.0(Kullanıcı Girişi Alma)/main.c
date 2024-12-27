#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*int age;
    printf("Please enter your age:");
    scanf("%d", &age);
    printf("You are %d years old", age);

    float gpa;
    printf("Please enter your GPA:");
    scanf("%f", &gpa);
    printf("Your gpa is %f", gpa);*/

    /*char grade;
    printf("Please enter your grade:");
    scanf("%c", &grade);
    printf("Your grade is %c", grade);

    char name[20];
    printf("Please enter your name:");
    scanf("%s", name);
    printf("Your name is %s");*/

    char nameA[20];
    printf("Please enter your name and surname:");
    fgets(nameA, 20, stdin);
    printf("You are %s", nameA);



    return 0;
}
