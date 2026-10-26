#include <stdio.h> 

/*WELCOME TO SUM OF DIGITS CALC!
this program  takes an integer and uses 
a loop to calculate the sum of its digits.*/


int main ()
{

    int num;
    int sum = 0;
    int dig;

    printf ("Welcome! Where you enter digits and we sum it up!\n\n");
    printf("Enter a Number: ");
    scanf("%d", &num);

    while (num > 0)
    {
        dig = num % 10;

        sum = sum + dig;
        num = num / 10;
    }

    printf ("\n");
    printf("Sum of Digits: %d", sum);



    return 0;
}
