#include <stdio.h>
#include <stdlib.h>

int main()
{
    char cumle[100];
    int sayac=0;
    int i=0;

    printf("Lutfen bir cumle giriniz:");
    gets(cumle);

    while(cumle[i])
    {
        if(cumle[i]==32)
        {
            sayac++;
        }
    i++;
    }
    printf("%d", sayac+1);
    return 0;
}
