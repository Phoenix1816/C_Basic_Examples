#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr;
    int n=5;
    int i;
    printf("%d\n",n);

    ptr=(int*)malloc(n*sizeof(int));

    if(ptr==NULL)
    {
        printf("Hafiza bolunmedi");
    }else
    {
        for(i=0;i<n;i++)
        {
            ptr[i]=i+1;
        }
        printf("elemanlarim:");
        for(i=0;i<n;i++)
        {
            printf("%d", ptr[i]);
        }
    }

}

