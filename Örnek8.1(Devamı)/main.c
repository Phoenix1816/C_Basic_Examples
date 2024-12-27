#include <stdio.h>
#include <stdlib.h>

int main()
{
    char name[20];

    printf("Please enter your name and surname:");
    fgets(name, 20, stdin);
    printf("your name is %s", name);

    return 0;
}
