#include <stdio.h>
#include <stdlib.h>

struct head
{
    int data;
    char name[50];
};

int main()
{
    struct head* o1;

    FILE* fptr;
    fopen("data.txt","w");
    while(o1!=0)
    {
        fwrite(&o1, sizeof(struct head), 1, fptr);
    }

    fopen("data.txt","r+");
    scanf("%d", &o1.data);
    while(o1.data!=)

    fclose(fptr);
}
