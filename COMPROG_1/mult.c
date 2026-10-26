#include <stdio.h>


/*WELCOME TO Multiplication Table

this program displays the multiplication table from 1 to 10 using a nested loop.
*/


int main(void)
{
    int num = 1;
    int num2;

    printf("Multiplication Table (1-10)\n\n");

    while (num <= 10)
    {
        num2 = 1;

        while (num2 <= 10)
        {
            printf("%d x %d = %d\n", num, num2, num * num2);

            num2++;
        }

        printf("\n");

        num++;
    }

    return 0;
}


