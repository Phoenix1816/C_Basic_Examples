#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr1, *ptr2;
    int n,i;

    printf("Lutfen eleman sayisi giriniz:");
    scanf("%d",&n);

    ptr1=(int*)malloc(n*sizeof(int));
    if(ptr1==NULL)
    {
        printf("Hafiza bolunemedi.");
    }else
    {
        for(i=0;i<n;i=i+2)
        {
            ptr1[i]=i+1;
        }
        printf("Elemanlarim:", n);
        for(i=0;i<n;i++)
        {
            printf("%d", ptr1[i]);
        }
        free(ptr1);


    }


}
