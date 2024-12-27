#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *pt;
    int t[100];

    for(pt=t;pt<t+100;pt++)
    {
        *pt=0;
    }

    for(pt=t;pt<t+100;pt++)
    {
        printf("%d", t[*pt]);
    }
}
