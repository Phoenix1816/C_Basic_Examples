#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i = 0;
    int sayi[3];
    int k = 0;

    while(i<3)
    {
        scanf("%d", &sayi[i]);
        i++;
    }
    while(k<3)
    {
        printf("%d ", sayi[k]);
        k++;
    }
    return 0;
}
