#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Ogrenci
{
    char ad[20];
    char soyAd[20];
    char bolum[200];
    char okul[40];
    int no;
    int sinif;
};

int main()
{
    struct Ogrenci ogr1;
    struct Ogrenci ogr2;

    strcpy(ogr1.ad,"Kaan");
    strcpy(ogr1.soyAd,"Duran");
    strcpy(ogr1.bolum,"Ceng");
    strcpy(ogr1.okul,"KBU");
    ogr1.no = 231021304;
    ogr1.sinif = 2;


    printf("%s\n", ogr1.ad);
    printf("%s\n", ogr1.soyAd);
    printf("%s\n", ogr1.bolum);
    printf("%s\n", ogr1.okul);
    printf("%d\n", ogr1.no);
    printf("%d\n", ogr1.sinif);

    strcpy(ogr2.ad,"Kaan");
    strcpy(ogr2.soyAd,"Duramayan");
    strcpy(ogr2.bolum,"endustiri muhendisligi");
    strcpy(ogr2.okul,"KBU V2");
    ogr2.no = 231021;
    ogr2.sinif = 22;


    printf("%s\n", ogr2.ad);
    printf("%s\n", ogr2.soyAd);
    printf("%s\n", ogr2.bolum);
    printf("%s\n", ogr2.okul);
    printf("%d\n", ogr2.no);
    printf("%d\n", ogr2.sinif);


}
