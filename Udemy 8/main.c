#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sayi;

    printf("Lutfen bir sayi giriniz:");
    scanf("%d", &sayi);

    int i = 1;

    while(i <= sayi)
    {
        printf("%d\n", i);
        i++;
    }
    return 0;
}
