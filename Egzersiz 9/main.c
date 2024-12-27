#include <stdio.h>
#include <stdlib.h>

int main()
{
    char ch;
    int sira;
    printf("Bir karakter giriniz:");
    scanf("%c", &ch);
    if((ch>='A')&&(ch<='Z'))
    {
        sira=(int)ch-(int)'A'+1;

    }else if((ch>='a')&&(ch<='z'))
    {
        sira=(int)ch-(int)'a'+1;
    }else
    {
        printf("Lutfen har giriniz bu bir harf degil");
    }
    printf("%c %d. harftir", ch,sira);
    return 0;
}
