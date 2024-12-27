#include <stdio.h>
#include <stdlib.h>

int main()
{
    float Vort,sure;
    printf("Lutfen kac saatte Ankara'dan Istanbula geldiginizi yaziniz:");
    scanf("%f", &sure);
    Vort=450/sure;
    printf("%f", Vort);
}
