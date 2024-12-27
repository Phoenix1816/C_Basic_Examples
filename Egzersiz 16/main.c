#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i=0;
    char harf;
    int encok;
    char cumle[400];
    printf("Lutfen bir cumle giriniz:");
    gets(cumle);
    int kucukharf[26]={0};

    while(cumle[i])
    {
        if(cumle[i]>='a'&&cumle[i]<='z')
        {
            kucukharf[cumle[i]-'a']++;
        }
        i++;
    }

    encok=kucukharf[0];
    for(i=1;i<26;i++)
    {
        if(kucukharf[i]=!0)
        {
            if(kucukharf[i]>encok)
            {
                encok=kucukharf[i];
                harf=i+'a';
            }
        }
    }
    printf("En cok kullnilan harf %c", harf);
    return 0;

}
