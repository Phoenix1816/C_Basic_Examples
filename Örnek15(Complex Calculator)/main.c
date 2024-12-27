#include<stdio.h>
#include<stdlib.h>

int main()
{
    float num1, num2;
    char op;

    printf("Please enter a number:");
    scanf("%f", &num1);

    getchar();
    printf("Please enter an operator:");
    scanf("%c", &op);

    printf("Please enter a number:");
    scanf("%f", &num2);

    if(op == '+')
    {
        printf("%f", num1 + num2);
    }else if(op == '-')
    {
        printf("%f", num1 - num2);
    }else if(op == '*')
    {
        printf("%f", num1 * num2);
    }else if(op == '/')
    {
        printf("%f", num1 / num2);
    }else
    {
        printf("İnvalid operator.");
    }

    return 0;
}
