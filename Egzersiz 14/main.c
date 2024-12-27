#include <stdio.h>
#include <stdlib.h>

int main()
{
    char cumle[100];
    int i=0;
    printf("Lutfen bir cumle giriniz:");
    gets(cumle);
    while(cumle[i])
    {
        printf("%c\n", cumle[i]);
        i++;
    }
}
