#include <stdio.h>
#include <stdlib.h>

int sqr(int number)
{
    int result = number*number;
    return result;
}

int main()
{
    printf("%d", sqr(5));
}
