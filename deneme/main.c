#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1, num2;
    char name;
    printf("L�tfen ilk say�y� giriniz:");
    scanf("%d", &num1);
    printf("L�tfen ikinci say�y� giriniz:");
    scanf("%d", &num2);
    printf("L�tfen ad�n�z�n ilk harfini giriniz:");
    scanf(" %c", &name);

    printf("�lk say� %d:", num1);
    printf("�kinci say� %d", num2);
    printf("Ad�n�z�n ilk harfi %c:", name);

    return 0;
}
