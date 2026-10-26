#include <stdio.h>

/*WELCOME TO THE NUMBER TRIANGLE
this akes an integer, n, and 
prints a triangle of numbers with n rows.*/


int main(void)
{
    int N;
    int num1 = 1;
    int num2;

    printf("Enter the number of rows: ");

    scanf("%d", &N);

    while (num1 <= N)
    {
        num2 = 1;

        while (num2 <= num1)
        {
            printf("%d ", num1);
            num2++;
        }

        printf("\n");

        num1++;
    }

    return 0;
}









