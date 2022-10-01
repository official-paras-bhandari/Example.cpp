#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>
#include <stdbool.h>
#include <string.h>
int main()
{

    int a = 20, limit = 3, guess = 0, ran, userRand;
    char yn[2];
    bool odd = false, even = false;

    srand(time(NULL));
    ran = rand() % a + 1;

    if (ran % 2 == 0)
    {
        even = true;
    }
    else
    {
        odd = true;
    }
// @author coderSuresh
    while (true)
    {

        printf("Guess My Random: ");
        scanf("%d", &userRand);

        guess++;

        if (userRand == ran)
        {
            printf("Correct! The number was %d", ran);

            break;
        }
        else if (guess >= limit)
        {
            printf("Sorry! You are out of limit. The answer is %d", ran);
            break;
        }
        else if (userRand < ran)
        {

            if (even)
            {

                printf("You guessed Lower number. \tHINT: The number is even\n\n");
            }
            else
            {
                printf("You guessed Lower number. \tHINT: The number is odd\n\n");
            }
        }
        else if (userRand > ran)
        {
            if (odd)
            {

                printf("You guessed Higher number. \tHINT: The number is odd\n");
            }
            else
            {
                printf("You guessed Higher number. \tHINT: The number is even\n");
            }
        }
        else
        {
            continue;
        }
    }
    return 0;
    getch();
}