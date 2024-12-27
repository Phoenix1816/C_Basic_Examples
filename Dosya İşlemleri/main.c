#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main()
{
    FILE* fptr;
    fptr=fopen("data.txt","w");
    putc('A',fptr);




    fclose(fptr);
}
