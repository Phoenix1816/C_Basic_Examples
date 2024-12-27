#include <stdio.h>
#include <stdlib.h>

int main()
{
    float num1, num2;

    printf("Please enter 1st number:");
    scanf("%f", &num1);
    printf("Please enter 2nd number:");
    scanf("%f", &num2);
    printf("%f", num1 - num2);

    return 0;
}
