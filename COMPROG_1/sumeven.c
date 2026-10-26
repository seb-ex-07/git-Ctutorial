#include <stdio.h>

/*WELCOME TO THIS PROGRAM. 
This program continuously takes integer inputs from the user and stops when a
negative number is entered. Calculate the sum of all even numbers entered.*/


int main ()
{
    
    int num = 0;
    int sum = 0;

    printf ("Welcome! Sum of Even Numbers Calc!\n");
    printf ("\n\n");

    while (num >= 0)

    {
        printf ("Please Enter a Number (Input Negative to Stop): ");
        scanf ("%d", &num);
        
        if (num % 2 == 0)
        {
            sum = sum + num;
        }
    }
    printf ("\n\n");
    printf ("The sum of all positive EVEN numbers is: %d\n", sum);


    return 0;
}



