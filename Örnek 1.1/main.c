#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct info
{
    char isim[30];
    char soyisim[30];
    int yas;
};

int main()
{
    struct info p1;

    strcpy(p1.isim, "Çaðrý");
    strcpy(p1.soyisim,"Karakaya");
    p1.yas = 20;

    printf("Ýsim %s\n", p1.isim);
    printf("Soyisim %s\n", p1.soyisim);
    printf("Yas %d\n", p1.yas);

    return 0;
}
