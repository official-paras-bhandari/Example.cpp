#include <stdio.h>
#include <conio.h>
int main()
{
    int n, fifty, twenty, ten, five;
    char ch;
    do
    {
        printf("\nEnter a number between 5-95 that is multiple of 5: ");
        scanf("%d", &n);
        if (n >= 5 && n <= 95 && n % 5 == 0)
        {
            fifty = n / 50;
            n %= 50;
            twenty = n / 20;
            n %= 20;
            ten = n / 10;
            n %= 10;
            five = n / 5;
            n %= 5;

            if (fifty >= 1)
            {
                printf("You will get %d fifty cent\n", fifty);
            }

            if (twenty >= 1)
            {
                printf("You will get %d twenty cent\n", twenty);
            }

            if (ten >= 1)
            {
                printf("You will get %d ten cent\n", ten);
            }

            if (five >= 1)
            {
                printf("You will get %d five cent\n", five);
            }
        }
        else
        {
            printf("\n!!!Input out of bound exception!!!\nYou are limited from 5 to 95 and multiple of 5\n");
        }

        printf("\nDo you want to continue? y/n: ");
        scanf(" %c", &ch);
    } while (ch == 'y' || ch == 'Y');
    return 0;
    getch();
}