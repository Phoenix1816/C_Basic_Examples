#include <stdio.h>
#include <stdlib.h>


int topla(int a, int b)
{
    int sonuc;
    sonuc=a+b;
    return sonuc;
}






int main()
{
    int a,b;
    printf("Lutfen iki sayi giriniz:");
    scanf("%d%d", &a,&b);
    printf("%d", topla(a,b));

}
