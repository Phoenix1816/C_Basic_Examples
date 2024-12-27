#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sayi, i;

    printf("Lutfen bir sayi giriniz:");
    scanf("%d", &sayi);

    for(i=1;i<sayi;i+2)
    {
        printf("%d\n", i);
    }
}
