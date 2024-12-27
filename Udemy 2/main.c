#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sayi;
    printf("Lutfen bir sayi giriniz:");
    scanf("%d", &sayi);

    if(sayi%2 == 0)
    {
        printf("Sayiniz cifttir.");
    }else
    {
        printf("Sayiniz tektir.");
    }
    return 0;
}
