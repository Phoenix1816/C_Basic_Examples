#include <stdio.h>
#include <stdlib.h>

int main()
{
    float t;
    printf("Lutfen telefonda kac dakika konustugunuzu giriniz:");
    scanf("%f", &t);
    if(t>=3)
    {
        printf("Odemeniz gereken ucret %f TL'dir.", (t-3)*0.08+0.25);
    }else
    {
        printf("%f", 0.25);

    }

}
