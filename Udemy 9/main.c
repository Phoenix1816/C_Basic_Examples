#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sayi;

    printf("Lutfen bir sayi giriniz:");
    scanf("%d", &sayi);

    int i = 1;
    while(i <= 10)
    {
        printf("%d\n", sayi*i);
        i++;
    }
    return 0;
}
