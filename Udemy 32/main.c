#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a=1004;

    int *p;

    p=&a;

    printf("%d\n", p);
    printf("%d\n", *p);
    printf("%d\n", &a);
    printf("%d", a);
}
