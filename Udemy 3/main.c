#include <stdio.h>
#include <stdlib.h>

int main()
{
    int yas;
    printf("Lutfen yasinizi giriniz:");
    scanf("%d", &yas);

    if(yas >= 18)
    {
        printf("Oy kullanabilirsiniz.");
    }else
    {
        printf("Oy kullanamazsiniz.");
    }
    return 0;
}
