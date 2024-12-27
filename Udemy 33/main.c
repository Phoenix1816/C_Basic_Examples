#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ad1,*ad2,*ad3;
    int n=10,p=20;

    ad1=&n;
    ad2=&p;

    printf("Atamami yaptiktan sonraki ad1 %d\n",*ad1);
    printf("%d\n", &ad1);

    *ad1=*ad2+2;

    printf("Atamami yaptiktan sonraki ad1 %d\n",*ad1);
    printf("%d\n", &ad1);
}
