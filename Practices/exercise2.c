#include <stdio.h>


int main (void)
{

    int x;
    int y;

    printf ("Enter two numbers:\n");
    scanf ("%i %i", &x, &y);

    if (x > y)
        {
        printf ("%i is Bigger than %i!", x, y);
        }
    else if (x < y)
        {
        printf ("%i is bigger than %i!", y, x);
        }
    else
        {
        printf ("Both numbers are the same!");
        }


    
}







