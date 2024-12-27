#include <stdio.h>
#include <stdlib.h>

int main()
{
    char color[20], pluralVerb[20], celebrity[20];

    printf("Roses are _____ \n");
    printf("_____ are blue \n");
    printf("I love _____ \n");

    printf("Please fill in the blanks:");

    scanf("%s", &color);
    getchar();

    scanf("%s", &pluralVerb);
    getchar();

    scanf("%s", &celebrity);

    printf("Roses are %s \n", color);
    printf("%s are blue \n", pluralVerb);
    printf("I love %s \n", celebrity);
}
