#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1, num2;
    char name;
    printf("Lütfen ilk sayýyý giriniz:");
    scanf("%d", &num1);
    printf("Lütfen ikinci sayýyý giriniz:");
    scanf("%d", &num2);
    printf("Lütfen adýnýzýn ilk harfini giriniz:");
    scanf(" %c", &name);

    printf("Ýlk sayý %d:", num1);
    printf("Ýkinci sayý %d", num2);
    printf("Adýnýzýn ilk harfi %c:", name);

    return 0;
}
