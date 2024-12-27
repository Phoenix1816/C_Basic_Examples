#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sayi;
    printf("Lutfen bir sayi giriniz:");
    scanf("%d", &sayi);
    if(sayi%13==0&&sayi%17==0)
    {
        printf("Bu sayi 13 ve 17 sayisina tam bolunur.");
    }else if(sayi%13==0)
    {
        printf("Bu sayi 13 sayisina tam bolunur.");
    }else if(sayi%17==0)
    {
        printf("Bu sayi 17 sayisina tam bolunur.");
    }else
    {
        printf("Bu sayi iki sayiya da tam bolunmez.");
    }

}
