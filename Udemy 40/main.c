#include <stdio.h>
#include <stdlib.h>

int main()
{
    float *ptr;
    int n = 5;
    int i;

    ptr = (float*)calloc(n, sizeof(float));

    if(ptr == NULL)
    {
        printf("Hafiza bolunemedi");
    }
    else
    {
        for(i = 0; i < n; i++)
        {
            ptr[i] = i + 1;
        }
        printf("Elemanlarim:");
        for(i = 0; i < n; i++)
        {
            printf("%f ", ptr[i]);
        }
    }

    free(ptr); // Bellek bloðunu serbest býrak

    return 0;
}
