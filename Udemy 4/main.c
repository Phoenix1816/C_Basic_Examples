#include<stdio.h>
#include<stdlib.h>

int main()
{
    float sayi1, sayi2;

    printf("Lutfen iki sayi giriniz:\n");
    scanf("%f %f", &sayi1, &sayi2);
    if(sayi1 > sayi2)
    {
        printf("%f %f", sayi1, sayi2);
    }else
    {
        printf("%f %f", sayi2 ,sayi1);
    }
    return 0;
}
