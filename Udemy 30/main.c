#include <stdio.h>
#include <stdlib.h>

void tek(int baslangic,int bitis)
{
    if(baslangic<=bitis)
    {
        printf("%d\n",baslangic);
        tek(baslangic+2, bitis);
    }
}




int main()
{
    int n,duzeltme;
    printf("sayi gir");
    scanf("%d", &n);
    if(n%2==1)
    {
        duzeltme=n;
    }else
    {
        duzeltme=n-1;
    }
    tek(1,duzeltme);
    return 0;
}
