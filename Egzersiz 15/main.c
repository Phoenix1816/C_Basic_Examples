#include <stdio.h>
#include <stdlib.h>

int main()
{
    char kelime[100];
    int i=0;
    int j=0;
    printf("Lutfen bir kelime giriniz:");
    gets(kelime);

    while(i<strlen(kelime))
    {
        j=0;
        while(j<=i)
        {
            printf("%c ", kelime[j]);
            j++;
        }
        printf("\n");
        i++;
    }
    return 0;
}
