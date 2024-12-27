#include <stdio.h>
#include <stdlib.h>

int fak(int sayi)
{
    int carp;
    if(sayi==0)
    {
        return 1;
    }else
    {
        carp=sayi*fak(sayi-1);
    }
}





int main()
{
    int n;
    printf("sayi gir:");
    scanf("%d", &n);
    printf("%d", fak(n));
}
