#include <stdio.h>
#include <stdlib.h>


int carp(int sayi1, int sayi2)
{
    int sonuc;
    if(sayi2==1)
    {
        sonuc=sayi1;
    }else
    {
        sonuc=sayi1+carp(sayi1,sayi2-1);

    }
    return sonuc;
}






int main()
{
    int k,l;
    printf("Lutfen iki sayi giriniz:");
    scanf("%d%d", &k ,&l);
    printf("%d", carp(k,l));
}
