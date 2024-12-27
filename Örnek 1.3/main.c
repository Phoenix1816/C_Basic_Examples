#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

struct kitap
{
    char ismi[50];
    char yazar[50];
    int basimYili;
    int fiyati;
};

int main()
{
    setlocale(LC_ALL,"Turkish");
    struct kitap kitap1 = {"Dokuzuncu Hariciye Koğuşu","Peyami Safa", 1972, 27};
    struct kitap kitap2 = {"Suç ve Ceza", "Dostotevski", 1895, 50};
    struct kitap kitap3 = {"Simyacı", "Paulo Coelho", 1700, 60};
    struct kitap kitap4 = {"1984", "George Orwell", 1976, 50};
    printf("%s\n%s\n%d\n%d\n\n", kitap1.ismi, kitap1.yazar, kitap1.basimYili, kitap1.fiyati);
    printf("%s\n%s\n%d\n%d\n\n", kitap2.ismi, kitap2.yazar, kitap2.basimYili, kitap2.fiyati);
    printf("%s\n%s\n%d\n%d\n\n", kitap3.ismi, kitap3.yazar, kitap3.basimYili, kitap3.fiyati);
    printf("%s\n%s\n%d\n%d\n\n", kitap4.ismi, kitap4.yazar, kitap4.basimYili, kitap4.fiyati);
}
