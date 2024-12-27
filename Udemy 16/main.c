#include <stdio.h>
#include <stdlib.h>

int main()
{
    int can[5]={2,5,56,96,2};
    int i;
    can[2]=16;
    for(i=0;i<5;i++)
    {
        printf("%d ", can[i]);
    }
    return 0;
}
