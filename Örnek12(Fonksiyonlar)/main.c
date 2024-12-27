#include <stdio.h>
#include <stdlib.h>


int main()
{
    x("Naber", 79);
    return 0;
}

void x(char name[20], int age)
{
    printf("Hello %s you are %d years old", name, age);
}

