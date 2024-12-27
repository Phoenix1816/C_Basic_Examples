#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c,sonuc;
    printf("Lutfen tek basamakli 3 sayi giriniz:");
    scanf("%d%d%d", &a, &b, &c);
    sonuc=100*a+10*b+c;
    printf("%d", sonuc);

    return 0;
}
