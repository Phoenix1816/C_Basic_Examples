#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int sonuc;
    char can[15]="abcdef";
    char canan[15]="ABCDEF";
    sonuc = strcmp(can,canan);

    printf("%d", sonuc);

    return 0;
}
