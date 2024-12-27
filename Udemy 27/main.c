#include <stdio.h>
#include <stdlib.h>

int topla(int sayi)
{
    if(sayi==1)
    {
        return 1;
    }else
    {
        return sayi=sayi+topla(sayi-1);
    }
}




int main()
{
    int n;
    printf("sayý gir");
    scanf("%d", &n);
    printf("%d", topla(n));
}
