#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sayi, i;

    printf("Lutfen bir sayi giriniz:");
    scanf("%d", &sayi);

    i = 1;


    do {
        printf("%d\n", sayi*i);
        i++;
    }while(i <= 10);
    return 0;
}
