#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a,b,c,sonuc;
    printf("Lutfen 3 sayi giriniz:");
    scanf("%f%f%f", &a,&b,&c);
    sonuc=(a+b+c)/3;
    printf("%f", sonuc);
}
