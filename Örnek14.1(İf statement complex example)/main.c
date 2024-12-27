#include <stdio.h>
#include <stdlib.h>

int min(int num1, int num2, int num3)
{
    int result;
    if(num1 <= num2 && num1<= num3)
    {
        result = num1;
    }else if(num2 <= num1 && num2 <= num3)
    {
        result = num2;
    }else if(num3 <= num1 && num3 <= num2)
    {
        result = num3;
    }else
    {
        printf("WTF. We have a problem houston.");
    }

    return result;
}

int main()
{
    printf("%d", min(31, 52, 69));
    return 0;
}
