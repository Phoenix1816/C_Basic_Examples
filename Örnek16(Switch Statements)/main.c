#include <stdio.h>
#include <stdlib.h>

int main()
{
    char grade = 'A';

    switch(grade)
    {
    case(grade == 'A'):
        printf("You did  great!");
        break;
    }
    {
    case(grade == 'B'):
        printf("You did  well!");
        break;
    }
    {
    case(grade == 'C'):
        printf("You did  okay!");
        break;
    }
    {
    case(grade == 'D'):
        printf("You did bad!");
        break;
    }
    {
    case(grade == 'F'):
        printf("You failed test!");
        break;
    }
    default:
        {
            printf("İnvalid grade.")
        }

        return 0;
}
