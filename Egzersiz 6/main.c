#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c;
    printf("Lutfen ucgenin ic acilarini giriniz:");
    scanf("%d%d%d", &a,&b,&c);
    if(a+b+c != 180)
    {
        printf("Bu bir ucgen olusturmaz.");
    }
    else if(a==60&&b==60&&c==60)
    {
        printf("Bu bir eskenar ucgendir.");
    }else if(a==b||b==c||a==c)
    {
        printf("Bu bir ikizkenar ucgendir.");
    }else
    {
        printf("Bu bir cesitkenar ucgendir");
    }

    return 0;
}
