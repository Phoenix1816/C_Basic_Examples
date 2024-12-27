#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,t,d,s;
    printf("Lutfen t,d veya s tipinden bir hali ve kac metrekare almak istediginizi yaziniz:");
    scanf("%c%d", &a, &b);
    if(a=='t')
    {
        printf("Odemeniz gereken ucret %d'dir", b*18);
    }else if(a=='d')
    {
        printf("Odemeniz gereken ucret %d'dir", b*17);
    }else if(a=='s')
    {
        printf("Odemeniz gereken ucret %d'dir", b*19);
    }

    return 0;

}
