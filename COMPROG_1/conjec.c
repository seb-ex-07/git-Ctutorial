#include <stdio.h>

/*WELCOME TO THIS PROJECT!
this program  takes a positive integer and applies the Collatz Conjecture or the “3n+1
problem” wherein the process is:
Repeat until the sequence reaches 1.
If the number is even, divide it by 2; if odd, multiply by 3 and add 1.
*/

int main ()
{

    int num;

    printf ("Enter a Positive Integer: ");
    scanf ("%d", &num);

    printf ("\nOutput of Collatz Conjecture:\n");

    while (num > 1)
    {
        printf ("%d -> ", num);

        if (num % 2 == 0)
        {
            num = num / 2;
        }

        else 
        {
            num = (3 * num) + 1;

        }

    }

    printf ("1");




    return 0;
}













