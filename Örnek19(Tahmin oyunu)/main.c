#include <stdio.h>
#include <stdlib.h>


int main()
{
    int secretNumber = 46;
    int guess;
    int guessLimit = 3;
    int outOfGuesses = 0;
    int guessCount = 0;

    while(guess != secretNumber)
    {
        if(guessCount < guessLimit && outOfGuesses == 0)
        {
        printf("Please enter a number:");
        scanf("%d", &guess);
        guessCount++;
        }else
        {
            outOfGuesses == 1;
        }
    }
}
