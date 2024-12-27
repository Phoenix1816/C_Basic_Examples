#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;

    for(i = 1; i <= 10; i++)
    {
        printf("%d\n", i);
                if( i==4)
        {
            break;
        }
    }
    return 0;
}
