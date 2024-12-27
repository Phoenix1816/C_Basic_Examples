#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sayi[3];
    int i = 0;
    int k = 0;

    for(i=0;i<3;i++)
    {
        scanf("%d", &sayi[i]);
    }

    for(k=0;k<3;k++)
    {
        printf("%d ", sayi[k]);
    }
    return 0;
}
