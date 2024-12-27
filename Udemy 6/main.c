#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sayi, i, toplam = 0;

    printf("Lutfen bir sayi giriniz:");
    scanf("%d", &sayi);

    for(i = 1; i <= sayi; i++)
    {
            toplam = toplam + i;
    }
    printf("%d", toplam);

    return 0;

}
